# $NetBSD: Makefile,v 1.21 2015/12/13 17:48:04 richard Exp $

DISTNAME=	fltk-1.3.3-source
PKGNAME=	${DISTNAME:S/-source//}
VERS=		${DISTNAME:S/fltk-//:S/-source//}
CATEGORIES=	x11
MASTER_SITES=	http://fltk.org/pub/fltk/${VERS}/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.fltk.org/
COMMENT=	Fast Light Tool Kit for graphical user interfaces
LICENSE=	gnu-lgpl-v2

WRKSRC=			${WRKDIR}/${DISTNAME:S/-source//}
USE_LANGUAGES=		c c++
USE_LIBTOOL=		yes
USE_TOOLS+=		gmake nroff
TEST_TARGET=		test

PKG_OPTIONS_VAR=	PKG_OPTIONS.fltk13
PKG_SUPPORTED_OPTIONS=	opengl # cairo
PKG_SUGGESTED_OPTIONS=	opengl # cairo
#PLIST_VARS+=	cairo
PLIST_VARS+=	opengl

.include "../../mk/bsd.prefs.mk"
.include "../../mk/bsd.options.mk"

PTHREAD_OPTS+=		require
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--enable-libtool=${LIBTOOL:Q}
CONFIGURE_ARGS+=	--enable-threads
CONFIGURE_ARGS+=	ac_cv_have_overlay=yes

PLIST_VARS+=		cs	# case-sensitive
.if !exists(./descr) && ${OPSYS} != "Darwin"
CONFIGURE_ARGS+=	--with-links
PLIST.cs=		yes
.endif

#.if !empty(PKG_OPTIONS:Mcairo)
#.  include "../../graphics/cairo/buildlink3.mk"
#CONFIGURE_ARGS+=	--enable-cairo
#PLIST.cairo=	yes
#.else
#CONFIGURE_ARGS+=	--disable-cairo
#.endif

.if !empty(PKG_OPTIONS:Mopengl)
.  include "../../graphics/Mesa/buildlink3.mk"
CONFIGURE_ARGS+=	--enable-gl
PLIST.opengl=	yes
.else
CONFIGURE_ARGS+=	--disable-gl
.endif

CONFIGURE_ARGS+=	--enable-shared
# Use pkgsrc versions, not package's bundled versions.
CONFIGURE_ARGS+=	--disable-localjpeg --disable-localzlib --disable-localpng

.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../graphics/glu/buildlink3.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXft/buildlink3.mk"
.include "../../x11/libXinerama/buildlink3.mk"
BUILDLINK_DEPMETHOD.libXt?=	build
.include "../../x11/libXt/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
