/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Descriptions"
 * 	found in "E2AP-PDU-Descriptions-v01.00.asn"
 * 	`asn1c -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_InitiatingMessage_H_
#define	_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "RICsubscriptionRequest.h"
#include "RICsubscriptionResponse.h"
#include "RICsubscriptionFailure.h"
#include "RICsubscriptionDeleteRequest.h"
#include "RICsubscriptionDeleteResponse.h"
#include "RICsubscriptionDeleteFailure.h"
#include "RICserviceUpdate.h"
#include "RICserviceUpdateAcknowledge.h"
#include "RICserviceUpdateFailure.h"
#include "RICcontrolRequest.h"
#include "RICcontrolAcknowledge.h"
#include "RICcontrolFailure.h"
#include "E2setupRequest.h"
#include "E2setupResponse.h"
#include "E2setupFailure.h"
#include "ResetRequest.h"
#include "ResetResponse.h"
#include "RICindication.h"
#include "RICserviceQuery.h"
#include "ErrorIndication.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitiatingMessage__value_PR {
	InitiatingMessage__value_PR_NOTHING,	/* No components present */
	InitiatingMessage__value_PR_RICsubscriptionRequest,
	InitiatingMessage__value_PR_RICsubscriptionDeleteRequest,
	InitiatingMessage__value_PR_RICserviceUpdate,
	InitiatingMessage__value_PR_RICcontrolRequest,
	InitiatingMessage__value_PR_E2setupRequest,
	InitiatingMessage__value_PR_ResetRequest,
	InitiatingMessage__value_PR_RICindication,
	InitiatingMessage__value_PR_RICserviceQuery,
	InitiatingMessage__value_PR_ErrorIndication
} InitiatingMessage__value_PR;

/* InitiatingMessage */
typedef struct InitiatingMessage {
	ProcedureCode_t	 procedureCode;
	Criticality_t	 criticality;
	struct InitiatingMessage__value {
		InitiatingMessage__value_PR present;
		union InitiatingMessage__value_u {
			c	 RICsubscriptionRequest;
			RICsubscriptionDeleteRequest_t	 RICsubscriptionDeleteRequest;
			RICserviceUpdate_t	 RICserviceUpdate;
			RICcontrolRequest_t	 RICcontrolRequest;
			E2setupRequest_t	 E2setupRequest;
			ResetRequest_t	 ResetRequest;
			RICindication_t	 RICindication;
			RICserviceQuery_t	 RICserviceQuery;
			ErrorIndication_t	 ErrorIndication;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _InitiatingMessage_H_ */
#include <asn_internal.h>
