#include <iostream>

int square (int num){
    return num * num;
}
int cube (int num){
    return num * num * num;
}
int main (){

    int num;

    std::cout << "Enter a number ";
    std::cin >> num;

    int Square = square(num);
    int Cube = cube(num);

    std::cout << "The square of " << num << " is " << Square << "\n";
    std::cout << "The cube of " << num << " is " << Cube;



    return 0;
}