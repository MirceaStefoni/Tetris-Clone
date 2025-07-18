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

	void TetrominoMove(int rows, int cols);

	std::vector<Position> getCellPosition();
	
	std::map<int, std::vector<Position>> cells;

	void TetrominoRotate();

	void TetrominoUndoRotate();

private:
	int cellSize;
	int rotationState;
	std::vector<Color> colors;

	int x;
	int y;

};

#endif // !_TETROMINO_H_
