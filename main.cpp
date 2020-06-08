#include <iostream>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    bool sieve[n+1];
    for (int i = 2; i < n + 1; i++)
    {
        sieve[i] = true;
    }
    int index = 2;
    while (index*index <= n) {
        if(sieve[index])
        {
            for (int y = index * index; y <= n; y+=index){
                sieve[y] = false;
            }
        }
        index += 1;
    }

    for (int i = 2; i < n + 1; i++){
        if (sieve[i]) {
            std::cout << i << '\t';
        }
    }
    std::cout << '\n';

    return 0;
}
