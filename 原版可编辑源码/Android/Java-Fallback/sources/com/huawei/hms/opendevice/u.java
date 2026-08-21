package com.huawei.hms.opendevice;

public class u extends com.huawei.hms.support.api.PendingResultImpl<com.huawei.hms.support.api.opendevice.OdidResult, com.huawei.hms.support.api.entity.opendevice.OdidResp> {
    public final com.huawei.hms.support.api.opendevice.HuaweiOpendeviceApiImpl a;

    public u(com.huawei.hms.support.api.opendevice.HuaweiOpendeviceApiImpl r1, com.huawei.hms.support.api.client.ApiClient r2, java.lang.String r3, com.huawei.hms.core.aidl.IMessageEntity r4) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2, r3, r4)
            return
    }

    public com.huawei.hms.support.api.opendevice.OdidResult a(com.huawei.hms.support.api.entity.opendevice.OdidResp r5) {
            r4 = this;
            r0 = 0
            java.lang.String r1 = "OpenIdentifierApiImpl"
            if (r5 != 0) goto Lb
            java.lang.String r5 = "getOdid OaidResp is null"
            com.huawei.hms.support.log.HMSLog.e(r1, r5)
            return r0
        Lb:
            com.huawei.hms.support.api.client.Status r2 = r5.getCommonStatus()
            if (r2 != 0) goto L17
            java.lang.String r5 = "getOdid commonStatus is null"
            com.huawei.hms.support.log.HMSLog.e(r1, r5)
            return r0
        L17:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "getOdid onComplete:"
            r0.append(r3)
            int r3 = r2.getStatusCode()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            com.huawei.hms.support.api.opendevice.OdidResult r0 = new com.huawei.hms.support.api.opendevice.OdidResult
            r0.<init>()
            r0.setStatus(r2)
            java.lang.String r5 = r5.getId()
            r0.setId(r5)
            return r0
    }

    @Override
    public com.huawei.hms.support.api.client.Result onComplete(com.huawei.hms.core.aidl.IMessageEntity r1) {
            r0 = this;
            com.huawei.hms.support.api.entity.opendevice.OdidResp r1 = (com.huawei.hms.support.api.entity.opendevice.OdidResp) r1
            com.huawei.hms.support.api.opendevice.OdidResult r1 = r0.a(r1)
            return r1
    }
}
