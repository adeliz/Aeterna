
#include"Game.h"

/*
texture fetch
sf::Texture "name";
if(!Texture.loadfromfile("path"{

}

sf::sprite sprite;
sprite.setTexture




texture
sf::texture.setSmooth("true/false);

sprites
sf::sprite.setColor;
setposition
move
rotate
scale


sf::sprite.setTextureRect(sf::intTect)


inputs
keyboard
KeyPressed, KeyReleased
mouse
MouseButtonPressed, MouseMoved

event.type == sf::Event::KeyPressed

isKeyPressed(key)

text
sf::Font
sf::Text




*/



int main(){

	sf::RenderWindow window(sf::VideoMode(1280,721), "Adventure of Aeterna", sf::Style::Default);
	Game game(window);
	sf::Clock gameTime;
	sf::Vector2i mousePos;
	window.setKeyRepeatEnabled(false);
	



	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			game.buttonInput(window);
			if (event.type == sf::Event::Closed)
				window.close();
		}

		game.update(gameTime.restart().asSeconds(), window);
		window.clear();
		window.draw(game);
		window.display();
	}

	return 0;
}