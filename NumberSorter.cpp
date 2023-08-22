#include <iostream>

void ascendingOrderSort(double numbers[], int size);
void descedingOrderSort(double numbers[], int size);
int main()
{
    int order;
    int size;

    do{
        std::cout << "Type 1 for ascending order and 2 for descending order ";
        std::cin >> order;
    }while(order != 1 && order != 2);
    

    std::cout << "How many numbers would you like to sort ";
    std::cin >> size;

    double numbers [100];
    std::cout << size;

    for (int i = 0; i < size; i++)
    {
        double number;
        std::cout << "Number " << i + 1 << " ";
        std::cin >> number;
        numbers[i] = number;
    }

    if (order == 1)
    {
        ascendingOrderSort(numbers, size);
    }
    if (order == 2)
    {
        descedingOrderSort(numbers, size);
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << numbers[i] << "\n";
    }

    return 0;
}

void ascendingOrderSort(double numbers[], int size)
{
    double temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}
void descedingOrderSort(double numbers[], int size)
{
    double temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (numbers[j] < numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}
