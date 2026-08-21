package com.huawei.hms.push.task;

public class SendUpStreamTask extends com.huawei.hms.common.internal.TaskApiCall<com.huawei.hms.aaid.task.PushClient, com.huawei.hms.push.task.BaseVoidTask> {
    public java.lang.String a;
    public java.lang.String b;

    public SendUpStreamTask(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a = r4
            r0.b = r5
            return
    }

    public final void a(com.huawei.hms.aaid.task.PushClient r7, com.huawei.hms.common.internal.ResponseErrorCode r8) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "receive upstream, msgId :"
            r0.append(r1)
            java.lang.String r1 = r6.b
            r0.append(r1)
            java.lang.String r1 = " , packageName = "
            r0.append(r1)
            java.lang.String r1 = r6.a
            r0.append(r1)
            java.lang.String r1 = " , errorCode = "
            r0.append(r1)
            int r1 = r8.getErrorCode()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SendUpStreamTask"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r2 = "com.huawei.push.action.MESSAGING_EVENT"
            r0.<init>(r2)
            java.lang.String r2 = r6.a
            r0.setPackage(r2)
            android.os.Bundle r2 = new android.os.Bundle
            r2.<init>()
            java.lang.String r3 = r6.b
            java.lang.String r4 = "message_id"
            r2.putString(r4, r3)
            int r3 = r8.getErrorCode()
            java.lang.String r4 = "error"
            r2.putInt(r4, r3)
            com.huawei.hms.aaid.constant.ErrorEnum r3 = com.huawei.hms.aaid.constant.ErrorEnum.SUCCESS
            int r3 = r3.getInternalCode()
            int r4 = r8.getErrorCode()
            java.lang.String r5 = "message_type"
            if (r3 != r4) goto L63
            java.lang.String r3 = "sent_message"
            r2.putString(r5, r3)
            goto L68
        L63:
            java.lang.String r3 = "send_error"
            r2.putString(r5, r3)
        L68:
            com.huawei.hms.push.h r3 = new com.huawei.hms.push.h
            r3.<init>()
            android.content.Context r4 = r7.getContext()
            boolean r0 = r3.a(r4, r2, r0)
            if (r0 == 0) goto L88
            java.lang.String r0 = "receive upstream, start service success"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            android.content.Context r7 = r7.getContext()
            java.lang.String r0 = r6.getUri()
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r7, r0, r8)
            goto L9e
        L88:
            java.lang.String r0 = "receive upstream, start service failed"
            com.huawei.hms.support.log.HMSLog.w(r1, r0)
            android.content.Context r7 = r7.getContext()
            java.lang.String r0 = r6.getUri()
            java.lang.String r8 = r8.getTransactionId()
            com.huawei.hms.aaid.constant.ErrorEnum r1 = com.huawei.hms.aaid.constant.ErrorEnum.ERROR_BIND_SERVICE_SELF_MAPPING
            com.huawei.hms.push.utils.PushBiUtil.reportExit(r7, r0, r8, r1)
        L9e:
            return
    }

    public void doExecute(com.huawei.hms.aaid.task.PushClient r4, com.huawei.hms.common.internal.ResponseErrorCode r5, java.lang.String r6, com.huawei.hmf.tasks.TaskCompletionSource<com.huawei.hms.push.task.BaseVoidTask> r7) {
            r3 = this;
            int r6 = r5.getErrorCode()
            java.lang.String r0 = "SendUpStreamTask"
            if (r6 != 0) goto L12
            java.lang.String r6 = "send up stream task,Operate succeed"
            com.huawei.hms.support.log.HMSLog.i(r0, r6)
            r6 = 0
            r7.setResult(r6)
            goto L53
        L12:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "send up stream task,Operate failed with ret="
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
            r3.a(r4, r5)
            return
    }

    @Override
    public void doExecute(com.huawei.hms.common.internal.AnyClient r1, com.huawei.hms.common.internal.ResponseErrorCode r2, java.lang.String r3, com.huawei.hmf.tasks.TaskCompletionSource<com.huawei.hms.push.task.BaseVoidTask> r4) {
            r0 = this;
            com.huawei.hms.aaid.task.PushClient r1 = (com.huawei.hms.aaid.task.PushClient) r1
            r0.doExecute(r1, r2, r3, r4)
            return
    }

    @Override
    public int getMinApkVersion() {
            r1 = this;
            r0 = 40003000(0x26265b8, float:1.663305E-37)
            return r0
    }
}
