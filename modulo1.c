#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void){
	printk( KERN_INFO "Hola Mundo 1. \n  " );

		//other than 0 means error on " init_module"
		
		return 0; 

}

void cleanup_module(void){

	printk( KERN_INFO "Adios Munod 1. \n "  );

}