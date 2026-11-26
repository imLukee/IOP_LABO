#include <iostream>

int silnia(int n){
    int output = 1;
    for (int i=2; i<=n; i++){
        output *= i;
    }
    return output;
}

bool sprawdzUjemna(int x){
    return x < 0;
}

int main(int argc, char* argv[]){
    int x = 0;
    std::cin >> x;
    if (sprawdzUjemna(x) == false)
        std::cout << x << std::endl;
    else 
        std::cout << "Wpisana wartosc jest ujemna" << std::endl;
    return 0;
}
