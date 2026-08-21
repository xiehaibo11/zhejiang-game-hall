package com.huawei.hms.common.api;

public class AvailabilityException extends java.lang.Exception {
    private java.lang.String TAG;
    private java.lang.String message;

    public AvailabilityException() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "AvailabilityException"
            r1.TAG = r0
            r0 = 0
            r1.message = r0
            return
    }

    private com.huawei.hms.api.ConnectionResult generateConnectionResult(int r4) {
            r3 = this;
            java.lang.String r0 = r3.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "The availability check result is: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r3.setMessage(r4)
            com.huawei.hms.api.ConnectionResult r0 = new com.huawei.hms.api.ConnectionResult
            r0.<init>(r4)
            return r0
    }

    private void setMessage(int r2) {
            r1 = this;
            r0 = 21
            if (r2 == r0) goto L28
            if (r2 == 0) goto L23
            r0 = 1
            if (r2 == r0) goto L1e
            r0 = 2
            if (r2 == r0) goto L19
            r0 = 3
            if (r2 == r0) goto L14
            java.lang.String r2 = "INTERNAL_ERROR"
            r1.message = r2
            goto L2c
        L14:
            java.lang.String r2 = "SERVICE_DISABLED"
            r1.message = r2
            goto L2c
        L19:
            java.lang.String r2 = "SERVICE_VERSION_UPDATE_REQUIRED"
            r1.message = r2
            goto L2c
        L1e:
            java.lang.String r2 = "SERVICE_MISSING"
            r1.message = r2
            goto L2c
        L23:
            java.lang.String r2 = "success"
            r1.message = r2
            goto L2c
        L28:
            java.lang.String r2 = "ANDROID_VERSION_UNSUPPORT"
            r1.message = r2
        L2c:
            return
    }

    public com.huawei.hms.api.ConnectionResult getConnectionResult(com.huawei.hms.common.HuaweiApi<? extends com.huawei.hms.api.Api.ApiOptions> r3) {
            r2 = this;
            if (r3 != 0) goto L10
            java.lang.String r3 = r2.TAG
            java.lang.String r0 = "The huaweiApi is null."
            com.huawei.hms.support.log.HMSLog.e(r3, r0)
            r3 = 8
            com.huawei.hms.api.ConnectionResult r3 = r2.generateConnectionResult(r3)
            return r3
        L10:
            android.content.Context r3 = r3.getContext()
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            r1 = 30000000(0x1c9c380, float:7.411627E-38)
            int r3 = r0.isHuaweiMobileServicesAvailable(r3, r1)
            com.huawei.hms.api.ConnectionResult r3 = r2.generateConnectionResult(r3)
            return r3
    }

    public com.huawei.hms.api.ConnectionResult getConnectionResult(com.huawei.hms.common.api.HuaweiApiCallable r3) {
            r2 = this;
            if (r3 == 0) goto L21
            com.huawei.hms.common.HuaweiApi r0 = r3.getHuaweiApi()
            if (r0 != 0) goto L9
            goto L21
        L9:
            com.huawei.hms.common.HuaweiApi r3 = r3.getHuaweiApi()
            android.content.Context r3 = r3.getContext()
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            r1 = 30000000(0x1c9c380, float:7.411627E-38)
            int r3 = r0.isHuaweiMobileServicesAvailable(r3, r1)
            com.huawei.hms.api.ConnectionResult r3 = r2.generateConnectionResult(r3)
            return r3
        L21:
            java.lang.String r3 = r2.TAG
            java.lang.String r0 = "The huaweiApi is null."
            com.huawei.hms.support.log.HMSLog.e(r3, r0)
            r3 = 8
            com.huawei.hms.api.ConnectionResult r3 = r2.generateConnectionResult(r3)
            return r3
    }

    @Override
    public java.lang.String getMessage() {
            r1 = this;
            java.lang.String r0 = r1.message
            return r0
    }
}
