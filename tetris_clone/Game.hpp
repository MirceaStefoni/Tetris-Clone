#pragma once
#ifndef _GAME_H_

#include "Grid.hpp"
#include "Tetromino.hpp"
#include "Tetrominos.cpp"

class Game {
public:
	Game();

	Tetromino getRandomTetromino();

	std::vector<Tetromino> getAllShapes();


	void handleInput();

	void Draw();

	void Rotate();

	Grid grid;

private:
	std::vector<Tetromino> shapes;
	bool isBlockOutside();

	Tetromino currentShape;
	Tetromino nextShape;
};

#endif // !_GAME_H_
