#ifndef PYRAMID_H
#define PYRAMID_H

#include <vector>
#include <string>

// Функция для вывода пирамиды
void print_pyramid(const std::vector<int>& arr);

// Функция для получения индекса родителя
int get_parent_index(int current_index);

// Функция для получения индекса левого потомка
int get_left_child_index(int current_index, size_t size);

// Функция для получения индекса правого потомка
int get_right_child_index(int current_index, size_t size);

// Функция для вывода текущего положения пользователя
void print_current_position(const std::vector<int>& arr, int current_index);

#endif // PYRAMID_H
