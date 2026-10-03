#include <string>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        string AnsStr="";
        if (s.empty()==true ){
            return AnsStr;
        }
        AnsStr.push_back(s.front());
        
        for (int i=1;i<s.length();i++){
            char ch =s[i];
            if(AnsStr.empty()==true || AnsStr.back()!=ch ){
                AnsStr.push_back(ch);

            }
            else {
               AnsStr.pop_back();
            }
        }
        return AnsStr;
    }
};