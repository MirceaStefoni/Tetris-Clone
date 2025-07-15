#include "Tetromino.hpp"
#include "Position.hpp"

class LShape : public Tetromino {
public:
	LShape() {
		id = 1;
		cells[0] = { Position(0,2), Position(1,0),Position(1,1) ,Position(1,2)};
		cells[1] = { Position(0,1), Position(1,1), Position(2,1), Position(2,2) };
		cells[2] = { Position(1,0), Position(1,1),Position(1,2),Position(2,0) };
		cells[3] = { Position(0,0), Position(0,1),Position(1,1),Position(2,1) };
		TetrominoMove(0, 3);
	}
};

class JShape : public Tetromino {
public:
	JShape() {
		id = 2;
		cells[0] = { Position(0,0), Position(1,0),Position(1,1) ,Position(1,2) };
		cells[1] = { Position(0,1), Position(0,2), Position(1,1), Position(2,1) };
		cells[2] = { Position(1,0), Position(1,1),Position(1,2),Position(2,2) };
		cells[3] = { Position(0,1), Position(1,1),Position(2,0),Position(2,1) };
		TetrominoMove(0, 3);
	}
};

class IShape : public Tetromino {
public:
	IShape() {
		id = 3;
		cells[0] = { Position(1,0), Position(1,1),Position(1,2) ,Position(1,3) };
		cells[1] = { Position(0,2), Position(1,2), Position(2,2), Position(3,2) };
		cells[2] = { Position(2,0), Position(2,1),Position(2,2),Position(2,3) };
		cells[3] = { Position(0,1), Position(1,1),Position(2,1),Position(3,1) };
		TetrominoMove(-1, 3);
	}
};

class OShape : public Tetromino {
public:
	OShape() {
		id = 4;
		cells[0] = { Position(0,0), Position(0,1),Position(1,0) ,Position(1,1) };
		cells[1] = { Position(0,0), Position(0,1),Position(1,0) ,Position(1,1) };
		cells[2] = { Position(0,0), Position(0,1),Position(1,0) ,Position(1,1) };
		cells[3] = { Position(0,0), Position(0,1),Position(1,0) ,Position(1,1) };
		TetrominoMove(0, 4);
	}
};

class SShape : public Tetromino {
public:
	SShape() {
		id = 5;
		cells[0] = { Position(0,1), Position(0,1),Position(1,0) ,Position(1,1) };
		cells[1] = { Position(0,1), Position(1,1),Position(1,2) ,Position(2,2) };
		cells[2] = { Position(1,1), Position(1,2),Position(2,0) ,Position(2,1) };
		cells[3] = { Position(0,0), Position(1,0),Position(1,1) ,Position(2,1) };
		TetrominoMove(0, 3);
	}
};

class TShape : public Tetromino {
public:
	TShape() {
		id = 6;
		cells[0] = { Position(0,1), Position(1,0),Position(1,1) ,Position(1,2) };
		cells[1] = { Position(0,1), Position(1,1),Position(1,2) ,Position(2,1) };
		cells[2] = { Position(1,0), Position(1,1),Position(1,2) ,Position(2,1) };
		cells[3] = { Position(0,1), Position(1,0),Position(1,1) ,Position(2,1) };
		TetrominoMove(0, 3);
	}
};

class ZShape : public Tetromino {
public:
	ZShape() {
		id = 7;
		cells[0] = { Position(0,0), Position(0,1),Position(1,1) ,Position(1,2) };
		cells[1] = { Position(0,2), Position(1,1),Position(1,2) ,Position(2,1) };
		cells[2] = { Position(1,0), Position(1,1),Position(2,1) ,Position(2,2) };
		cells[3] = { Position(0,1), Position(1,0),Position(1,1) ,Position(2,0) };
		TetrominoMove(0, 3);
	}
};