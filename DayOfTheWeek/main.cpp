#include <iostream>

int main()
{

    int Day{};

    std::cout << "Enter a number between 1-7: ";
    std::cin >> Day;

    switch (Day)

    {
    case 1:
        std::cout << "Code " << Day << " is Monday";
        break;

    case 2:
        std::cout << "Code " << Day << " is Tuesday";
        break;

    case 3:
        std::cout << "Code " << Day << " is Wednesday";
        break;

    case 4:
        std::cout << "Code " << Day << " is Thursday";
        break;

    case 5:
        std::cout << "Code " << Day << " is Friday";
        break;
    case 6:
        std::cout << "Code " << Day << " is Saturday";
        break;

    case 7:
        std::cout << "Code " << Day << " is Sunday";
        break;

    default:
        std::cout << "Error - illegal day code";
    }

    return 0;
}