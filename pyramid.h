#ifndef PYRAMID_H
#define PYRAMID_H

#include <vector>
#include <string>

// ������� ��� ������ ��������
void print_pyramid(const std::vector<int>& arr);

// ������� ��� ��������� ������� ��������
int get_parent_index(int current_index);

// ������� ��� ��������� ������� ������ �������
int get_left_child_index(int current_index, size_t size);

// ������� ��� ��������� ������� ������� �������
int get_right_child_index(int current_index, size_t size);

// ������� ��� ������ �������� ��������� ������������
void print_current_position(const std::vector<int>& arr, int current_index);

#endif // PYRAMID_H
