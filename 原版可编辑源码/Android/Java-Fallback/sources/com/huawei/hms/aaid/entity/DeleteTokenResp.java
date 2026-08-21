package com.huawei.hms.aaid.entity;

public class DeleteTokenResp implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public int retCode;

    public DeleteTokenResp() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.retCode = r0
            return
    }

    public int getRetCode() {
            r1 = this;
            int r0 = r1.retCode
            return r0
    }

    public void setRetCode(int r1) {
            r0 = this;
            r0.retCode = r1
            return
    }
}
