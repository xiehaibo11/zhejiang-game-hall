package com.tencent.bugly.proguard;

public final class bn extends com.tencent.bugly.proguard.m implements java.lang.Cloneable {
    static byte[] d;
    public byte a;
    public java.lang.String b;
    public byte[] c;

    public bn() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            java.lang.String r0 = ""
            r1.b = r0
            r0 = 0
            r1.c = r0
            return
    }

    public bn(byte r2, java.lang.String r3, byte[] r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            java.lang.String r0 = ""
            r1.b = r0
            r0 = 0
            r1.c = r0
            r1.a = r2
            r1.b = r3
            r1.c = r4
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
            java.lang.String r0 = r4.b(r1, r1)
            r3.b = r0
            byte[] r0 = com.tencent.bugly.proguard.bn.d
            if (r0 != 0) goto L1e
            byte[] r0 = new byte[r1]
            byte[] r0 = (byte[]) r0
            com.tencent.bugly.proguard.bn.d = r0
            byte[] r0 = (byte[]) r0
            r0[r2] = r2
        L1e:
            r0 = 2
            byte[] r4 = r4.c(r0, r2)
            byte[] r4 = (byte[]) r4
            r3.c = r4
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.l r3) {
            r2 = this;
            byte r0 = r2.a
            r1 = 0
            r3.a(r0, r1)
            java.lang.String r0 = r2.b
            r1 = 1
            r3.a(r0, r1)
            byte[] r0 = r2.c
            if (r0 == 0) goto L14
            r1 = 2
            r3.a(r0, r1)
        L14:
            return
    }

    @Override
    public final void a(java.lang.StringBuilder r1, int r2) {
            r0 = this;
            return
    }
}
