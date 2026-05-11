#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcbae5412, "__const_udelay" },
	{ 0xe8213e80, "_printk" },
	{ 0xe5c2991b, "__pci_register_driver" },
	{ 0x4e54d6ac, "cdev_del" },
	{ 0x0bc5fb0d, "unregister_chrdev_region" },
	{ 0x201d9cdc, "pci_disable_device" },
	{ 0xabfbaeb0, "pci_iounmap" },
	{ 0xef036183, "pci_release_regions" },
	{ 0x9dd4105e, "free_irq" },
	{ 0x91d6d561, "dma_free_attrs" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x00f6575c, "pci_disable_msi" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x2b6f53b9, "pci_unregister_driver" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xfaabfe5e, "kmalloc_caches" },
	{ 0xc064623f, "__kmalloc_cache_noprof" },
	{ 0x9f222e1e, "alloc_chrdev_region" },
	{ 0xd5f66efd, "cdev_init" },
	{ 0x8ea73856, "cdev_add" },
	{ 0x2437d1be, "pci_enable_device" },
	{ 0x9b1de7cb, "_dev_info" },
	{ 0xa44acfeb, "pci_request_regions" },
	{ 0x201d9cdc, "pci_set_master" },
	{ 0x0b432bcc, "pci_enable_msi" },
	{ 0x3c67a00d, "pci_read_config_byte" },
	{ 0x9ef1423b, "dma_set_mask" },
	{ 0x9b1de7cb, "_dev_err" },
	{ 0x9ef1423b, "dma_set_coherent_mask" },
	{ 0x97dd6ca9, "ioremap" },
	{ 0x5403c125, "__init_waitqueue_head" },
	{ 0x7039d3ca, "dma_alloc_attrs" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x27683a56, "memset" },
	{ 0x224a53e7, "get_random_bytes" },
	{ 0xfad8f384, "iowrite32" },
	{ 0x680628e7, "ktime_get_real_ts64" },
	{ 0x16ab4215, "__wake_up" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xd272d446, "schedule" },
	{ 0x0db8d68d, "prepare_to_wait_event" },
	{ 0xc87f4bab, "finish_wait" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0xd272d446, "__fentry__" },
	{ 0x2719b9fa, "const_current_task" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x7e2232fb, "ioread32" },
	{ 0xbebe66ff, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xcbae5412,
	0xe8213e80,
	0xe5c2991b,
	0x4e54d6ac,
	0x0bc5fb0d,
	0x201d9cdc,
	0xabfbaeb0,
	0xef036183,
	0x9dd4105e,
	0x91d6d561,
	0xcb8b6ec6,
	0x00f6575c,
	0x90a48d82,
	0x2b6f53b9,
	0xbd03ed67,
	0xfaabfe5e,
	0xc064623f,
	0x9f222e1e,
	0xd5f66efd,
	0x8ea73856,
	0x2437d1be,
	0x9b1de7cb,
	0xa44acfeb,
	0x201d9cdc,
	0x0b432bcc,
	0x3c67a00d,
	0x9ef1423b,
	0x9b1de7cb,
	0x9ef1423b,
	0x97dd6ca9,
	0x5403c125,
	0x7039d3ca,
	0xbd03ed67,
	0x27683a56,
	0x224a53e7,
	0xfad8f384,
	0x680628e7,
	0x16ab4215,
	0x7851be11,
	0x7a5ffe84,
	0xd272d446,
	0x0db8d68d,
	0xc87f4bab,
	0xd272d446,
	0x092a35a2,
	0x092a35a2,
	0xd272d446,
	0x2719b9fa,
	0xd272d446,
	0x7e2232fb,
	0xbebe66ff,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__const_udelay\0"
	"_printk\0"
	"__pci_register_driver\0"
	"cdev_del\0"
	"unregister_chrdev_region\0"
	"pci_disable_device\0"
	"pci_iounmap\0"
	"pci_release_regions\0"
	"free_irq\0"
	"dma_free_attrs\0"
	"kfree\0"
	"pci_disable_msi\0"
	"__ubsan_handle_out_of_bounds\0"
	"pci_unregister_driver\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"alloc_chrdev_region\0"
	"cdev_init\0"
	"cdev_add\0"
	"pci_enable_device\0"
	"_dev_info\0"
	"pci_request_regions\0"
	"pci_set_master\0"
	"pci_enable_msi\0"
	"pci_read_config_byte\0"
	"dma_set_mask\0"
	"_dev_err\0"
	"dma_set_coherent_mask\0"
	"ioremap\0"
	"__init_waitqueue_head\0"
	"dma_alloc_attrs\0"
	"__ref_stack_chk_guard\0"
	"memset\0"
	"get_random_bytes\0"
	"iowrite32\0"
	"ktime_get_real_ts64\0"
	"__wake_up\0"
	"__SCT__might_resched\0"
	"init_wait_entry\0"
	"schedule\0"
	"prepare_to_wait_event\0"
	"finish_wait\0"
	"__stack_chk_fail\0"
	"_copy_from_user\0"
	"_copy_to_user\0"
	"__fentry__\0"
	"const_current_task\0"
	"__x86_return_thunk\0"
	"ioread32\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001172d0000E003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "30150F06C7DA3AC323F52CF");
