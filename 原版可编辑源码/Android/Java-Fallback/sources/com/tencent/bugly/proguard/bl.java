package com.tencent.bugly.proguard;

public final class bl extends com.tencent.bugly.proguard.m implements java.lang.Cloneable {
    public java.lang.String a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;

    public bl() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.a = r0
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r1.e = r0
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.k r4) {
            r3 = this;
            r0 = 1
            r1 = 0
            java.lang.String r2 = r4.b(r1, r0)
            r3.a = r2
            java.lang.String r0 = r4.b(r0, r1)
            r3.b = r0
            r0 = 2
            java.lang.String r0 = r4.b(r0, r1)
            r3.c = r0
            r0 = 3
            java.lang.String r0 = r4.b(r0, r1)
            r3.d = r0
            r0 = 4
            java.lang.String r4 = r4.b(r0, r1)
            r3.e = r4
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.l r3) {
            r2 = this;
            java.lang.String r0 = r2.a
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
            java.lang.String r0 = r2.d
            if (r0 == 0) goto L1e
            r1 = 3
            r3.a(r0, r1)
        L1e:
            java.lang.String r0 = r2.e
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
