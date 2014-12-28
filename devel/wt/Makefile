# $NetBSD$

DISTNAME=	wt-3.3.3
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=witty/}

MAINTAINER=	me@staylor.ca
HOMEPAGE=	http://witty.sourceforge.net/
COMMENT=	C++ library for developing web applications
LICENSE=	gnu-gpl-v2

USE_TOOLS+=     bash gmake pkg-config
USE_CMAKE=	yes
CMAKE_ARGS=	-DWT_CPP_11_MODE=-std=c++11
USE_LANGUAGES=	c c++

.include "../boost-headers/buildlink3.mk"
.include "../boost-libs/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
