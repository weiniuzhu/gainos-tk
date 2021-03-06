/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-06-24:09-38-31.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */

#include "CanNm.h"
#include "CanIf.h"
#include "Nm.h"

const CanNm_ChannelType  CanNm_Channels[] = {
	{//vCanNm_Channel_0
		/* Active = */ TRUE,
		/* NmNetworkHandle = */ vNm_Channel_0,
		/* NodeId = */ 0xEF,
		/* MainFunctionPeriod = */ 4,
		/* TimeoutTime = */ 1000,
		/* RepeatMessageTime = */ 1000,
		/* WaitBusSleepTime = */ 1000,
		/* MessageCycleTime = */ 1000,
		/* MessageCycleOffsetTime = */ 100,
		/* CanIfPduId = */ CANIF_TX_vEcuC_Pdu_1,
		/* PduLength = */ 8,
		/* NidPosition = */ CANNM_PDU_BYTE_1,
		/* CbvPosition = */ CANNM_PDU_BYTE_0
	},
};

const CanNm_ConfigType CanNm_Config = {
	/* CanNm_ChannelType* = */ CanNm_Channels
};

 