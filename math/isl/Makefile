# $NetBSD: Makefile,v 1.5 2014/04/25 09:11:49 wiz Exp $

DISTNAME=	isl-0.13
CATEGORIES=	math
MASTER_SITES=	http://isl.gforge.inria.fr/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://isl.gforge.inria.fr/
COMMENT=	Integer set library required by gcc graphite
LICENSE=	mit

USE_LANGUAGES=		c c++
USE_LIBTOOL=		yes
GNU_CONFIGURE=		yes

TEST_TARGET=	check

.include "../../devel/gmp/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
