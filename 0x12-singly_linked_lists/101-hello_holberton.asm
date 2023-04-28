section .data
    format db `Hello, Holberton\n`, 0

section .text
    global main
    extern printf

main:
    mov edi, format  ; Move the address of "format" to the EDI register
    xor eax, eax     ; Set the EAX register to zero
    call printf      ; Call the printf function with the argument in EDI
    mov eax, 0       ; Set the return value to 0
    ret              ; Return from the function
