#include "Tetromino.hpp"


Tetromino::Tetromino() {
	cellSize = 30;
	rotationState = 0;
	x = 0;
	y = 0;
	id = 0;
	colors = GetCellColors();
}


void Tetromino::tetrominoDraw() {
	std::vector<Position> tiles = getCellPosition();
	for (Position item : tiles) {
		DrawRectangle(item.col * cellSize + 1, item.row * cellSize + 1, cellSize -1, cellSize -1, colors[id]);
	}
}

void Tetromino::TetrominoMove(int rows, int cols) {
	this->x += rows;
	this->y += cols;
}

std::vector<Position> Tetromino::getCellPosition() {

	std::vector<Position> tiles = cells[rotationState];
	std::vector<Position> moveTiles;

	for (Position item : tiles) {
		Position newPos = Position(item.row + x, item.col + y);
		moveTiles.push_back(newPos);
	}

	return moveTiles;

}

void Tetromino::TetrominoRotate()
{
	rotationState++;

	if (rotationState == (int)cells.size())
	{
		rotationState = 0;
	}
}
