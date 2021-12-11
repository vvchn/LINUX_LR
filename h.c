#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("LR1");
MODULE_AUTHOR("vvchn");

static char *p1 = "create";
module_param(p1, charp, 0644);
MODULE_PARM_DESC(p1, "Recipient of the hello message");

static char *p2 = " and load";
module_param(p2, charp, 0644);
MODULE_PARM_DESC(p2, "Recipient of the hello message");

static int p = 0;
module_param(p, int, 0644);
MODULE_PARM_DESC(p, "Repeat message p times");

static int __init hi(void)
{
	int i;
	
	if (!p)
	pr_alert("Hello youtube! Today I will show you how to... I forgot... \n");
	return(0);

	for (i = 0; i < p; i++) 
	pr_alert("(%d) Hello youtube! Today I will show you how to %s%s your own kernel module. \n", i, p1, p2);
	
	return (0);
}

static void __exit bye(void)
{
	if (!p)
	pr_alert("It's just a burning memory...\n");
	else
	pr_alert("Thanks for watching! Subscribe on my channel and share this video with your friends!\n");
}

module_init(hi);
module_exit(bye);
