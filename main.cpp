

#include <string>
#include <fstream>
#include <streambuf>
#include <iostream>


int main(int argc, char const *argv[])
{
    /* code */
    std::ifstream t("example.xml");
    std::string str((std::istreambuf_iterator<char>(t)),
                 std::istreambuf_iterator<char>());

    std::cout << str << std::endl;
    return 0;
}


