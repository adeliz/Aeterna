#ifndef GAME_H
#define GAME_H
#include <SFML\Graphics.hpp>
#include<SFML\Audio.hpp>
//#include"Menu.h"
#include<cmath>
#include"Buttons.h"
using namespace std;

class Game : public sf::Drawable {
private:
	sf::RenderWindow* window;
	sf::Music BGM;
	sf::Texture test;
	sf::Sprite sprite;
	bool loadCheck;
	Buttons button[3];
	sf::Vector2i mousePos;
	//Menu* menu;


public:

	Game(sf::RenderWindow& window);
	~Game();
	void loadFiles();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	void update(float dt, sf::RenderWindow &window);
	void buttonInput(sf::RenderWindow &window);


};





#endif // !GAME_H
