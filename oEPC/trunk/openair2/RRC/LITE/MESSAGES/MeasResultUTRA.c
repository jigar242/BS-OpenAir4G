/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "MeasResultUTRA.h"

static int
memb_locationAreaCode_constraint_5(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_routingAreaCode_constraint_5(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_utra_RSCP_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -5 && value <= 91)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_utra_EcN0_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 49)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_physCellId_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_locationAreaCode_constr_7 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_routingAreaCode_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utra_RSCP_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -5,  91 }	/* (-5..91) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utra_EcN0_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  49 }	/* (0..49) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_physCellId_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA__physCellId, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_FDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA__physCellId, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_TDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_physCellId_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 3422 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 3424 */
};
static asn_CHOICE_specifics_t asn_SPC_physCellId_specs_2 = {
	sizeof(struct MeasResultUTRA__physCellId),
	offsetof(struct MeasResultUTRA__physCellId, _asn_ctx),
	offsetof(struct MeasResultUTRA__physCellId, present),
	sizeof(((struct MeasResultUTRA__physCellId *)0)->present),
	asn_MAP_physCellId_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_physCellId_2 = {
	"physCellId",
	"physCellId",
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
	&asn_PER_type_physCellId_constr_2,
	asn_MBR_physCellId_2,
	2,	/* Elements count */
	&asn_SPC_physCellId_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cgi_Info_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA__cgi_Info, cellGlobalId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellGlobalId"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasResultUTRA__cgi_Info, locationAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_locationAreaCode_constraint_5,
		&asn_PER_memb_locationAreaCode_constr_7,
		0,
		"locationAreaCode"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultUTRA__cgi_Info, routingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_routingAreaCode_constraint_5,
		&asn_PER_memb_routingAreaCode_constr_8,
		0,
		"routingAreaCode"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA__cgi_Info, plmn_IdentityList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-IdentityList"
		},
};
static int asn_MAP_cgi_Info_oms_5[] = { 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_cgi_Info_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_cgi_Info_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalId at 3426 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* locationAreaCode at 3427 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* routingAreaCode at 3428 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* plmn-IdentityList at 3429 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cgi_Info_specs_5 = {
	sizeof(struct MeasResultUTRA__cgi_Info),
	offsetof(struct MeasResultUTRA__cgi_Info, _asn_ctx),
	asn_MAP_cgi_Info_tag2el_5,
	4,	/* Count of tags in the map */
	asn_MAP_cgi_Info_oms_5,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cgi_Info_5 = {
	"cgi-Info",
	"cgi-Info",
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
	asn_DEF_cgi_Info_tags_5,
	sizeof(asn_DEF_cgi_Info_tags_5)
		/sizeof(asn_DEF_cgi_Info_tags_5[0]) - 1, /* 1 */
	asn_DEF_cgi_Info_tags_5,	/* Same as above */
	sizeof(asn_DEF_cgi_Info_tags_5)
		/sizeof(asn_DEF_cgi_Info_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cgi_Info_5,
	4,	/* Elements count */
	&asn_SPC_cgi_Info_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResult_10[] = {
	{ ATF_POINTER, 3, offsetof(struct MeasResultUTRA__measResult, utra_RSCP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_utra_RSCP_constraint_10,
		&asn_PER_memb_utra_RSCP_constr_11,
		0,
		"utra-RSCP"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultUTRA__measResult, utra_EcN0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_utra_EcN0_constraint_10,
		&asn_PER_memb_utra_EcN0_constr_12,
		0,
		"utra-EcN0"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA__measResult, additionalSI_Info_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSI_Info_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalSI-Info-r9"
		},
};
static int asn_MAP_measResult_oms_10[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_measResult_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_measResult_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utra-RSCP at 3432 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utra-EcN0 at 3433 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* additionalSI-Info-r9 at 3435 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResult_specs_10 = {
	sizeof(struct MeasResultUTRA__measResult),
	offsetof(struct MeasResultUTRA__measResult, _asn_ctx),
	asn_MAP_measResult_tag2el_10,
	3,	/* Count of tags in the map */
	asn_MAP_measResult_oms_10,	/* Optional members */
	2, 1,	/* Root/Additions */
	1,	/* Start extensions */
	4	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResult_10 = {
	"measResult",
	"measResult",
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
	asn_DEF_measResult_tags_10,
	sizeof(asn_DEF_measResult_tags_10)
		/sizeof(asn_DEF_measResult_tags_10[0]) - 1, /* 1 */
	asn_DEF_measResult_tags_10,	/* Same as above */
	sizeof(asn_DEF_measResult_tags_10)
		/sizeof(asn_DEF_measResult_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_measResult_10,
	3,	/* Elements count */
	&asn_SPC_measResult_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasResultUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_physCellId_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cgi_Info_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cgi-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA, measResult),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_measResult_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResult"
		},
};
static int asn_MAP_MeasResultUTRA_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_MeasResultUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasResultUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId at 3422 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cgi-Info at 3426 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResult at 3432 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasResultUTRA_specs_1 = {
	sizeof(struct MeasResultUTRA),
	offsetof(struct MeasResultUTRA, _asn_ctx),
	asn_MAP_MeasResultUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultUTRA = {
	"MeasResultUTRA",
	"MeasResultUTRA",
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
	asn_DEF_MeasResultUTRA_tags_1,
	sizeof(asn_DEF_MeasResultUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasResultUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasResultUTRA_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultUTRA_specs_1	/* Additional specs */
};

