# Fibonacci
Fibonacci series implementation using both Iterative and Recursive method.

# Fibonacci Series: Iterative & Recursive Implementations

## Introduction

The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, starting with 0 and 1.

Mathematically, it is defined as:

```
F(n) = F(n-1) + F(n-2), where F(0) = 0, F(1) = 1
```

This module provides two implementations:

1. **Iterative Approach** (Using loops)
2. **Recursive Approach** (Using function calls)

### Iterative Approach

The iterative approach computes Fibonacci numbers efficiently in **O(n)** time complexity with **O(1)** space.

```cpp
void FibbItr (int n){

    int a = 0;
    int b = 1;
    int c;

    for (int i = 2; i < n; ++i)
    {
        c =  a + b;

        cout<< c <<" ";
        
        a = b;
        b = c;
    }
}
```

### Recursive Approach

The recursive approach follows the mathematical definition but has **O(2^n)** time complexity due to redundant calculations.

```cpp
int FibbRec (int n){
    if(n == 0)
        return 0;
    
    if ( n == 1)
        return 1;

    if (n > 1)
        return Fibb(n - 1) + Fibb (n - 2);
}
```

To print the Fibonacci series using recursion:

```cpp
int main() {

    int n;

    cout << "Enter the number of elements you wish for your fibonacci series" << endl;
    cin >> n;
    cout << "Fibonacci Series is: " ;
    for (int i = 0; i < n; i++){
        cout <<" " << Fibb(i);
    }
}
```

## Time & Space Complexity Analysis

| Approach  | Time Complexity | Space Complexity  |
| --------- | --------------- | ----------------- |
| Iterative | O(n)            | O(1)              |
| Recursive | O(2^n)          | O(n) (call stack) |

## Comparative Performance Table

The table below compares the number of computational steps executed by the iterative and recursive approaches for different Fibonacci numbers. In the iterative approach, the number of steps corresponds to the number of loop iterations, whereas in the recursive approach, the number of steps represents the total function calls made due to repeated calculations.

| n  | Iterative Steps | Recursive Steps |
| -- | --------------- | --------------- |
| 0  | 0               | 1               |
| 1  | 0               | 1               |
| 2  | 1               | 3               |
| 3  | 2               | 5               |
| 4  | 3               | 9               |
| 5  | 4               | 15              |
| 6  | 5               | 25              |
| 7  | 6               | 41              |
| 8  | 7               | 67              |
| 9  | 8               | 109             |
| 10 | 9               | 177             |

## Comparative Performance Chart

Below is a graphical representation of the performance comparison between the iterative and recursive approaches.

```text
    Steps Executed vs. Fibonacci Index
    |
    |                                * Recursive (O(2^n))
  S |                        *
  t |                 *
  e |          *
  p |     *
  s |  *                             * Iterative (O(n))
    |-------------------------------------------------
         0   2   4   6   8   10 (Fibonacci index)
```

## Conclusion

- The **iterative approach** is efficient and recommended for large values of `n`.
- The **recursive approach** is simpler but inefficient due to redundant calculations.
