 #include <iostream>
 #include <vector>
 #include <deque>
 using namespace std;
 vector<int> slidingWindowMaximum(vector<int>& nums, int k) {
 deque<int> dq; // Stores indices of array elements
 vector<int> result;   
    for (int i = 0; i < nums.size(); i++) {
        // Remove indices that are out of the current window    1, 3, -1, -3, 5, 3, 6, 4
        if (!dq.empty() && dq.front() < i -k + 1) {
            dq.pop_front();
        }
        // Remove indices of smaller elements as they are not useful
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }
        // Add the current element's index to the deque
        dq.push_back(i);
        // Append the maximum element of the current window to the result
        if (i >= k -1) {
            result.push_back(nums[dq.front()]);
        }
    }
    return result;
 }
 int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = slidingWindowMaximum(nums, k);
    cout << "Sliding Window Maximum: ";
    for (int maxVal : result) {
        cout << maxVal << " ";
    }
    return 0;
 }
 