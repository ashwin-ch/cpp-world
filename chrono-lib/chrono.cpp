#include <iostream>
#include <chrono>

using namespace std::chrono;

void PrintTimeDifference() {
  std::chrono::time_point<std::chrono::system_clock> start, end;
  start = std::chrono::system_clock::now();

  for( uint8_t i=0; i<100; ++i )
    std::cout << "i :" << i << std::endl;

  end = system_clock::now();

  duration<double> time = end - start;

  std::cout << "time taken for calculation  " << time.count() << std::endl;

}

void PrintTimeNow() {
  // time_point<system_clock> t1 = system_clock::now();
  // for( uint8_t i=0; i<100; ++i )
  //   std::cout << "i :" << i << std::endl;
  // system_clock::duration d1 = (system_clock::now().time_since_epoch());

  time_point<high_resolution_clock> t1 = high_resolution_clock::now();
  for( uint8_t i=0; i<100; ++i )
    std::cout << "i :" << i << std::endl;
  high_resolution_clock::duration d1 = (high_resolution_clock::now().time_since_epoch());

  std::cout << "time " << duration_cast<nanoseconds>(d1).count() << std::endl;
  std::cout << "time " << duration_cast<microseconds>(d1).count() << std::endl;
  std::cout << "time " << duration_cast<milliseconds>(d1).count() << std::endl;

  std::cout << "time " << duration_cast<nanoseconds>(t1.time_since_epoch()).count() << std::endl;
  std::cout << "time " << duration_cast<microseconds>(t1.time_since_epoch()).count() << std::endl;
  std::cout << "time " << duration_cast<milliseconds>(t1.time_since_epoch()).count() << std::endl;
}

void PrintTime( std::chrono::time_point<high_resolution_clock> time ){
  std::cout << "time now .... " << std::chrono::duration_cast<microseconds>( time.time_since_epoch() ).count() << std::endl;
}

int main(int argc, char* argv[] ) {
  // PrintTimeDifference();
  PrintTimeNow();
  return 1;

}