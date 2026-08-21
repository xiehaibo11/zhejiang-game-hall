package com.igexin.a.a;

public class l extends com.igexin.a.a.f {
    public l(com.igexin.a.a.j r6, com.igexin.a.a.e r7, long r8) {
            r5 = this;
            r5.<init>()
            r0 = 8
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            boolean r1 = r7.a
            if (r1 == 0) goto L10
            java.nio.ByteOrder r1 = java.nio.ByteOrder.BIG_ENDIAN
            goto L12
        L10:
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
        L12:
            r0.order(r1)
            long r1 = r7.c
            int r7 = r7.e
            long r3 = (long) r7
            long r8 = r8 * r3
            long r1 = r1 + r8
            long r7 = r6.c(r0, r1)
            r5.a = r7
            r7 = 8
            long r7 = r7 + r1
            long r7 = r6.b(r0, r7)
            r5.b = r7
            r7 = 16
            long r7 = r7 + r1
            long r7 = r6.b(r0, r7)
            r5.c = r7
            r7 = 40
            long r1 = r1 + r7
            long r6 = r6.b(r0, r1)
            r5.d = r6
            return
    }
}
