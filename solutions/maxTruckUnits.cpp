// Link to problem statement : https://leetcode.com/problems/maximum-units-on-a-truck/
// Solution:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
class Solution {
public: 
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
	    //custom sort (in increasing order of numberOfUnitsPerBox as we have to return  maximum total number of units )
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int> &first, vector<int> &second){
            return first[1]>second[1];
        });
		//greedily pick boxes till capacity is full
        int ans=0;
        for(auto box: boxTypes){
            int x=min(box[0],truckSize);  //choose minimum boxes from available boxes and capacity left
            ans+=(x*box[1]);  //adding units in ans
            truckSize-=x;  //reduce the capacity
            if(!truckSize) break;  //capacity full
        }
        return ans;
    }
};
*/
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