// writing code for binary sort (sorting in which highest element should be at the end)
#include <iostream>
using namespace std;
int main()
{
    // inputing value from the user
    cout << "Enter the size of the array";
    int n;
    cin >> n;
    cout << "Enter the value of the array";
    int arr[n];
    // loop to enter value from the user
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp; // temp variable to swap the elements
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {

        cout << arr[j];
    }
}