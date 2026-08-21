package com.huawei.hms.push.ups.entity;

public class CodeResult {
    public int a;
    public java.lang.String b;

    public CodeResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public CodeResult(int r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public CodeResult(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public java.lang.String getReason() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public int getReturnCode() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public void setReason(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setReturnCode(int r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
