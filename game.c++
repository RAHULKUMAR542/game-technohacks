
#include<iostream>
using namespace std;
int main(){
    int rock,paper,seissor;

   int userinput;
   cout<<"entar 0 for rock,1 for paper,2 for seissor\n";
    cin>>userinput;
   int computerinput=2;
   if(userinput== computerinput){
    cout<<"draw\n";

   }
   else if(userinput==0&& computerinput==2 || userinput==1 && computerinput==0 
   ||userinput==2 && computerinput==1){
  cout<<"you win\n";
}
else{
    cout<<"computer win\n";
}  
if(computerinput==0){
    cout<<"computer choice:rock";
}
else if(computerinput==1){
    cout<<"computer choice:paper";

}
else if(computerinput==2){
    cout<<"computer choice: seissor";
}
return 0;
}

