#include <iostream>
#include <chrono>
#include <string>
#include <istream>
#include <sstream>

using namespace std::chrono;


void PrintTimeNow() {
  const char config[] = "url=5\n"
                      "file=2\n"
                      "true=0";

  std::istringstream is_file(config);

  std::string line;
  while( std::getline(is_file, line) )
  {
    std::istringstream is_line(line);
    std::string key;
    if( std::getline(is_line, key, '=') )
    {
      std::string value;
      if( key.equal_to("url") ) {
        if( std::getline(is_line, value) )
        {
          uint16_t val = std::stoi(value);
          std::cout << val << std::endl;
        }
      }
    }
  }
}


int main(int argc, char* argv[] ) {
  // PrintTimeDifference();
  PrintTimeNow();
  return 1;

}