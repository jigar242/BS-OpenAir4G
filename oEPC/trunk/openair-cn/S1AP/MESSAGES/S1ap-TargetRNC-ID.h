/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/nfvepc/oEPC/trunk/openair-cn/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -fhave_native64`
 */

#ifndef	_S1ap_TargetRNC_ID_H_
#define	_S1ap_TargetRNC_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-LAI.h"
#include "S1ap-RAC.h"
#include "S1ap-RNC-ID.h"
#include "S1ap-ExtendedRNC-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_IE_Extensions;

/* S1ap-TargetRNC-ID */
typedef struct S1ap_TargetRNC_ID {
	S1ap_LAI_t	 lAI;
	S1ap_RAC_t	*rAC	/* OPTIONAL */;
	S1ap_RNC_ID_t	 rNC_ID;
	S1ap_ExtendedRNC_ID_t	*extendedRNC_ID	/* OPTIONAL */;
	struct S1ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_TargetRNC_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_TargetRNC_ID;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S1ap-IE-Extensions.h"

#endif	/* _S1ap_TargetRNC_ID_H_ */
#include <asn_internal.h>
