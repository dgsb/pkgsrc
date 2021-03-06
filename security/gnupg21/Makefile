# $NetBSD: Makefile,v 1.12 2015/12/15 18:00:18 adam Exp $

DISTNAME=	gnupg-2.1.10
PKGNAME=	${DISTNAME:S/gnupg-/gnupg21-/}
CATEGORIES=	security
MASTER_SITES=	ftp://ftp.gnupg.org/gcrypt/gnupg/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	ada@netbsdfr.org
HOMEPAGE=	https://www.gnupg.org/
COMMENT=	GnuPG with OpenPGP and S/MIME capabilities
LICENSE=	gnu-gpl-v3

DEPENDS+=	pinentry-[0-9]*:../../security/pinentry

CONFLICTS=	dirmngr-[0-9]*

BUILD_DEFS+=		VARBASE
USE_PKGLOCALEDIR=	yes
USE_TOOLS+=		gmake pkg-config makeinfo
USE_LIBTOOL=		yes
INFO_FILES=		yes
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--enable-g13

.include "../../mk/bsd.fast.prefs.mk"
.if ${OPSYS} == "Darwin"
LDFLAGS+=	-lresolv
.endif

.include "options.mk"

BUILDLINK_API_DEPENDS.libgpg-error+=	libgpg-error>=1.16
.include "../../security/libgpg-error/buildlink3.mk"
BUILDLINK_API_DEPENDS.libassuan+=	libassuan>=2.4.1
.include "../../security/libassuan2/buildlink3.mk"
.include "../../security/libksba/buildlink3.mk"
BUILDLINK_API_DEPENDS.npth+=		npth>=0.91
.include "../../devel/npth/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
