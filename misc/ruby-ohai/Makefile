# $NetBSD: Makefile,v 1.11 2015/12/13 16:36:11 taca Exp $

DISTNAME=	ohai-8.8.1
CATEGORIES=	misc

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/opscode/ohai
COMMENT=	Ohai profiles your system and emits JSON
LICENSE=	apache-2.0

DEPENDS+=	${RUBY_PKGPREFIX}-mime-types>=3.0<4:../../mail/ruby-mime-types
DEPENDS+=	${RUBY_PKGPREFIX}-systemu>=2.6.4<2.7:../../misc/ruby-systemu
DEPENDS+=	${RUBY_PKGPREFIX}-ffi>=1.9<2:../../devel/ruby-ffi
DEPENDS+=	${RUBY_PKGPREFIX}-ffi-yajl>=2.2<3:../../devel/ruby-ffi-yajl
DEPENDS+=	${RUBY_PKGPREFIX}-mixlib-cli>=1.5.0:../../devel/ruby-mixlib-cli
DEPENDS+=	${RUBY_PKGPREFIX}-mixlib-config>=2.1.0:../../devel/ruby-mixlib-config
DEPENDS+=	${RUBY_PKGPREFIX}-mixlib-log>=1.6.0:../../devel/ruby-mixlib-log
DEPENDS+=	${RUBY_PKGPREFIX}-mixlib-shellout>=2.0<3:../../devel/ruby-mixlib-shellout
DEPENDS+=	${RUBY_PKGPREFIX}-wmi-lite>=1.0:../../devel/ruby-wmi-lite
DEPENDS+=	${RUBY_PKGPREFIX}-ipaddress>=0.8.0:../../net/ruby-ipaddress
DEPENDS+=	${RUBY_PKGPREFIX}-chef-config<13:../../sysutils/ruby-chef-config

RUBY_VERSION_SUPPORTED=	200 21 22

RUBYGEM_OPTIONS+=	--format-executable

.include "../../lang/ruby/rubyversion.mk"

.if ${RUBY_VER} == "200"
DEPENDS+=	${RUBY_PKGPREFIX}-rake>=10.1:../../devel/ruby-rake
.endif

.include "../../lang/ruby/gem.mk"
.include "../../mk/bsd.pkg.mk"
