/* https://leetcode.com/problems/find-all-duplicates-in-an-array/description/ */

class Solution {

public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int length=nums.size()+1;
        vector<int> counter(length,0);
        vector<int> answer;
        for(int i=0;i<nums.size();i++)
        {  
           counter.at(nums.at(i))=counter.at(nums.at(i))+1;
            if(counter.at(nums.at(i))==2)
            {
                answer.push_back(nums.at(i));
            }
        }
        return answer;
    }
};