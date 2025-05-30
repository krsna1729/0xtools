/*
 *  0x.Tools xCapture - sample thread activity from Linux procfs [https://0x.tools]
 *  Copyright 2019-2025 Tanel Poder
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *
 * NOTES:
 *
 *  full architecture-specific syscall list in Linux kernel source:
 *  arch/x86/entry/syscalls/syscall_64.tbl
 *  or run ausyscall --dump or parse unistd.h
 *
 *   awk '/^[0-9]/{ printf("[%4d] = {\"%s\", \"%s\"},\n", $1, $2, $3); }' < ./arch/x86/entry/syscalls/syscall_64.tbl
 */

#ifndef __XCAPTURE_SYSCALL_NAMES_H
#define __XCAPTURE_SYSCALL_NAMES_H

typedef struct sysent {
    const char *abi;
    const char *name;
} struct_sysent;

const struct_sysent sysent0[] = {
[   0] = {"common", "read"},
[   1] = {"common", "write"},
[   2] = {"common", "open"},
[   3] = {"common", "close"},
[   4] = {"common", "stat"},
[   5] = {"common", "fstat"},
[   6] = {"common", "lstat"},
[   7] = {"common", "poll"},
[   8] = {"common", "lseek"},
[   9] = {"common", "mmap"},
[  10] = {"common", "mprotect"},
[  11] = {"common", "munmap"},
[  12] = {"common", "brk"},
[  13] = {"64", "rt_sigaction"},
[  14] = {"common", "rt_sigprocmask"},
[  15] = {"64", "rt_sigreturn"},
[  16] = {"64", "ioctl"},
[  17] = {"common", "pread64"},
[  18] = {"common", "pwrite64"},
[  19] = {"64", "readv"},
[  20] = {"64", "writev"},
[  21] = {"common", "access"},
[  22] = {"common", "pipe"},
[  23] = {"common", "select"},
[  24] = {"common", "sched_yield"},
[  25] = {"common", "mremap"},
[  26] = {"common", "msync"},
[  27] = {"common", "mincore"},
[  28] = {"common", "madvise"},
[  29] = {"common", "shmget"},
[  30] = {"common", "shmat"},
[  31] = {"common", "shmctl"},
[  32] = {"common", "dup"},
[  33] = {"common", "dup2"},
[  34] = {"common", "pause"},
[  35] = {"common", "nanosleep"},
[  36] = {"common", "getitimer"},
[  37] = {"common", "alarm"},
[  38] = {"common", "setitimer"},
[  39] = {"common", "getpid"},
[  40] = {"common", "sendfile"},
[  41] = {"common", "socket"},
[  42] = {"common", "connect"},
[  43] = {"common", "accept"},
[  44] = {"common", "sendto"},
[  45] = {"64", "recvfrom"},
[  46] = {"64", "sendmsg"},
[  47] = {"64", "recvmsg"},
[  48] = {"common", "shutdown"},
[  49] = {"common", "bind"},
[  50] = {"common", "listen"},
[  51] = {"common", "getsockname"},
[  52] = {"common", "getpeername"},
[  53] = {"common", "socketpair"},
[  54] = {"64", "setsockopt"},
[  55] = {"64", "getsockopt"},
[  56] = {"common", "clone"},
[  57] = {"common", "fork"},
[  58] = {"common", "vfork"},
[  59] = {"64", "execve"},
[  60] = {"common", "exit"},
[  61] = {"common", "wait4"},
[  62] = {"common", "kill"},
[  63] = {"common", "uname"},
[  64] = {"common", "semget"},
[  65] = {"common", "semop"},
[  66] = {"common", "semctl"},
[  67] = {"common", "shmdt"},
[  68] = {"common", "msgget"},
[  69] = {"common", "msgsnd"},
[  70] = {"common", "msgrcv"},
[  71] = {"common", "msgctl"},
[  72] = {"common", "fcntl"},
[  73] = {"common", "flock"},
[  74] = {"common", "fsync"},
[  75] = {"common", "fdatasync"},
[  76] = {"common", "truncate"},
[  77] = {"common", "ftruncate"},
[  78] = {"common", "getdents"},
[  79] = {"common", "getcwd"},
[  80] = {"common", "chdir"},
[  81] = {"common", "fchdir"},
[  82] = {"common", "rename"},
[  83] = {"common", "mkdir"},
[  84] = {"common", "rmdir"},
[  85] = {"common", "creat"},
[  86] = {"common", "link"},
[  87] = {"common", "unlink"},
[  88] = {"common", "symlink"},
[  89] = {"common", "readlink"},
[  90] = {"common", "chmod"},
[  91] = {"common", "fchmod"},
[  92] = {"common", "chown"},
[  93] = {"common", "fchown"},
[  94] = {"common", "lchown"},
[  95] = {"common", "umask"},
[  96] = {"common", "gettimeofday"},
[  97] = {"common", "getrlimit"},
[  98] = {"common", "getrusage"},
[  99] = {"common", "sysinfo"},
[ 100] = {"common", "times"},
[ 101] = {"64", "ptrace"},
[ 102] = {"common", "getuid"},
[ 103] = {"common", "syslog"},
[ 104] = {"common", "getgid"},
[ 105] = {"common", "setuid"},
[ 106] = {"common", "setgid"},
[ 107] = {"common", "geteuid"},
[ 108] = {"common", "getegid"},
[ 109] = {"common", "setpgid"},
[ 110] = {"common", "getppid"},
[ 111] = {"common", "getpgrp"},
[ 112] = {"common", "setsid"},
[ 113] = {"common", "setreuid"},
[ 114] = {"common", "setregid"},
[ 115] = {"common", "getgroups"},
[ 116] = {"common", "setgroups"},
[ 117] = {"common", "setresuid"},
[ 118] = {"common", "getresuid"},
[ 119] = {"common", "setresgid"},
[ 120] = {"common", "getresgid"},
[ 121] = {"common", "getpgid"},
[ 122] = {"common", "setfsuid"},
[ 123] = {"common", "setfsgid"},
[ 124] = {"common", "getsid"},
[ 125] = {"common", "capget"},
[ 126] = {"common", "capset"},
[ 127] = {"64", "rt_sigpending"},
[ 128] = {"64", "rt_sigtimedwait"},
[ 129] = {"64", "rt_sigqueueinfo"},
[ 130] = {"common", "rt_sigsuspend"},
[ 131] = {"64", "sigaltstack"},
[ 132] = {"common", "utime"},
[ 133] = {"common", "mknod"},
[ 134] = {"64", "uselib"},
[ 135] = {"common", "personality"},
[ 136] = {"common", "ustat"},
[ 137] = {"common", "statfs"},
[ 138] = {"common", "fstatfs"},
[ 139] = {"common", "sysfs"},
[ 140] = {"common", "getpriority"},
[ 141] = {"common", "setpriority"},
[ 142] = {"common", "sched_setparam"},
[ 143] = {"common", "sched_getparam"},
[ 144] = {"common", "sched_setscheduler"},
[ 145] = {"common", "sched_getscheduler"},
[ 146] = {"common", "sched_get_priority_max"},
[ 147] = {"common", "sched_get_priority_min"},
[ 148] = {"common", "sched_rr_get_interval"},
[ 149] = {"common", "mlock"},
[ 150] = {"common", "munlock"},
[ 151] = {"common", "mlockall"},
[ 152] = {"common", "munlockall"},
[ 153] = {"common", "vhangup"},
[ 154] = {"common", "modify_ldt"},
[ 155] = {"common", "pivot_root"},
[ 156] = {"64", "_sysctl"},
[ 157] = {"common", "prctl"},
[ 158] = {"common", "arch_prctl"},
[ 159] = {"common", "adjtimex"},
[ 160] = {"common", "setrlimit"},
[ 161] = {"common", "chroot"},
[ 162] = {"common", "sync"},
[ 163] = {"common", "acct"},
[ 164] = {"common", "settimeofday"},
[ 165] = {"common", "mount"},
[ 166] = {"common", "umount2"},
[ 167] = {"common", "swapon"},
[ 168] = {"common", "swapoff"},
[ 169] = {"common", "reboot"},
[ 170] = {"common", "sethostname"},
[ 171] = {"common", "setdomainname"},
[ 172] = {"common", "iopl"},
[ 173] = {"common", "ioperm"},
[ 174] = {"64", "create_module"},
[ 175] = {"common", "init_module"},
[ 176] = {"common", "delete_module"},
[ 177] = {"64", "get_kernel_syms"},
[ 178] = {"64", "query_module"},
[ 179] = {"common", "quotactl"},
[ 180] = {"64", "nfsservctl"},
[ 181] = {"common", "getpmsg"},
[ 182] = {"common", "putpmsg"},
[ 183] = {"common", "afs_syscall"},
[ 184] = {"common", "tuxcall"},
[ 185] = {"common", "security"},
[ 186] = {"common", "gettid"},
[ 187] = {"common", "readahead"},
[ 188] = {"common", "setxattr"},
[ 189] = {"common", "lsetxattr"},
[ 190] = {"common", "fsetxattr"},
[ 191] = {"common", "getxattr"},
[ 192] = {"common", "lgetxattr"},
[ 193] = {"common", "fgetxattr"},
[ 194] = {"common", "listxattr"},
[ 195] = {"common", "llistxattr"},
[ 196] = {"common", "flistxattr"},
[ 197] = {"common", "removexattr"},
[ 198] = {"common", "lremovexattr"},
[ 199] = {"common", "fremovexattr"},
[ 200] = {"common", "tkill"},
[ 201] = {"common", "time"},
[ 202] = {"common", "futex"},
[ 203] = {"common", "sched_setaffinity"},
[ 204] = {"common", "sched_getaffinity"},
[ 205] = {"64", "set_thread_area"},
[ 206] = {"64", "io_setup"},
[ 207] = {"common", "io_destroy"},
[ 208] = {"common", "io_getevents"},
[ 209] = {"64", "io_submit"},
[ 210] = {"common", "io_cancel"},
[ 211] = {"64", "get_thread_area"},
[ 212] = {"common", "lookup_dcookie"},
[ 213] = {"common", "epoll_create"},
[ 214] = {"64", "epoll_ctl_old"},
[ 215] = {"64", "epoll_wait_old"},
[ 216] = {"common", "remap_file_pages"},
[ 217] = {"common", "getdents64"},
[ 218] = {"common", "set_tid_address"},
[ 219] = {"common", "restart_syscall"},
[ 220] = {"common", "semtimedop"},
[ 221] = {"common", "fadvise64"},
[ 222] = {"64", "timer_create"},
[ 223] = {"common", "timer_settime"},
[ 224] = {"common", "timer_gettime"},
[ 225] = {"common", "timer_getoverrun"},
[ 226] = {"common", "timer_delete"},
[ 227] = {"common", "clock_settime"},
[ 228] = {"common", "clock_gettime"},
[ 229] = {"common", "clock_getres"},
[ 230] = {"common", "clock_nanosleep"},
[ 231] = {"common", "exit_group"},
[ 232] = {"common", "epoll_wait"},
[ 233] = {"common", "epoll_ctl"},
[ 234] = {"common", "tgkill"},
[ 235] = {"common", "utimes"},
[ 236] = {"64", "vserver"},
[ 237] = {"common", "mbind"},
[ 238] = {"common", "set_mempolicy"},
[ 239] = {"common", "get_mempolicy"},
[ 240] = {"common", "mq_open"},
[ 241] = {"common", "mq_unlink"},
[ 242] = {"common", "mq_timedsend"},
[ 243] = {"common", "mq_timedreceive"},
[ 244] = {"64", "mq_notify"},
[ 245] = {"common", "mq_getsetattr"},
[ 246] = {"64", "kexec_load"},
[ 247] = {"64", "waitid"},
[ 248] = {"common", "add_key"},
[ 249] = {"common", "request_key"},
[ 250] = {"common", "keyctl"},
[ 251] = {"common", "ioprio_set"},
[ 252] = {"common", "ioprio_get"},
[ 253] = {"common", "inotify_init"},
[ 254] = {"common", "inotify_add_watch"},
[ 255] = {"common", "inotify_rm_watch"},
[ 256] = {"common", "migrate_pages"},
[ 257] = {"common", "openat"},
[ 258] = {"common", "mkdirat"},
[ 259] = {"common", "mknodat"},
[ 260] = {"common", "fchownat"},
[ 261] = {"common", "futimesat"},
[ 262] = {"common", "newfstatat"},
[ 263] = {"common", "unlinkat"},
[ 264] = {"common", "renameat"},
[ 265] = {"common", "linkat"},
[ 266] = {"common", "symlinkat"},
[ 267] = {"common", "readlinkat"},
[ 268] = {"common", "fchmodat"},
[ 269] = {"common", "faccessat"},
[ 270] = {"common", "pselect6"},
[ 271] = {"common", "ppoll"},
[ 272] = {"common", "unshare"},
[ 273] = {"64", "set_robust_list"},
[ 274] = {"64", "get_robust_list"},
[ 275] = {"common", "splice"},
[ 276] = {"common", "tee"},
[ 277] = {"common", "sync_file_range"},
[ 278] = {"64", "vmsplice"},
[ 279] = {"64", "move_pages"},
[ 280] = {"common", "utimensat"},
[ 281] = {"common", "epoll_pwait"},
[ 282] = {"common", "signalfd"},
[ 283] = {"common", "timerfd_create"},
[ 284] = {"common", "eventfd"},
[ 285] = {"common", "fallocate"},
[ 286] = {"common", "timerfd_settime"},
[ 287] = {"common", "timerfd_gettime"},
[ 288] = {"common", "accept4"},
[ 289] = {"common", "signalfd4"},
[ 290] = {"common", "eventfd2"},
[ 291] = {"common", "epoll_create1"},
[ 292] = {"common", "dup3"},
[ 293] = {"common", "pipe2"},
[ 294] = {"common", "inotify_init1"},
[ 295] = {"64", "preadv"},
[ 296] = {"64", "pwritev"},
[ 297] = {"64", "rt_tgsigqueueinfo"},
[ 298] = {"common", "perf_event_open"},
[ 299] = {"64", "recvmmsg"},
[ 300] = {"common", "fanotify_init"},
[ 301] = {"common", "fanotify_mark"},
[ 302] = {"common", "prlimit64"},
[ 303] = {"common", "name_to_handle_at"},
[ 304] = {"common", "open_by_handle_at"},
[ 305] = {"common", "clock_adjtime"},
[ 306] = {"common", "syncfs"},
[ 307] = {"64", "sendmmsg"},
[ 308] = {"common", "setns"},
[ 309] = {"common", "getcpu"},
[ 310] = {"64", "process_vm_readv"},
[ 311] = {"64", "process_vm_writev"},
[ 312] = {"common", "kcmp"},
[ 313] = {"common", "finit_module"},
[ 314] = {"common", "sched_setattr"},
[ 315] = {"common", "sched_getattr"},
[ 316] = {"common", "renameat2"},
[ 317] = {"common", "seccomp"},
[ 318] = {"common", "getrandom"},
[ 319] = {"common", "memfd_create"},
[ 320] = {"common", "kexec_file_load"},
[ 321] = {"common", "bpf"},
[ 322] = {"64", "execveat"},
[ 323] = {"common", "userfaultfd"},
[ 324] = {"common", "membarrier"},
[ 325] = {"common", "mlock2"},
[ 326] = {"common", "copy_file_range"},
[ 327] = {"64", "preadv2"},
[ 328] = {"64", "pwritev2"},
[ 329] = {"common", "pkey_mprotect"},
[ 330] = {"common", "pkey_alloc"},
[ 331] = {"common", "pkey_free"},
[ 332] = {"common", "statx"},
[ 333] = {"common", "io_pgetevents"},
[ 334] = {"common", "rseq"},
/* gap */
[ 424] = {"common", "pidfd_send_signal"},
[ 425] = {"common", "io_uring_setup"},
[ 426] = {"common", "io_uring_enter"},
[ 427] = {"common", "io_uring_register"},
[ 428] = {"common", "open_tree"},
[ 429] = {"common", "move_mount"},
[ 430] = {"common", "fsopen"},
[ 431] = {"common", "fsconfig"},
[ 432] = {"common", "fsmount"},
[ 433] = {"common", "fspick"},
[ 434] = {"common", "pidfd_open"},
[ 435] = {"common", "clone3"},
/* gap */
[ 437] = {"common", "openat2"},
[ 438] = {"common", "pidfd_getfd"},
[ 439] = {"common", "faccessat2"},
[ 440] = {"common", "process_madvise"},
[ 441] = {"common", "epoll_pwait2"},
[ 442] = {"common", "mount_setattr"},
[ 443] = {"common", "quotactl_fd"},
[ 444] = {"common", "landlock_create_ruleset"},
[ 445] = {"common", "landlock_add_rule"},
[ 446] = {"common", "landlock_restrict_self"},
[ 447] = {"common", "memfd_secret"},
[ 448] = {"common", "process_mrelease"},
[ 449] = {"common", "futex_waitv"},
/* gap */
[ 512] = {"x32", "rt_sigaction"},
[ 513] = {"x32", "rt_sigreturn"},
[ 514] = {"x32", "ioctl"},
[ 515] = {"x32", "readv"},
[ 516] = {"x32", "writev"},
[ 517] = {"x32", "recvfrom"},
[ 518] = {"x32", "sendmsg"},
[ 519] = {"x32", "recvmsg"},
[ 520] = {"x32", "execve"},
[ 521] = {"x32", "ptrace"},
[ 522] = {"x32", "rt_sigpending"},
[ 523] = {"x32", "rt_sigtimedwait"},
[ 524] = {"x32", "rt_sigqueueinfo"},
[ 525] = {"x32", "sigaltstack"},
[ 526] = {"x32", "timer_create"},
[ 527] = {"x32", "mq_notify"},
[ 528] = {"x32", "kexec_load"},
[ 529] = {"x32", "waitid"},
[ 530] = {"x32", "set_robust_list"},
[ 531] = {"x32", "get_robust_list"},
[ 532] = {"x32", "vmsplice"},
[ 533] = {"x32", "move_pages"},
[ 534] = {"x32", "preadv"},
[ 535] = {"x32", "pwritev"},
[ 536] = {"x32", "rt_tgsigqueueinfo"},
[ 537] = {"x32", "recvmmsg"},
[ 538] = {"x32", "sendmmsg"},
[ 539] = {"x32", "process_vm_readv"},
[ 540] = {"x32", "process_vm_writev"},
[ 541] = {"x32", "setsockopt"},
[ 542] = {"x32", "getsockopt"},
[ 543] = {"x32", "io_setup"},
[ 544] = {"x32", "io_submit"},
[ 545] = {"x32", "execveat"},
[ 546] = {"x32", "preadv2"},
[ 547] = {"x32", "pwritev2"},
};

#define NR_SYSCALLS sizeof(sysent0) / sizeof(sysent0[0])

#endif /* __XCAPTURE_SYSCALL_NAMES_H */
