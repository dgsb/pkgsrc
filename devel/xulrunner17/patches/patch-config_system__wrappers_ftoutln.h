$NetBSD: patch-config_system__wrappers_ftoutln.h,v 1.1 2014/05/15 21:16:16 joerg Exp $

--- config/system_wrappers/ftoutln.h.orig	2014-05-14 20:52:07.000000000 +0000
+++ config/system_wrappers/ftoutln.h
@@ -0,0 +1,4 @@
+#pragma GCC system_header
+#pragma GCC visibility push(default)
+#include_next <ftoutln.h>
+#pragma GCC visibility pop
