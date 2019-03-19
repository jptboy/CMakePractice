#include <Matrix.hpp>

stdAyush::Matrix::Matrix(const uint& n, const uint& m, uint* const* const& matrix)
    : _n(n),
      _m(m),
      _matrix(matrix),
      _shape({m,n})
{

}

stdAyush::Matrix::Shape stdAyush::Matrix::getShape() const
{
    return this->_shape;
}