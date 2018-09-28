#include <iostream>

int main()
{
    int a[] = {12, 43, 23, 4};
    int key;
    int i;

    std::cout << "Unsorted: ";
    for (auto& c : a) std::cout << "\t" << c << " " ;
    std::cout << std::endl;

    for (int j = 1; j != 4; ++j)
    {
        key = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }

    std::cout << "Sorted: ";
    for (auto& c : a) std::cout << "\t" << c << " ";
    std::cout << std::endl;

    return 0;
}
