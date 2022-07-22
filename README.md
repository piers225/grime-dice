# Grime Dice Comparer

## Description

Compares the result of every possible role of 3 Grime Dice

### Installing


sudo apt install gcc

gcc main.c

### Executing program

./a.out

### Explanation

I'm not an expert on this, these are just my thoughts on the problem. 

If you order each value on each dice in assending order, then compair the sets -

Red -      { 4, 4, 4, 4, 4, 9 }  
Blue -     { 2, 2, 2, 7, 7, 7 }  
Compare -  { R, R, R, B, B, R } - Red wins more sides  

Red -      { 4, 4, 4, 4, 4, 9 }  
Green -    { 0, 4, 5, 5, 5, 5 }  
Compare  - { R, D, G, G, G, R } - Green wins more sides   

Blue -     { 2, 2, 2, 7, 7, 7 }  
Green -    { 0, 4, 5, 5, 5, 5 }  
Compare -  { B, G, G, B, B, B } - Blue wins more sides   
