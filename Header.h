#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;
using namespace sf;

class game
{
public:
	char op;
	Texture texture0, texture1, texture2, texture3, texture_3, texture4, texture5, texture6, texture7, texture8;
	game();
	void Historia();
	void Textures();
};

game::game()
{
	Textures();
}

void game::Historia()
{
	Sprite imagen0, imagen1, imagen2, imagen3, imagen4, imagen5, imagen6, imagen7;
	imagen0.setTexture(texture0); imagen0.setPosition(0, 0);
	imagen1.setTexture(texture1); imagen1.setPosition(0, 0);
	imagen2.setTexture(texture2); imagen2.setPosition(0, 0);
	imagen3.setTexture(texture3); imagen3.setPosition(0, 0);
	imagen4.setTexture(texture4); imagen4.setPosition(0, 0);
	imagen5.setTexture(texture5); imagen5.setPosition(0, 0);
	imagen6.setTexture(texture6); imagen6.setPosition(0, 0);
	imagen7.setTexture(texture7); imagen7.setPosition(0, 0);

	RenderWindow window(sf::VideoMode(700, 700), "Juego DE MIEDO");
	window.clear(); window.draw(imagen0); window.display();
	system("cls"); cout << "Tecla: "; cin >> op;
	system("cls");
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		{
		window.clear(); window.draw(imagen1); window.display();
		cout << "Tecla: "; cin >> op;

			if (op == 'B' || op == 'b') {
				window.clear(); window.draw(imagen2); window.display();
				system("cls"); cout << "Tecla: "; cin >> op;
			}
			if (op == 'A' || op == 'a') {
				window.clear(); window.draw(imagen4); window.display();
				system("cls"); cout << "Tecla: "; cin >> op;
			}
			if (op == 'D' || op == 'd') {
				window.clear(); window.draw(imagen5); window.display();
				system("cls"); cout << "Tecla: "; cin >> op;
			}
			if (op == 'E' || op == 'e') {
				window.clear(); window.draw(imagen6); window.display();
				system("cls"); cout << "Tecla: "; cin >> op;
			}
			if (op == 'G' || op == 'g') {
				window.clear(); window.draw(imagen7); window.display();
				system("cls"); cout << "Pulsa R para volver a jugar\nPulsa 0 para salir\n\tTecla: "; cin >> op;
			}
			if (op == 'C' || op == 'c' || op == 'F' || op == 'f'|| op == 'O' || op == 'o') {
				window.clear(); window.draw(imagen3); window.display();
				system("cls"); cout << "Pulsa R para continuar: "; cin >> op; continue;
			}
			if (op == 'R' || op == 'r') {
				continue;
			}
			if (op == '0') {
				return;
			}
			else { system("cls"); continue; }
		}
		return;
	}
}

void game::Textures()
{
	if (!texture0.loadFromFile("img/Titulo.png")) {
		cout << "Error a el cargar la imagen";
	}
	else if (!texture1.loadFromFile("img/img1.png")) {
		cout << "Error a el cargar la imagen";
	}
	else if (!texture2.loadFromFile("img/img2.png")) {
		cout << "Error a el cargar la imagen";
	}
	else if (!texture3.loadFromFile("img/img3.png")) {
		cout << "Error a el cargar la imagen";
	}
	else if (!texture4.loadFromFile("img/img4.png")) {
		cout << "Error a el cargar la imagen";
	}
	else if (!texture5.loadFromFile("img/img5.png")) {
		cout << "Error a el cargar la imagen";
	}
	else if (!texture6.loadFromFile("img/img6.png")) {
		cout << "Error a el cargar la imagen";
	}
	else if (!texture7.loadFromFile("img/img7.png")) {
		cout << "Error a el cargar la imagen";
	}
}