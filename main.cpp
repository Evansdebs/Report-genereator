#include <iostream>
using namespace std;
int main()
{
    int choice=0;
int cash;
int ins=0;
int receiver_number1,receiver_number2, amount;
    cout << "Please select an option"<<endl<<"1)Transfer money" <<endl<<"2)Momo and pay bill" << endl<< "3)Airtime & bundle"<<endl<<"4)Allow cashout"<<endl<<"5)Financial service"<<endl<<"6)Wallet"<<endl;
   cin>>choice;
//options are being provided to select from
   if(choice==1){
    cout<<"1)Momo user"<<endl<< "2)Non-Momo User"<<endl<<"3)Send with Care"<<endl;
    cin >>ins;
    if (ins==1)
        cout<< "Insert receiver's number"<<endl;
        cin>>receiver_number1;
        cout<<"Confirm  number"<<endl;
        cin>>receiver_number2;
        if (receiver_number1!=receiver_number2)(
        cout<<"Number mismatch")<<endl;
            else if(receiver_number1=receiver_number2)
        {
            cout<< "enter amount"<<endl;
            cin>>amount;
        }
        cout<<"enter reference"<<endl;
   }
else if (choice==2){
cout <<"1)Pay Bill"<<endl<<"2)Gh.QR"<<endl<<"3)Fuels"<<endl<<"4)Ghana Gov"<<endl<<"5)Back"<<endl<<"6)MoMo pay"<<endl;
}
else if (choice==3){
    cout<<"1)Airtime"<<endl<<"2)Internet Bundles"<<endl<<"3)Fixed Broadband"<<endl<<"4)Schedule Airtime"<<endl<<"5)Just4U"<<endl;
}
else if (choice==4){
    cout<<"Allow cashout"<<endl<<"1)Yes"<<endl<<"2)No"<<endl;
    cin>>cash;
    if (cash==1){
        cout<<"cashout allowed"<<endl;
       } else
        {cout<<"Cashout is not allowed. Please retry"<<endl;
    }
}
        return 0;
}
