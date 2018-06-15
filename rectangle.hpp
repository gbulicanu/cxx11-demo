#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(double width, double height);

    auto Area() const -> double;
    auto Scale(double scaleFactor) -> void;

    auto Width() const -> double;
    auto Height() const -> double;
private:
    double width_ = {};
    double height_ = {};
};

#endif // RECTANGLE_HPP
