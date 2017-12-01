#include "Game.h"



Game::Game(sf::RenderWindow& window){
	this->window = &window;
//	this->menu = new Menu(windowRef.getSize().x, windowRef.getSize().y);
	this->loadFiles();
	for (int i = 0; i < 3; i++) {
		this->button[i].setPosition(this->window->getSize().x / 2,this->window->getSize().y / 4 + (i+1));
	}
}

Game::~Game(){
}

void Game::loadFiles(){
	srand(static_cast<unsigned int>(time(0)));
	int temp = rand() % 2;
	if (loadCheck) {
		if (!test.loadFromFile("Textures/bg.jpg")) {
			//handle error
		}
		if (temp == 1) {
			if (!BGM.openFromFile("Audio/RPG_Project_-_The_Sound_of_Battle.ogg")) {
				//handle error
			}
		}
		else {
			if (!BGM.openFromFile("Audio/Big Car Theft - Audionautix.ogg")) {
				//handle error
			}
		}
		loadCheck = false;
	}
	this->sprite.setTexture(test);
	this->BGM.setVolume(100);
	this->BGM.setLoop(true);
	this->BGM.play();


}

void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const{
	target.draw(this->sprite, states);
	for (int i = 0; i < 3; i++) {
		target.draw(this->button[i], states);
	}
}

void Game::update(float dt, sf::RenderWindow &window){
}

void Game::buttonInput(sf::RenderWindow &window){
	if (button[0].input(window)) {
		cout << "Player Attacked" << endl;
	}
	if (button[1].input(window)) {
		cout << "Spells" << endl;
	}
	if (button[2].input(window)) {
		cout << "Run" << endl;
	}
}