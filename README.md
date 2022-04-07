
## Description
In this repository you will find a simple shell done in a project team for Holberton School.
This shell works on : interactive and non interactive mode. 

## Usage
 EXAMPLE: If you type "ls | wc" in your shell:
 * fd1 = command(0, 1, 0), with args[0] = "ls"
 * fd3 = command(fd2, 0, 1), with args[0] = "wc"
 * So if 'command' returns a file descriptor, the next 'command' has this
 * descriptor as its 'input'.

If you would like to have this program you need to clone this repository:
```
git clone https://github.com/Sb0009/simple_shell/tree/master
```
## Compilation
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
After this Compilation you need to execute this command:
```
$ ./hsh
```
## Interactive-mode
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
## Non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c mode_ls_
$
$ cat mode_ls
/bin/ls
/bin/ls
$
$ cat mode_ls | ./hsh
hsh main.c shell.c mode_ls
hsh main.c shell.c mode_ls
$
```
## :gem: File description :gem:
| File | Description | Flowcharts |
| :---: | :---: | :---: |



-  FLOWCHART-SHELL [drawio](https://app.diagrams.net/)

 <h1 style="color: crimson;text-align: center;"> UNIX Operating System -<p><img src="https://pluspng.com/img-png/github-octocat-png--896.gif" alt="github avatar" width="62px"></p>  Simple_Shell clone project </h1>

## AuthorS
* **Gregoire Coudrin** - [greg coudrin](https://github.com/Gregcoudrin)
* **Raphael Chemouni** - [raphaelchemouni](https://github.com/rafyc)
* **Siham Badyine** -    [Sb0009](https://github.com/Sb0009)