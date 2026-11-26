#include <iostream>

int silnia(int n){
    int output = 1;
    for (int i=2; i<=n; i++){
        output *= i;
    }
    return output;
}

int main(int argc, char* argv[]){
    int x = 0;
    std::cin >> x;
    std::cout << silnia(x) << std::endl;
    return 0;
}
