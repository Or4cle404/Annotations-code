# Splint Annotation Examples in C

This repository contains simple and practical C code examples demonstrating the use of **Splint (Secure Programming Lint)** annotations. Splint is a static code analysis tool that helps detect common programming mistakes in C, especially those related to pointer usage, memory management, and contract-based programming.

---

## What is Splint?

Splint is a tool for statically checking C programs for security vulnerabilities and coding mistakes. It extends the standard C syntax with special **annotations** (written as comments) that describe properties of functions, pointers, and variables.

---

## Annotations Covered

| Annotation       | Purpose                             |
|------------------|--------------------------------------|
| `/*@null@*/`     | Pointer may be null                 |
| `/*@notnull@*/`  | Pointer must not be null            |
| `/*@in@*/`       | Input-only parameter                |
| `/*@out@*/`      | Output-only parameter               |
| `/*@temp@*/`     | Temporary pointer                   |
| `/*@only@*/`     | Caller owns the memory; must free it |
| `/*@returned@*/` | Returned pointer is same as input   |
| `/*@requires@*/` | Precondition before function call   |
| `/*@ensures@*/`  | Postcondition after execution       |

---

##  How to Use

1. **Install Splint** (if not already installed):
   ```bash
   sudo apt install splint
   ```

2. **Compile normally**
   ```bash
   gcc filename.c -o filename
   ./filename
   ```

3. **Run Splint to analyze the code**
   ```bash
   splint filename.c
   ```
