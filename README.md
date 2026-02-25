📚 Libft - My Very First Own Library

📝 Description
The Libft project is a custom-built collection of standard C library functions, plus extra utilities for string manipulation, memory management, and linked list handling.
The primary goal is to create a personal library (libft.a) that serves as a permanent toolkit for all future C projects in the curriculum. This project provides a deep dive into:
Data Structures: Building and navigating lists.
Memory Allocation: Mastering the difference between the Stack and the Heap.
Low-Level Logic: Understanding the inner workings of the C Standard Library (Libc).

🛠️ Part 1: Libc ReimplementationsThese functions mirror the behavior of the standard C library but are prefixed with ft_.

ft_isalpha,Checks for an alphabetic character.

ft_isdigit,Checks for a digit (0 through 9).

ft_strlen,Calculates the length of a string.

ft_memset,Fills memory with a constant byte.

ft_bzero,Zeroes out a byte string.

ft_memcpy,Copies a memory area.

ft_memmove,Copies memory area (safely handles overlaps).

ft_strlcpy,Size-bounded string copying.

ft_atoi,Converts a string to an integer.

ft_calloc,Allocates memory and initializes it to zero.

ft_strdup,Creates a duplicate of an existing string.

🚀 Part 2: Additional Utilities

These functions provide extra functionality not found in the standard Libc.

ft_substr: Returns a specific substring from a string.

ft_strjoin: Concatenates two strings into a brand-new one.

ft_strtrim: Trims specific characters from the start and end of a string.

ft_split: Splits a string into an array of strings using a delimiter.

ft_itoa: Converts an integer into a string.

ft_strmapi: Applies a function to each character (creating a new string).

ft_putchar_fd: Outputs a single character to a specific file descriptor.

🔗 Part 3: Linked List Manipulation

Using a custom t_list structure to manage dynamic data:

ft_lstnew: Creates a new list element.

ft_lstadd_front: Adds an element to the beginning of the list.

ft_lstsize: Counts the total number of elements in the list.

ft_lstlast: Returns the last element of the list.

ft_lstadd_back: Adds an element to the end of the list.

ft_lstclear: Deletes and frees an entire list.

⚙️ Technical Considerations
No Global Variables: Strictly forbidden to ensure thread safety and modularity.
Static Functions: Used for helper functions to keep the scope restricted to the specific file.
Memory Management: All heap allocations (malloc) are carefully managed to ensure zero leaks.
Compilation: Every .c file is compiled with -Wall -Wextra -Werror.
