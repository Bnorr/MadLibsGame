//Authors:Brian Norris
#include <iostream>
#include <string>


int main()
{
      
        std::string dogs;
        std::string fat;
        std::string walked;
        int number = 0;
        std::string shark;


        std::cout<<"Enter a plural noun: ";
        std::cin>>dogs;
        std::cout<<"Enter an adjective: ";
        std::cin>>fat;
        std::cout<<"Enter a verb: ";
        std::cin>>walked;
        std::cout<<"Enter a number: ";
        std::cin>>number;
        std::cout<<"Enter an animal: ";
        std::cin>>shark;

        std::cout<<"There were two "<<dogs<<", one was more "<<fat<<" than the other.";
        std::cout<<" They "<<walked<<" down the "<<number<<" mile hike and got eaten by a "<<shark<<".";


  return 0;
}
