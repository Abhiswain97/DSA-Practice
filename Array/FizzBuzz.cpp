#include<vector>
#include<string>
#include<iostream>

//Complete this method, don't write main
std::vector<std::string> fizzbuzz(int n){
  std::vector<std::string> result;

  for(int i = 1; i <= n; i++){
    // std::cout << i;
    if(i % 5 == 0 && i % 3 == 0){
      result.push_back("FizzBuzz");
    }
    else if(i % 5 == 0){
      result.push_back("Fizz");
    }
    else if(i % 3 == 0){
      result.push_back("Buzz");
    }
    else{
      result.push_back(std::to_string(i));
    }
  }

  return result;
}


int main(int argc, char const *argv[]) {

  int n, i;

  std::cin >> n;

  auto res = fizzbuzz(n);

  for(i=0; i < n; i++){
    std::cout << res[i] << " ";
  }

  return 0;
}
