package com.huawei.hms.opendevice;

public class k extends com.huawei.hms.common.internal.TaskApiCall<com.huawei.hms.aaid.task.PushClient, java.lang.Void> {
    public com.huawei.hms.aaid.entity.DeleteTokenReq a;

    public k(java.lang.String r2, com.huawei.hms.aaid.entity.DeleteTokenReq r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = com.huawei.hms.utils.JsonUtil.createJsonString(r3)
            r1.<init>(r2, r0, r4)
            r1.a = r3
            return
    }

    public void a(com.huawei.hms.aaid.task.PushClient r2, com.huawei.hms.common.internal.ResponseErrorCode r3, java.lang.String r4, com.huawei.hmf.tasks.TaskCompletionSource<java.lang.Void> r5) {
            r1 = this;
            int r0 = r3.getErrorCode()
            if (r0 == 0) goto L4a
            java.lang.String r2 = com.huawei.hms.aaid.HmsInstanceId.TAG
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "DeleteTokenTask failed, ErrorCode: "
            r4.append(r0)
            int r0 = r3.getErrorCode()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.support.log.HMSLog.e(r2, r4)
            int r2 = r3.getErrorCode()
            com.huawei.hms.aaid.constant.ErrorEnum r2 = com.huawei.hms.aaid.constant.ErrorEnum.fromCode(r2)
            com.huawei.hms.aaid.constant.ErrorEnum r4 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_UNKNOWN
            if (r2 == r4) goto L34
            com.huawei.hms.common.ApiException r2 = r2.toApiException()
            r5.setException(r2)
            goto L78
        L34:
            com.huawei.hms.common.ApiException r2 = new com.huawei.hms.common.ApiException
            com.huawei.hms.support.api.client.Status r4 = new com.huawei.hms.support.api.client.Status
            int r0 = r3.getErrorCode()
            java.lang.String r3 = r3.getErrorReason()
            r4.<init>(r0, r3)
            r2.<init>(r4)
            r5.setException(r2)
            goto L78
        L4a:
            com.huawei.hms.aaid.entity.DeleteTokenResp r0 = new com.huawei.hms.aaid.entity.DeleteTokenResp
            r0.<init>()
            com.huawei.hms.core.aidl.IMessageEntity r4 = com.huawei.hms.utils.JsonUtil.jsonToEntity(r4, r0)
            com.huawei.hms.aaid.entity.DeleteTokenResp r4 = (com.huawei.hms.aaid.entity.DeleteTokenResp) r4
            int r4 = r4.getRetCode()
            com.huawei.hms.aaid.constant.ErrorEnum r4 = com.huawei.hms.aaid.constant.ErrorEnum.fromCode(r4)
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
            if (r4 == r0) goto L69
            com.huawei.hms.common.ApiException r2 = r4.toApiException()
            r5.setException(r2)
            goto L78
        L69:
            r4 = 0
            r5.setResult(r4)
            android.content.Context r2 = r2.getContext()
            java.lang.String r4 = r1.getUri()
            com.huawei.hms.opendevice.q.a(r2, r4, r3)
        L78:
            return
    }

    @Override
    public void doExecute(com.huawei.hms.common.internal.AnyClient r1, com.huawei.hms.common.internal.ResponseErrorCode r2, java.lang.String r3, com.huawei.hmf.tasks.TaskCompletionSource<java.lang.Void> r4) {
            r0 = this;
            com.huawei.hms.aaid.task.PushClient r1 = (com.huawei.hms.aaid.task.PushClient) r1
            r0.a(r1, r2, r3, r4)
            return
    }

    @Override
    public int getMinApkVersion() {
            r1 = this;
            com.huawei.hms.aaid.entity.DeleteTokenReq r0 = r1.a
            boolean r0 = r0.isMultiSender()
            if (r0 == 0) goto Lc
            r0 = 50004300(0x2fb014c, float:3.688188E-37)
            return r0
        Lc:
            r0 = 30000000(0x1c9c380, float:7.411627E-38)
            return r0
    }
}
