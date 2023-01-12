# X86 AND X86_64 ASSEMBLY STUFF 
Link Source: https://cs.lmu.edu/~ray/notes/x86assembly/
Assemble and build using this line:

nasm -felf64 helloworld.asm && ld helloworld.o && ./helloworld.out

# ASSEMBLY VSCODE FOLDER SETTINGS
This folder contains settings only for x86 and x86_64 Assembly

Instruction Link:
https://medium0.com/@muhammadmeeran2003/how-to-set-up-assembly-language-on-visual-studio-code-2021-587a7b01c9a1

Open the file You want to assemble in Vscode and press CTRL + Shift + B. This will create a file ending in extension “.o” and a simple file with no extension.

This will install gdb debugger for debugging your assembly Code.

-- ext install DamianKoper.gdb-debug --