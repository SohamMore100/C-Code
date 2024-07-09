// Max Sum Subarray ==> (Brute Force) Approach .

#include <iostream>
using namespace std;
void maxSubArray(int arr[], int n)
{

    int maxSum;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int curSum = 0;
            for (int i = start; i <= end; i++)
            {
                curSum += arr[i];
            }
            cout << curSum << ",";
            maxSum = max(maxSum, curSum);
        }
        cout << endl;
    }
    cout << "MAximum subArray: " << maxSum << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    maxSubArray(arr, n);
    return 0;
}