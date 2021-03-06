$NetBSD: patch-platform.c,v 1.4 2015/07/09 16:14:23 taca Exp $

Interix support

--- platform.c.orig	2015-07-01 02:35:31.000000000 +0000
+++ platform.c
@@ -90,7 +90,9 @@ platform_privileged_uidswap(void)
 	/* uid 0 is not special on Cygwin so always try */
 	return 1;
 #else
+#if !defined(HAVE_INTERIX)
 	return (getuid() == 0 || geteuid() == 0);
+#endif /* !HAVE_INTERIX */
 #endif
 }
 
