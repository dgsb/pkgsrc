# $NetBSD: Makefile,v 1.6 2015/12/05 21:25:37 adam Exp $

DISTNAME=	ipaddr-2.1.11
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel python
MASTER_SITES=	https://googledrive.com/host/0B6wLlfdySbEUMkh1ZWhpZk1pZmc/
MASTER_SITES+=	https://pypi.python.org/packages/source/i/ipaddr/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://code.google.com/p/ipaddr-py/
COMMENT=	Google open source IPv4/IPv6 manipulation library in Python
LICENSE=	apache-2.0

PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35 # not yet ported as of 2.1.10
REPLACE_PYTHON+=		ipaddr.py

.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
