# $NetBSD: Makefile,v 1.36 2015/10/10 01:58:16 ryoon Exp $

DISTNAME=	libdmapsharing-2.1.9
PKGREVISION=	32
CATEGORIES=	net
MASTER_SITES=	http://www.flyn.org/projects/libdmapsharing/

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Implementation of the DMAP family of protocols
HOMEPAGE=	http://www.flyn.org/projects/libdmapsharing/

GNU_CONFIGURE=		yes
LICENSE=		gnu-lgpl-v2.1
USE_LIBTOOL=		yes
USE_TOOLS+=		gmake pkg-config

PKGCONFIG_OVERRIDE=	libdmapsharing.pc.in

BUILDLINK_ABI_DEPENDS.gst-plugins0.10-base+= gst-plugins0.10-base>=0.10.23.2
BUILDLINK_ABI_DEPENDS.libsoup+= libsoup>=2.32

.include "../../devel/glib2/buildlink3.mk"
.include "../../graphics/gdk-pixbuf2/buildlink3.mk"
.include "../../multimedia/gst-plugins0.10-base/buildlink3.mk"
.include "../../net/avahi/buildlink3.mk"
.include "../../net/libsoup/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
