/******************************************************************************
 
 Online C++ Compiler.
 Code, Compile, Run and Debug C++ program online.
 Write your code in this editor and press "Run" button to compile and execute it.
 
 *******************************************************************************/

#include <iostream>
#include <map>

using namespace std;

map<char,int> findmatchingBraces(string str)
{
  int iCount = 0;
  map<char,int>bracematch;
  bracematch['('] = iCount;
  for(char& c : str) 
  {
    switch(c)
    {
    case '(' :
      iCount++;
      bracematch['('] = iCount;
      break;
    case ')' :
      iCount--;
      bracematch['('] = iCount;
      break;
    }
  }
  std::cout << bracematch['('] << std::endl;
  return bracematch;
}

int main()
{
  string test = "((()))";
  map<char,int>tempmatch = findmatchingBraces(test);
  
  if (tempmatch['('] == 0)
  {
    std::cout << "Matched" << std::endl;
  }
  else
  {
    std::cout << "Not Matched" << std::endl;
  }
  
  return 0;
}

