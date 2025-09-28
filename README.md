# CPP-16-ERROR-HANDLING

## Aim
To study and implement the concept of **Exception Handling** in C++.

## Software
- Visual Studio Code (VS Code)

## Objectives
- Understand what exceptions are and why they occur.
- Learn how to use `try`, `throw`, and `catch` in C++.
- Explore how exception handling improves program reliability.
- Differentiate between normal program termination and exception-based termination.
- Implement exception handling for common errors such as division by zero and underage voting.

## Algorithm 

    1. Identify risky code.
    2. Wrap risky code in a try block.
    3. Use throw to raise exceptions when errors occur.
    4. Use one or more catch blocks to handle exceptions.
    5. Handle the exception (e.g., log, notify, recover).
    6. Continue program execution after the catch block.

## Theory

### What is Exception Handling?
- Exceptions are **runtime anomalies** that interrupt the normal flow of a program.  
- In C++, exception handling provides a structured way to detect, throw, and handle errors so that programs can **fail gracefully** instead of crashing.

### Keywords in C++
1. **try**  
   - A block of code that might generate an exception.
2. **throw**  
   - Used to raise an exception when an error condition occurs.
3. **catch**  
   - A block of code that handles the exception if thrown.

### How it Works
1. Program execution enters a `try` block.  
2. If an error is detected, a `throw` statement is executed.  
3. Control jumps to the nearest matching `catch` block.  
4. If no handler is found, the program terminates abnormally.

### Example Situations
- Division by zero.  
- Invalid input formats.  
- Underage validation for voting.  
- File handling errors (file not found, permission denied).

### Stack Unwinding
- When an exception is thrown, the program **unwinds the call stack**.  
- Destructors of local objects are automatically called during this process, ensuring resource cleanup.  
- This is why C++ exception handling works well with **RAII** (Resource Acquisition Is Initialization).

### Advantages
- Separates **error handling** from normal logic.  
- Prevents abnormal program termination.  
- Provides **flexible handling** using multiple `catch` blocks for different exception types.  
- Enhances maintainability and readability.


---

## Conclusion
- Exception handling in C++ is a **powerful mechanism** to deal with runtime errors effectively.  
- It ensures that errors such as invalid input, division by zero, or underage voting do not cause the program to crash abruptly.  
- By using `try`, `throw`, and `catch`, programmers can **separate error-handling logic** from normal program logic, making applications more robust and user-friendly.  
- Properly structured exception handling improves the **reliability, maintainability, and clarity** of C++ programs.  
- In real-world development, exceptions should be used for **exceptional conditions only**, not for routine checks, to balance performance with safety.  

---


