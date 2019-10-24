#include<iostream>
using namespace std;

int top = -1;
// Insert a data in Stack
void push(int stack[], int x, int n)
{
    if(top == n-1) {
       cout << "Stack is full.Overflow condition!" << endl;
    }else {
        stack[++top] = x;
    }

}

// Check whether a stack is empty
bool isEmpty()
{
    return top == -1? true: false;
}

// Removes an element from top of a stack
void pop()
{
    if( isEmpty() ) {
        cout << "Stack is empty. Underflow condition!" << endl;
    }else {
        top--;
    }
}

// Access the top element of a stack
int topElement(int stack[])
{
    return stack[top];
}

// Size of the Stack
int size()
{
    return top + 1;
}

int main()
{
    int n, a;
    cin >> n;
    int stack[15];
    for(int i = 0; i < n; i++) {
        cin >> a;
        push(stack, a, n);
    }
    while(!isEmpty()) {
        cout << topElement(stack) << endl;
        pop();
    }
    return 0;
}
