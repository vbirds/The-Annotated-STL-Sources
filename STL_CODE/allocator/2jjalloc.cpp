#include "2jjalloc.h"
#include <vector>
#include <iostream>

int main(int argc, char *argv[])
{
    int ia[5] = {0,1,2,3,4};
    unsigned int i;

    std::vector<int, JJ::allocator<int> > iv(ia, ia+5);
    for (int i = 0; i < iv.size(); i++) {
        std::cout << iv[i] << " " << std::endl;
    }
}