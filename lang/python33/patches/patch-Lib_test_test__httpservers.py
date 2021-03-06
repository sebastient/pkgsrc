$NetBSD: patch-Lib_test_test__httpservers.py,v 1.1 2014/07/02 12:53:52 he Exp $

Add test for fix for directory traversal vulnerability, ref.
http://bugs.python.org/issue21766

--- Lib/test/test_httpservers.py.orig	2014-03-09 08:40:17.000000000 +0000
+++ Lib/test/test_httpservers.py
@@ -464,6 +464,11 @@ class CGIHTTPServerTestCase(BaseTestCase
                 (res.read(), res.getheader('Content-type'), res.status))
         self.assertEqual(os.environ['SERVER_SOFTWARE'], signature)
 
+    def test_urlquote_decoding_in_cgi_check(self):
+        res = self.request('/cgi-bin%2ffile1.py')
+        self.assertEqual((b'Hello World\n', 'text/html', 200),
+                (res.read(), res.getheader('Content-type'), res.status))
+
 
 class SocketlessRequestHandler(SimpleHTTPRequestHandler):
     def __init__(self):
