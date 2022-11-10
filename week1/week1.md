# Solving Problem sets


## Solving the credit problem

### Luhn's algorithm
- multiply every other digit by 2 starting with the numbers' second-to-;ast dogot, and then add those product's digits together.
- Add the sum to the sum of the digits that weren;t multiplied by 2.
- If the total's last digit is 0 (or the total modul 10 is congruent to 0), the numvber is valid.




### My algorithm:
- create a variable to stock the sum of all the second digits odd digit (sumOdd)
- create a variable to stock the sum of all of even digit (including 0, sumEven).
- create totalSum variable
- create a new variable that will compute the credit info ( num )
- create a count variable and initialize its value to 0.
- take the user input using cs50's get_long to accept only long.
- while num different from 0:
  - if count modulo 2 is 0 add the remaining number to
    - do modulo 10 of the num and add the result to sumEven 
  - else if count modulo 2 is 1:
    - multiply the result of num modulo 10 by two: and save the result to modem
    - while (modem is different from 0)
      - do module 10 of modem
      - add the result to the sumOdd variable
      - define modem as  modem divided by 10.
   - divide num by 10
 - define totalSum as the sum of sumOdd and sumEven.
 - check if totalSum modal 10 is 0:
   - if it is check which credit card it is.
   - if it is not return invalid.  
