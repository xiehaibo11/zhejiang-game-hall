package com.tkay.basead.c;

public class e {
    protected java.lang.String a;
    protected java.lang.String b;

    protected e(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final java.lang.String c() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "code[ "
            r0.<init>(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = " ],desc[ "
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = " ]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
