package com.igexin.a.a;

public class a extends com.igexin.a.a.d {
    public a(com.igexin.a.a.j r4, com.igexin.a.a.e r5, long r6, int r8) {
            r3 = this;
            r3.<init>()
            r0 = 4
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            boolean r5 = r5.a
            if (r5 == 0) goto Lf
            java.nio.ByteOrder r5 = java.nio.ByteOrder.BIG_ENDIAN
            goto L11
        Lf:
            java.nio.ByteOrder r5 = java.nio.ByteOrder.LITTLE_ENDIAN
        L11:
            r0.order(r5)
            int r8 = r8 * 8
            long r1 = (long) r8
            long r6 = r6 + r1
            long r1 = r4.c(r0, r6)
            r3.a = r1
            r1 = 4
            long r6 = r6 + r1
            long r4 = r4.c(r0, r6)
            r3.b = r4
            return
    }
}
