/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "LocationInfo-r10.h"

static asn_per_constraints_t asn_PER_type_locationCoordinates_r10_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_locationCoordinates_r10_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LocationInfo_r10__locationCoordinates_r10, choice.ellipsoid_Point_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipsoid-Point-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LocationInfo_r10__locationCoordinates_r10, choice.ellipsoidPointWithAltitude_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipsoidPointWithAltitude-r10"
		},
};
static asn_TYPE_tag2member_t asn_MAP_locationCoordinates_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ellipsoid-Point-r10 at 3169 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ellipsoidPointWithAltitude-r10 at 3170 */
};
static asn_CHOICE_specifics_t asn_SPC_locationCoordinates_r10_specs_2 = {
	sizeof(struct LocationInfo_r10__locationCoordinates_r10),
	offsetof(struct LocationInfo_r10__locationCoordinates_r10, _asn_ctx),
	offsetof(struct LocationInfo_r10__locationCoordinates_r10, present),
	sizeof(((struct LocationInfo_r10__locationCoordinates_r10 *)0)->present),
	asn_MAP_locationCoordinates_r10_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_locationCoordinates_r10_2 = {
	"locationCoordinates-r10",
	"locationCoordinates-r10",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_locationCoordinates_r10_constr_2,
	asn_MBR_locationCoordinates_r10_2,
	2,	/* Elements count */
	&asn_SPC_locationCoordinates_r10_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LocationInfo_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LocationInfo_r10, locationCoordinates_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_locationCoordinates_r10_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"locationCoordinates-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct LocationInfo_r10, horizontalVelocity_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"horizontalVelocity-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LocationInfo_r10, gnss_TOD_msec_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-TOD-msec-r10"
		},
};
static int asn_MAP_LocationInfo_r10_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_LocationInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LocationInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* locationCoordinates-r10 at 3169 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* horizontalVelocity-r10 at 3173 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* gnss-TOD-msec-r10 at 3174 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LocationInfo_r10_specs_1 = {
	sizeof(struct LocationInfo_r10),
	offsetof(struct LocationInfo_r10, _asn_ctx),
	asn_MAP_LocationInfo_r10_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LocationInfo_r10_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LocationInfo_r10 = {
	"LocationInfo-r10",
	"LocationInfo-r10",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LocationInfo_r10_tags_1,
	sizeof(asn_DEF_LocationInfo_r10_tags_1)
		/sizeof(asn_DEF_LocationInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_LocationInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LocationInfo_r10_tags_1)
		/sizeof(asn_DEF_LocationInfo_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LocationInfo_r10_1,
	3,	/* Elements count */
	&asn_SPC_LocationInfo_r10_specs_1	/* Additional specs */
};

