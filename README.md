*This project has been created as part of the 42 curriculum by asadqi*

# Description 

Libft is a fundamental project in the 42 curriculum that involves creating a personal C library. This library contains reimplementations of standard C library functions (libc) as well as additional utility functions that will serve as a foundation for future projects throughout the 42 cursus.
The project is divided into three main parts:

Part 1: Reimplementation of standard libc functions
Part 2: Additional utility functions not present in libc or implemented differently
Part 3: Functions for manipulating linked lists

The primary goal is to deeply understand how these fundamental functions work by implementing them from scratch, while learning proper memory management, string manipulation, and data structure handling in C.

# Instructions

Compilation
The library uses a Makefile with the following rules:

make        # Compiles the mandatory part and creates libft.a

make clean  # Removes object files (.o)

make fclean # Removes object files and the library (libft.a)

make re     # Recompiles everything from scratch

Compilation Flags
All source files are compiled with:
cc -Wall -Wextra -Werror

# Resources

Official Documentation:
	C Standard Library Reference
	Linux Man Pages
	GNU C Library Documentation

Memory Management & Debugging :
	Valgrind Documentation - Memory leak detection
	GDB Tutorial - GNU Debugger

# Library Functions Overview

Part 1 - Libc Functions
Character Classification & Conversion

ft_isalpha - Check if character is alphabetic
ft_isdigit - Check if character is a digit
ft_isalnum - Check if character is alphanumeric
ft_isascii - Check if character is ASCII
ft_isprint - Check if character is printable
ft_toupper - Convert character to uppercase
ft_tolower - Convert character to lowercase

String Functions

ft_strlen - Calculate string length
ft_strlcpy - Copy string with size limitation
ft_strlcat - Concatenate strings with size limitation
ft_strchr - Locate first occurrence of character in string
ft_strrchr - Locate last occurrence of character in string
ft_strncmp - Compare two strings up to n characters
ft_strnstr - Locate substring in string (with size limit)
ft_strdup - Duplicate a string (with malloc)

Memory Functions

ft_memset - Fill memory with constant byte
ft_bzero - Zero a byte string
ft_memcpy - Copy memory area
ft_memmove - Copy memory area (handles overlap)
ft_memchr - Scan memory for character
ft_memcmp - Compare memory areas
ft_calloc - Allocate and zero-initialize memory

Conversion Functions

ft_atoi - Convert string to integer

Part 2 - Additional Functions
String Manipulation

ft_substr - Extract substring from string
ft_strjoin - Concatenate two strings into new string
ft_strtrim - Trim characters from beginning and end of string
ft_split - Split string into array of strings by delimiter
ft_itoa - Convert integer to string

Function Application

ft_strmapi - Apply function to each character with index
ft_striteri - Apply function to each character by reference

Output Functions

ft_putchar_fd - Output character to file descriptor
ft_putstr_fd - Output string to file descriptor
ft_putendl_fd - Output string with newline to file descriptor
ft_putnbr_fd - Output integer to file descriptor

Part 3 - Linked List Functions

ft_lstnew - Create new list node
ft_lstadd_front - Add node at beginning of list
ft_lstadd_back - Add node at end of list
ft_lstsize - Count nodes in list
ft_lstlast - Get last node of list
ft_lstdelone - Delete and free one node
ft_lstclear - Delete and free all nodes
ft_lstiter - Apply function to each node's content
ft_lstmap - Apply function and create new list
