# $NetBSD: Makefile,v 1.16 2015/12/05 21:25:42 adam Exp $

DISTNAME=		TTFQuery-1.0.5
PKGNAME=		${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=		fonts python
MASTER_SITES=		http://pypi.python.org/packages/source/T/TTFQuery/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://ttfquery.sourceforge.net/
COMMENT=		Query TTF font files for metadata and font outlines
LICENSE=		modified-bsd

DEPENDS+=		${PYPKGPREFIX}-fonttools>=2.0b1:../../fonts/py-fonttools

PYDISTUTILSPKG=		yes
PLIST_SUBST=		PYVERSSUFFIX=${PYVERSSUFFIX}
PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35 # py-fonttools

post-install:
	cd ${DESTDIR}${PREFIX}/bin && for f in ttffamily ttffiles ttfgroups ttfmetadata; do \
		${MV} $${f} $${f}${PYVERSSUFFIX}; \
	done

.include "../../lang/python/extension.mk"
.include "../../mk/bsd.pkg.mk"
