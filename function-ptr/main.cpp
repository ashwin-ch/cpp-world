#include <functional>
#include <iostream>

class sample {

public:

void Callme() {
  std::cout << "I am call me ... " << std::endl;
}

template <typename T>
void PrintType( T a, std::function<void ()> ptr ) {
  std::cout << sizeof(a) << std::endl;
  ptr;
}


};


int main( int argc, char* argv[] ) {
  std::cout << "I am main   ..." << std::endl;
  sample obj;
  int x;


}