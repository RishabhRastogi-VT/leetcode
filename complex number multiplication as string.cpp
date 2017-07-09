//https://leetcode.com/problems/complex-number-multiplication/#/description

/* Given two strings representing two complex numbers.
 
 You need to return a string representing their multiplication. Note i2 = -1 according to the definition.
 
 Example 1:
 Input: "1+1i", "1+1i"
 Output: "0+2i"
 Explanation: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.
 Example 2:
 Input: "1+-1i", "1+-1i"
 Output: "0+-2i"
 Explanation: (1 - i) * (1 - i) = 1 + i2 - 2 * i = -2i, and you need convert it to the form of 0+-2i.
*/

class Solution {
public:
    string complexNumberMultiply(string a, string b)
    {
        int count_a=0;
        string number_a="";
        string img_a="";
        int count_b=0;
        string number_b="";
        string img_b="";
        
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='+')
            {
                count_a=i;
            }
        }
        for(int i=0;i<a.length();i++)
        {
            
            if(i<count_a)
            {
                number_a = number_a+a[i];
                
            }
            else if(i>count_a && a[i]!='i')
            {
                img_a= img_a+a[i];
            }
        }
        
        for(int i=0;i<b.length();i++)
        {
            if(b[i]=='+')
            {
                count_b=i;
            }
        }
        for(int i=0;i<b.length();i++)
        {
            
            if(i<count_b)
            {
                number_b = number_b+b[i];
                
            }
            else if(i>count_b && b[i]!='i')
            {
                img_b= img_b+b[i];
            }
        }
        
        int myint1 = stoi(number_a);
        int myint2= stoi(number_b);
        int myimg1=stoi(img_a);
        int myimg2=stoi(img_b);
        
        int sum_num= myint1*myint2-(myimg1*myimg2);
        int sum_img=(myint1*myimg2)+(myint2*myimg1);
        string number = to_string(sum_num) ;
        string img = to_string(sum_img);
        string complex=number +"+"+ img + "i";
        return complex;
    }
    
};