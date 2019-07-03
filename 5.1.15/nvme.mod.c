#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x52f4aee1, "module_layout" },
	{ 0x8487a2b6, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x703c19ba, "dma_direct_unmap_sg" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xaf523463, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x376e319c, "blk_cleanup_queue" },
	{ 0x1a882ca, "pci_free_irq_vectors" },
	{ 0xc548d1a0, "nvme_reset_ctrl" },
	{ 0x9562d82a, "param_get_int" },
	{ 0x96aae34, "param_ops_int" },
	{ 0x962de5ab, "pci_sriov_configure_simple" },
	{ 0xa76c3a74, "device_release_driver" },
	{ 0x1bf42f2c, "dma_set_mask" },
	{ 0xeb7066d, "nvme_stop_ctrl" },
	{ 0x21afe423, "pci_disable_device" },
	{ 0xda84832f, "nvme_unfreeze" },
	{ 0x87f4ccd1, "blk_mq_tagset_busy_iter" },
	{ 0x54970d18, "blk_mq_start_request" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0x1d1687, "nvme_shutdown_ctrl" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9832513f, "nvme_set_queue_count" },
	{ 0xf3a55797, "blk_rq_map_integrity_sg" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x492b2ac4, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0xed64c16a, "blk_mq_tag_to_rq" },
	{ 0xde168b5d, "nvme_complete_async_event" },
	{ 0x4b024bb2, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8c13c800, "nvme_kill_queues" },
	{ 0x4ebe464f, "dma_free_attrs" },
	{ 0xb52b4dc3, "param_set_int" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x1463dd2d, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x19e87262, "blk_mq_update_nr_hw_queues" },
	{ 0x44ece646, "pv_ops" },
	{ 0xa0dbf6b0, "dma_set_coherent_mask" },
	{ 0x896cf46e, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49ffe76a, "pci_set_master" },
	{ 0x7f0f344e, "pci_alloc_irq_vectors_affinity" },
	{ 0x19da4926, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x60756700, "pci_enable_pcie_error_reporting" },
	{ 0x2548c032, "__cpu_possible_mask" },
	{ 0x612be41f, "nvme_enable_ctrl" },
	{ 0x7109c3a9, "pci_restore_state" },
	{ 0x86cc0b5d, "blk_put_queue" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x802477ef, "sysfs_remove_file_from_group" },
	{ 0x564405cb, "__cpu_online_mask" },
	{ 0x51d4d35d, "blk_mq_free_tag_set" },
	{ 0x18513e77, "nvme_init_identify" },
	{ 0x9a532af7, "nvme_remove_namespaces" },
	{ 0x17295d2b, "pci_read_config_word" },
	{ 0x8de9a3c3, "dma_alloc_attrs" },
	{ 0xcf7a2809, "pci_device_is_present" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x2276db98, "kstrtoint" },
	{ 0xaa4ae163, "blk_execute_rq_nowait" },
	{ 0x58213f60, "pci_request_irq" },
	{ 0x63151ccd, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2092eb7b, "blk_get_queue" },
	{ 0x249e610b, "nvme_init_ctrl" },
	{ 0xbd2511a, "pci_select_bars" },
	{ 0x56e5716f, "_dev_info" },
	{ 0xa1fe8a65, "kmem_cache_alloc_node_trace" },
	{ 0xb836868b, "nvme_change_ctrl_state" },
	{ 0x553b3b68, "blk_mq_free_request" },
	{ 0x54085d0d, "__tracepoint_nvme_sq" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9c122bcf, "mempool_create_node" },
	{ 0xc234b6e9, "pci_free_irq" },
	{ 0x56a88fd3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x959dcc08, "nvme_cleanup_cmd" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x287ff31b, "nvme_cancel_request" },
	{ 0xbcc8e7e6, "nvme_wait_freeze" },
	{ 0xb9c788ff, "blk_mq_pci_map_queues" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xe929075d, "blk_rq_count_integrity_sg" },
	{ 0x9eda5bd9, "blk_rq_map_sg" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xa4fc0b01, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5cc46df7, "pci_unregister_driver" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x2a60c2d7, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcac2ecd8, "nvme_disable_ctrl" },
	{ 0x5a03f77f, "get_device" },
	{ 0x3524548, "pci_irq_vector" },
	{ 0x64b62862, "nvme_wq" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0xb3269d31, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xd841bce1, "dma_direct_map_sg" },
	{ 0xf1f4ecc5, "nvme_submit_sync_cmd" },
	{ 0x50b2e094, "blk_mq_quiesce_queue" },
	{ 0x62939a78, "blk_mq_unquiesce_queue" },
	{ 0xedc03953, "iounmap" },
	{ 0xd5f52a95, "nvme_start_ctrl" },
	{ 0x3510b0d4, "__pci_register_driver" },
	{ 0x46551c60, "nvme_start_freeze" },
	{ 0x96848186, "scnprintf" },
	{ 0xe1a00ecf, "nvme_setup_cmd" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x6169ee19, "nvme_alloc_request" },
	{ 0xa796f6d0, "nvme_start_queues" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x2e0d2f7f, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xccb777a4, "pci_enable_device_mem" },
	{ 0x8488070e, "nvme_wait_freeze_timeout" },
	{ 0xf442d927, "pci_release_selected_regions" },
	{ 0xe300fee3, "nvme_reset_ctrl_sync" },
	{ 0xd4efe8cc, "pci_request_selected_regions" },
	{ 0xd152a4c7, "nvme_complete_rq" },
	{ 0xc7e4aa57, "dma_pool_create" },
	{ 0x3f70ad92, "param_ops_uint" },
	{ 0xcc3e9804, "nvme_uninit_ctrl" },
	{ 0xabf0cfd0, "dma_ops" },
	{ 0x715d5dd, "pci_save_state" },
	{ 0x4198ca95, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core";

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00001F1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "66E8DF0A5D30B2DE0E87074");
