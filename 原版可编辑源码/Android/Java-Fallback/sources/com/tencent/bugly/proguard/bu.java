package com.tencent.bugly.proguard;

public final class bu extends com.tencent.bugly.proguard.m {
    static java.util.Map<java.lang.String, java.lang.String> i;
    public long a;
    public byte b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.util.Map<java.lang.String, java.lang.String> f;
    public java.lang.String g;
    public boolean h;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tencent.bugly.proguard.bu.i = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.bu.i
            java.lang.String r1 = ""
            r0.put(r1, r1)
            return
    }

    public bu() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r0 = 0
            r2.b = r0
            java.lang.String r0 = ""
            r2.c = r0
            r2.d = r0
            r2.e = r0
            r1 = 0
            r2.f = r1
            r2.g = r0
            r0 = 1
            r2.h = r0
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.k r5) {
            r4 = this;
            long r0 = r4.a
            r2 = 1
            r3 = 0
            long r0 = r5.a(r0, r3, r2)
            r4.a = r0
            byte r0 = r4.b
            byte r0 = r5.a(r0, r2, r2)
            r4.b = r0
            r0 = 2
            java.lang.String r0 = r5.b(r0, r3)
            r4.c = r0
            r0 = 3
            java.lang.String r0 = r5.b(r0, r3)
            r4.d = r0
            r0 = 4
            java.lang.String r0 = r5.b(r0, r3)
            r4.e = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.bu.i
            r1 = 5
            java.lang.Object r0 = r5.a(r0, r1, r3)
            java.util.Map r0 = (java.util.Map) r0
            r4.f = r0
            r0 = 6
            java.lang.String r0 = r5.b(r0, r3)
            r4.g = r0
            r0 = 7
            boolean r5 = r5.a(r0, r3)
            r4.h = r5
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.l r4) {
            r3 = this;
            long r0 = r3.a
            r2 = 0
            r4.a(r0, r2)
            byte r0 = r3.b
            r1 = 1
            r4.a(r0, r1)
            java.lang.String r0 = r3.c
            if (r0 == 0) goto L14
            r1 = 2
            r4.a(r0, r1)
        L14:
            java.lang.String r0 = r3.d
            if (r0 == 0) goto L1c
            r1 = 3
            r4.a(r0, r1)
        L1c:
            java.lang.String r0 = r3.e
            if (r0 == 0) goto L24
            r1 = 4
            r4.a(r0, r1)
        L24:
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.f
            if (r0 == 0) goto L2c
            r1 = 5
            r4.a(r0, r1)
        L2c:
            java.lang.String r0 = r3.g
            if (r0 == 0) goto L34
            r1 = 6
            r4.a(r0, r1)
        L34:
            boolean r0 = r3.h
            r1 = 7
            r4.a(r0, r1)
            return
    }
}
