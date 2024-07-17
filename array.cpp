// Input & Output from Array

#include <iostream>
// int main()
// {
//     int arr[16] = {1, 5, 7, 6, 2, 8};
//     int len = sizeof(arr) / sizeof(int);

//     for (int idx = 0; idx <= len - 1; idx++)
//     {
//         std::cout << arr[idx] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// user input/output array

int main()
{
    int n;
    std::cout << "Enter length of array";
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << ",";
    }
    std::cout << std::endl;

    return 0;
};
