# $NetBSD: Makefile,v 1.16 2014/05/29 23:35:55 wiz Exp $

DISTNAME=	File-Slurp-9999.19
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	3
SVR4_PKGNAME=	p5fsl
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=File/}

MAINTAINER=	hiramatu@boreas.dti.ne.jp
HOMEPAGE=	http://search.cpan.org/dist/File-Slurp/
COMMENT=	Read/write/append files quickly
LICENSE=	${PERL5_LICENSE}

PKG_INSTALLATION_TYPES=	overwrite pkgviews

PERL5_PACKLIST=		auto/File/Slurp/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
