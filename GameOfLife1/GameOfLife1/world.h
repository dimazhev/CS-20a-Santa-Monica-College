#ifndef WORLD_H
#define WORLD_H

#include "life.h"

class World {
public:
	// Constructor/destructor
	World();
	~World();

	// Accessors or Getters
	void print() const;
	bool hasWorldChanged() const;


	// Mutators or Setters
	bool addLife(Life *life);
	void update();
private:

	char _getState(char state, char row, char col, bool toggle);

	// The rules of Conway's Game of Life requires each cell to
	// examine it's neighbors.  So, we have to check the entire world
	// first before we change it.  We can use two copies of the world, 
	// one to check the current state then another to generate the 
	// the next state. We can toggle between them each step, to avoid
	// having to copy between worlds each step of the game.
	char **m_world;
	char **m_otherWorld;
	bool m_toggle;


};
#endif WORLD_H
