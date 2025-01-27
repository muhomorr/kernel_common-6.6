/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Header that contains the code (mostly headers) for which Rust bindings
 * will be automatically generated by `bindgen`.
 *
 * Sorted alphabetically.
 */

#include <kunit/test.h>
#include <linux/capability.h>
#include <linux/cred.h>
#include <linux/errname.h>
#include <linux/fdtable.h>
#include <linux/file.h>
#include <linux/fs.h>
#include <linux/jiffies.h>
#include <linux/list_lru.h>
#include <linux/mm.h>
#include <linux/pid_namespace.h>
#include <linux/poll.h>
#include <linux/security.h>
#include <linux/seq_file.h>
#include <linux/slab.h>
#include <linux/refcount.h>
#include <linux/rust_binder.h>
#include <linux/wait.h>
#include <linux/sched.h>
#include <linux/shrinker.h>
#include <linux/task_work.h>
#include <linux/workqueue.h>
#include <uapi/linux/android/binder.h>
#include <uapi/linux/android/binderfs.h>
#include <uapi/linux/sched/types.h>

/* `bindgen` gets confused at certain things. */
const size_t RUST_CONST_HELPER_ARCH_SLAB_MINALIGN = ARCH_SLAB_MINALIGN;
const gfp_t RUST_CONST_HELPER_GFP_KERNEL = GFP_KERNEL;
const gfp_t RUST_CONST_HELPER___GFP_ZERO = __GFP_ZERO;
const gfp_t RUST_CONST_HELPER___GFP_HIGHMEM = ___GFP_HIGHMEM;
