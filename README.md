# formura0-test-rungekutta2022
Formura0 Test Computation Codes for checking effect of temporary variables (2022).

## requirements
Clang or Visual C++ or GCC, C compiler compatible common set of C99 and C18.

For visualization, I used scilab and animaGIF.

## What this does?
Check performance and correctness of Temporary Grid Variable of Formura0.  
Temporary Grid Variable may make performance improvements on multistep methods such as Runge-kutta method.  

## Structure
This repository contains diffusion equation code using runge-kutta method.
 - rk.tmp.fmr : With Temporary Grid Variable
 - tmpmain.c : C Code Output with Temporary Grid Variable
 - tmpmain.csv : Output of tmpmain.c
 - tmpmain.gif : Visualized Gif Animation of tmpmain.csv
 - rk.notmp.fmr : Without Temporary Grid Variable
 - notmpmain.c : C Code Output without Temporary Grid Variable
 - notmpmain.csv : Output of notmpmain.c
 - notmpmain.gif : Visualized Gif Animation of notmpmain.csv

## Result
I tested Visual C++ 19.29.30142.1 for x64 and Ryzen 5850U, 32GiB machine, and /O2 command line option.  
TGV means Temporary Grid Variable.
| # | with TGV | without TGV |
| - | -------- | ----------- |
| 1 |  60 sec  |   98 sec    |
| 2 |  61 sec  |   98 sec    | 
