#include <iostream>
#include "pyramid.h" 

int main()
{
    setlocale(LC_ALL, "rus");

    // Тестовые массивы
    std::vector<int> arr1 = { 1, 3, 6, 5, 9, 8 };
    std::vector<int> arr2 = { 94, 67, 18, 44, 55, 12, 6, 42 };
    std::vector<int> arr3 = { 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };

    // Выводим пирамиду для первого массива
    print_pyramid(arr1);
    std::cout << std::endl;

    // Начинаем путешествие по пирамиде
    int current_index = 0; // Начинаем с корня
    std::string command;

    do
    {
        // Выводим текущее положение
        print_current_position(arr1, current_index);

        // Запрашиваем команду
        std::cout << "\nВведите команду (up, left, right, exit):";
        std::cin >> command;

        if (command == "up")
        {
            int parent_index = get_parent_index(current_index);
            if (parent_index == -1)
            {
                std::cout << "Ошибка! Отсутствует родитель" << std::endl;
            }
            else
            {
                current_index = parent_index;
                std::cout << "Ок" << std::endl;
            }
        }
        else if (command == "left")
        {
            int left_child_index = get_left_child_index(current_index, arr1.size());
            if (left_child_index == -1)
            {
                std::cout << "Ошибка! Отсутствует левый потомок" << std::endl;
            }
            else
            {
                current_index = left_child_index;
                std::cout << "Ок" << std::endl;
            }
        }
        else if (command == "right")
        {
            int right_child_index = get_right_child_index(current_index, arr1.size());
            if (right_child_index == -1)
            {
                std::cout << "Ошибка! Отсутствует правый потомок" << std::endl;
            }
            else
            {
                current_index = right_child_index;
                std::cout << "Ок" << std::endl;
            }
        }
        else if (command == "exit")
        {
            std::cout << "Завершение программы" << std::endl;
        }
        else
        {
            std::cout << "Неизвестная команда" << std::endl;
        }
    } while (command != "exit");

    return EXIT_SUCCESS;
}