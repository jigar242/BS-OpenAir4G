/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SoundingRS-UL-ConfigDedicatedAperiodic-r10.h"

static int
memb_srs_ConfigIndexAp_r10_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_srs_ConfigApDCI_Format4_r10_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 3)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_srs_ConfigApDCI_Format4_r10_constr_5 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_srs_ActivateAp_r10_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_srs_ConfigIndexAp_r10_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_srs_ConfigApDCI_Format4_r10_constr_5 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_SoundingRS_UL_ConfigDedicatedAperiodic_r10_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_srs_ConfigApDCI_Format4_r10_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SRS_ConfigAp_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_srs_ConfigApDCI_Format4_r10_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_srs_ConfigApDCI_Format4_r10_specs_5 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ConfigApDCI_Format4_r10),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ConfigApDCI_Format4_r10, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_ConfigApDCI_Format4_r10_5 = {
	"srs-ConfigApDCI-Format4-r10",
	"srs-ConfigApDCI-Format4-r10",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_srs_ConfigApDCI_Format4_r10_tags_5,
	sizeof(asn_DEF_srs_ConfigApDCI_Format4_r10_tags_5)
		/sizeof(asn_DEF_srs_ConfigApDCI_Format4_r10_tags_5[0]) - 1, /* 1 */
	asn_DEF_srs_ConfigApDCI_Format4_r10_tags_5,	/* Same as above */
	sizeof(asn_DEF_srs_ConfigApDCI_Format4_r10_tags_5)
		/sizeof(asn_DEF_srs_ConfigApDCI_Format4_r10_tags_5[0]), /* 2 */
	&asn_PER_type_srs_ConfigApDCI_Format4_r10_constr_5,
	asn_MBR_srs_ConfigApDCI_Format4_r10_5,
	1,	/* Single element */
	&asn_SPC_srs_ConfigApDCI_Format4_r10_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10__setup, srs_ConfigApDCI_Format0_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_ConfigAp_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-ConfigApDCI-Format0-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10__setup, srs_ConfigApDCI_Format1a2b2c_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRS_ConfigAp_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-ConfigApDCI-Format1a2b2c-r10"
		},
};
static ber_tlv_tag_t asn_DEF_setup_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-ConfigApDCI-Format0-r10 at 2718 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* srs-ConfigApDCI-Format1a2b2c-r10 at 2719 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_9 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10__setup),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_9 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_9,
	sizeof(asn_DEF_setup_tags_9)
		/sizeof(asn_DEF_setup_tags_9[0]) - 1, /* 1 */
	asn_DEF_setup_tags_9,	/* Same as above */
	sizeof(asn_DEF_setup_tags_9)
		/sizeof(asn_DEF_setup_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_9,
	2,	/* Elements count */
	&asn_SPC_setup_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_srs_ActivateAp_r10_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_srs_ActivateAp_r10_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 2716 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 2718 */
};
static asn_CHOICE_specifics_t asn_SPC_srs_ActivateAp_r10_specs_7 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10, _asn_ctx),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10, present),
	sizeof(((struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10 *)0)->present),
	asn_MAP_srs_ActivateAp_r10_tag2el_7,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_ActivateAp_r10_7 = {
	"srs-ActivateAp-r10",
	"srs-ActivateAp-r10",
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
	&asn_PER_type_srs_ActivateAp_r10_constr_7,
	asn_MBR_srs_ActivateAp_r10_7,
	2,	/* Elements count */
	&asn_SPC_srs_ActivateAp_r10_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup, srs_ConfigIndexAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_srs_ConfigIndexAp_r10_constraint_3,
		&asn_PER_memb_srs_ConfigIndexAp_r10_constr_4,
		0,
		"srs-ConfigIndexAp-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup, srs_ConfigApDCI_Format4_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_srs_ConfigApDCI_Format4_r10_5,
		memb_srs_ConfigApDCI_Format4_r10_constraint_3,
		&asn_PER_memb_srs_ConfigApDCI_Format4_r10_constr_5,
		0,
		"srs-ConfigApDCI-Format4-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup, srs_ActivateAp_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_srs_ActivateAp_r10_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srs-ActivateAp-r10"
		},
};
static int asn_MAP_setup_oms_3[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-ConfigIndexAp-r10 at 2713 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-ConfigApDCI-Format4-r10 at 2714 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* srs-ActivateAp-r10 at 2716 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	3,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_3,
	3,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigDedicatedAperiodic_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_SoundingRS_UL_ConfigDedicatedAperiodic_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 2711 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 2713 */
};
static asn_CHOICE_specifics_t asn_SPC_SoundingRS_UL_ConfigDedicatedAperiodic_r10_specs_1 = {
	sizeof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10, _asn_ctx),
	offsetof(struct SoundingRS_UL_ConfigDedicatedAperiodic_r10, present),
	sizeof(((struct SoundingRS_UL_ConfigDedicatedAperiodic_r10 *)0)->present),
	asn_MAP_SoundingRS_UL_ConfigDedicatedAperiodic_r10_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodic_r10 = {
	"SoundingRS-UL-ConfigDedicatedAperiodic-r10",
	"SoundingRS-UL-ConfigDedicatedAperiodic-r10",
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
	&asn_PER_type_SoundingRS_UL_ConfigDedicatedAperiodic_r10_constr_1,
	asn_MBR_SoundingRS_UL_ConfigDedicatedAperiodic_r10_1,
	2,	/* Elements count */
	&asn_SPC_SoundingRS_UL_ConfigDedicatedAperiodic_r10_specs_1	/* Additional specs */
};

