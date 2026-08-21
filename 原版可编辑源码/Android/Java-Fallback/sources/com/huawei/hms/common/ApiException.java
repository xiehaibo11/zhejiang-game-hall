package com.huawei.hms.common;

public class ApiException extends java.lang.Exception {
    protected final com.huawei.hms.support.api.client.Status mStatus;

    public ApiException(com.huawei.hms.support.api.client.Status r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r3.getStatusCode()
            r0.append(r1)
            java.lang.String r1 = ": "
            r0.append(r1)
            java.lang.String r1 = r3.getStatusMessage()
            if (r1 == 0) goto L1c
            java.lang.String r1 = r3.getStatusMessage()
            goto L1e
        L1c:
            java.lang.String r1 = ""
        L1e:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            r2.mStatus = r3
            return
    }

    public int getStatusCode() {
            r1 = this;
            com.huawei.hms.support.api.client.Status r0 = r1.mStatus
            int r0 = r0.getStatusCode()
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String getStatusMessage() {
            r1 = this;
            com.huawei.hms.support.api.client.Status r0 = r1.mStatus
            java.lang.String r0 = r0.getStatusMessage()
            return r0
    }
}
