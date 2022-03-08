#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2; //crux..impp..if we directly write line 24 ..series would be 0,1,1,1,1,1,1,..10times..imp logic
    t2 = nextTerm; //crux..impp...if we directly write line 24 ..series would be 0,1,1,1,1,1,1,..10times..imp logic
    nextTerm = t1 + t2;
  }

  return 0;
}

