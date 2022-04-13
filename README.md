## Description 👩‍🎓👨‍🎓👨‍🎓📃
In this repository you will find a simple shell done in a project team for Holberton School.
This shell works on : interactive and non interactive mode.

- read, parse, fork, exec, wait.
* `builtin` : "exit", "help
"
## Usage
 EXAMPLE: If you type ls in your shell:

 * So if 'command' returns a file descriptor, the next 'command' has this
 * descriptor as its 'input'.

If you would like to have this program you need to clone this repository:
```
git clone https://github.com/Rafyc/simple_shell/tree/master
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


* `stdin`:  stdin, used to send data to the child process
* `stdout`: stdout, used for receiving data from the child process
* `stderr`: stderr, used for communicating logs & errors
* `childProcess`: the process instance created via `fork()`
 




## Algorithm (see flowchart)

<p><img src="flowchart/FlowChart.jpg" alt="flowchart" width="400 px"></p>



  ##  Running
Linux O.S Ubuntu
<h1 style="color: crimson;text-align: center;">

## AuthorS
* **Gregoire Coudrin** - [Greg Coudrin](https://github.com/gregcdjm)[![Linkedin](https://img.shields.io/badge/linked-in-369?style=flat-square&logo=linkedin&logoColor=white&color=blue)](https://www.linkedin.com/in/grégoire-coudrin-810a66230/)
* **Raphael Chemouni** - [RaphaelChemouni](https://github.com/rafyc)[![Linkedin](https://img.shields.io/badge/linked-in-369?style=flat-square&logo=linkedin&logoColor=white&color=blue)](https://www.linkedin.com/in/raphael-chemouni)
* **Siham Badyine** -    [Sb0009](https://github.com/Sb0009)[![Linkedin](https://img.shields.io/badge/linked-in-369?style=flat-square&logo=linkedin&logoColor=white&color=blue)](https://www.linkedin.com/in/siham-badyine)
*READ THE [BLOG](https://medium.com/@sihambadyine/what-happens-when-you-bf018a0bc1f4)
