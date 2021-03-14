# my_fgets
Read content line by line

## Objectives

> **_int get\_next\_line(int fd, char \**line)_**

* Calling the function in a loop will read the text available on a file descriptor one line at a time until EOF.
* Return **1** when a line has been read, **0** when EOF has been reached, **-1** when an error happened.
* Able to manage multiple file descriptors.

## Implementation

* **_get\_next\_line_** will read a file with the amount of _BUFFER\_SIZE_ and determine if the string is a line or not.
- If the string read is not a line, a function will read a file with same amount again.

```c
static char *saved[OPEN_MAX]
```

* _**OPEN\_MAX**_ defined in _<limits.h>_, is the maximum number of files that one process can have open at any one time.
* Used double pointer to manage strings from **n** files.
* Will hold lines read until the program ends.

```c
char buf[BUFFER_SIZE + 1]
```

* Temporary array that will hold a string read with the amount of _BUFFER\_SIZE_.
* Will be joined with saved string.

![gnl-3](https://user-images.githubusercontent.com/54715744/111077315-92580380-8533-11eb-9b5e-4ff608dd02f6.png)

1. Check if static variable _saved[fd]_ includes new line.
-> If _yes_, copy a string in _saved[fd]_ until a new line to a given variable _line_.
-> Then, _saved[fd]_ will be overwritten into _saved[fd]_ after a new line.
2. Read a file with the amount of BUFFER\_SIZE.
-> Join existing _saved[fd]_ with _buf_.
-> Return to _step 1_.


## More explainations
https://velog.io/@ljiwoo59/getnextline
