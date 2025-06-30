#include<iostream>
#include<random>
int main(){
  std::mt19937 mt(std::random_device{}());
  std::cout<<"Rolling dice...\n";
  int sum=0;
  for(int i=1;i<=2;i++){
    int x=mt()%6+1;
    sum+=x;
    std::cout<<"Die "<<i<<": "<<x<<'\n';
  }
  std::cout<<"Total value: "<<sum<<'\n';
  return 0;
}