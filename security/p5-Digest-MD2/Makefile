# $NetBSD: Makefile,v 1.27 2015/06/12 10:51:07 wiz Exp $

DISTNAME=	Digest-MD2-2.04
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Digest/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Digest-MD2/
COMMENT=	Perl5 module for MD2
LICENSE=	${PERL5_LICENSE}

CONFLICTS+=		p5-Digest-MD5<=2.12

PERL5_PACKLIST=		auto/Digest/MD2/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
