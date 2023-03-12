#include <iostream>

int main()
{
    int a, b, c, d, e, x;
    std::cin >> a >> b >> c >> d >> e;

    __asm {
        mov eax, a
        add eax, b
        mul c
        sub eax, d
        div e
        mov x, eax
    };

    std::cout << x;
}