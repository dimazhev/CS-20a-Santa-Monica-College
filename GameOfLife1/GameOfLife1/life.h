#ifndef LIFE_H
#define LIFE_H

class World;

class Life {
public:

	// Accessors or Getters
	int getCol() const;
	int getRow() const;
	int getHeight() const;
	int getWidth() const;
	char getFromFigure(int r, int c) const;

protected:
	int m_col;
	int m_row;
	int m_height;
	int m_width;
	char **m_figure;
	World *m_world;
};
#endif LIFE_H