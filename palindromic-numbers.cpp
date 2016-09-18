/*
  We can solve this problem by taking bases from 1 to N and see if our N in each of these Bases gives palindrome.On first occurrence of such base (which will be the smallest one), we break from loop and print the answer .But this will take a bit longer time especially when n can be 10^10.
  
  So, how will this above algorithm be ?? (we will keep on optimizing it till we obtain final algorithm)
  
  for Base =2 to N do
      if(ispalidrome(N,Base)==True)
          print the first such Base and exit the loop
  Now how do we define the method ispalindrome(N,base) ??
  
  we see let N in base b , be written as N= a4b^4 + a3b^3 +a2b^2 +a1b^1 +a0b^0 . This number N will be palindrome if we reverse the ai's and yet the number is same i.e. N= a0b^4 + a1b^3 +a2b^2 +a3b^1 +a4b^0 .This is because if it is palindrome in base b then Decimal representation of reverse form should also be N.
  
  We will represent '%' as remainder operator
  
  ispalindrome(N,base)
  {
          temp=num;
          reverse=0;
  
          while(temp!=0)
          {
                      reverse =reverse *base + temp%base;
                      temp=temp/base;
  
          }
  
          if(reverse is equal to num)
              return true;
          else
              return false;
  
  }
  Just dry run it and see it.
  
  Now our algorithm is done but we need to optimize it more. We make use of a following property.
  
  Let a be square root of N. Then all bases greater than 'a' , will represent N in only 2 bits. (we will prove it later but for the time being use it.)
  
  Th property says like this , say 10 has to represented in base 2. So 10 =1010 . Now square root of 10 is approx 3 in integers. so let's take base 4,5,....,9,10 .They will need at max 2 bits to represent 10. 10 in base 5 = 11 ,in base 6 =14 etc....
  
  So how do we use it ? so we loop in 2 parts .
  
  for Base =2 to square root of N do
      if(ispalidrome(N,Base)==True)
          print the first such Base and exit the loop
  if such base not found then 
      for Base = square root of N+1 to N
          if the last 2 digits are equal
              print the first such Base and exit the loop
  How do we check the last two digits ? n%(base) and (n/base) are the last 2 digits
  
  But This algorithm will also take much time . Let's optimize it even more . The loop "for Base = square root of N+1 to N" is very long especially when n= 10^10. We apply following trick.
  
  let N= dd in some base 'b'.
  
  'dd' is the last 2 digits and base 'b' is a base greater than square root of N. Clearly such condition will arise when we are unable to find some base <=square root of N , where N is palindrome. Now we know it will consist of only 2 digits and for palindrome those digits have to equal.
  
  So, N=db +d (write in decimal notation) N=(b+1)d => b= N/d-1
  
  So instead of scanning all bases from square root of N+1 to N , we scan only bases of form N/d -1 . clearly , b+1 =n/d , so if LHS is integer RHS has to be integer. So, d must divide N. Also, b >square root of N. let the square root be 'sqroot' . so N/d-1 >sqroot => d< N/(sqroot+1) . So , d will go from N/(sqroot+1) to 1 . For each d , base = (N/d)-1 .Also , d being digits in base 'b', d<base.
  
  for Base =2 to square root of N do
      if(ispalidrome(N,Base)==True)
          print the first such Base and exit the loop
  if such base not found then 
      for(d=N/(sqroot+1);d>=1;--d)
           base =N/d-1;
           if(N%d==0 && d<base && N/base == N%base )
              Print the base which is (N/d)-1 and exit the loop
  Here is a c-code to implement the ALGORITHM .Here, take correct data type to accommodate numbers of order 10^10.
  
  Note 1,2 are exceptional cases that cannot be dealt with the following algorithm . You have to explicitly mention their bases . for 1 it is 2 . For 2 it is 3 .(Single bits are palindrome.)
  
  Now come to our question : Why all bases greater than square root of N , will represent N in only 2 bits.
  
  Let a^2 <= N <(a+1)^2
  
  Now square root of N is a. so we claim a+1,a+2,a+3,.... will require at max 2 bits to represent N.
  
  We note that N<(a+1)^2 .let's convert both sides in base (a+1). so N-representation < 100. clearly this means N representation is of 2 bits. For bases higher than a+1 , it will be even more compact. Hence proved.
  
  Exceptions are 1 and 2 as we can see that by definition, bases are positive integers >=2 if N=1 or 2 ,then a is not a valid base .
*/


#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(long long int num, int base) {
    long long temp = num, rev = 0;
    while(temp) {
        rev = rev*base + (temp%base);
        temp /= base;
    }
    if(rev == num) return true;
    return false;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
        long long int num;
        cin >> num;
        long long int base = 2;
        if(num == 1)    cout << 2 << endl;
        else if(num == 2)   cout << 3 << endl;
        else {
            bool found = false;
            for(base = 2; base <= sqrt(num); base++) {
                if(ispalindrome(num, base)) {
                    found = true;
                    cout << base << endl;
                    break;
                }
            }
            if(!found) {
                for(int d = (num/(sqrt(num)+1)); d >= 1; d--) {
                    base = num/d - 1;
                    if(num%d == 0 && d < base && num%base == num/base) {
                        cout << base << endl;
                        break;
                    }
                }
            }
        }
	}
	return 0;
}

