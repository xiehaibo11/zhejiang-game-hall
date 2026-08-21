package com.huawei.hms.core.aidl;

public class AbstractMessageEntity implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    private com.huawei.hms.support.api.client.Status commonStatus;

    public AbstractMessageEntity() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.huawei.hms.support.api.client.Status getCommonStatus() {
            r1 = this;
            com.huawei.hms.support.api.client.Status r0 = r1.commonStatus
            return r0
    }

    public void setCommonStatus(com.huawei.hms.support.api.client.Status r1) {
            r0 = this;
            r0.commonStatus = r1
            return
    }
}
