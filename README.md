# Minishell [![jaeskim's 42Project Score](https://badge42.herokuapp.com/api/project/jlensing/minishell)](https://github.com/JaeSeoKim/badge42)

A minimalistic shell based on bash

It's able to launch a executable based on relative, absolute path or the PATH variable

# Builtins
* echo with option -n
* cd with relative or absolute path
* pwd without any options
* export without options
* unset without options
* env without options or arguments
* exit without options

# Input features
* ; seperates commands
* ' and " work as in bash with the exception of multiline commands
* < > >> work as in bash except for file descriptor aggregation
* | work as in bash
* Environmental variables ($ followed by characters) work as in bash
* $? works as in bash
* ctrl-C, ctrl-D ctrl-\ work as in bash
* up and down arrows to scroll trough history

![Screenshot](images/Screenshot.png)