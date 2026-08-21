package com.alipay.sdk.m.i0;

public class d {
    public java.lang.String a;
    public int b;
    public long c;

    public d(java.lang.String r3, int r4) {
            r2 = this;
            r2.<init>()
            r2.a = r3
            r2.b = r4
            long r3 = java.lang.System.currentTimeMillis()
            r0 = 86400000(0x5265c00, double:4.2687272E-316)
            long r3 = r3 + r0
            r2.c = r3
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ValueData{value='"
            r0.<init>(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", code="
            r0.append(r1)
            int r1 = r3.b
            r0.append(r1)
            java.lang.String r1 = ", expired="
            r0.append(r1)
            long r1 = r3.c
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
