/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/nfvepc/oEPC/trunk/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "MobilityStateParameters.h"

static int
t_Evaluation_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
t_Evaluation_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
t_Evaluation_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	t_Evaluation_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
t_Evaluation_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	t_Evaluation_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
t_Evaluation_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	t_Evaluation_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
t_Evaluation_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t_Evaluation_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
t_Evaluation_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	t_Evaluation_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
t_Evaluation_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t_Evaluation_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
t_Evaluation_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t_Evaluation_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
t_Evaluation_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t_Evaluation_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
t_Evaluation_2_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t_Evaluation_2_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
t_Evaluation_2_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t_Evaluation_2_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
t_HystNormal_11_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
t_HystNormal_11_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
t_HystNormal_11_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	t_HystNormal_11_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
t_HystNormal_11_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	t_HystNormal_11_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
t_HystNormal_11_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	t_HystNormal_11_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
t_HystNormal_11_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t_HystNormal_11_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
t_HystNormal_11_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	t_HystNormal_11_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
t_HystNormal_11_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t_HystNormal_11_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
t_HystNormal_11_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t_HystNormal_11_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
t_HystNormal_11_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t_HystNormal_11_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
t_HystNormal_11_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t_HystNormal_11_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
t_HystNormal_11_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t_HystNormal_11_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_n_CellChangeMedium_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
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
memb_n_CellChangeHigh_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_t_Evaluation_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t_HystNormal_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n_CellChangeMedium_constr_20 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n_CellChangeHigh_constr_21 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_t_Evaluation_value2enum_2[] = {
	{ 0,	3,	"s30" },
	{ 1,	3,	"s60" },
	{ 2,	4,	"s120" },
	{ 3,	4,	"s180" },
	{ 4,	4,	"s240" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static unsigned int asn_MAP_t_Evaluation_enum2value_2[] = {
	2,	/* s120(2) */
	3,	/* s180(3) */
	4,	/* s240(4) */
	0,	/* s30(0) */
	1,	/* s60(1) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5	/* spare3(5) */
};
static asn_INTEGER_specifics_t asn_SPC_t_Evaluation_specs_2 = {
	asn_MAP_t_Evaluation_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_t_Evaluation_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_t_Evaluation_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t_Evaluation_2 = {
	"t-Evaluation",
	"t-Evaluation",
	t_Evaluation_2_free,
	t_Evaluation_2_print,
	t_Evaluation_2_constraint,
	t_Evaluation_2_decode_ber,
	t_Evaluation_2_encode_der,
	t_Evaluation_2_decode_xer,
	t_Evaluation_2_encode_xer,
	t_Evaluation_2_decode_uper,
	t_Evaluation_2_encode_uper,
	t_Evaluation_2_decode_aper,
	t_Evaluation_2_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_t_Evaluation_tags_2,
	sizeof(asn_DEF_t_Evaluation_tags_2)
		/sizeof(asn_DEF_t_Evaluation_tags_2[0]) - 1, /* 1 */
	asn_DEF_t_Evaluation_tags_2,	/* Same as above */
	sizeof(asn_DEF_t_Evaluation_tags_2)
		/sizeof(asn_DEF_t_Evaluation_tags_2[0]), /* 2 */
	&asn_PER_type_t_Evaluation_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t_Evaluation_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_t_HystNormal_value2enum_11[] = {
	{ 0,	3,	"s30" },
	{ 1,	3,	"s60" },
	{ 2,	4,	"s120" },
	{ 3,	4,	"s180" },
	{ 4,	4,	"s240" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static unsigned int asn_MAP_t_HystNormal_enum2value_11[] = {
	2,	/* s120(2) */
	3,	/* s180(3) */
	4,	/* s240(4) */
	0,	/* s30(0) */
	1,	/* s60(1) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5	/* spare3(5) */
};
static asn_INTEGER_specifics_t asn_SPC_t_HystNormal_specs_11 = {
	asn_MAP_t_HystNormal_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_t_HystNormal_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_t_HystNormal_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t_HystNormal_11 = {
	"t-HystNormal",
	"t-HystNormal",
	t_HystNormal_11_free,
	t_HystNormal_11_print,
	t_HystNormal_11_constraint,
	t_HystNormal_11_decode_ber,
	t_HystNormal_11_encode_der,
	t_HystNormal_11_decode_xer,
	t_HystNormal_11_encode_xer,
	t_HystNormal_11_decode_uper,
	t_HystNormal_11_encode_uper,
	t_HystNormal_11_decode_aper,
	t_HystNormal_11_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_t_HystNormal_tags_11,
	sizeof(asn_DEF_t_HystNormal_tags_11)
		/sizeof(asn_DEF_t_HystNormal_tags_11[0]) - 1, /* 1 */
	asn_DEF_t_HystNormal_tags_11,	/* Same as above */
	sizeof(asn_DEF_t_HystNormal_tags_11)
		/sizeof(asn_DEF_t_HystNormal_tags_11[0]), /* 2 */
	&asn_PER_type_t_HystNormal_constr_11,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t_HystNormal_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MobilityStateParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityStateParameters, t_Evaluation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t_Evaluation_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-Evaluation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityStateParameters, t_HystNormal),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t_HystNormal_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-HystNormal"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityStateParameters, n_CellChangeMedium),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_n_CellChangeMedium_constraint_1,
		&asn_PER_memb_n_CellChangeMedium_constr_20,
		0,
		"n-CellChangeMedium"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityStateParameters, n_CellChangeHigh),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_n_CellChangeHigh_constraint_1,
		&asn_PER_memb_n_CellChangeHigh_constr_21,
		0,
		"n-CellChangeHigh"
		},
};
static ber_tlv_tag_t asn_DEF_MobilityStateParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MobilityStateParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t-Evaluation at 3039 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t-HystNormal at 3041 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* n-CellChangeMedium at 3042 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* n-CellChangeHigh at 3043 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MobilityStateParameters_specs_1 = {
	sizeof(struct MobilityStateParameters),
	offsetof(struct MobilityStateParameters, _asn_ctx),
	asn_MAP_MobilityStateParameters_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MobilityStateParameters = {
	"MobilityStateParameters",
	"MobilityStateParameters",
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
	asn_DEF_MobilityStateParameters_tags_1,
	sizeof(asn_DEF_MobilityStateParameters_tags_1)
		/sizeof(asn_DEF_MobilityStateParameters_tags_1[0]), /* 1 */
	asn_DEF_MobilityStateParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_MobilityStateParameters_tags_1)
		/sizeof(asn_DEF_MobilityStateParameters_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MobilityStateParameters_1,
	4,	/* Elements count */
	&asn_SPC_MobilityStateParameters_specs_1	/* Additional specs */
};

