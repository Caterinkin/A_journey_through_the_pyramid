#include "pyramid.h"
#include <iostream>

// Реализация функции для вывода пирамиды
void print_pyramid(const std::vector<int>& arr)
{
    std::cout << "Исходный массив: ";
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Пирамида:" << std::endl;

    for (size_t i = 0; i < arr.size(); ++i)
    {
        int level = 0;
        int index = i;
        while (index > 0)
        {
            index = (index - 1) / 2;
            ++level;
        }

        if (i == 0)
        {
            std::cout << level << " root " << arr[i] << std::endl;
        }
        else
        {
            int parent_index = (i - 1) / 2;
            if (i % 2 == 1)
            {
                std::cout << level << " left(" << arr[parent_index] << ") " << arr[i] << std::endl;
            }
            else
            {
                std::cout << level << " right(" << arr[parent_index] << ") " << arr[i] << std::endl;
            }
        }
    }
}

// Реализация функции для получения индекса родителя
int get_parent_index(int current_index)
{
    if (current_index == 0)
    {
        return -1; // Корень не имеет родителя
    }
    return (current_index - 1) / 2;
}

// Реализация функции для получения индекса левого потомка
int get_left_child_index(int current_index, size_t size)
{
    int left_child_index = 2 * current_index + 1;
    if (left_child_index >= size)
    {
        return -1; // Левого потомка нет
    }
    return left_child_index;
}

// Реализация функции для получения индекса правого потомка
int get_right_child_index(int current_index, size_t size)
{
    int right_child_index = 2 * current_index + 2;
    if (right_child_index >= size)
    {
        return -1; // Правого потомка нет
    }
    return right_child_index;
}

// Реализация функции для вывода текущего положения пользователя
void print_current_position(const std::vector<int>& arr, int current_index)
{
    int level = 0;
    int index = current_index;
    while (index > 0)
    {
        index = (index - 1) / 2;
        ++level;
    }

    if (current_index == 0)
    {
        std::cout << "Вы находитесь здесь: " << level << " root " << arr[current_index] << std::endl;
    }
    else
    {
        int parent_index = (current_index - 1) / 2;
        if (current_index % 2 == 1)
        {
            std::cout << "Вы находитесь здесь: " << level << " left(" << arr[parent_index] << ") " << arr[current_index] << std::endl;
        }
        else
        {
            std::cout << "Вы находитесь здесь: " << level << " right(" << arr[parent_index] << ") " << arr[current_index] << std::endl;
        }
    }
}