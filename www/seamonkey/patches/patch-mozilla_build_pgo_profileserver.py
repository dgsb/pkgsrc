$NetBSD: patch-mozilla_build_pgo_profileserver.py,v 1.3 2014/03/30 04:13:17 ryoon Exp $

--- mozilla/build/pgo/profileserver.py.orig	2014-03-19 01:41:46.000000000 +0000
+++ mozilla/build/pgo/profileserver.py
@@ -59,7 +59,7 @@ if __name__ == '__main__':
       env["MOZ_JAR_LOG_FILE"] = os.path.abspath(jarlog)
       print "jarlog: %s" % env["MOZ_JAR_LOG_FILE"]
 
-    cmdargs = ["http://localhost:%d/index.html" % PORT]
+    cmdargs = ["http://127.0.0.1:%d/index.html" % PORT]
     runner = FirefoxRunner(profile=profile,
                            binary=build.get_binary_path(where="staged-package"),
                            cmdargs=cmdargs,
