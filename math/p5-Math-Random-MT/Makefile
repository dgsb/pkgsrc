# $NetBSD: Makefile,v 1.9 2015/06/12 10:50:30 wiz Exp $
#

DISTNAME=	Math-Random-MT-1.16
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	4
CATEGORIES=	math perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Math/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Math-Random-MT/
COMMENT=	The Mersenne Twister PRNG
LICENSE=	modified-bsd

USE_LANGUAGES=	c
PERL5_PACKLIST=	auto/Math/Random/MT/.packlist

DEPENDS+=	p5-Test-Number-Delta>=0:../../math/p5-Test-Number-Delta

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
