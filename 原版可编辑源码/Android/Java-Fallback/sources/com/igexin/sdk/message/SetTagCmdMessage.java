package com.igexin.sdk.message;

public class SetTagCmdMessage extends com.igexin.sdk.message.GTCmdMessage {
    private java.lang.String a;
    private java.lang.String b;

    public SetTagCmdMessage() {
            r0 = this;
            r0.<init>()
            return
    }

    public SetTagCmdMessage(java.lang.String r1, java.lang.String r2, int r3) {
            r0 = this;
            r0.<init>(r3)
            r0.a = r1
            r0.b = r2
            return
    }

    public java.lang.String getCode() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String getSn() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void setCode(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setSn(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SetTagCmdMessage{sn='"
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", code='"
            r0.append(r2)
            java.lang.String r2 = r3.b
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
