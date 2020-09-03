/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 1st, 2020, 11:51 AM
 * Purpose:  Float Tolerance
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <iomanip>    //Format Libary
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions
//const to follow

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    float sum,frac,percErr,fcmp;
    int nLoops;
    int answer;
    int icmp;
    
    //Initialize Variables
    sum=0;
    frac=0.1f;
    nLoops=10000000;//10^7
    
    //Map inputs to outputs -> i.e. process the inputs
    for(int i=1;i<=nLoops;i++){
        sum+=frac;
    }
    answer=nLoops*frac;
    percErr=(answer-sum)/answer*100;
    
    //Display the outputs
    cout<<"The sum = "<<sum<<endl;
    cout<<"The sum should = "<<answer<<endl;
    cout<<"The error = "<<percErr<<"%"<<endl;
    
    //Tolerance Example
    fcmp=frac;
    icmp=frac;
    cout<<fixed<<setprecision(16)<<showpoint;
    cout<<icmp<<"<->"<<fcmp<<endl;

    //Exit Stage Right!
    return 0;
}

//Function Implementations