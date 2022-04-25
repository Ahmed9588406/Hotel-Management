#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int quant;
    int choice;
    //quantity we have
    int Qrooms=0,Qpasta=0,Qburger=0,Qshake=0,Qchicken=0,Qnoodels=0;
    //quantity we sold
    int Srooms=0,Spasta=0,Sburger=0,Sshake=0,Schicken=0,Snoodels=0;
    //total price
    int total_rooms=0,total_pasta=0,total_shake=0,total_chiken=0,total_noodels=0,total_burger=0;

    cout<<"\n\t Quantity of items we have: ";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of noodels: ";
    cin>>Qnoodels;
    cout<<"\n Quantity of chicken_roll: ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t please select from the menu option:  ";
    cout<<"\n\n 1)Rooms";
    cout<<"\n\n 2)pasta";
    cout<<"\n\n 3)Burger";
    cout<<"\n\n 4)Noodles";
    cout<<"\n\n 5)Shake";
    cout<<"\n\n 6)chicken_roll";
    cout<<"\n 7) Information regarding sales and collection ";
    cout<<"\n 8) Exit";

    cout<<"\n\n please Enter your choice! ";
    cin>>choice;


    switch(choice)
    {
    case 1:
    cout<<"\n\n enter the number of rooms you want";
    cin>>quant;
    if(Qrooms-Srooms>=quant)
    {
    Srooms+=quant;
    total_rooms+=quant*1200;
    cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you ";
    }else{
    cout<<"\n\t Only "<<Qrooms-Srooms<<"Rooms remaining in hotel ";
    break;


    case 2:
    cout<<"\n\n Enter pasta Quantity: ";
    cin>>quant;
    if(Qpasta-Spasta>=quant)
    {
    Spasta+=quant;
    total_pasta+=quant*250;
    cout<<"\n\n\t\t"<<quant<<"pasta is the order";
    }else{
    cout<<"\n\t Only "<<Qpasta-Spasta<<"pasta remaining in hotel ";
    break;
    }


    case 3:
    cout<<"\n\n Enter Burger Quantity";
    cin>>quant;
    if(Qburger-Sburger>=quant)
    {
    Sburger+=quant;
    total_burger+=quant*120;
    cout<<"\n\n\t\t"<<quant<<"Burger is order! ";
    }else{
    cout<<"\n\t Only "<<Qburger-Sburger<<"Burger remaining in hotel ";
    break;


    case 4:
    cout<<"\n\n Enter Noodels Quantity";
    cin>>quant;
    if(Qnoodels-Snoodels>=quant)
    {
    Snoodels+=quant;
    total_noodels+=quant*250;
    cout<<"\n\n\t\t"<<quant<<"Noodels is order! ";
    }else{
    cout<<"\n\t Only "<<Qnoodels-Snoodels<<"Noodels remaining in hotel ";
    break;



    case 5:
    cout<<"\n\n Enter Shakes Quantity";
    cin>>quant;
    if(Qshake-Sshake>=quant)
    {
    Sshake+=quant;
    total_shake+=quant*120;
    cout<<"\n\n\t\t"<<quant<<"Shakes is order! ";
    }else{
    cout<<"\n\t Only "<<Qshake-Sshake<<"Shakes remaining in hotel ";
    break;


    case 6:
    cout<<"\n\n Enter Chicken-roll Quantity";
    cin>>quant;
    if(Qchicken-Schicken>=quant)
    {
    Schicken+=quant;
    total_chiken+=quant*120;
    cout<<"\n\n\t\t"<<quant<<"Chicken is order! ";
    }else{
    cout<<"\n\t Only "<<Qchicken-Schicken<<"Chicken remaining in hotel ";
    break;


    case 7:
    cout<<"\n\n\t Details of sales and collection ";
    cout<<"\n\n Number of rooms we had: "<<Qrooms;
    cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
    cout<<"\n\n Remaining rooms :"<<Qrooms-Srooms;
    cout<<"\n\n Total rooms collection for the day : "<<total_rooms;


    cout<<"\n\n Number of Pastas we had: "<<Qpasta;
    cout<<"\n\n Number of Pastas we sold "<<Spasta;
    cout<<"\n\n Remaining Pastas :"<<Qpasta-Spasta;
    cout<<"\n\n Total Pastas collection for the day : "<<total_pasta;


    cout<<"\n\n Number of Burger we had: "<<Qburger;
    cout<<"\n\n Number of Burger we we sold"<<Sburger;
    cout<<"\n\n Remaining Burger :"<<Qburger-Sburger;
    cout<<"\n\n Total rooms collection for the day : "<<total_burger;




    cout<<"\n\n Number of Noodles we had: "<<Qnoodels;
    cout<<"\n\n Number of Noodles we sold"<<Snoodels;
    cout<<"\n\n Remaining Noodles  :"<<Qnoodels-Snoodels;
    cout<<"\n\n Total Noodles  collection for the day : "<<total_noodels;



    cout<<"\n\n Number of Shake we had: "<<Qshake;
    cout<<"\n\n Number of Shake we sold"<<Sshake;
    cout<<"\n\n Remaining Shake  :"<<Qshake-Sshake;
    cout<<"\n\n Total Shake collection for the day : "<<total_shake;




    cout<<"\n\n Number of Chicken-roll we had: "<<Qchicken;
    cout<<"\n\n Number of Chicken-roll we sold"<<Schicken;
    cout<<"\n\n Remaining Chicken-roll :"<<Qchicken-Schicken;
    cout<<"\n\n Total Chicken-roll collection for the day : "<<total_chiken;

    case 8:
        exit(0);
        default:
    cout<<"\n please select the numbers mentioned above  ";

    }

    }


    }
    }
    }
    }
    goto m;
    return 0;
}


