package com.alipay.sdk.auth;

public class APAuthInfo {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;

    public APAuthInfo(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public APAuthInfo(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.d = r3
            r0.c = r4
            return
    }

    public java.lang.String getAppId() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String getPid() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String getProductId() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String getRedirectUri() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }
}
