# $NetBSD: Makefile,v 1.3 2015/04/01 03:55:34 rodent Exp $

DISTNAME=	pygal-1.7.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	graphics python
MASTER_SITES=	https://pypi.python.org/packages/source/p/pygal/

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	http://pygal.org/
COMMENT=	Python SVG graph plotting library
LICENSE=	gnu-lgpl-v3

DEPENDS+=	${PYPKGPREFIX}-lxml-[0-9]*:../../textproc/py-lxml

USE_LANGUAGES=	# none

PY_PATCHPLIST=	yes
PLIST_SUBST+=	PYVERSSUFFIX=${PYVERSSUFFIX}

.include "options.mk"

post-install:
	${MV} ${DESTDIR}${PREFIX}/bin/pygal_gen.py \
		${DESTDIR}${PREFIX}/bin/pygal_gen${PYVERSSUFFIX}.py

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
