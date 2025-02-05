# Matrix Transformation and Computation in C

## Overview
This C program performs matrix transformations and computations based on a given square matrix of size **n × n**. The program follows these steps:

1. Accepts an **n × n** matrix from the user.
2. Constructs a new matrix **b[][]** by multiplying corresponding elements from the original matrix and its flipped counterpart.
3. Constructs another matrix **c[][]** by applying transformations on **b[][]**.
4. Outputs the final transformed matrix.

---

## How It Works

### **Step 1: Input the Matrix**
- The user enters the order `n` (size of the square matrix).
- The user provides `n × n` elements for the matrix.

### **Step 2: Processing**
- **Matrix `b[][]`** is computed using:
  ```
  b[i][j] = a[n-i-1][j] * a[i][j]
  ```
- **Matrix `c[][]`** is computed using:
  ```
  c[i][j] = b[i][n-j-1] * b[i][j]
  ```

### **Step 3: Output the Final Matrix**
- The final transformed **c[][]** matrix is displayed.

---

## Input/Output Example

### **Input:**
```
Enter the value of n: 3
Enter the values of the matrix:
1 2 3
4 5 6
7 8 9
```

### **Processing:**
1. Construct **b[][]** from **a[][]**:
   ```
   b[i][j] = a[n-i-1][j] * a[i][j]
   ```
   ```
   7 16 27
   16 25 36
   7 16 27
   ```

2. Construct **c[][]** from **b[][]**:
   ```
   c[i][j] = b[i][n-j-1] * b[i][j]
   ```
   ```
   189 256 189
   576 625 576
   189 256 189
   ```

### **Output:**
```
189    256    189
576    625    576
189    256    189
```

---

## How to Compile and Run
1. Save the code in a file, e.g., `matrix_transform.c`
2. Open a terminal or command prompt and navigate to the file location.
3. Compile the program using:
   ```
   gcc matrix_transform.c -o matrix_transform
   ```
4. Run the program:
   ```
   ./matrix_transform
   ```
5. Enter the values as prompted and view the transformed matrix output.

---

## Key Features
✅ Accepts dynamic input size (`n × n` matrix).  
✅ Uses **2D arrays** for efficient matrix processing.  
✅ Implements **mathematical transformations** for data processing.  
✅ Uses **loops** efficiently for matrix traversal.  

---

## Limitations
⚠ The program assumes valid integer inputs.  
⚠ Memory allocation is static, which might cause stack overflow for very large matrices.  

---

## Contributors
- **Adarsh Ladi**  

---


