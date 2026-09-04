/* Infinix Hot 70 (X6895) – MediaTek Helio G99 (MT6789)
 * GKI kernel 6.12.38-android16-5
 * Build: X6895-16.2.0.150SP09(OP006PF001AZ)
 *
 * Offsets extracted from GKI vmlinux build ab14355190.
 * Ashmem implemented in Rust (ashmem_rust); vtable wrappers used.
 */
OFFSETS_ENTRY("6.12.38-android16-5-gb575a0b6e647-ab14355190-4k",
  .kernel_phys_load=0x40000000, STRUCT_OFFSETS_6_12,
  .off_init_task=0x0240CF00, .off_init_cred=0x02422C70, .off_init_uts_ns=0x02594D88,
  .off_empty_zero_page=0x02635000, .off_root_task_group=0x0263D580,
  .off_selinux_enforcing=0x026894D0, .off_kptr_restrict=0x0240B638,
  .off_selinux_blob_sizes=0x018474E8, .off_security_hook_heads=0,
  .off_kmalloc_caches=0x018414C0, .off_anon_pipe_buf_ops=0x0121EE48,
  .off_ashmem_misc_fops=0, .off_ashmem_fops=0x026B6A98,
  .off_ashmem_ioctl=0x00D85B44, .off_ashmem_compat_ioctl=0x00D85A14,
  .off_ashmem_mmap=0x00D85A90, .off_ashmem_open=0x00D85AB4,
  .off_ashmem_release=0x00D85BE4, .off_ashmem_show_fdinfo=0x00D859EC,
  .off_configfs_read_iter=0x00515310, .off_configfs_bin_write_iter=0x005158BC,
  .off_copy_splice_read=0x00491754, .off_noop_llseek=0x0043EAD0,
  .off_cap_capable_active=0x006B3F44,
  .off_slide_nfulnl_logger=0x024021A0, .off_slide_loggers_0_1=0x024020E0,
  .off_slide_boot_id=0x026AA868,

  .off_system_unbound_wq=0x01841250, .off_call_usermodehelper_exec_work=0x000F7F44,
),
