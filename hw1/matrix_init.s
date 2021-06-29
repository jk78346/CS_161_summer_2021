	.file	"matrix_init.c"
	.section	.text.unlikely,"ax",@progbits
.LCOLDB0:
	.text
.LHOTB0:
	.p2align 4,,15
	.globl	matrix_init
	.type	matrix_init, @function
matrix_init:
.LFB38:
	.cfi_startproc
	testl	%esi, %esi
	jle	.L3
	leal	-1(%rsi), %eax
	xorl	%esi, %esi
	leaq	4(,%rax,4), %rdx
	jmp	memset
	.p2align 4,,10
	.p2align 3
.L3:
	rep ret
	.cfi_endproc
.LFE38:
	.size	matrix_init, .-matrix_init
	.section	.text.unlikely
.LCOLDE0:
	.text
.LHOTE0:
	.section	.text.unlikely
.LCOLDB1:
	.section	.text.startup,"ax",@progbits
.LHOTB1:
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB39:
	.cfi_startproc
	rep ret
	.cfi_endproc
.LFE39:
	.size	main, .-main
	.section	.text.unlikely
.LCOLDE1:
	.section	.text.startup
.LHOTE1:
	.ident	"GCC: (Ubuntu 5.5.0-12ubuntu1~16.04) 5.5.0 20171010"
	.section	.note.GNU-stack,"",@progbits
