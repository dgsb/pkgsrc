# $NetBSD: Makefile,v 1.20 2015/12/05 21:25:32 adam Exp $

DISTNAME=		pymssql-1.0.2
PKGNAME=		${PYPKGPREFIX}-${DISTNAME:S/py//}
PKGREVISION=		3
CATEGORIES=		databases python
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=pymssql/}

MAINTAINER=		bartosz.kuzma@gmail.com
HOMEPAGE=		http://pymssql.sourceforge.net/
COMMENT=		Python interface to MS SQL
LICENSE=		gnu-lgpl-v2.1

SUBST_CLASSES+=		crlf
SUBST_MESSAGE.crlf=	stripping EOL CR
SUBST_STAGE.crlf=	post-extract
SUBST_FILES.crlf=	mssqldbmodule.c pymssql.py
SUBST_FILTER_CMD.crlf=	${TR} -d '\r'

BUILDLINK_API_DEPENDS.freetds+=	freetds>=0.63

PYTHON_VERSIONS_INCOMPATIBLE=	33 34 35 # not yet ported as of 1.0.2; v2 might be better.

.include "../../databases/freetds/buildlink3.mk"
.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
