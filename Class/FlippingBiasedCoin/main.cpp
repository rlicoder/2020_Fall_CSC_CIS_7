/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 13, 2020, 11:39 PM
 * Purpose:  Checking Out Binomial Theorem - i.e. The Biased Coin
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cstdlib>    //Random Number Generator
#include <ctime>      //Time Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions
//const to follow

//Function Prototypes
bool biasCn(int,int);//Biased Coin Flip

//Execution Starts Here
int main(int argc, char** argv){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables - Known and Unknown, units, range, description
    int num,denom,counter,nCnFlip;
    
    //Initialize Variables
    //Create a biased 30% coin -> 3/10
    num=3;          //Numerator of Probability
    denom=10;       //Denominator of Probability
    counter=0;      //Counter to determine the coin flip odds
    nCnFlip=1000000;//Number of times to flip the coin
    
    //Map inputs to outputs -> i.e. process the inputs
    for(int coinflp=1;coinflp<=nCnFlip;coinflp++){
        if(biasCn(num,denom))counter++;
    }
    
    //Display the outputs
    cout<<"Result = "<<100.0f*num/denom<<"% = "<<100.0f*counter/nCnFlip<<"%"<<endl;
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
bool biasCn(int num,int denom){
    int result=rand()%denom;
    if(result<num)return true;
    return false;
}