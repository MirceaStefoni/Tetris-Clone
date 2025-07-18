#include "Game.hpp"
#include <random>

Game::Game() {
	grid = Grid();
	shapes = getAllShapes();
	currentShape = getRandomTetromino();
	nextShape = getRandomTetromino();
}

Tetromino Game::getRandomTetromino() {

	if (shapes.empty())
	{
		shapes = getAllShapes();
	}

	int randomIndex = rand() % shapes.size();
	Tetromino shape = shapes[randomIndex];
	shapes.erase(shapes.begin() + randomIndex);

	return shape;
}

std::vector<Tetromino> Game::getAllShapes() {
	return { IShape(),JShape(),LShape(),OShape(),SShape(),TShape(),ZShape() };
}

void Game::handleInput()
{
	int keyPressed = GetKeyPressed();

	switch (keyPressed) {
	case KEY_DOWN:
	case KEY_S:
		currentShape.TetrominoMove(1, 0);
		if (isBlockOutside())
		{
			currentShape.TetrominoMove(-1, 0);
		}
		break;
	case KEY_LEFT:
	case KEY_A:
		currentShape.TetrominoMove(0, -1);
		if (isBlockOutside())
		{
			currentShape.TetrominoMove(0, 1);
		}
		break;
	case KEY_RIGHT:
	case KEY_D:
		currentShape.TetrominoMove(0, 1);
		if (isBlockOutside())
		{
			currentShape.TetrominoMove(0, -1);
		}
		break;

	case KEY_UP:
	case KEY_W:
		Rotate();
		break;
	}
}

void Game::Draw() {

	grid.gridDraw();
	currentShape.tetrominoDraw();
}

void Game::Rotate()
{
	currentShape.TetrominoRotate();

	if (isBlockOutside())
	{
		currentShape.TetrominoUndoRotate();
	}

}

bool Game::isBlockOutside()
{	
	std::vector<Position> tiles = currentShape.getCellPosition();
	for (Position item : tiles) {
		if (grid.isCellOutside(item.row, item.col))
		{
			return true;
		}
	}
	return false;

}
