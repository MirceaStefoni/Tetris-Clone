#include "Grid.hpp"
#include "Colors.hpp"

Grid::Grid() {
	this->rows = 20;
	this->cols = 10;
	this->cellSize = 30;
	this->colors = GetCellColors();
	gridInit();
}

void Grid::gridInit() {
	for (int i = 0; i < this->rows; i++)
	{
		for (int j = 0; j < this->cols; j++)
		{
			this->grid[i][j] = 0;
		}
	}
}

void Grid::gridPrint() const {
	for (int i = 0; i < this->rows; i++)
	{
		for (int j = 0; j < this->cols; j++)
		{
			std::cout << this->grid[i][j];
		}
		std::cout << std::endl;
	}
}

void Grid::gridDraw() const {
	for (int i = 0; i < this->rows; i++)
	{
		for (int j = 0; j < this->cols; j++)
		{
			int cellValue = grid[i][j];

			DrawRectangle(j * this->cellSize + 1, i * this->cellSize + 1,this->cellSize - 1,this->cellSize - 1,colors[cellValue]);
		}
	}
}