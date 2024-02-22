//
//  main.cpp
//  cppl-homework-05.03
//
//  Created by a1ex on 2/20/24.
//

#include <iostream>
#include <algorithm>
#include <vector>

class SimpleFunctor {
private:
    std::vector<int> arr;
    unsigned m_counter = 0;
public:
    SimpleFunctor() : arr() {}

    int* getArr()
    {
        return arr.data();
    }
    unsigned get_count() const
    {
        return m_counter;
    }

    void operator()(int& value)
    {
    arr.push_back(value);
      if(value % 3 == 0)
      {
        m_counter++;
      }
    }

    int get_sum()
    {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
      {
        sum += arr[i];
      }
      return sum;
    }

};
       


int main(int argc, const char * argv[]) {


    std::vector<int> numbers = { 4, 1, 3, 6, 25, 54 };
    SimpleFunctor counter = std::for_each(numbers.begin(), numbers.end(), SimpleFunctor());
    std::cout << "[OUT]: get_sum() = " << counter.get_sum() << std::endl;
    std::cout << "[OUT]: get_count() = " << counter.get_count() << std::endl;

    return 0;
}
