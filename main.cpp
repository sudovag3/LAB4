#include <iostream>
#include "mystack.h"


int main() {
  
  MyStack st;
  st.push(new int(7));
  st.push(new int(8));
  st.push(new int(10));

  st.pop();
  while(!st.Empty()){
    int * p = (int*)st.getTop();
    std::cout << *p << std::endl;
    st.pop();
    delete p;
  }
    return 0;
}