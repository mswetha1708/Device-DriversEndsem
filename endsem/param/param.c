//M Swetha
// CED17I012
#include<linux/module.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>
static int count = 5;
int init_module(void)
{
	printk("Module param inserted");
	printk("Count = %d\n",count);
	return 0;
}
void cleanup_module(void)
{
	printk("module param removed.See you next time.\n");
}
module_param(count,int,0);
MODULE_LICENSE("GPL");

