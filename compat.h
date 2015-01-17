/*---------------------------------------------------------------------------
 * 
 * compat.h 
 *     Copyright (c) 2012 Guenter Roeck <linux@roeck-us.net>
 *
 *---------------------------------------------------------------------------
 */

#ifndef COMPAT_H
#define COMPAT_H

#include <linux/version.h>

#ifndef pr_warn
#define pr_warn pr_warning
#endif

#ifndef clamp_val
#define clamp_val	SENSORS_LIMIT
#endif

#if LINUX_VERSION_CODE < KERNEL_VERSION(3, 12, 0)
#ifndef kstrtol
#define kstrtol strict_strtol
#endif
#ifndef kstrtoul
#define kstrtoul strict_strtoul
#endif
#endif

#ifndef request_muxed_region
#define request_muxed_region(a, b, c) (true)
#define release_region(a, b)
#endif

#endif /* COMPAT_H */
