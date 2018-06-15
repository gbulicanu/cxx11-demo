#include "rectangle.hpp"

Rectangle::Rectangle(double width, double height)
    : width_{width}, height_{height}
{

}

auto Rectangle::Width() const -> double
{
    return width_;
}

auto Rectangle::Height() const -> double
{
    return height_;
}

auto Rectangle::Area() const -> double
{
    return width_ * height_;
}

auto Rectangle::Scale(double scaleFactor) -> void
{
    width_ *= scaleFactor;
    height_ *= scaleFactor;
}



