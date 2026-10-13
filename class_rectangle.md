# Rectangle Class Program

This project is a simple C++ example that demonstrates object-oriented programming using a `Rectangle` class. It shows how to encapsulate data, define methods, and use a constructor with default values.

## Files

- `class_rectangle.cpp` – Contains the full C++ program.

## What the program does

The program defines a `Rectangle` class with the following features:

- Private member variables:
  - `length`
  - `width`
- Public methods:
  - `getLength()` and `getWidth()` to retrieve dimensions
  - `setLength()` and `setWidth()` to update dimensions
  - `getArea()` to calculate the area
  - `getPerimeter()` to calculate the perimeter
- A constructor with default values:
  - `length = 5.0`
  - `width = 3.0`

The `main()` function creates a rectangle, changes its dimensions, and displays:

- the updated length
- the updated width
- the calculated area
- the calculated perimeter

## Example output

```cpp
Length: 7
Width: 4
Area: 28
Perimeter: 22
```

## How to compile and run

Using a C++ compiler such as `g++`:

```bash
g++ class_rectangle.cpp -o rectangle
./rectangle
```

This program is useful for learning:

- class design
- encapsulation
- constructors
- accessor and mutator methods
- basic arithmetic operations in C++
