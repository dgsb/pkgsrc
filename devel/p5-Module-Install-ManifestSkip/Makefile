# $NetBSD: Makefile,v 1.2 2015/06/12 10:49:27 wiz Exp $

DISTNAME=	Module-Install-ManifestSkip-0.24
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Module/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Module-Install-ManifestSkip/
COMMENT=	Module::Install::ManifestSkip - Generate a MANIFEST.SKIP file
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=	auto/Module/Install/ManifestSkip/.packlist
USE_LANGUAGES=	# none

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
