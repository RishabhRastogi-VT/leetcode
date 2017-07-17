/*  https://leetcode.com/problems/counting-bits/#/description

Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example:
For num = 5 you should return [0,1,1,2,1,2].

Follow up:

It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
Space complexity should be O(n).
Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.

 */

class Solution {
public:
    
    vector<int> countBits(int num) {
        vector<int> dp;
        int count=1;
        dp.push_back(0);
        dp.push_back(1);
        dp.resize(num+1);
        for(int i=2;i<=num;i++)
        {
            if(i>=pow(2,count+1))
            {
                count++;
            }
            if(pow(2,count)<=i<pow(2,count+1))
            {
             if(pow(2,count)==i)
             {
                 dp.at(i)=1;
                 
             }
            else if(pow(2,count)<i<pow(2,count+1))
            {
                     dp.at(i)=  dp.at(pow(2,count))+dp.at(i-pow(2,count));
            }
             
            }
        }
        return dp;

    }
};