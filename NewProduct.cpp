// Example Product Constructor program
#include <iostream>
#include <string>
using namespace std;
class NewProduct
{
  public:
  //Public declaration of property variables
  double price;
  int barcodeID;
  string productName;
  
  NewProduct() //Constructor to create new item and set properties
  {
     
      //Set product properties from user input
    cout << "---Example-Run---\n\n" << "Input price of item: ";
    cin >> price;
    cout << "Input barcode number of item: ";
    cin >> barcodeID;
    cout << "Input the product name: ";
    cin >> productName;
      
  }
  
};
int main()
{
    
//create new 'product' called 'potato'
NewProduct potato;

//Display properties of new product
cout << "$" << potato.price << "\n" << potato.barcodeID << "\n" << potato.productName;
}
