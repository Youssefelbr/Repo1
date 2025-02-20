#include<iostream>
#include<vector>
using namespace std;

vector<int> MakeChange(int amount)//======== this function calculates the number of each bill for the amount given
{
    vector<int> bill={100,50,20,10,5,1,44,18};
    vector<int> vec={100,50,20,10,5,1,44,18};
    vector<int> NumberOfBills;
        for(int i = 0; i<=5; i++)
        {
            NumberOfBills.push_back(amount/bill[i]);//==Storing the quotient value (number of the 100 bill used) in the vector
            amount = amount % bill[i];
            cout<<"the number of the bill "<<bill[i]<<" is :"<<NumberOfBills[i]<<endl;
        }
    return NumberOfBills;
}
void testMakeChange(int amount, vector<int> exp)//Testing function . It takes the amount,the expected result and check wether the result is correct or not
{
    vector<int> NumOfBill;
    vector<int> NuumOfBill;
    NumOfBill = MakeChange(amount);
    bool T;
    for(int j = 0; j<6; j++)
    {
        if(NumOfBill[j]  == exp[j])//comparison between the elements of the real result of the function and the exepected one.
        {   T = true;//looping through all the elements and using the T variable as a Flag 
            cout<<"yaah bodyyy !";
        }else{
            T = false;
            break;
        }
    };

    if (T)
        {
            cout << "Test passed for input " << amount <<endl;
        } else {
            cout << "Test failed for input " << amount <<endl;
        }
};




int main(){
vector<int> Exp{1,1,1,1,1,0};
testMakeChange(185,Exp);

 
return 0;

};