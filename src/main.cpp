#include <iostream>
#include "models/board.cpp"

int main(int argc, char *argv[])
{
    int size = 3;
    Board *b = new Board(size);
    std::cout << "Hello world!" << std::endl;
}
