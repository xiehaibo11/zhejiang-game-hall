package com.huawei.hms.support.api.entity.auth;

public abstract class AbstractResp implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String errorReason;

    @com.huawei.hms.core.aidl.annotation.Packed
    private int rtnCode;

    public AbstractResp() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.rtnCode = r0
            return
    }

    public java.lang.String getErrorReason() {
            r1 = this;
            java.lang.String r0 = r1.errorReason
            return r0
    }

    public int getRtnCode() {
            r1 = this;
            int r0 = r1.rtnCode
            return r0
    }

    public void setErrorReason(java.lang.String r1) {
            r0 = this;
            r0.errorReason = r1
            return
    }

    public void setRtnCode(int r1) {
            r0 = this;
            r0.rtnCode = r1
            return
    }
}
