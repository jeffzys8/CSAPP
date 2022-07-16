# Chapter 3 Homework Problems

## 3.58

%rdi <- x
%rsi <- y
%rdx <- z

%rsi -= %rdx (y -= z)
%rdi *= %rsi (x *= y)
%rax = $rsi (result = y)
result <<= 63;
result >>= 63;
result ^= x;

```C
long result = y-z;
result <<= 63;
result >>= 63;
result ^= (x*(y-z));
return result;
```