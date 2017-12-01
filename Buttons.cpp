#include "Buttons.h"





Buttons::Buttons(float width, float height){
	if (!this->texture.loadFromFile("Textures/animated_torch.png")) {
		//handle error
	}
	button.setTexture(this->texture);
}

Buttons::~Buttons()
{
}

void Buttons::draw(sf::RenderTarget & target, sf::RenderStates states) const{
	target.draw(this->button, states);
}

bool Buttons::input(sf::RenderWindow &window){
	bool clicked = false;
sf::Vector2i mousePos = sf::Mouse::getPosition(window);
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
		if (button.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
			clicked = true;
		}
	}
	return clicked;
}

sf::Sprite Buttons::getSprite(){
	return this->button;
}

void Buttons::setPosition(float width, float height){
	this->button.setPosition(width, height);
}
