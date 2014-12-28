$NetBSD$

--- src/Wt/Json/Parser.C.orig	2013-02-03 21:26:10.000000000 +0000
+++ src/Wt/Json/Parser.C
@@ -24,7 +24,7 @@
 #include <boost/spirit/include/phoenix_core.hpp>
 #include <boost/spirit/include/phoenix_operator.hpp>
 #include <boost/spirit/include/phoenix_object.hpp>
-#include <boost/spirit/home/phoenix/statement/throw.hpp>
+#include <boost/phoenix/statement/throw.hpp>
 #include <boost/bind.hpp>
 
 #endif // JSON_PARSER
