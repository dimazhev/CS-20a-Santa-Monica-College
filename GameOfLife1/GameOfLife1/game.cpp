#include "game.h"
#include "globals.h"
#include "world.h"
#include <iostream>
#include "utils.h"
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

Game::Game(Life **life, int numLife) {

	m_steps = 0;
	m_automate = false;
	m_world = new World();

	if (life != nullptr) {
		for (int i = 0; i < numLife; i++) {
			if (life[i] != nullptr) {
				bool success = m_world->addLife(life[i]);
				if (!success) {
					cout << "Failed to add life to the world" << endl;
				}
			}

		}
	}

}
Game::~Game() {

	delete m_world;
}

void Game::play()
{

	while (true)
	{
		m_world->print();


		if (!m_world->hasWorldChanged()) {
			cout << "The world has not changed, ending game." << endl;
			return;
		}
		else {

			if (!m_automate) {
				cout << "command (<space> to step, <s> to see stats, <a> to automate, <q> to quit): ";

				string action;
				getline(cin, action);

				switch (action[0])
				{

				default:
					cout << '\a' << endl;  // beep
					continue;
				case 'q':
					cout << "Quitting Game." << endl;
					return;
				case 's':

					continue;
				case ' ':

					break;
				case 'a':
					m_automate = true;
					break;

				}
			}
			else {
				if (m_steps >= MAX_STEPS) {
					cout << "Reached max steps, quitting." << endl;
					return;
				}
				delay(500);
			}
			m_steps++;
		}
		m_world->update();

	}

}