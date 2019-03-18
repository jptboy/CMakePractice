#ifndef __VEC_HPP
#define __VEC_HPP
#include <memory>
namespace stdAyush
{
    using uint = unsigned int;
    template <typename T>
    class Vec
    {   
        /*
        * @brief
        * Dynamically resizing array.
        * 
        * 
        * 
        * 
        */ 
        private:
            const std::unique_ptr<T> _start;
            uint _len;
            size_t _sizeOfT;
            T* _end;
            uint _curridx;
            T* _currLoc;
        public:
            explicit Vec(const uint& len)
                : _start(new T[len]),
                _len(len),
                _sizeOfT(sizeof(T)),
                _curridx(0)
            {
                this->_currLoc = _start.get();
            };
            T operator[](const uint& idx)
            {
                if(idx > this->_len - 1)
                    throw std::out_of_range("Out of range!");
                else
                {
                    return *(_start.get() + idx);
                }
            }
            void push_back(const T& val)
            {
                if(this->_curridx > (this->_len) - 1) 
                    throw std::invalid_argument("You can't do this!");
                else
                {
                    *(_currLoc) = val;
                    _currLoc++;
                    _curridx++;
                }
            }
            
    };

    
}


#endif //__VEC_HPP