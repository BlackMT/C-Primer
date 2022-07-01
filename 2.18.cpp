//
//  main.cpp
//  C++ Primer
//
//  Created by Mental's MacBook Pro on 2022/6/30.
//

#include <iostream>

int main() {
    // insert code here...
    
    int p = 10, *padd = &p;
    int f = 20;
    
    std::cout << *padd << std::endl;
    std::cout << padd << std::endl;
    
    padd = &f;
    std::cout << *padd << std::endl;
    std::cout << padd << std::endl;
    
    *padd = p;
    std::cout << *padd << std::endl;
    std::cout << padd << std::endl;
    
    
    return 0;
}
