package com.huawei.hms.support.api.client;

public abstract class Result implements com.huawei.hms.core.aidl.IMessageEntity {
    private com.huawei.hms.support.api.client.Status status;

    public Result() {
            r1 = this;
            r1.<init>()
            com.huawei.hms.support.api.client.Status r0 = com.huawei.hms.support.api.client.Status.FAILURE
            r1.status = r0
            return
    }

    public com.huawei.hms.support.api.client.Status getStatus() {
            r1 = this;
            com.huawei.hms.support.api.client.Status r0 = r1.status
            return r0
    }

    public void setStatus(com.huawei.hms.support.api.client.Status r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            r0.status = r1
            return
    }
}
