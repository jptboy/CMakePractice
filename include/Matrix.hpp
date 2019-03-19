#ifndef __MATRIX_HPP
#define __MATRIX_HPP
#include <iostream>
namespace stdAyush
{
    using uint = unsigned int;
    class Matrix
    {
        
        public:
            /*
            * Struct members will be constant.
            */
            struct Shape
            {   
                const uint m;
                const uint n;
            };

            /*
            * Reference to a constant pointer to constant unsigned integer pointer, the constant integers
            * arent constant though.
            */
            explicit Matrix(const uint&, const uint&, uint* const* const&);
            /*
            * This method is marked as const since it doesn't modify
            * any of the class members.
            */
            Shape getShape() const;
        private:
            const uint _n;
            const uint _m;
            uint* const* const _matrix;
            const Shape _shape;
    };
}



#endif //__MATRIX_HPP