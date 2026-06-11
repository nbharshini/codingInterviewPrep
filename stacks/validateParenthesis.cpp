/*Algorithm for Valid Parentheses (LeetCode 20)

We use a stack to keep track of opening brackets.

Steps
Create an empty stack st.
Traverse the string from left to right.
If current character is an opening bracket:
( or { or [
Push it into the stack.
If current character is a closing bracket:
First check if stack is empty.
If empty → return false
because closing bracket came without opening bracket.
Compare with top element of stack:
) should match (
} should match {
] should match [
If not matching → return false
If matching → pop the opening bracket from stack.
After traversal:
If stack is empty → return true
Else → return false
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i = 0;
        while(i<s.length()){
            if((s[i]=='(') || (s[i]=='{') || (s[i]=='[')){
                st.push(s[i]);
            }

            else{
                if(st.empty())
                    return false;

                if(s[i]==')' and st.top()!='(')
                    return false;

                if(s[i]=='}' and st.top()!='{')
                    return false;
                
                if(s[i]==']' and st.top()!='[')
                    return false;

                st.pop();
                }
            i++;
    }

    return st.empty();
    }

};


TC: O(n)
SC: O(n)
