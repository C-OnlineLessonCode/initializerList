#include <iostream>
#include <string>
#include <deque>
#include <vector>

#include <type_traits>
#include <typeinfo>

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <initializer_list>

class Vector {
public:
    Vector(const std::initializer_list<int>& l) :
        m_size(l.size())
    {
        m_buf = new int[m_size];
        int i = 0;
        for (const auto& el : l) {
            m_buf[i] = el;
            ++i;
        }
    }
    Vector(int size) {

    }
    ~Vector() {
        std::cout << "~Vector()" << std::endl;
        if (m_buf) {
            delete[] m_buf;
        }
    }

private:
    int* m_buf = nullptr;
    size_t m_size = 0;
};

int main() {
    Vector vt{ 10, 20, 30, 40 };
}
