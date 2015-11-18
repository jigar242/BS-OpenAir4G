/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../../../S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_TypeOfError_H_
#define	_S1ap_TypeOfError_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_TypeOfError {
	S1ap_TypeOfError_not_understood	= 0,
	S1ap_TypeOfError_missing	= 1
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_TypeOfError;

/* S1ap-TypeOfError */
typedef long	 S1ap_TypeOfError_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_TypeOfError;
asn_struct_free_f S1ap_TypeOfError_free;
asn_struct_print_f S1ap_TypeOfError_print;
asn_constr_check_f S1ap_TypeOfError_constraint;
ber_type_decoder_f S1ap_TypeOfError_decode_ber;
der_type_encoder_f S1ap_TypeOfError_encode_der;
xer_type_decoder_f S1ap_TypeOfError_decode_xer;
xer_type_encoder_f S1ap_TypeOfError_encode_xer;
per_type_decoder_f S1ap_TypeOfError_decode_uper;
per_type_encoder_f S1ap_TypeOfError_encode_uper;
per_type_decoder_f S1ap_TypeOfError_decode_aper;
per_type_encoder_f S1ap_TypeOfError_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_TypeOfError_H_ */
#include <asn_internal.h>
