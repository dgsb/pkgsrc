# $NetBSD: Makefile,v 1.1 2015/10/11 00:52:23 ryoon Exp $

DISTNAME=	8086tiny_125
PKGNAME=	${DISTNAME:S/tiny_1/tiny-1./}
CATEGORIES=	emulators
MASTER_SITES=	http://www.megalith.co.uk/8086tiny/downloads/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	ryoon@NetBSD.org
HOMEPAGE=	http://www.megalith.co.uk/8086tiny/
COMMENT=	PC XT-compatible emulator/virtual machine written in C
LICENSE=	mit

WRKSRC=		${WRKDIR}

USE_TOOLS+=	sed

BUILD_TARGET=	8086tiny
LDFLAGS.NetBSD=	-lcompat

INSTALLATION_DIRS=	bin share/8086tiny

post-build:
	${SED} -e 's,@SH@,${SH},' -e 's,@PREFIX@,${PREFIX},'\
		${FILESDIR}/run-8086tiny-freedos.sh.in \
		> ${WRKSRC}/run-8086tiny-freedos.sh
	${SED} -e 's,@PREFIX@,${PREFIX},'\
		${FILESDIR}/README.in \
		> ${WRKSRC}/README

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/8086tiny \
		${DESTDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/bios \
		${DESTDIR}${PREFIX}/share/8086tiny
	${INSTALL_DATA} ${WRKSRC}/fd.img \
		${DESTDIR}${PREFIX}/share/8086tiny/freedos.img
	${INSTALL_SCRIPT} ${WRKSRC}/run-8086tiny-freedos.sh \
		${DESTDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/README \
		${DESTDIR}${PREFIX}/share/8086tiny

.include "../../devel/SDL/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
