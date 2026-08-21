package com.tencent.bugly.proguard;

public final class br extends com.tencent.bugly.proguard.m {
    static byte[] i;
    static java.util.Map<java.lang.String, java.lang.String> j;
    public byte a;
    public int b;
    public byte[] c;
    public java.lang.String d;
    public long e;
    public java.lang.String f;
    public java.lang.String g;
    public java.util.Map<java.lang.String, java.lang.String> h;

    static {
            r0 = 1
            byte[] r0 = new byte[r0]
            byte[] r0 = (byte[]) r0
            com.tencent.bugly.proguard.br.i = r0
            byte[] r0 = (byte[]) r0
            r1 = 0
            r0[r1] = r1
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tencent.bugly.proguard.br.j = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.br.j
            java.lang.String r1 = ""
            r0.put(r1, r1)
            return
    }

    public br() {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.a = r0
            r4.b = r0
            r0 = 0
            r4.c = r0
            java.lang.String r1 = ""
            r4.d = r1
            r2 = 0
            r4.e = r2
            r4.f = r1
            r4.g = r1
            r4.h = r0
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.k r5) {
            r4 = this;
            byte r0 = r4.a
            r1 = 1
            r2 = 0
            byte r0 = r5.a(r0, r2, r1)
            r4.a = r0
            int r0 = r4.b
            int r0 = r5.a(r0, r1, r1)
            r4.b = r0
            r0 = 2
            byte[] r0 = r5.c(r0, r2)
            byte[] r0 = (byte[]) r0
            r4.c = r0
            r0 = 3
            java.lang.String r0 = r5.b(r0, r2)
            r4.d = r0
            long r0 = r4.e
            r3 = 4
            long r0 = r5.a(r0, r3, r2)
            r4.e = r0
            r0 = 5
            java.lang.String r0 = r5.b(r0, r2)
            r4.f = r0
            r0 = 6
            java.lang.String r0 = r5.b(r0, r2)
            r4.g = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.br.j
            r1 = 7
            java.lang.Object r5 = r5.a(r0, r1, r2)
            java.util.Map r5 = (java.util.Map) r5
            r4.h = r5
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.l r4) {
            r3 = this;
            byte r0 = r3.a
            r1 = 0
            r4.a(r0, r1)
            int r0 = r3.b
            r1 = 1
            r4.a(r0, r1)
            byte[] r0 = r3.c
            if (r0 == 0) goto L14
            r1 = 2
            r4.a(r0, r1)
        L14:
            java.lang.String r0 = r3.d
            if (r0 == 0) goto L1c
            r1 = 3
            r4.a(r0, r1)
        L1c:
            long r0 = r3.e
            r2 = 4
            r4.a(r0, r2)
            java.lang.String r0 = r3.f
            if (r0 == 0) goto L2a
            r1 = 5
            r4.a(r0, r1)
        L2a:
            java.lang.String r0 = r3.g
            if (r0 == 0) goto L32
            r1 = 6
            r4.a(r0, r1)
        L32:
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.h
            if (r0 == 0) goto L3a
            r1 = 7
            r4.a(r0, r1)
        L3a:
            return
    }
}
