# $NetBSD: Makefile,v 1.2 2015/06/12 10:48:52 wiz Exp $

DISTNAME=	Acme-Damn-0.06
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/I/IB/IBB/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Acme-Damn/
COMMENT=	Perl5 module for 'unblessing' perl objects
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Test-Exception-[0-9]*:../../devel/p5-Test-Exception

PERL5_PACKLIST=		auto/Acme/Damn/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
