#include <iostream>
using namespace std;

class Count
{
private:
         int value;

public:
         // Constructor to initialized count 5;
         Count() : value(5)
         {
         }

         void operator++()
         {
                  value = value + 1;
         }

         void display()
         {
                  cout << "Count :" << value << endl;
         }
};

int main()
{
         Count count1;

         //Call the "void operator ++()"funtion

         ++count1;
         count1.display();

         return 0;
}