$NetBSD$

--- src/Wt/Dbo/SqlQueryParse.C.orig	2012-02-27 21:14:29.000000000 +0000
+++ src/Wt/Dbo/SqlQueryParse.C
@@ -20,7 +20,7 @@
 #include <boost/spirit/include/phoenix_core.hpp>
 #include <boost/spirit/include/phoenix_operator.hpp>
 #include <boost/spirit/include/phoenix_object.hpp>
-#include <boost/spirit/home/phoenix/statement/throw.hpp>
+#include <boost/phoenix/statement/throw.hpp>
 #include <boost/bind.hpp>
 #include <iostream>
 
