# $NetBSD: Makefile,v 1.11 2014/05/29 23:36:55 wiz Exp $
#

DISTNAME=	Math-Random-MT-Perl-1.11
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Math/}

MAINTAINER=	he@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Math-Random-MT-Perl/
COMMENT=	Pure Perl Mersenne Twister Random Number Generator
LICENSE=	artistic-2.0

USE_LANGUAGES=	# empty
PERL5_PACKLIST=	auto/Math/Random/MT/Perl/.packlist

BUILD_DEPENDS+=	p5-Test-Number-Delta>=0:../../math/p5-Test-Number-Delta

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
