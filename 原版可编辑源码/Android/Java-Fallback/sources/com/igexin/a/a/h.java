package com.igexin.a.a;

public class h extends com.igexin.a.a.e {
    private final com.igexin.a.a.j j;

    public h(boolean r4, com.igexin.a.a.j r5) {
            r3 = this;
            r3.<init>()
            r3.a = r4
            r3.j = r5
            r0 = 4
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            if (r4 == 0) goto L11
            java.nio.ByteOrder r4 = java.nio.ByteOrder.BIG_ENDIAN
            goto L13
        L11:
            java.nio.ByteOrder r4 = java.nio.ByteOrder.LITTLE_ENDIAN
        L13:
            r0.order(r4)
            r1 = 16
            int r4 = r5.d(r0, r1)
            r3.b = r4
            r1 = 28
            long r1 = r5.c(r0, r1)
            r3.c = r1
            r1 = 32
            long r1 = r5.c(r0, r1)
            r3.d = r1
            r1 = 42
            int r4 = r5.d(r0, r1)
            r3.e = r4
            r1 = 44
            int r4 = r5.d(r0, r1)
            r3.f = r4
            r1 = 46
            int r4 = r5.d(r0, r1)
            r3.g = r4
            r1 = 48
            int r4 = r5.d(r0, r1)
            r3.h = r4
            r1 = 50
            int r4 = r5.d(r0, r1)
            r3.i = r4
            return
    }

    @Override
    public com.igexin.a.a.d a(long r8, int r10) {
            r7 = this;
            com.igexin.a.a.a r6 = new com.igexin.a.a.a
            com.igexin.a.a.j r1 = r7.j
            r0 = r6
            r2 = r7
            r3 = r8
            r5 = r10
            r0.<init>(r1, r2, r3, r5)
            return r6
    }

    @Override
    public com.igexin.a.a.f a(long r3) {
            r2 = this;
            com.igexin.a.a.k r0 = new com.igexin.a.a.k
            com.igexin.a.a.j r1 = r2.j
            r0.<init>(r1, r2, r3)
            return r0
    }

    @Override
    public com.igexin.a.a.g a(int r3) {
            r2 = this;
            com.igexin.a.a.m r0 = new com.igexin.a.a.m
            com.igexin.a.a.j r1 = r2.j
            r0.<init>(r1, r2, r3)
            return r0
    }
}
