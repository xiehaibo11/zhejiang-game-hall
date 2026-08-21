package com.tencent.bugly.proguard;

public final class bv extends com.tencent.bugly.proguard.m implements java.lang.Cloneable {
    static java.util.ArrayList<com.tencent.bugly.proguard.bu> f;
    static java.util.Map<java.lang.String, java.lang.String> g;
    public byte a;
    public java.lang.String b;
    public java.lang.String c;
    public java.util.ArrayList<com.tencent.bugly.proguard.bu> d;
    public java.util.Map<java.lang.String, java.lang.String> e;

    public bv() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            java.lang.String r0 = ""
            r1.b = r0
            r1.c = r0
            r0 = 0
            r1.d = r0
            r1.e = r0
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.k r4) {
            r3 = this;
            byte r0 = r3.a
            r1 = 1
            r2 = 0
            byte r0 = r4.a(r0, r2, r1)
            r3.a = r0
            java.lang.String r0 = r4.b(r1, r2)
            r3.b = r0
            r0 = 2
            java.lang.String r0 = r4.b(r0, r2)
            r3.c = r0
            java.util.ArrayList<com.tencent.bugly.proguard.bu> r0 = com.tencent.bugly.proguard.bv.f
            if (r0 != 0) goto L2c
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tencent.bugly.proguard.bv.f = r0
            com.tencent.bugly.proguard.bu r0 = new com.tencent.bugly.proguard.bu
            r0.<init>()
            java.util.ArrayList<com.tencent.bugly.proguard.bu> r1 = com.tencent.bugly.proguard.bv.f
            r1.add(r0)
        L2c:
            java.util.ArrayList<com.tencent.bugly.proguard.bu> r0 = com.tencent.bugly.proguard.bv.f
            r1 = 3
            java.lang.Object r0 = r4.a(r0, r1, r2)
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            r3.d = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.bv.g
            if (r0 != 0) goto L49
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tencent.bugly.proguard.bv.g = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.bv.g
            java.lang.String r1 = ""
            r0.put(r1, r1)
        L49:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.bv.g
            r1 = 4
            java.lang.Object r4 = r4.a(r0, r1, r2)
            java.util.Map r4 = (java.util.Map) r4
            r3.e = r4
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.l r3) {
            r2 = this;
            byte r0 = r2.a
            r1 = 0
            r3.a(r0, r1)
            java.lang.String r0 = r2.b
            if (r0 == 0) goto Le
            r1 = 1
            r3.a(r0, r1)
        Le:
            java.lang.String r0 = r2.c
            if (r0 == 0) goto L16
            r1 = 2
            r3.a(r0, r1)
        L16:
            java.util.ArrayList<com.tencent.bugly.proguard.bu> r0 = r2.d
            if (r0 == 0) goto L1e
            r1 = 3
            r3.a(r0, r1)
        L1e:
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.e
            if (r0 == 0) goto L26
            r1 = 4
            r3.a(r0, r1)
        L26:
            return
    }

    @Override
    public final void a(java.lang.StringBuilder r1, int r2) {
            r0 = this;
            return
    }
}
