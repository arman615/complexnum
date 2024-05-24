class ComplexNumber {
private:
    int real;
    int imag;

public:
    ComplexNumber() : real(0.0), imag(0.0) {}

    ComplexNumber(int r, int i) : real(r), imag(i) {}

    ComplexNumber &operator++() {
        ++real;
        ++imag;
        return *this;
    }

    ComplexNumber operator++(int) {
        ComplexNumber temp(*this);
        ++(*this);
        return temp;
    }

    ComplexNumber &operator--() {
        --real;
        --imag;
        return *this;
    }

    ComplexNumber operator--(int) {
        ComplexNumber temp(*this);
        --(*this);
        return temp;
    }

    int getReal() const {
        return real;
    }

    int getImaginary() const {
        return imag;
    }
};

int main() {
    ComplexNumber c1(3, 4);

    std::cout << "c1 value: " << c1.getReal() << " + " << c1.getImaginary() << "i" << std::endl;

    ++c1;
    std::cout << "c1 value after prefix increment: " << c1.getReal() << " + " << c1.getImaginary() << "i" << std::endl;

    ComplexNumber c2 = c1++;
    std::cout << "c1 value after postfix increment: " << c1.getReal() << " + " << c1.getImaginary() << "i" << std::endl;
    std::cout << "Value of c2: " << c2.getReal() << " + " << c2.getImaginary() << "i" << std::endl;

    --c1;
    std::cout << "c1 value after prefix decrement: " << c1.getReal() << " + " << c1.getImaginary() << "i" << std::endl;

    ComplexNumber c3 = c1--;
    std::cout << "c1 value after postfix decrement: " << c1.getReal() << " + " << c1.getImaginary() << "i" << std::endl;
    std::cout << "Value of c3: " << c3.getReal() << " + " << c3.getImaginary() << "i" << std::endl;

}
