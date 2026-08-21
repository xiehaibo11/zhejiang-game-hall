package com.xiaomi.push;

public class jc {
    public final byte a;
    public final java.lang.String a;
    public final short a;

    public jc() {
            r2 = this;
            r0 = 0
            java.lang.String r1 = ""
            r2.<init>(r1, r0, r0)
            return
    }

    public jc(java.lang.String r1, byte r2, short r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.a = r2
            r0.a = r3
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "<TField name:'"
            r0.append(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = "' type:"
            r0.append(r1)
            byte r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = " field-id:"
            r0.append(r1)
            short r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ">"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
