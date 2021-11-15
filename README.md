# Get Next Line (GNL)  :tractor:

<p align="center">
	<b><i>Reading a line on a fd is way too tedious</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/surfi89/get_next_line?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/surfi89/get_next_line?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/surfi89/get_next_line?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/surfi89/get_next_line?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/surfi89/get_next_line?color=green" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project

> _The aim of this project is to make you code a function that returns a line, read from a file descriptor._

	You will understand how files are opened, read and closed in an OS,
	and how they are interpreted by a programming language for further analysis.
	This task is crucial to understand for a future programmer since much of the time is based
	on manipulating files for data management and persistence.
	This project consists of coding a function that returns one line at a time from a text file.

For more detailed information, look at the [**subject of this project**](https://github.com/Surfi89/42cursus/tree/main/Subject%20PDFs).The aim of this project is to make you code a function that **returns a line
ending with a newline, read from a file descriptor.**

This project will not only allow you to add a very convenient function to your collection,
but it will also allow you to learn a highly interesting new concept in C programming:
**"static variables"**

### Function Prototype
```c
char *get_next_line(int fd);
```
## Compilation

**GNL Mandatory Part**

Your program must compile with the flag -D **BUFFER_SIZE=xx**. which will be used
as the buffer size for the read calls in your get_next_line.

Make sure that your function behaves well when it reads from a file and when it
reads from the standard input.

 :point_right: Locate in the **libft** folder.

**GNL with files**
```bash
gcc tests/main.c -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c

./a.out tests/files/part1_test01_with_lines
```

**GNL with standard input (stdin)**
```bash
gcc tests/main_stdin.c -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c

./a.out
```

**GNL Bonus Part**
```bash
gcc tests/main_bonus.c -g -Wall -Wextra -Werror -D BUFFER_SIZE=1 get_next_line_bonus.c get_next_line_utils_bonus.c

./a.out
```

## Points to understand in GNL

