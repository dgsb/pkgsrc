# $NetBSD: buildlink3.mk,v 1.1 2015/08/31 14:31:05 nros Exp $

BUILDLINK_TREE+=	asio

.if !defined(ASIO_BUILDLINK3_MK)
ASIO_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.asio+=	asio>=1.10.4
BUILDLINK_ABI_DEPENDS.asio+=	asio>=1.10.6
BUILDLINK_PKGSRCDIR.asio?=	../../devel/asio
BUILDLINK_DEPMETHOD.asio?=	build

.include "../../devel/boost-headers/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.endif	# ASIO_BUILDLINK3_MK

BUILDLINK_TREE+=	-asio
