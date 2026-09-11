/*
 * Copyright (c) 2013 - 2026 MIPS Holding, Inc.
 *
 * Licensed under the LGPL v2.1 or later, see the file COPYING.LIB in this tarball.
 */
#ifndef _ENDIAN_H
# error "Never use <bits/endian.h> directly; include <endian.h> instead."
#endif

/* ARC support either endianness.  */
#ifdef __BIG_ENDIAN__
#define __BYTE_ORDER __BIG_ENDIAN
#else
#define __BYTE_ORDER __LITTLE_ENDIAN
#endif
