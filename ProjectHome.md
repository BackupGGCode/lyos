# **Summary** #

An Open Source Operating System written with ASM and C.

# **Sys\_Calls** #

|**Name**|**Prototype**|**Description**|
|:-------|:------------|:--------------|
|Open  | `int open (const char *pathname, int flags);`| Open a file|
|Close | `int close (int fd);` | Close a file descriptor given by fd|
|Read  | `int read (int fd, void *buf, int count);`| Read data from the file descriptor given by fd to buf|
|Write | `int write (int fd, const void *buf, int count);` | Write data in buf to the file descriptor|
|Fork  | `int fork ();`| Create a new process|
|Wait  | `int wait (int * status);`| Wait for a child process until it terminates|
|Exit  | `void exit (int status);` | Terminate a process|