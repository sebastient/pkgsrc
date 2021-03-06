# $NetBSD: options.mk,v 1.1 2008/11/01 09:51:59 adam Exp $

PKG_OPTIONS_VAR=	PKG_OPTIONS.fontforge
PKG_SUPPORTED_OPTIONS=	x11
PKG_SUGGESTED_OPTIONS=	x11

.include "../../mk/bsd.options.mk"

PLIST_VARS+=	x11

.if !empty(PKG_OPTIONS:Mx11)
PLIST.x11=	yes
# checks for X11/Intrinsic.h
BUILDLINK_DEPMETHOD.libXt+=	build
.include "../../x11/libXt/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXi/buildlink3.mk"
.else
CONFIGURE_ARGS+=	--without-x
.endif
