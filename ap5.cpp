#include <iostream>
#include <vector>
using namespace std;

// Problem 1: Sort Colors (Dutch National Flag Algorithm)
void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++; mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    // Test Sort Colors
    vector<int> colors = {2, 0, 2, 1, 1, 0};
    sortColors(colors);
    cout << "Sorted Colors: ";
    for (int num : colors) cout << num << " ";
    cout << endl;
    
    return 0;
}
