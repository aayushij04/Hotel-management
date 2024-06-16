#include<iostream>
using namespace std;
int main()
{
    int quant,choice;
    int qrooms=0,qpasta=0,qburger=0,qnoodles=0,qshakes=0;
    int total_rooms=0,total_pasta=0,total_burger=0,total_noodles=0,total_shakes=0;
    int srooms=0,spasta=0,sburger=0,snoodles=0,sshakes=0;
    cout<<"quantity of items we have";
    cout<<"\nrooms available";
    cin>>qrooms;
    cout<<"\npasta available";
    cin>>qpasta;
cout<<"\nburger available";
    cin>>qburger;

    cout<<"\nnoodles available";
    cin>>qnoodles;
    cout<<"\nshake available";
    cin>>qshakes;
    m:
    cout<<"\n\t\t\t Please select from the menu options";
cout<<"\n1) Rooms";
    cout<<"\n2) pasta";
    cout<<"\n3) burger";
    cout<<"\n4) noodles";
    cout<<"\n5) shake";
cout<<"\n6) information regarding sales and connections";
cout<<"\n7) Exit";
cout<<"\n\n Please enter your choice";
cin>>choice;
switch(choice)
{
    case 1:cout<<"enter the number of rooms you want:";
    cin>>quant;
    if(qrooms-srooms>=quant)
    {
        srooms=srooms+quant;
        total_rooms=total_rooms+quant*1200;
        cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you";
        }
        else
        
            cout<<"\n\tOnly" <<qrooms-srooms<<"rooms are remaining in hotel";
            break;
            case 2:cout<<"enter Pasta quantity:";
            cin>>quant;
            if(qpasta-spasta>=quant)
            {
                spasta=spasta+quant;
                total_pasta=total_pasta+quant*250;
                cout<<"\n\n\t\t"<<quant<<"pasta is the order";
            }
            
            else cout<<"\n\tonly"<<qpasta-spasta<<"pasta remaining in hotel";
            break;
        
         case 3:cout<<"enter burger quantity:";
            cin>>quant;
            if(qburger-sburger>=quant)
            {
                sburger=sburger+quant;
                total_burger=total_burger+quant*120;
                cout<<"\n\n\t\t"<<quant<<"burger is the order";
            }
            
            else cout<<"\n\tonly"<<qburger-sburger<<"burger remaining in hotel";
            break;
        
         case 4:cout<<"enter noodle quantity:";
            cin>>quant;
            if(qnoodles-snoodles>=quant)
            {
                snoodles=snoodles+quant;
                total_noodles=total_noodles+quant*250;
                cout<<"\n\n\t\t"<<quant<<"noodle is the order";
            }
            
            else cout<<"\n\tonly"<<qnoodles-snoodles<<"pasta remaining in hotel";
            break;
           
         case 5:cout<<"enter shakes quantity:";
            cin>>quant;
            if(qshakes-sshakes>=quant)
            {
                sshakes=sshakes+quant;
                total_shakes=total_shakes+quant*120;
                cout<<"\n\n\t\t"<<quant<<"shakes is the order";
            }
            
            else cout<<"\n\tonly"<<qshakes-sshakes<<"shakes remaining in hotel";
            break;
        case 6:
        cout<<"\n\t\tdetails of sales and collection";
        cout<<"\nno. of rooms we had"<<qrooms;
        cout<<"\nno. of rooms we gave for rent"<<srooms;
        cout<<"\nremaining rooms:"<<qrooms-srooms;
        cout<<"\ntotal rooms collection for the day"<<total_rooms;
        
          cout<<"\n\nno. of pasta we had"<<qpasta;
        cout<<"\n\nno. of pasta we sold"<<spasta;
        cout<<"\n\nremaining pastas:"<<qpasta-spasta;
        cout<<"\n\ntotal pasta collection for the day"<<total_pasta;
          cout<<"\n\nno. of burgers we had"<<qburger;
        cout<<"\n\nno. of burgers we sole"<<sburger;
        cout<<"\n\nremaining burgers:"<<qburger-sburger;
        cout<<"\n\ntotal burgers collection for the day"<<total_burger;
          cout<<"\n\nno. of noodles we had"<<qnoodles;
        cout<<"\n\nno. of noodles we sold"<<snoodles;
        cout<<"\n\nremaining noodles:"<<qnoodles-snoodles;
        cout<<"\n\ntotal noodles collection for the day"<<total_shakes;
          cout<<"\n\nno. of shakes we had"<<qshakes;
        cout<<"\n\nno. of shakes we sold"<<sshakes;
        cout<<"\n\nremaining shakes:"<<qshakes-sshakes;
        cout<<"\n\ntotal collection for the day"<<total_shakes;
        cout<<"\n\n\t\ttotal collection for the day is rs."<<total_shakes+total_burger+total_noodles+total_rooms+total_pasta;
break;
    case 7:   exit(0);
    default:cout<<"\n please select the numbers mentioned above";
        
}
    goto m;