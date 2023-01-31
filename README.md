# Homework
## Doing
to accomplish the homework you must modify the functions in `logic.cpp`. Each function is a week.
### Fibonnaci
Find the n-th fibonacci number. your solution must not overflow (must fit in a `long` variable without going negative, in case of overflow return 0)
### Is prime
Tell me if n is a prime number, return 1 for true and 0 for false
### factorial
give the factorial for n (n!). this must not overflow (go negative). in case of overflow return 0
### reversing an integer
given an integer, return the reverse. example: 123 becomes 321


## Checking
to check your homework run

``` shell
docker build . -t algo:latest
docker run algo:latest
```

NOTE you must have Docker installed [link](https://docs.docker.com/get-docker/)

and it should output something that looks like this

``` shell
[----------] Global test environment tear-down
[==========] 4 tests from 4 test suites ran. (0 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 4 tests, listed below:
[  FAILED  ] FibTests.PositiveNat
[  FAILED  ] PrimeTests.PositiveNat
[  FAILED  ] FactorialTests.PostiveNat
[  FAILED  ] ReverseTests.Nat
```

