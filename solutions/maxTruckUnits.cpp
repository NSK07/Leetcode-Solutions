// Link to problem statement : https://leetcode.com/problems/maximum-units-on-a-truck/
// Solution:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isComp(const vector<int> &a, const vector<int> &b){
        return b[1] > a[1];   
    }
    
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), isComp);
        for (int i = 0; i < boxTypes.size(); i++)
        {
            for (int j = 0; j < boxTypes[i].size(); j++)
            {
                cout << boxTypes[i][j] << " ";
            }   
        cout << endl;
    }
 

        return 1;
    }
};

int main()
{
     vector<vector<int>> boxtypes{{2,2},{1,3},{3,1}};
    int trucksize=4;
    Solution obj;
    obj.maximumUnits(boxtypes,trucksize);
    return 1;
}