# Minishell

Welcome to Minishell, a collaborative project at 42 School! This project is about creating a basic shell in C, handling command execution, environment management, and interactive user input. Working on Minishell introduced complex concepts like parsing, tokenization, and process handling, and it was a great experience working alongside a teammate to bring everything together.

## Project Overview

Minishell replicates the behavior of a simplified Unix shell, allowing users to execute commands, manage processes, and handle redirections. This project was completed in collaboration with a partner, with responsibilities divided to make the most of our skills. My main contributions were in building the **lexer**, **parser**, and **executor** components, which handle the core processes of command tokenization, syntax analysis, and command execution.

### Key Responsibilities

- **Lexer**: Tokenizes input commands into manageable pieces for further processing.
- **Parser**: Analyzes the structure of the tokens to validate syntax and build command structures.
- **Executor**: Manages command execution, handling built-in commands and redirections.

## Usage

To use Minishell, compile the code and launch the shell. Minishell will accept standard shell commands, along with redirections and pipes, and execute them in a way similar to a basic Unix shell.

## Compilation

To compile Minishell, run:
```bash
make
```

This will create an executable for the shell. Launch the shell to start using it interactively.

---

Minishell was a challenging project that provided a deeper dive into shell programming, parsing techniques, and process management. It was a rewarding experience working with a teammate and building each component step by step!
