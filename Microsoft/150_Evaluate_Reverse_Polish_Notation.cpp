class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto it:tokens)
        {
            if(it=="+" || it=="-" || it=="*" || it=="/")
            {
                int op1=st.top();st.pop();
                int op2=st.top();st.pop();

                if(it=="+")
                    st.push(op1+op2);
                if(it=="-")
                    st.push(op2-op1);
                if(it=="*")
                    st.push(op2*op1);
                if(it=="/")
                    st.push(op2/op1);
            }
            else
            {
                st.push(stoi(it));
            }
        }
        return st.top();
    }
};