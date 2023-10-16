#include <iostream>

int main()
{
    double firstNumber, secondNumber;

    std::cout << "Enter your first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter your second number: ";
    std::cin >> secondNumber;

    std::cout << "Menu:\n";
    std::cout << "0 - exit\n";
    std::cout << "1 - addition\n";
    std::cout << "2 - subtraction\n";
    std::cout << "3 - multiplication\n";
    std::cout << "4 - division\n";
    std::cout << "5 - remainder\n";
    std::cout << "Make a choice!\n";

    int operation;
    std::cin >> operation;

    if (operation > 5)                  
        std::cout << "There is no operation for the entered value";

    if (operation == 0)
        return 0;

    if (operation == 1)
        std::cout << "\nAnswer: " << firstNumber + secondNumber;

    if (operation == 2)
        std::cout << "\nAnswer: " << firstNumber - secondNumber;

    if (operation == 3)
        std::cout << "\nAnswer: " << firstNumber * secondNumber;

    if (operation == 4)
    {
        if (secondNumber == 0)
            std::cout << "Error.\nIt is not possible to divide by zero";
        else
            std::cout << "\nAnswer: " << firstNumber / secondNumber;
    }

    if (operation == 5)
    {
        if (secondNumber == 0)
            std::cout << "Error.\nIt is not possible to divide by zero";
        else
            std::cout << "\nAnswer: " << int(firstNumber) % int(secondNumber);
    }
}