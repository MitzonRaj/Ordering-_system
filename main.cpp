#include<iostream>
using namespace std;

int main(){
    int returnTotalBill(void);
    int totalBill=returnTotalBill();
    cout<<"Your total bill amount is "<<totalBill;
    cout<<"--THANK YOU :)--"<<endl;
    
}

int returnTotalBill(){
    
    char c;
    char item;
    char vegItem;
    int billAmount=0;
    char selctAgain;
    char nonvegItem;
    
    cout<<"-------------Welcome to Swiggy-----------"<<endl;
    cout<<"-----Team Swiggy requests you to wash your hand reugularly, wear mask, use sanitizer.. THANK YOU------"<<endl;
    cout<<"--------Please follow the following instructions to order your food-------"<<endl;
    cout<<"Step 1 : Please press S to start your order"<<endl;
    cout<<"Step 2 : The order is divided into two parts Veg and Non-Veg"<<endl;
    cout<<"Step 3 : PLease press A to order veg "<<endl;
    cout<<"Step 4 : PLease press B to order Non-veg"<<endl;
    
    start:
    cout<<"Please press S to order "<<endl;
    cin>>c;
    items:
    if(c=='S'){
        cout<<"Please select your choice"<<endl;
        cout<<"(a)***Veg items***   (b)***Nong-Veg items***"<<endl;
        cin>>item;
        if(item=='a'){
            vegItemList:
            cout<<"Only some dishes are available in veg"<<endl;
            cout<<"There are 3 dhishes you can choose anything you want"<<endl;
            cout<<"(1). Veg briyani + panner tikka -- price:250"<<endl;
            cout<<"(2). Burger + cocolala(20ml) -- price:70"<<endl;
            cout<<"(3). Pizza(unlimted offer) + french fry -- price:350"<<endl;
            cin>>vegItem;
            if(vegItem=='1'){
                billAmount=billAmount+250;
                }
                else if(vegItem=='2'){
                    billAmount=billAmount+70;
                }
                else if (vegItem=='3'){
                    billAmount=billAmount+350;
                }
                else{
                    cout<<"You have entered wromg value, please try again!!"<<endl;
                    goto vegItemList;
                }
                cout<<"Do you want to add more items?, y or no"<<endl;
                cin>>selctAgain;
                if(selctAgain=='y'){
                    goto items;
                }
                else{
                    return billAmount;
                }
        }
        else if(item=='b'){
            
            nonvegItemList:
            cout<<"Only some dishes are available in nonveg"<<endl;
            cout<<"There are 5 dhishes you can choose anything you want"<<endl;
            cout<<"(1). Chiken briyani -- price:250"<<endl;
            cout<<"(2). chicken tikka + butter chicken + Naan(2pcs) -- price:300"<<endl;
            cout<<"(3). fish fry + chicken lolipop + myonise -- price:350"<<endl;
            cout<<"(4). KFC nonveg pack + cocolala (20ml) -- price:300"<<endl;
            cout<<"(5). Beaf briyani + beaf chilli -- pricd:300"<<endl;
            cin>>nonvegItem;
            if(nonvegItem=='1'){
                billAmount=billAmount+250;
                }
                else if(nonvegItem=='2'){
                    billAmount=billAmount+300;
                }
                else if (nonvegItem=='3'){
                    billAmount=billAmount+350;
                }
                else if (nonvegItem=='4'){
                    billAmount=billAmount+300;
                }
                else if (nonvegItem=='5'){
                    billAmount=billAmount+300;
                }
                else{
                    cout<<"You have entered wromg value, please try again!!"<<endl;
                    goto nonvegItemList;
                }
                cout<<"Do you want to add more items?, y or no"<<endl;
                cin>>selctAgain;
                if(selctAgain=='y'){
                    goto items;
                }
                else{
                    return billAmount;
                }
            
        }
        else{
            cout<<"You have entered wromg value, please try again!!"<<endl;
            goto items;
        }
        
    }
    else{
        cout<<"You have pressed wrong value, please press S!!"<<endl;
        goto start;
    }
    return billAmount;
}



