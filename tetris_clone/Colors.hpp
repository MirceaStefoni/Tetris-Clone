#pragma once
#ifndef _COLORS_H_

#include "raylib.h"
#include <vector>

extern const Color darkGray;
extern const Color green;
extern const Color red;
extern const Color orange;
extern const Color yellow;
extern const Color purple;
extern const Color cyan;
extern const Color blue;

std::vector<Color> GetCellColors();

#endif // !_COLORS_H_
