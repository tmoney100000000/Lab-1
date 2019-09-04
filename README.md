# Lab-1

## Part 1: Generators mod primes

A number, m, is a generator if and only if ∀ x ∈ \Z mod p (a prime) ∋ 0 < x < p-1, m<sup>x</sup> ≢ 1 mod p. Another way of saying this is that m is a generator mod p if and only if all numbers that exist in the integers mod p greater than 0 appear exactly once in the set {m<sup>x</sup> mod p | 0 < x < p-1}. For more help understanding generators: https://crypto.stanford.edu/pbc/notes/numbertheory/gen.html

Write a program that takes in a prime modulus (with error detection - giving the user another chance in case they enter a composite) and finds all generators in that modulus.

## Part 2: Finding the GCD  

The great common divisor of two numbers tells us whether or not two numbers are relatively prime, which we have established, is often important when dealing in modular arithemetic. 

Euclid's algorithm is used to find the GCD of two numbers and is recursive. Using whatever resource(s) you'd like and learn how the algorithm works. 

Write a program that takes in two integers greater than 1 and calculates the GCD using Euclid's Algorithm. 
