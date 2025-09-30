#include <iostream>

static void counting_function()
{
    static int sum{ 1 };

    std::cout << "Количество вызовов функции counting_function(): " << sum << std::endl;
    sum++;
}

int main()
{
    setlocale(LC_ALL, "RU");

    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }

    return EXIT_SUCCESS;
}