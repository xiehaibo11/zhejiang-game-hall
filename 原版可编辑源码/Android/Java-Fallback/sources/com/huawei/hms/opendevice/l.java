package com.huawei.hms.opendevice;

public class l extends com.huawei.hms.common.internal.TaskApiCall<com.huawei.hms.aaid.task.PushClient, com.huawei.hms.aaid.entity.TokenResult> {
    public android.content.Context a;
    public com.huawei.hms.aaid.entity.TokenReq b;

    public l(java.lang.String r2, com.huawei.hms.aaid.entity.TokenReq r3, android.content.Context r4, java.lang.String r5) {
            r1 = this;
            java.lang.String r0 = com.huawei.hms.utils.JsonUtil.createJsonString(r3)
            r1.<init>(r2, r0, r5)
            r1.a = r4
            r1.b = r3
            return
    }

    public void a(com.huawei.hms.aaid.task.PushClient r4, com.huawei.hms.common.internal.ResponseErrorCode r5, java.lang.String r6, com.huawei.hmf.tasks.TaskCompletionSource<com.huawei.hms.aaid.entity.TokenResult> r7) {
            r3 = this;
            int r0 = r5.getErrorCode()
            if (r0 == 0) goto L4c
            java.lang.String r6 = com.huawei.hms.aaid.HmsInstanceId.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TokenTask failed, ErrorCode: "
            r0.append(r1)
            int r1 = r5.getErrorCode()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.support.log.HMSLog.e(r6, r0)
            int r6 = r5.getErrorCode()
            com.huawei.hms.aaid.constant.ErrorEnum r6 = com.huawei.hms.aaid.constant.ErrorEnum.fromCode(r6)
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_UNKNOWN
            if (r6 == r0) goto L35
            com.huawei.hms.common.ApiException r6 = r6.toApiException()
            r7.setException(r6)
            goto Ld5
        L35:
            com.huawei.hms.common.ApiException r6 = new com.huawei.hms.common.ApiException
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            int r1 = r5.getErrorCode()
            java.lang.String r2 = r5.getErrorReason()
            r0.<init>(r1, r2)
            r6.<init>(r0)
            r7.setException(r6)
            goto Ld5
        L4c:
            com.huawei.hms.aaid.entity.TokenResp r0 = new com.huawei.hms.aaid.entity.TokenResp
            r0.<init>()
            com.huawei.hms.core.aidl.IMessageEntity r6 = com.huawei.hms.utils.JsonUtil.jsonToEntity(r6, r0)
            com.huawei.hms.aaid.entity.TokenResp r6 = (com.huawei.hms.aaid.entity.TokenResp) r6
            int r0 = r6.getRetCode()
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.fromCode(r0)
            com.huawei.hms.aaid.constant.ErrorEnum r1 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
            if (r0 == r1) goto L85
            com.huawei.hms.common.ApiException r6 = r0.toApiException()
            r7.setException(r6)
            java.lang.String r6 = com.huawei.hms.aaid.HmsInstanceId.TAG
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "TokenTask failed, StatusCode:"
            r7.append(r1)
            int r0 = r0.getExternalCode()
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            com.huawei.hms.support.log.HMSLog.e(r6, r7)
            goto Ld5
        L85:
            com.huawei.hms.aaid.entity.TokenResult r0 = new com.huawei.hms.aaid.entity.TokenResult
            r0.<init>()
            java.lang.String r1 = r6.getToken()
            r0.setToken(r1)
            java.lang.String r1 = r6.getBelongId()
            r0.setBelongId(r1)
            int r1 = r6.getRetCode()
            com.huawei.hms.aaid.constant.ErrorEnum r1 = com.huawei.hms.aaid.constant.ErrorEnum.fromCode(r1)
            int r1 = r1.getExternalCode()
            r0.setRetCode(r1)
            r7.setResult(r0)
            java.lang.String r6 = r6.getToken()
            boolean r7 = android.text.TextUtils.isEmpty(r6)
            if (r7 == 0) goto Lc7
            java.lang.String r6 = com.huawei.hms.aaid.HmsInstanceId.TAG
            java.lang.String r7 = "GetTokenTask receive a empty token, please check HmsMessageService.onNewToken receive result."
            com.huawei.hms.support.log.HMSLog.i(r6, r7)
            android.content.Context r4 = r4.getContext()
            java.lang.String r6 = r3.getUri()
            com.huawei.hms.opendevice.q.a(r4, r6, r5)
            return
        Lc7:
            com.huawei.hms.aaid.entity.TokenReq r7 = r3.b
            java.lang.String r7 = r7.getSubjectId()
            r3.a(r6, r7)
            android.content.Context r7 = r3.a
            com.huawei.hms.opendevice.n.a(r7, r6)
        Ld5:
            android.content.Context r4 = r4.getContext()
            java.lang.String r6 = r3.getUri()
            com.huawei.hms.opendevice.q.a(r4, r6, r5)
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.content.Context r0 = r2.a
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            java.lang.String r0 = r0.b(r4)
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L20
            java.lang.String r0 = com.huawei.hms.aaid.HmsInstanceId.TAG
            java.lang.String r1 = "receive a token, refresh the local token"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.content.Context r0 = r2.a
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            r0.b(r4, r3)
        L20:
            return
    }

    @Override
    public void doExecute(com.huawei.hms.common.internal.AnyClient r1, com.huawei.hms.common.internal.ResponseErrorCode r2, java.lang.String r3, com.huawei.hmf.tasks.TaskCompletionSource<com.huawei.hms.aaid.entity.TokenResult> r4) {
            r0 = this;
            com.huawei.hms.aaid.task.PushClient r1 = (com.huawei.hms.aaid.task.PushClient) r1
            r0.a(r1, r2, r3, r4)
            return
    }

    @Override
    public int getMinApkVersion() {
            r1 = this;
            com.huawei.hms.aaid.entity.TokenReq r0 = r1.b
            boolean r0 = r0.isMultiSender()
            if (r0 == 0) goto Lc
            r0 = 50004300(0x2fb014c, float:3.688188E-37)
            return r0
        Lc:
            r0 = 30000000(0x1c9c380, float:7.411627E-38)
            return r0
    }
}
