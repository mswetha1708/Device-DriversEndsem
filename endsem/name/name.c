//M Swetha
//CED17I012

#include<linux/module.h>

int init_module(void)
{
    printk("Module name inserted\n");
    printk(" My name is Swetha Mohan.My nickname in all social platforms is mswetha1708.Feel free to connect with me.\n");
    return 0;
}

void cleanup_module(void)
{
    printk("module name removed.See you next time.\n");
}

MODULE_LICENSE("GPL");
