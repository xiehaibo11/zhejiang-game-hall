package com.igexin.a.a;

public class m extends com.igexin.a.a.g {
    public m(com.igexin.a.a.j r4, com.igexin.a.a.e r5, int r6) {
            r3 = this;
            r3.<init>()
            r0 = 4
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            boolean r1 = r5.a
            if (r1 == 0) goto Lf
            java.nio.ByteOrder r1 = java.nio.ByteOrder.BIG_ENDIAN
            goto L11
        Lf:
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
        L11:
            r0.order(r1)
            long r1 = r5.d
            int r5 = r5.g
            int r6 = r6 * r5
            long r5 = (long) r6
            long r1 = r1 + r5
            r5 = 28
            long r1 = r1 + r5
            long r4 = r4.c(r0, r1)
            r3.a = r4
            return
    }
}
