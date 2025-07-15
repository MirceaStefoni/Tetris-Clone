#pragma once
#ifndef _GRID_H_
#define _GRID_H_

#include <iostream>
#include <vector>
#include "raylib.h"

class Grid {
private:

	int rows;
	int cols;
	int cellSize;
	std::vector<Color> colors;

public:

	int grid[20][10];

	Grid();

	void gridInit();

	void gridPrint() const;

	void gridDraw() const;

	bool isCellOutside(int row, int col);

};



#endif // !_GRID_H_
