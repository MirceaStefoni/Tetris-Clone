#include "Tetromino.hpp"


Tetromino::Tetromino() {
	cellSize = 30;
	rotationState = 0;
	id = 0;
	colors = GetCellColors();
}


void Tetromino::tetrominoDraw() {
	std::vector<Position> tiles = cells[rotationState];
	for (Position item : tiles) {
		DrawRectangle(item.col * cellSize + 1, item.row * cellSize + 1, cellSize -1, cellSize -1, colors[id]);
	}
}