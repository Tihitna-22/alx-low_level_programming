global _start

section .text:
_start:	
	mov eax, 0x4		; Set the function to call (1 is write)
	mov edx, 1		; Set the first argument of write (fd 1)
	mov ecx, msg		; Set the 2nd argument, the text to write
	mov edx, msglen         ; Set the 3rd argument, lengh to write
	syscall			; Call write w/ previously defined things

	mov eax, 0x1		; Set the function (syscall) exit (id 60)
	mov edx, 0		; Set the exit return to be 0
        syscall			; Execute the syscall exit

section .data:
msg: db	"Hello, Holberton", 0xA	; Assign "Hello, world!\n" to the var msg
msglen: equ $-msg		; Assign len(msg) to msg.len
