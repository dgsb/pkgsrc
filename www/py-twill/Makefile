# $NetBSD: Makefile,v 1.4 2015/12/05 21:26:06 adam Exp $

DISTNAME=	twill-1.8.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	python www
MASTER_SITES=	https://pypi.python.org/packages/source/t/twill/

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	http://twill.idyll.org/
COMMENT=	Python package for the twill Web browsing language
LICENSE=	mit

USE_LANGUAGES=	# none

PY_PATCHPLIST=	yes
PLIST_SUBST+=	PYVERSSUFFIX=${PYVERSSUFFIX}
PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35 # setup fails for 1.8.0

post-install:
	${MV} ${DESTDIR}${PREFIX}/bin/twill-fork \
		${DESTDIR}${PREFIX}/bin/twill-fork${PYVERSSUFFIX}
	${MV} ${DESTDIR}${PREFIX}/bin/twill-sh \
		${DESTDIR}${PREFIX}/bin/twill-sh${PYVERSSUFFIX}

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
