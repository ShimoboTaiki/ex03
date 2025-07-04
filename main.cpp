#include<iostream>
#include<random>
int main(){
  std::cout<<"What is your name?\n>";
  std::cout.flush();
  std::string name;
  std::cin>>name;
  std::cout<<"Hello, "<<name<<'\n';
  
  std::mt19937 mt(std::random_device{}());
  std::cout<<"Rolling dice...\n";
  int sum=0;
  for(int i=1;i<=2;i++){
    int x=mt()%6+1;
    sum+=x;
    std::cout<<"Die "<<i<<": "<<x<<'\n';
  }
  std::cout<<"Total value: "<<sum<<'\n';
  std::cout<<(sum>7?"You won\n":"You lost\n");
  return 0;
}