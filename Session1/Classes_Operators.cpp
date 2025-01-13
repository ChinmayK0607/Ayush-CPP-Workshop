#include <iostream>

struct ArrayInt {
  int m_length;
  int *m_data;

  ArrayInt(int length) : m_length(length) { m_data = new int[length]; }

  ~ArrayInt() { delete[] m_data; }

  int &operator[](int index) {
    if (index < 0 || index >= m_length) {
      std::cerr << "Index " << index << " is out of bounds." << std::endl;
      std::exit(1);
    }
    return m_data[index];
  }
};

int main() {

  ArrayInt array(10);

  array[11] = 3;

  std::cout << array[6] << std::endl;

  return 0;
}
