#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init hello_init(void)
{
   pr_alert("Hello world! It works))");
   return 0;
}

static void __exit hello_exit(void)
{
   pr_alert("Good buy world, I go to sleep -_-");
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("My the best module");
MODULE_AUTHOR("William Shakespeare by Yakushov");
