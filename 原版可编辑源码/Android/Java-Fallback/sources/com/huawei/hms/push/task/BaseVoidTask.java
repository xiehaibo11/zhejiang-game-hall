package com.huawei.hms.push.task;

public class BaseVoidTask extends com.huawei.hms.common.internal.TaskApiCall<com.huawei.hms.aaid.task.PushClient, java.lang.Void> {
    public BaseVoidTask(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public void doExecute(com.huawei.hms.aaid.task.PushClient r4, com.huawei.hms.common.internal.ResponseErrorCode r5, java.lang.String r6, com.huawei.hmf.tasks.TaskCompletionSource<java.lang.Void> r7) {
            r3 = this;
            int r6 = r5.getErrorCode()
            java.lang.String r0 = "BaseVoidTask"
            if (r6 != 0) goto L12
            java.lang.String r6 = "Operate succeed"
            com.huawei.hms.support.log.HMSLog.i(r0, r6)
            r6 = 0
            r7.setResult(r6)
            goto L53
        L12:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "Operate failed with ret="
            r6.append(r1)
            int r1 = r5.getErrorCode()
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r6)
            int r6 = r5.getErrorCode()
            com.huawei.hms.aaid.constant.ErrorEnum r6 = com.huawei.hms.aaid.constant.ErrorEnum.fromCode(r6)
            com.huawei.hms.aaid.constant.ErrorEnum r0 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_UNKNOWN
            if (r6 == r0) goto L3e
            com.huawei.hms.common.ApiException r6 = r6.toApiException()
            r7.setException(r6)
            goto L53
        L3e:
            com.huawei.hms.common.ApiException r6 = new com.huawei.hms.common.ApiException
            com.huawei.hms.support.api.client.Status r0 = new com.huawei.hms.support.api.client.Status
            int r1 = r5.getErrorCode()
            java.lang.String r2 = r5.getErrorReason()
            r0.<init>(r1, r2)
            r6.<init>(r0)
            r7.setException(r6)
        L53:
            android.content.Context r4 = r4.getContext()
            java.lang.String r6 = r3.getUri()
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r4, r6, r5)
            return
    }

    @Override
    public void doExecute(com.huawei.hms.common.internal.AnyClient r1, com.huawei.hms.common.internal.ResponseErrorCode r2, java.lang.String r3, com.huawei.hmf.tasks.TaskCompletionSource<java.lang.Void> r4) {
            r0 = this;
            com.huawei.hms.aaid.task.PushClient r1 = (com.huawei.hms.aaid.task.PushClient) r1
            r0.doExecute(r1, r2, r3, r4)
            return
    }

    @Override
    public int getMinApkVersion() {
            r1 = this;
            r0 = 30000000(0x1c9c380, float:7.411627E-38)
            return r0
    }
}
