package com.igexin.sdk.message;

public class BaseMessage implements java.io.Serializable {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;

    public BaseMessage() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = com.igexin.push.core.d.a
            r1.a = r0
            java.lang.String r0 = com.igexin.push.core.d.e
            r1.b = r0
            java.lang.String r0 = com.igexin.push.core.d.u
            r1.c = r0
            return
    }

    public java.lang.String getAppid() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String getClientId() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String getPkgName() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void setAppid(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setClientId(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setPkgName(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
