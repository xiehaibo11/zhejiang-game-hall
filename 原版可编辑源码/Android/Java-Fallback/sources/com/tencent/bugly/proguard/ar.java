package com.tencent.bugly.proguard;

public final class ar implements java.lang.Comparable<com.tencent.bugly.proguard.ar> {
    public long a;
    public long b;
    public java.lang.String c;
    public boolean d;
    public boolean e;
    public int f;

    public ar() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.a = r0
            r2.b = r0
            r0 = 0
            r2.c = r0
            r0 = 0
            r2.d = r0
            r2.e = r0
            r2.f = r0
            return
    }

    @Override
    public final int compareTo(com.tencent.bugly.proguard.ar r5) {
            r4 = this;
            com.tencent.bugly.proguard.ar r5 = (com.tencent.bugly.proguard.ar) r5
            if (r5 == 0) goto L15
            long r0 = r4.b
            long r2 = r5.b
            long r0 = r0 - r2
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 > 0) goto L15
            if (r5 >= 0) goto L13
            r5 = -1
            return r5
        L13:
            r5 = 0
            return r5
        L15:
            r5 = 1
            return r5
    }
}
