package com.tkay.expressad.exoplayer.c;

public class e extends com.tkay.expressad.exoplayer.c.a {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public final com.tkay.expressad.exoplayer.c.b d;
    public java.nio.ByteBuffer e;
    public long f;
    private final int g;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    public e(int r2) {
            r1 = this;
            r1.<init>()
            com.tkay.expressad.exoplayer.c.b r0 = new com.tkay.expressad.exoplayer.c.b
            r0.<init>()
            r1.d = r0
            r1.g = r2
            return
    }

    public static com.tkay.expressad.exoplayer.c.e e() {
            com.tkay.expressad.exoplayer.c.e r0 = new com.tkay.expressad.exoplayer.c.e
            r1 = 0
            r0.<init>(r1)
            return r0
    }

    private java.nio.ByteBuffer e(int r5) {
            r4 = this;
            int r0 = r4.g
            r1 = 1
            if (r0 != r1) goto La
            java.nio.ByteBuffer r5 = java.nio.ByteBuffer.allocate(r5)
            return r5
        La:
            r1 = 2
            if (r0 != r1) goto L12
            java.nio.ByteBuffer r5 = java.nio.ByteBuffer.allocateDirect(r5)
            return r5
        L12:
            java.nio.ByteBuffer r0 = r4.e
            if (r0 != 0) goto L18
            r0 = 0
            goto L1c
        L18:
            int r0 = r0.capacity()
        L1c:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Buffer too small ("
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r0 = " < "
            r2.append(r0)
            r2.append(r5)
            java.lang.String r5 = ")"
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5)
            throw r1
    }

    @Override
    public final void a() {
            r1 = this;
            super.a()
            java.nio.ByteBuffer r0 = r1.e
            if (r0 == 0) goto La
            r0.clear()
        La:
            return
    }

    public final void d(int r4) {
            r3 = this;
            java.nio.ByteBuffer r0 = r3.e
            if (r0 != 0) goto Lb
            java.nio.ByteBuffer r4 = r3.e(r4)
            r3.e = r4
            return
        Lb:
            int r0 = r0.capacity()
            java.nio.ByteBuffer r1 = r3.e
            int r1 = r1.position()
            int r4 = r4 + r1
            if (r0 < r4) goto L19
            return
        L19:
            java.nio.ByteBuffer r4 = r3.e(r4)
            if (r1 <= 0) goto L2f
            java.nio.ByteBuffer r0 = r3.e
            r2 = 0
            r0.position(r2)
            java.nio.ByteBuffer r0 = r3.e
            r0.limit(r1)
            java.nio.ByteBuffer r0 = r3.e
            r4.put(r0)
        L2f:
            r3.e = r4
            return
    }

    public final boolean f() {
            r1 = this;
            java.nio.ByteBuffer r0 = r1.e
            if (r0 != 0) goto La
            int r0 = r1.g
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public final boolean g() {
            r1 = this;
            r0 = 1073741824(0x40000000, float:2.0)
            boolean r0 = r1.c(r0)
            return r0
    }

    public final void h() {
            r1 = this;
            java.nio.ByteBuffer r0 = r1.e
            r0.flip()
            return
    }
}
