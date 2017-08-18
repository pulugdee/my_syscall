#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/syscalls.h>
#include<linux/linkage.h>


asmlinkage int sys_myhello(void)
{
	printk(KERN_EMERG "my hello syscall is working ");
	return 0;
}
