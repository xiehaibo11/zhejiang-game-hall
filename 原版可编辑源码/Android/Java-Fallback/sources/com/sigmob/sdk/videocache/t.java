package com.sigmob.sdk.videocache;

public class t {
    public final java.lang.String a;
    public final long b;
    public final java.lang.String c;

    public t(java.lang.String r1, long r2, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r4
            return
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SourceInfo{url='"
            r0.append(r1)
            java.lang.String r1 = r4.a
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", length="
            r0.append(r2)
            long r2 = r4.b
            r0.append(r2)
            java.lang.String r2 = ", mime='"
            r0.append(r2)
            java.lang.String r2 = r4.c
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
