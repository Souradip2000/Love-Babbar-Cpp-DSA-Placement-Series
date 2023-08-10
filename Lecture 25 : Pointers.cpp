// every variable name is stored symbol table.
// it stores the names and maps it to the address of the memory block to the corresponding variable

// Address of Operator - &
// gives the address of the variable
// address is stored in hexadecimal format

// Pointer - int *ptr = &i
// always initialise a pointer as soon as it is declared; otherwise it will be a very bad practise as the pointer type variable will have a garbage memory address
// here prt and i will point to the same block of memory

// * operator : derefernceing operator

// size of any pointer will be 8 because it stores an address; might be it depends on compiler

// int *p = 0;    assigns null value
// if we try and access thiis pointer, it will give segmentation fault
