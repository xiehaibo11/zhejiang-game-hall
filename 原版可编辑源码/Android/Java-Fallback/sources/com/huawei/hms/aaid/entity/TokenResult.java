package com.huawei.hms.aaid.entity;

public class TokenResult extends com.huawei.hms.support.api.client.Result {

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String belongId;

    @com.huawei.hms.core.aidl.annotation.Packed
    public int retCode;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String token;

    public TokenResult() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.token = r0
            r0 = 0
            r1.retCode = r0
            return
    }

    public java.lang.String getBelongId() {
            r1 = this;
            java.lang.String r0 = r1.belongId
            return r0
    }

    public int getRetCode() {
            r1 = this;
            int r0 = r1.retCode
            return r0
    }

    public java.lang.String getToken() {
            r1 = this;
            java.lang.String r0 = r1.token
            return r0
    }

    public void setBelongId(java.lang.String r1) {
            r0 = this;
            r0.belongId = r1
            return
    }

    public void setRetCode(int r1) {
            r0 = this;
            r0.retCode = r1
            return
    }

    public void setToken(java.lang.String r1) {
            r0 = this;
            r0.token = r1
            return
    }
}
