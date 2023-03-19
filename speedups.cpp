int n, a, b;

//Multiply n by 2
n = n << 1;

//Divide n by 2
n = n >> 1;

//Swap a and b;
a ^= b ^= a ^= b;


// check if x is power of 2
bool isPowerOfTwo (int x){
  /* First x in the below expression is for the case when x is 0 */
  return x && (!(x&(x-1)));
}


