//
//  main.cpp
//  swapPointers
//
//  Created by Sonia Lopchan on 10/8/24.
//

#include <iostream>

using namespace std;

void swap (int *x, int *y){ //function that takes two pointers as argument
    //int *x points to the memory address of x, int *y points to the memory address of y
    int temp = *x; //a temporary variable temp to hold the value of x
    *x = *y; //assign the value of y to x
    *y = temp; //assign value of temp to y
}

int main(){
    
    int x = 5;
    int y = 10;
    
    //output before swap
    cout << "Before swap: " << "x= " << x << ", y= " << y << endl;
    
    swap(&x, &y);//calling swap function
    
    //output after swap
    cout << "After swap: " << "x= " << x << ", y= " << y << endl;
    
    return 0;
}
