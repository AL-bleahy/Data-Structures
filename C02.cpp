#include <iostream>
#include <stack> //better interaction with stacks
using namespace std;

int precedence(char m) //highest to lowest
{ 
  if(m == '^') 
    return 3; 
  else if(m == '*' || m == '%' || m == '/' ) 
    return 2; 
  else if(m == '+' || m == '-') 
    return 1; 
  else 
    return -1;
}  

string infixToPostfix(string s) //convert
{
  string answer;
  stack <char> equation; // variable of type stack                  
 
  for (int i = 0; i < s.length(); i++) 
  {
    char c = s[i];
 
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
      answer += c;
      
    else if (c == '(')
      equation.push('(');

    else if (c == ')') 
    {
      while (equation.top() != '(') 
      {
        answer += equation.top();
        equation.pop();
      }
      equation.pop();
    }
    else 
    {
      while (!equation.empty() && precedence(s[i]) <= precedence(equation.top())) 
      {
        answer += equation.top();
        equation.pop();
      }
      equation.push(c); //why c?
    }
  }
  while (!equation.empty()) 
  {
    answer += equation.top();
    equation.pop();
  }
  return answer;
}

int main()
{
  string exp = "A+B-C*D/E";
 
  cout << "In postfix:\n";
  cout << infixToPostfix(exp) << endl;
  return 0;
}