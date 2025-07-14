#pragma once
#ifndef _TETROMINO_H_

#include<vector>
#include<map>
#include "Position.hpp"
#include "Colors.hpp"

class Tetromino {
public:

	int id;

	Tetromino();
	
	void tetrominoDraw();
	
	std::map<int, std::vector<Position>> cells;

private:
	int cellSize;
	int rotationState;
	std::vector<Color> colors;

};

#endif // !_TETROMINO_H_
