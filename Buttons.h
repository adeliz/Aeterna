#ifndef Buttons_h
#define Buttons_h
#include"SFML\Graphics.hpp"
#include<iostream>
using namespace std;

class Buttons : public sf::Drawable{
private:
	sf::RenderWindow window;
	sf::Texture texture;
	sf::Sprite button;
public:
	Buttons(float width = 0, float height = 0);
	~Buttons();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	bool input(sf::RenderWindow &window);
	sf::Sprite getSprite();
	void setPosition(float width, float height);
};

#endif // !Buttons_h