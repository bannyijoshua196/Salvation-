#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cctype>

using namespace std;

int sumTwoNumbers(int x, int y) {
    return x + y;
}

int countVowels(string str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

double averageList(vector<int> nums) {
    if (nums.empty()) return 0.0;
    int sum = accumulate(nums.begin(), nums.end(), 0);
    return static_cast<double>(sum) / nums.size();
}

string removeVowels(string sentence) {
    string result = "";
    for (char c : sentence) {
        char lower = tolower(c);
        if (!(lower == 'a' || lower == 'e' || lower == 'i' ||
              lower == 'o' || lower == 'u')) {
            result += c;
        }
    }
    return result;
}

string longestString(vector<string> words) {
    if (words.empty()) return "";
    string longest = words[0];
    for (size_t i = 0; i < words.size(); i++) {
        if (words[i].length() > longest.length()) {
            longest = words[i];
        }
    }
    return longest;
}


double medianValue(vector<int> nums) {
    if (nums.empty()) return 0.0;
    sort(nums.begin(), nums.end());
    int size = nums.size();
    if (size % 2 == 0)
        return (nums[size/2 - 1] + nums[size/2]) / 2.0;
    else
        return nums[size/2];
}


vector<int> removeEvenNumbers(vector<int> nums) {
    vector<int> result;
    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 != 0) {
            result.push_back(nums[i]);
        }
    }
    return result;
}


vector<string> sortStrings(vector<string> words) {
    sort(words.begin(), words.end());
    return words;
}


int sumList(vector<int> nums) {
    return accumulate(nums.begin(), nums.end(), 0);
}


vector<string> reverseStrings(vector<string> words) {
    for (size_t i = 0; i < words.size(); i++) {
        reverse(words[i].begin(), words[i].end());
    }
    return words;
