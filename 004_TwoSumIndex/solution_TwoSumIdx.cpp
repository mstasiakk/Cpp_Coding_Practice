#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

vector<int> TwoSum(vector<int>& nums, int target) {
	unordered_map<int, int> seen; // value and index of the value

	for (int i = 0; i < nums.size(); i++)
	{
		int complement = target - nums[i];

		if (seen.find(complement) != seen.end()) return { seen[complement], i };

		seen[nums[i]] = i;

	}

	return {};
}

void TwoSumIdx() {

    cout << "[Task] Return Idx of Two sum from provided vector\n";
    

    vector<int> nums;
    int value, n, target;

    cout << "How many elements of the vector do you want to have? ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Provide element " << (i + 1) << ": ";
        cin >> value;
        nums.push_back(value);
    }

    cout << "Provide two sum target\n";
    cin >> target;

    auto result = TwoSum(nums, target);

    if (!result.empty()) {
        cout << "Solution indexes: " << result[0] << ", " << result[1] << "\n";
    }
    else {
        cout << "No solution available\n";
    }

}