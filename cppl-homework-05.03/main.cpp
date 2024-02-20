//
//  main.cpp
//  cppl-homework-05.03
//
//  Created by a1ex on 2/20/24.
//

#include <iostream>
#include <algorithm>

class SimpleFunctor {
private:
    unsigned size = 0;
    int* arr = new int[size];
    unsigned m_counter = 0;
public:
    SimpleFunctor(unsigned size) : size(size) {}

    int* getArr() {
        return arr;
    }

    void operator()()
    {
        std::for_each(arr, arr + size,[this](int& i)
        {
          [&](int& i)
          {
            return 0;
          }(i);
              int sum = 0;
              sum += i;
              if(i%3 == 0)
              {
                  ++m_counter;
              }
        });
    };

    unsigned get_count()
    {
        return m_counter;
    }
};


int main(int argc, const char * argv[]) {

    SimpleFunctor get_sum(5);
    std::cout << "[IN]: ";
    for (int i = 0; i < 5; i++)
    {
        int input;
        std::cin >> input;
        get_sum.getArr()[i] = input;
    }
    std::cout << "[OUT]: ";
    get_sum();
    for (int i = 0; i < 5; i++)
      {
        std::cout << get_sum.getArr()[i] << " ";
      }
    std::cout << std::endl;
    std::cout << "[OUT]: " << get_sum.get_count();
    std::cout << std::endl;


    return 0;
}
