package com.huawei.hms.opendevice;

public class OpenDeviceTaskApiCall extends com.huawei.hms.common.internal.TaskApiCall<com.huawei.hms.opendevice.OpenDeviceHmsClient, com.huawei.hms.support.api.opendevice.OdidResult> {
    public OpenDeviceTaskApiCall(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public void doExecute(com.huawei.hms.common.internal.AnyClient r1, com.huawei.hms.common.internal.ResponseErrorCode r2, java.lang.String r3, com.huawei.hmf.tasks.TaskCompletionSource<com.huawei.hms.support.api.opendevice.OdidResult> r4) {
            r0 = this;
            com.huawei.hms.opendevice.OpenDeviceHmsClient r1 = (com.huawei.hms.opendevice.OpenDeviceHmsClient) r1
            r0.doExecute(r1, r2, r3, r4)
            return
    }

    public void doExecute(com.huawei.hms.opendevice.OpenDeviceHmsClient r7, com.huawei.hms.common.internal.ResponseErrorCode r8, java.lang.String r9, com.huawei.hmf.tasks.TaskCompletionSource<com.huawei.hms.support.api.opendevice.OdidResult> r10) {
            r6 = this;
            if (r8 != 0) goto L11
            com.huawei.hms.common.ApiException r7 = new com.huawei.hms.common.ApiException
            com.huawei.hms.support.api.client.Status r8 = new com.huawei.hms.support.api.client.Status
            r9 = 1
            r8.<init>(r9)
            r7.<init>(r8)
            r10.setException(r7)
            return
        L11:
            android.content.Context r0 = r7.getContext()
            java.lang.String r1 = r6.getUri()
            java.lang.String r2 = r6.getTransactionId()
            int r3 = r8.getStatusCode()
            int r4 = r8.getErrorCode()
            r5 = 50101303(0x2fc7c37, float:3.7099368E-37)
            com.huawei.hms.support.hianalytics.HiAnalyticsClient.reportExit(r0, r1, r2, r3, r4, r5)
            int r7 = r8.getErrorCode()
            java.lang.String r0 = "OpenDeviceTaskApiCall"
            if (r7 != 0) goto L59
            java.lang.String r7 = "onResult, success"
            com.huawei.hms.support.log.HMSLog.i(r0, r7)
            com.huawei.hms.support.api.entity.opendevice.OdidResp r7 = new com.huawei.hms.support.api.entity.opendevice.OdidResp
            r7.<init>()
            com.huawei.hms.utils.JsonUtil.jsonToEntity(r9, r7)
            com.huawei.hms.support.api.opendevice.OdidResult r8 = new com.huawei.hms.support.api.opendevice.OdidResult
            r8.<init>()
            java.lang.String r7 = r7.getId()
            r8.setId(r7)
            com.huawei.hms.support.api.client.Status r7 = new com.huawei.hms.support.api.client.Status
            r9 = 0
            r7.<init>(r9)
            r8.setStatus(r7)
            r10.setResult(r8)
            goto L86
        L59:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r9 = "onResult, returnCode: "
            r7.append(r9)
            int r9 = r8.getErrorCode()
            r7.append(r9)
            java.lang.String r7 = r7.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r7)
            com.huawei.hms.common.ApiException r7 = new com.huawei.hms.common.ApiException
            com.huawei.hms.support.api.client.Status r9 = new com.huawei.hms.support.api.client.Status
            int r0 = r8.getErrorCode()
            java.lang.String r8 = r8.getErrorReason()
            r9.<init>(r0, r8)
            r7.<init>(r9)
            r10.setException(r7)
        L86:
            return
    }

    @Override
    public int getApiLevel() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    public int getMinApkVersion() {
            r1 = this;
            r0 = 50002300(0x2faf97c, float:3.6877395E-37)
            return r0
    }
}
