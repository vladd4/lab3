#pragma once
#include <iostream>
#include <iomanip>
#include "class.h"
using namespace std;

void input(int& v1, int& v2, int& v3);								// введення значень для атрибутів об'єкту
void line_input(int& n, int& v1, int& v2, int& v3, Tline* lines);	// ініціалізація об'єктів з відповідними значеннями атрибутів
void point_input(int* point, int n, Tline* lines);					// введення кординат точки та перевірка належності до прямої