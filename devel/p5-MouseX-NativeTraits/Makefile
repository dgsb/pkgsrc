# $NetBSD: Makefile,v 1.4 2015/06/12 10:49:33 wiz Exp $
#

DISTNAME=		MouseX-NativeTraits-1.09
PKGNAME=		p5-${DISTNAME}
PKGREVISION=		3
CATEGORIES=		devel perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=MouseX/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/MouseX-NativeTraits/
COMMENT=		Extend your attribute interfaces for Mouse
LICENSE=		${PERL5_LICENSE}

PERL5_PACKLIST=		auto/MouseX/NativeTraits/.packlist

BUILD_DEPENDS+=		p5-Any-Moose>=0.13:../../devel/p5-Any-Moose
BUILD_DEPENDS+=		p5-Test-Fatal>=0.003:../../devel/p5-Test-Fatal

DEPENDS+=		p5-Mouse>=0.82:../../devel/p5-Mouse

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
