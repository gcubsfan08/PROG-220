#include <iostream>
#include <fstream>
#include <filesystem>


//9's uptime
//99.0
//99.9
//99.999
using namespace std;

int main(int argc, char *argv[]) {
    std::cout << argv[0] << std::endl;
    std::filesystem::path cwd = std::filesystem::curren_path();
    return 0;
}
.
