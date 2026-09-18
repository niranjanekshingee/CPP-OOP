#include <iostream>
using namespace std;

class book
{ public:
   int bookno;
   string bookname;
   float price;

   void display()
   {
    cout<<"-----BOOK DETAILS-----"<<"\n";
    cout<<"Book ID: "<<bookno<<"\n";
    cout<<"Book Name: "<<bookname<<"\n";
    cout<<"Price: "<<price<<"\n";
   }
};

int main()
{
 book b1;
 b1.bookno=100;
 b1.bookname="harry potter";
 b1.price=300;
 b1.display();

 return 0;
}
