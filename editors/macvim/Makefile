# $NetBSD$

DISTNAME=	snapshot-87
PKGNAME=        macvim-87
GITHUB_PROJECT=	macvim
CATEGORIES=	editors
MASTER_SITES=	${MASTER_SITE_GITHUB:=macvim-dev/}
DIST_SUBDIR=	${GITHUB_PROJECT}
GITHUB_TAG=     snapshot-87

MAINTAINER=	davidriod@googlemail.com
HOMEPAGE=	${MASTER_SITE_GITHUB:=macvim-dev/macvim/}
COMMENT=	Vim editor (vi clone) with OS X specific GUI
LICENSE=	vim-license

CONFLICTS+=		vim-gtk-[0-9]* vim-gtk2-[0-9]* vim-motif-[0-9]*
CONFLICTS+=		vim-xaw-[0-9]* vim-kde-[0-9]*

BROKEN_EXCEPT_ON_PLATFORM=  Darwin-*-*

GNU_CONFIGURE=yes
#CONFIGURE_ARGS+=	--enable-tclinterp
#CONFIGURE_ARGS+=	--enable-cscope
CONFIGURE_ARGS+=	--enable-gui=macvim

# url2pkg-marker (please do not remove this line.)
.include "../../mk/bsd.pkg.mk"
