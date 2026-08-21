package com.huawei.secure.android.common.util;

public class SecurityCommonException extends java.lang.Exception {
    private static final long c = 1;
    private java.lang.String a;
    private java.lang.String b;

    public SecurityCommonException() {
            r0 = this;
            r0.<init>()
            return
    }

    public SecurityCommonException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            r0.b = r1
            return
    }

    public SecurityCommonException(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public SecurityCommonException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public SecurityCommonException(java.lang.Throwable r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public java.lang.String getMsgDes() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String getRetCd() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }
}
