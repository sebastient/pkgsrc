$NetBSD$

Find /usr/bin/elfdump on SmartOS.

--- contrib/make_sunver.pl.orig	2013-02-27 09:15:35.000000000 +0000
+++ contrib/make_sunver.pl
@@ -55,7 +55,12 @@ foreach $file (@ARGV) {
 # columns.
 
 # The path to elfdump.
-my $elfdump = "/usr/ccs/bin/elfdump";
+my $elfdump;
+if (-x "/usr/bin/elfdump") {
+  $elfdump = "/usr/bin/elfdump";
+} else {
+  $elfdump = "/usr/ccs/bin/elfdump";
+}
 
 if (-f $elfdump) {
     open ELFDUMP,$elfdump.' -s '.(join ' ',@OBJECTS).'|' or die $!;
