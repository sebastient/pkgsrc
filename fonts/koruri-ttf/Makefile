# $NetBSD: Makefile,v 1.5 2014/09/04 12:47:15 nonaka Exp $
#

DISTNAME=	Koruri-${KORURI_VERSION}
PKGNAME=	koruri-ttf-${KORURI_VERSION}
CATEGORIES=	fonts japanese
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE_JP:=koruri/61919/}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	nonakap@gmail.com
HOMEPAGE=	http://koruri.lindwurm.biz/
COMMENT=	Koruri Japanese TrueType fonts
LICENSE=	apache-2.0

KORURI_VERSION=	20140904

USE_X11BASE=	YES
NO_CONFIGURE=	YES
NO_BUILD=	YES

FONTDIR=	${PREFIX}/share/fonts/X11/TTF
FONTS_DIRS.ttf=	${FONTDIR}
DOCSDIR=	${PREFIX}/share/doc/${PKGBASE}

INSTALLATION_DIRS=	share/fonts/X11/TTF \
			share/doc/${PKGBASE}

INSTALL_FONTS=	Koruri-Bold.ttf \
		Koruri-Extrabold.ttf \
		Koruri-Light.ttf \
		Koruri-Regular.ttf \
		Koruri-Semibold.ttf
INSTALL_DOCS=	LICENSE \
		LICENSE_E.mplus \
		LICENSE_J.mplus \
		LICENSE_opensans \
		README.md \
		README_E.mplus \
		README_J.mplus \
		README_ja.md


USE_LANGUAGES=	# none

do-install:
.for fontfile in ${INSTALL_FONTS}
	${INSTALL_DATA} ${WRKSRC}/${fontfile} ${DESTDIR}${FONTDIR}
.endfor
.for docfile in ${INSTALL_DOCS}
	${INSTALL_DATA} ${WRKSRC}/${docfile} ${DESTDIR}${DOCSDIR}
.endfor

.include "../../mk/bsd.pkg.mk"
