#include <iostream>
#include <chrono>

using namespace std::chrono;

int main(int argc, char* argv[] ) {
  std::chrono::time_point<std::chrono::system_clock> start, end;
  start = std::chrono::system_clock::now();

  for( uint8_t i=0; i<100; ++i )
    std::cout << "i :" << i << std::endl;

  end = system_clock::now();

  duration<double> time = end - start;

  std::cout << "time taken for calculation  " << time.count() << std::endl;
}