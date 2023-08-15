#include <iostream>
using namespace std;

void twoSum(int nums[], int n, int target, int indices[])
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] + nums[j] == target) {
                indices[0] = i;
                indices[1] = j;
                return; // Found the indices, so return immediately
            }
        }
    }
    indices[0] = -1; // No solution found
    indices[1] = -1;
}

int main() {
    // Input the array elements and target sum from the user
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int nums[10];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    int indices[2]; // Array to store indices
    twoSum(nums, n, target, indices);

    // Display the indices of the two numbers
    for (int i = 0; i < 2; ++i) {
        cout << indices[i] << " ";
    }
    cout << endl;

    return 0;
}
