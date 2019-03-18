#include <iostream>
#include <Vec.hpp>
#include <boost/range/irange.hpp>

int main(int argc, char const *argv[])
{
    if(argc < 2)
    {
        std::cerr << "Invalid number of arguments\n";
        std::cerr << "Usage: NNdemo integer\n";
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
    return 0;
}


