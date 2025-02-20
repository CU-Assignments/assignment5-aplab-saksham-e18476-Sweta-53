#include <iostream>
#include <vector>
#include <queue>
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

// Problem 2: Kth Largest Element in an Array (Min-Heap Approach)
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    return minHeap.top();
}

int main() {
    // Test Sort Colors
    vector<int> colors = {2, 0, 2, 1, 1, 0};
    sortColors(colors);
    cout << "Sorted Colors: ";
    for (int num : colors) cout << num << " ";
    cout << endl;
    
    // Test Kth Largest Element
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    int k = 4;
    cout << "Kth Largest Element: " << findKthLargest(nums, k) << endl;
    
    return 0;
}
