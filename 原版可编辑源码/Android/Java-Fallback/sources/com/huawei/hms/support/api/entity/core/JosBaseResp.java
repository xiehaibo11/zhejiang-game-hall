package com.huawei.hms.support.api.entity.core;

public class JosBaseResp implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    private int statusCode;

    public JosBaseResp() {
            r0 = this;
            r0.<init>()
            return
    }

    public int getStatusCode() {
            r1 = this;
            int r0 = r1.statusCode
            return r0
    }

    public void setStatusCode(int r1) {
            r0 = this;
            r0.statusCode = r1
            return
    }
}
