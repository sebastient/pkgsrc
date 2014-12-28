$NetBSD$

--- src/Wt/Render/CssParser.C.orig	2013-08-08 18:43:18.000000000 +0000
+++ src/Wt/Render/CssParser.C
@@ -34,7 +34,7 @@ using namespace Wt::Render;
 #include <boost/fusion/include/adapt_struct.hpp>
 #include <boost/variant/recursive_variant.hpp>
 #include <boost/spirit/home/support/context.hpp>
-#include <boost/spirit/home/phoenix.hpp>
+#include <boost/phoenix.hpp>
 #include <boost/spirit/include/classic_file_iterator.hpp>
 
 #include <map>
@@ -159,6 +159,7 @@ struct ErrorReporting
 {
   template< typename, typename, typename, typename, typename > // Phoenix v2
   struct result { typedef void type;};
+  typedef void result_type;
 
   ErrorReporting(CssGrammer< Iterator >* grammer)
     : grammer_(grammer)
