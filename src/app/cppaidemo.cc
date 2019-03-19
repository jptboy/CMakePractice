#include <iostream>
#include <Vec.hpp>
#include <boost/range/irange.hpp>
#include <Matrix.hpp>

int main(int argc, char const *argv[])
{
    using uint = unsigned int;
    if(argc < 2)
    {
        std::cerr << "Invalid number of arguments\n";
        std::cerr << "Usage: cppaidemo integer\n";
        return -1;
    }
    auto rng = std::stoi(argv[1]);

    stdAyush::Vec<double> myVec(rng);
    
    for(const auto& i : boost::irange(0,rng))
    {
        myVec.push_back(i);
    }
    for(const auto& i : boost::irange(0,rng))
    {
        std::cout << myVec[i] << "\n";
    }


    const uint n = 3;
    const uint m = 3;
    uint* const* const matrix = (uint* const* const)(new uint[n][m]);
    stdAyush::Matrix matr(n,m,matrix);


    return 0;
}


