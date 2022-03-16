#include <stdio.h>

int main() {
  
  // These varaibles were created and had a starting value for you, no need to change
  char bookVersionReview = 'A';
  char movieVersionReview = 'B';
  double ticketPrice = 10.25;
  double bookPrice = 19.99;

  // Update the movie review score here
  movieVersionReview = 'C';
  // Update the ticket price here
  ticketPrice = bookPrice;

  // No need to change below here
  printf("The book version has a review score of %c and costs $%.2f\n", bookVersionReview, bookPrice);
  printf("The movie version has a review score of %c and costs $%.2f\n", movieVersionReview, ticketPrice);
}
/*
VARIABLES: LESSON
Updating Values
Before, we said that there are two times when you can set a variable’s value. We just examined how to set it at declaration, but if that’s the only place it could be set, variables would have limited value (we will see in a moment an exception to this rule). It turns out they can also be set is at any future point in the code! As an example:

int total_units;
…
…
…
total_units = 3;
Notice that once we have declared the type we no longer reference the type, we just use the name of the variable. You can also set a variable to be the same as what is stored in another variable, such as a = b. If you change b after this, the values will no longer match (there is a way to tie the two variables together so they always match, but we will get to that in a later lesson).

Have no fear, we will go over how to do more advanced things with setting the values stored in a variable shortly.

Instructions
1.
In the program on the right, someone has created the initial code by declaring and setting up information on a book turned movie. The output has also been taken care of. What you need to do is update the values based on changing information from the market.

The initial movie reviews were generous, but have gone down since opening weekend, the average score for the movie is now a C, please update this score.

Checkpoint 2 Passed
2.
Due to dropping movie ticket sales, the movie theaters decide to match the price of the book to make up for their lost revenue. Set the price of the movie ticket equal to the price of the book.

*/