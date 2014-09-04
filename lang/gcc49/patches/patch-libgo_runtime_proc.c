$NetBSD$

SunOS libelf does not support largefile.

--- libgo/runtime/proc.c.orig	2014-05-27 22:01:08.000000000 +0000
+++ libgo/runtime/proc.c
@@ -11,6 +11,10 @@
 #include "config.h"
 
 #ifdef HAVE_DL_ITERATE_PHDR
+#ifdef __sun
+#undef _FILE_OFFSET_BITS
+#define _FILE_OFFSET_BITS 32
+#endif
 #include <link.h>
 #endif
 
