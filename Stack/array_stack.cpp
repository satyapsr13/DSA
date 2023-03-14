#include <bits/stdc++.h>

using namespace std;
class Stack
{
    vector<int> stack;
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int val)
    {
        top++;
    }
    void pop()
    {
    }
    bool isEmpty()
    {
        return top == -1;
    }
};
int main()
{
    Stack st = Stack();
    
    cout << "hellp";
}
