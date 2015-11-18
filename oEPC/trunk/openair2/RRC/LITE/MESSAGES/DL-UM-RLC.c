/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "DL-UM-RLC.h"

static asn_TYPE_member_t asn_MBR_DL_UM_RLC_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_UM_RLC, sn_FieldLength),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SN_FieldLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sn-FieldLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_UM_RLC, t_Reordering),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reordering,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-Reordering"
		},
};
static ber_tlv_tag_t asn_DEF_DL_UM_RLC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DL_UM_RLC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sn-FieldLength at 2556 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* t-Reordering at 2558 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_UM_RLC_specs_1 = {
	sizeof(struct DL_UM_RLC),
	offsetof(struct DL_UM_RLC, _asn_ctx),
	asn_MAP_DL_UM_RLC_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_UM_RLC = {
	"DL-UM-RLC",
	"DL-UM-RLC",
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
	asn_DEF_DL_UM_RLC_tags_1,
	sizeof(asn_DEF_DL_UM_RLC_tags_1)
		/sizeof(asn_DEF_DL_UM_RLC_tags_1[0]), /* 1 */
	asn_DEF_DL_UM_RLC_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_UM_RLC_tags_1)
		/sizeof(asn_DEF_DL_UM_RLC_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_UM_RLC_1,
	2,	/* Elements count */
	&asn_SPC_DL_UM_RLC_specs_1	/* Additional specs */
};

