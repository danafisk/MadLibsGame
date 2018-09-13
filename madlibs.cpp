//Authors: 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declare propts here

std::string name1;
std::string name2;
std::string orginization;
std::string animal; 
std::string bodypart;
std::string job1;
std::string medicalopperation;
std::string job2;

//get input here 

std::cout<<"Please enter a name.:\n";
 std::cin>>name1;

  std::cout<<"Please enter a name.:\n";
std::cin>>name2;

 std::cout<<"Please enter an orginization.:\n";
std::cin>>orginization;

 std::cout<<"Please enter an animal.:\n";
std::cin>>animal;

 std::cout<<"Please enter a body part.:\n";
std::cin>>bodypart;

 std::cout<<"Please enter a job.:\n";
std::cin>>job1;

 std::cout<<"Please enter a medical opperation.:\n";
std::cin>>medicalopperation;

 std::cout<<"Please enter a job.:\n";
std::cin>>job2;

//spit out story

cout<<"Hello Mr. ";
cout<<name1;
cout<<" my name is ";
cout<<name2;
cout<<" and I am from the department of ";
cout<<orginization<<endl;
cout<<" and I have heard that you have ";
cout<<animal;
cout<<" in your ";
cout<<bodypart;
cout<<" , from your previous career as a ";
cout<<job1;
cout<<, we must ";
cout<<medicalopperation;
cout<<" this imediatly so you can go back to "endl;
cout<<job2;
cout<<"."<<endl;

return 0; 


}






