# $NetBSD: Makefile,v 1.4 2015/02/16 10:15:46 jperkin Exp $

PKGNAME=	suse_libsigc++2-${SUSE_VERSION}
CATEGORIES=	emulators
RPMPKGS+=	libsigc-2_0-0-2.2.10-2.1.2.${SUSE_ARCH}

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Linux compatibility package for libsigc++2

EMUL_MODULES.linux=	base

.include "../../emulators/suse121_linux/Makefile.common"
.include "../../mk/bsd.pkg.mk"
