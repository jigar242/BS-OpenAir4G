/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "../../../S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_ProcedureCode_H_
#define	_S1ap_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_ProcedureCode {
	S1ap_ProcedureCode_id_HandoverPreparation	= 0,
	S1ap_ProcedureCode_id_HandoverResourceAllocation	= 1,
	S1ap_ProcedureCode_id_HandoverNotification	= 2,
	S1ap_ProcedureCode_id_PathSwitchRequest	= 3,
	S1ap_ProcedureCode_id_HandoverCancel	= 4,
	S1ap_ProcedureCode_id_E_RABSetup	= 5,
	S1ap_ProcedureCode_id_E_RABModify	= 6,
	S1ap_ProcedureCode_id_E_RABRelease	= 7,
	S1ap_ProcedureCode_id_E_RABReleaseIndication	= 8,
	S1ap_ProcedureCode_id_InitialContextSetup	= 9,
	S1ap_ProcedureCode_id_Paging	= 10,
	S1ap_ProcedureCode_id_downlinkNASTransport	= 11,
	S1ap_ProcedureCode_id_initialUEMessage	= 12,
	S1ap_ProcedureCode_id_uplinkNASTransport	= 13,
	S1ap_ProcedureCode_id_Reset	= 14,
	S1ap_ProcedureCode_id_ErrorIndication	= 15,
	S1ap_ProcedureCode_id_NASNonDeliveryIndication	= 16,
	S1ap_ProcedureCode_id_S1Setup	= 17,
	S1ap_ProcedureCode_id_UEContextReleaseRequest	= 18,
	S1ap_ProcedureCode_id_DownlinkS1cdma2000tunneling	= 19,
	S1ap_ProcedureCode_id_UplinkS1cdma2000tunneling	= 20,
	S1ap_ProcedureCode_id_UEContextModification	= 21,
	S1ap_ProcedureCode_id_UECapabilityInfoIndication	= 22,
	S1ap_ProcedureCode_id_UEContextRelease	= 23,
	S1ap_ProcedureCode_id_eNBStatusTransfer	= 24,
	S1ap_ProcedureCode_id_MMEStatusTransfer	= 25,
	S1ap_ProcedureCode_id_DeactivateTrace	= 26,
	S1ap_ProcedureCode_id_TraceStart	= 27,
	S1ap_ProcedureCode_id_TraceFailureIndication	= 28,
	S1ap_ProcedureCode_id_ENBConfigurationUpdate	= 29,
	S1ap_ProcedureCode_id_MMEConfigurationUpdate	= 30,
	S1ap_ProcedureCode_id_LocationReportingControl	= 31,
	S1ap_ProcedureCode_id_LocationReportingFailureIndication	= 32,
	S1ap_ProcedureCode_id_LocationReport	= 33,
	S1ap_ProcedureCode_id_OverloadStart	= 34,
	S1ap_ProcedureCode_id_OverloadStop	= 35,
	S1ap_ProcedureCode_id_WriteReplaceWarning	= 36,
	S1ap_ProcedureCode_id_eNBDirectInformationTransfer	= 37,
	S1ap_ProcedureCode_id_MMEDirectInformationTransfer	= 38,
	S1ap_ProcedureCode_id_PrivateMessage	= 39,
	S1ap_ProcedureCode_id_eNBConfigurationTransfer	= 40,
	S1ap_ProcedureCode_id_MMEConfigurationTransfer	= 41,
	S1ap_ProcedureCode_id_CellTrafficTrace	= 42,
	S1ap_ProcedureCode_id_Kill	= 43,
	S1ap_ProcedureCode_id_downlinkUEAssociatedLPPaTransport	= 44,
	S1ap_ProcedureCode_id_uplinkUEAssociatedLPPaTransport	= 45,
	S1ap_ProcedureCode_id_downlinkNonUEAssociatedLPPaTransport	= 46,
	S1ap_ProcedureCode_id_uplinkNonUEAssociatedLPPaTransport	= 47
} e_S1ap_ProcedureCode;

/* S1ap-ProcedureCode */
typedef long	 S1ap_ProcedureCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_ProcedureCode;
asn_struct_free_f S1ap_ProcedureCode_free;
asn_struct_print_f S1ap_ProcedureCode_print;
asn_constr_check_f S1ap_ProcedureCode_constraint;
ber_type_decoder_f S1ap_ProcedureCode_decode_ber;
der_type_encoder_f S1ap_ProcedureCode_encode_der;
xer_type_decoder_f S1ap_ProcedureCode_decode_xer;
xer_type_encoder_f S1ap_ProcedureCode_encode_xer;
per_type_decoder_f S1ap_ProcedureCode_decode_uper;
per_type_encoder_f S1ap_ProcedureCode_encode_uper;
per_type_decoder_f S1ap_ProcedureCode_decode_aper;
per_type_encoder_f S1ap_ProcedureCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_ProcedureCode_H_ */
#include <asn_internal.h>
