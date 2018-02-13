#pragma once

/* from arch/s390/kernel/syscalls.S */

#include "sanitise.h"
#include "syscall.h"
#include "syscalls/syscalls.h"

struct syscalltable syscalls_s390x[] = {
	{ .entry = &syscall_ni_syscall },	/* No 0 unused system call */
	{ .entry = &syscall_exit },
	{ .entry = &syscall_fork },
	{ .entry = &syscall_read },
	{ .entry = &syscall_write },
	{ .entry = &syscall_open },
	{ .entry = &syscall_close },
	{ .entry = &syscall_restart_syscall },
	{ .entry = &syscall_creat },
	{ .entry = &syscall_link },
	{ .entry = &syscall_unlink },
	{ .entry = &syscall_execve },
	{ .entry = &syscall_chdir },
	{ .entry = &syscall_ni_syscall },	/* No 13 unused system call */
	{ .entry = &syscall_mknod },
	{ .entry = &syscall_chmod },
	{ .entry = &syscall_ni_syscall },	/* No 16 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 17 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 18 unused system call */
	{ .entry = &syscall_lseek },
	{ .entry = &syscall_getpid },
	{ .entry = &syscall_mount },
	{ .entry = &syscall_oldumount },
	{ .entry = &syscall_ni_syscall },	/* No 23 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 24 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 25 unused system call */
	{ .entry = &syscall_ptrace },
	{ .entry = &syscall_alarm },
	{ .entry = &syscall_ni_syscall },	/* No 28 unused system call */
	{ .entry = &syscall_pause },
	{ .entry = &syscall_utime },
	{ .entry = &syscall_ni_syscall },	/* No 31 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 32 unused system call */
	{ .entry = &syscall_access },
	{ .entry = &syscall_nice },
	{ .entry = &syscall_ni_syscall },	/* No 35 unused system call */
	{ .entry = &syscall_sync },
	{ .entry = &syscall_kill },
	{ .entry = &syscall_rename },
	{ .entry = &syscall_mkdir },
	{ .entry = &syscall_rmdir },
	{ .entry = &syscall_dup },
	{ .entry = &syscall_pipe },
	{ .entry = &syscall_times },
	{ .entry = &syscall_ni_syscall },	/* No 44 unused system call */
	{ .entry = &syscall_brk },
	{ .entry = &syscall_ni_syscall },	/* No 46 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 47 unused system call */
	{ .entry = &syscall_signal },
	{ .entry = &syscall_ni_syscall },	/* No 49 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 50 unused system call */
	{ .entry = &syscall_acct },
	{ .entry = &syscall_umount },
	{ .entry = &syscall_ni_syscall },	/* No 53 unused system call */
	{ .entry = &syscall_ioctl },
	{ .entry = &syscall_fcntl },
	{ .entry = &syscall_ni_syscall },	/* No 56 unused system call */
	{ .entry = &syscall_setpgid },
	{ .entry = &syscall_ni_syscall },	/* No 58 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 59 unused system call */
	{ .entry = &syscall_umask },
	{ .entry = &syscall_chroot },
	{ .entry = &syscall_ustat },
	{ .entry = &syscall_dup2 },
	{ .entry = &syscall_getppid },
	{ .entry = &syscall_getpgrp },
	{ .entry = &syscall_setsid },
	{ .entry = &syscall_sigaction },
	{ .entry = &syscall_ni_syscall },	/* No 68 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 69 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 70 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 71 unused system call */
	{ .entry = &syscall_sigsuspend },
	{ .entry = &syscall_sigpending },
	{ .entry = &syscall_sethostname },
	{ .entry = &syscall_setrlimit },
	{ .entry = &syscall_ni_syscall },	/* No 76 unused system call */
	{ .entry = &syscall_getrusage },
	{ .entry = &syscall_gettimeofday },
	{ .entry = &syscall_settimeofday },
	{ .entry = &syscall_ni_syscall },	/* No 80 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 81 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 82 unused system call */
	{ .entry = &syscall_symlink },
	{ .entry = &syscall_ni_syscall },	/* No 84 unused system call */
	{ .entry = &syscall_readlink },
	{ .entry = &syscall_uselib },
	{ .entry = &syscall_swapon },
	{ .entry = &syscall_reboot },
	{ .entry = &syscall_ni_syscall },	/* No 89 unused system call */
	{ .entry = &syscall_mmap },		/* old_mmap */
	{ .entry = &syscall_munmap },
	{ .entry = &syscall_truncate },
	{ .entry = &syscall_ftruncate },
	{ .entry = &syscall_fchmod },
	{ .entry = &syscall_ni_syscall },	/* No 95 unused system call */
	{ .entry = &syscall_getpriority },
	{ .entry = &syscall_setpriority },
	{ .entry = &syscall_ni_syscall },	/* No 98 unused system call */
	{ .entry = &syscall_statfs },
	{ .entry = &syscall_fstatfs },
	{ .entry = &syscall_ni_syscall },	/* Non-existant ioperm svc */
	{ .entry = &syscall_socketcall },
	{ .entry = &syscall_syslog },
	{ .entry = &syscall_setitimer },
	{ .entry = &syscall_getitimer },
	{ .entry = &syscall_newstat },
	{ .entry = &syscall_newlstat },
	{ .entry = &syscall_newfstat },
	{ .entry = &syscall_ni_syscall },	/* No 109 unused system call */
	{ .entry = &syscall_lookup_dcookie },
	{ .entry = &syscall_vhangup },
	{ .entry = &syscall_ni_syscall },	/* Non-existant idle svc */
	{ .entry = &syscall_ni_syscall },	/* No 113 unused system call */
	{ .entry = &syscall_wait4 },
	{ .entry = &syscall_swapoff },
	{ .entry = &syscall_sysinfo },
	{ .entry = &syscall_ipc },		/* s390_ipc */
	{ .entry = &syscall_fsync },
	{ .entry = &syscall_sigreturn },
	{ .entry = &syscall_clone },
	{ .entry = &syscall_setdomainname },
	{ .entry = &syscall_newuname },
	{ .entry = &syscall_ni_syscall },	/* No 123 unused system call */
	{ .entry = &syscall_adjtimex },
	{ .entry = &syscall_mprotect },
	{ .entry = &syscall_sigprocmask },
	{ .entry = &syscall_ni_syscall },	/* Non-existant create_module svc */
	{ .entry = &syscall_init_module },
	{ .entry = &syscall_delete_module },
	{ .entry = &syscall_ni_syscall },	/* Non-existant get_kernel_syms svc */
	{ .entry = &syscall_quotactl },
	{ .entry = &syscall_getpgid },
	{ .entry = &syscall_fchdir },
	{ .entry = &syscall_bdflush },
	{ .entry = &syscall_sysfs },
	{ .entry = &syscall_personality },	/* s390_personality */
	{ .entry = &syscall_ni_syscall },	/* Non-existant afs_syscall svc */
	{ .entry = &syscall_ni_syscall },	/* No 138 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 139 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 140 unused system call */
	{ .entry = &syscall_getdents },
	{ .entry = &syscall_select },
	{ .entry = &syscall_flock },
	{ .entry = &syscall_msync },
	{ .entry = &syscall_readv },
	{ .entry = &syscall_writev },
	{ .entry = &syscall_getsid },
	{ .entry = &syscall_fdatasync },
	{ .entry = &syscall_sysctl },
	{ .entry = &syscall_mlock },
	{ .entry = &syscall_munlock },
	{ .entry = &syscall_mlockall },
	{ .entry = &syscall_munlockall },
	{ .entry = &syscall_sched_setparam },
	{ .entry = &syscall_sched_getparam },
	{ .entry = &syscall_sched_setscheduler },
	{ .entry = &syscall_sched_getscheduler },
	{ .entry = &syscall_sched_yield },
	{ .entry = &syscall_sched_get_priority_max },
	{ .entry = &syscall_sched_get_priority_min },
	{ .entry = &syscall_sched_rr_get_interval },
	{ .entry = &syscall_nanosleep },
	{ .entry = &syscall_mremap },
	{ .entry = &syscall_ni_syscall },	/* No 164 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 165 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 166 unused system call */
	{ .entry = &syscall_ni_syscall },	/* Non-existant query_module svc */
	{ .entry = &syscall_poll },
	{ .entry = &syscall_ni_syscall },	/* Non-existant nfsservctl svc */
	{ .entry = &syscall_ni_syscall },	/* No 170 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 171 unused system call */
	{ .entry = &syscall_prctl },
	{ .entry = &syscall_rt_sigreturn },
	{ .entry = &syscall_rt_sigaction },
	{ .entry = &syscall_rt_sigprocmask },
	{ .entry = &syscall_rt_sigpending },
	{ .entry = &syscall_rt_sigtimedwait },
	{ .entry = &syscall_rt_sigqueueinfo },
	{ .entry = &syscall_rt_sigsuspend },
	{ .entry = &syscall_pread64 },
	{ .entry = &syscall_pwrite64 },
	{ .entry = &syscall_ni_syscall },	/* No 182 unused system call */
	{ .entry = &syscall_getcwd },
	{ .entry = &syscall_capget },
	{ .entry = &syscall_capset },
	{ .entry = &syscall_sigaltstack },
	{ .entry = &syscall_sendfile64 },
	{ .entry = &syscall_ni_syscall },	/* Non-existant getpmsg svc */
	{ .entry = &syscall_ni_syscall },	/* Non-existant putpmsg svc */
	{ .entry = &syscall_vfork },
	{ .entry = &syscall_getrlimit },
	{ .entry = &syscall_ni_syscall },	/* No 192 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 193 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 194 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 195 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 196 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 197 unused system call */
	{ .entry = &syscall_lchown },
	{ .entry = &syscall_getuid },
	{ .entry = &syscall_getgid },
	{ .entry = &syscall_geteuid },
	{ .entry = &syscall_getegid },
	{ .entry = &syscall_setreuid },
	{ .entry = &syscall_setregid },
	{ .entry = &syscall_getgroups },
	{ .entry = &syscall_setgroups },
	{ .entry = &syscall_fchown },
	{ .entry = &syscall_setresuid },
	{ .entry = &syscall_getresuid },
	{ .entry = &syscall_setresgid },
	{ .entry = &syscall_getresgid },
	{ .entry = &syscall_chown },
	{ .entry = &syscall_setuid },
	{ .entry = &syscall_setgid },
	{ .entry = &syscall_setfsuid },
	{ .entry = &syscall_setfsgid },
	{ .entry = &syscall_pivot_root },
	{ .entry = &syscall_mincore },
	{ .entry = &syscall_madvise },
	{ .entry = &syscall_getdents64 },
	{ .entry = &syscall_ni_syscall },	/* No 221 unused system call */
	{ .entry = &syscall_readahead },
	{ .entry = &syscall_ni_syscall },	/* No 223 unused system call */
	{ .entry = &syscall_setxattr },
	{ .entry = &syscall_lsetxattr },
	{ .entry = &syscall_fsetxattr },
	{ .entry = &syscall_getxattr },
	{ .entry = &syscall_lgetxattr },
	{ .entry = &syscall_fgetxattr },
	{ .entry = &syscall_listxattr },
	{ .entry = &syscall_llistxattr },
	{ .entry = &syscall_flistxattr },
	{ .entry = &syscall_removexattr },
	{ .entry = &syscall_lremovexattr },
	{ .entry = &syscall_fremovexattr },
	{ .entry = &syscall_gettid },
	{ .entry = &syscall_tkill },
	{ .entry = &syscall_futex },
	{ .entry = &syscall_sched_setaffinity },
	{ .entry = &syscall_sched_getaffinity },
	{ .entry = &syscall_tgkill },
	{ .entry = &syscall_ni_syscall },	/* No 242 unused system call */
	{ .entry = &syscall_io_setup },
	{ .entry = &syscall_io_destroy },
	{ .entry = &syscall_io_getevents },
	{ .entry = &syscall_io_submit },
	{ .entry = &syscall_io_cancel },
	{ .entry = &syscall_exit_group },
	{ .entry = &syscall_epoll_create },
	{ .entry = &syscall_epoll_ctl },
	{ .entry = &syscall_epoll_wait },
	{ .entry = &syscall_set_tid_address },
	{ .entry = &syscall_fadvise64_64 },
	{ .entry = &syscall_timer_create },
	{ .entry = &syscall_timer_settime },
	{ .entry = &syscall_timer_gettime },
	{ .entry = &syscall_timer_getoverrun },
	{ .entry = &syscall_timer_delete },
	{ .entry = &syscall_clock_settime },
	{ .entry = &syscall_clock_gettime },
	{ .entry = &syscall_clock_getres },
	{ .entry = &syscall_clock_nanosleep },
	{ .entry = &syscall_ni_syscall },	/* No 263 unused system call */
	{ .entry = &syscall_ni_syscall },	/* No 264 unused system call */
	{ .entry = &syscall_statfs64 },
	{ .entry = &syscall_fstatfs64 },
	{ .entry = &syscall_remap_file_pages },
	{ .entry = &syscall_mbind },
	{ .entry = &syscall_get_mempolicy },
	{ .entry = &syscall_set_mempolicy },
	{ .entry = &syscall_mq_open },
	{ .entry = &syscall_mq_unlink },
	{ .entry = &syscall_mq_timedsend },
	{ .entry = &syscall_mq_timedreceive },
	{ .entry = &syscall_mq_notify },
	{ .entry = &syscall_mq_getsetattr },
	{ .entry = &syscall_kexec_load },
	{ .entry = &syscall_add_key },
	{ .entry = &syscall_request_key },
	{ .entry = &syscall_keyctl },
	{ .entry = &syscall_waitid },
	{ .entry = &syscall_ioprio_set },
	{ .entry = &syscall_ioprio_get },
	{ .entry = &syscall_inotify_init },
	{ .entry = &syscall_inotify_add_watch },
	{ .entry = &syscall_inotify_rm_watch },
	{ .entry = &syscall_migrate_pages },
	{ .entry = &syscall_openat },
	{ .entry = &syscall_mkdirat },
	{ .entry = &syscall_mknodat },
	{ .entry = &syscall_fchownat },
	{ .entry = &syscall_futimesat },
	{ .entry = &syscall_newfstatat },
	{ .entry = &syscall_unlinkat },
	{ .entry = &syscall_renameat },
	{ .entry = &syscall_linkat },
	{ .entry = &syscall_symlinkat },
	{ .entry = &syscall_readlinkat },
	{ .entry = &syscall_fchmodat },
	{ .entry = &syscall_faccessat },
	{ .entry = &syscall_pselect6 },
	{ .entry = &syscall_ppoll },
	{ .entry = &syscall_unshare },
	{ .entry = &syscall_set_robust_list },
	{ .entry = &syscall_get_robust_list },
	{ .entry = &syscall_splice },
	{ .entry = &syscall_sync_file_range },
	{ .entry = &syscall_tee },
	{ .entry = &syscall_vmsplice },
	{ .entry = &syscall_move_pages },
	{ .entry = &syscall_getcpu },
	{ .entry = &syscall_epoll_pwait },
	{ .entry = &syscall_utimes },
	{ .entry = &syscall_fallocate },
	{ .entry = &syscall_utimensat },
	{ .entry = &syscall_signalfd },
	{ .entry = &syscall_ni_syscall },	/* Non-existant timerfd svc */
	{ .entry = &syscall_eventfd },
	{ .entry = &syscall_timerfd_create },
	{ .entry = &syscall_timerfd_settime },
	{ .entry = &syscall_timerfd_gettime },
	{ .entry = &syscall_signalfd4 },
	{ .entry = &syscall_eventfd2 },
	{ .entry = &syscall_inotify_init1 },
	{ .entry = &syscall_pipe2 },
	{ .entry = &syscall_dup3 },
	{ .entry = &syscall_epoll_create1 },
	{ .entry = &syscall_preadv },
	{ .entry = &syscall_pwritev },
	{ .entry = &syscall_rt_tgsigqueueinfo },
	{ .entry = &syscall_perf_event_open },
	{ .entry = &syscall_fanotify_init },
	{ .entry = &syscall_fanotify_mark },
	{ .entry = &syscall_prlimit64 },
	{ .entry = &syscall_name_to_handle_at },
	{ .entry = &syscall_open_by_handle_at },
	{ .entry = &syscall_clock_adjtime },
	{ .entry = &syscall_syncfs },
	{ .entry = &syscall_setns },
	{ .entry = &syscall_process_vm_readv },
	{ .entry = &syscall_process_vm_writev },
	{ .entry = &syscall_runtime_instr },	/* s390_runtime_instr svc */
	{ .entry = &syscall_kcmp },
	{ .entry = &syscall_finit_module },
	{ .entry = &syscall_sched_setattr },
	{ .entry = &syscall_sched_getattr },
	{ .entry = &syscall_renameat2 },
	{ .entry = &syscall_seccomp },
	{ .entry = &syscall_getrandom },
	{ .entry = &syscall_memfd_create },
#ifdef USE_BPF
	{ .entry = &syscall_bpf },
#else
	{ .entry = NULL },
#endif
	{ .entry = &syscall_s390_pci_mmio_write },
	{ .entry = &syscall_s390_pci_mmio_read },
	{ .entry = &syscall_execveat },
	{ .entry = &syscall_userfaultfd },
	{ .entry = &syscall_membarrier },
	{ .entry = &syscall_recvmmsg },
	{ .entry = &syscall_sendmmsg },
	{ .entry = &syscall_socket },
	{ .entry = &syscall_socketpair },
	{ .entry = &syscall_bind },
	{ .entry = &syscall_connect },
	{ .entry = &syscall_listen },
	{ .entry = &syscall_accept4 },
	{ .entry = &syscall_getsockopt },
	{ .entry = &syscall_setsockopt },
	{ .entry = &syscall_getsockname },
	{ .entry = &syscall_getpeername },
	{ .entry = &syscall_sendto },
	{ .entry = &syscall_sendmsg },
	{ .entry = &syscall_recvfrom },
	{ .entry = &syscall_recvmsg },
	{ .entry = &syscall_shutdown },
	{ .entry = &syscall_mlock2 },
	{ .entry = &syscall_copy_file_range },
	{ .entry = &syscall_preadv2 },
	{ .entry = &syscall_pwritev2 },
	{ .entry = &syscall_ni_syscall },	/* TODO: s390_guarded_storage svc */
	{ .entry = &syscall_statx },
	{ .entry = &syscall_ni_syscall },	/* TODO: s390_sthyi svc */
};
