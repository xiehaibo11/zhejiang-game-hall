package com.tkay.expressad.exoplayer.j;

public final class k {
    public static final int a = 1;
    public static final int b = 2;
    public final android.net.Uri c;
    public final byte[] d;
    public final long e;
    public final long f;
    public final long g;
    public final java.lang.String h;
    public final int i;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface a {
    }

    public k(android.net.Uri r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public k(android.net.Uri r9, int r10) {
            r8 = this;
            r2 = 0
            r4 = -1
            r6 = 0
            r0 = r8
            r1 = r9
            r7 = r10
            r0.<init>(r1, r2, r4, r6, r7)
            return
    }

    public k(android.net.Uri r12, long r13, long r15, long r17, java.lang.String r19, int r20) {
            r11 = this;
            r2 = 0
            r0 = r11
            r1 = r12
            r3 = r13
            r5 = r15
            r7 = r17
            r9 = r19
            r10 = r20
            r0.<init>(r1, r2, r3, r5, r7, r9, r10)
            return
    }

    public k(android.net.Uri r11, long r12, long r14, java.lang.String r16, int r17) {
            r10 = this;
            r0 = r10
            r1 = r11
            r2 = r12
            r4 = r12
            r6 = r14
            r8 = r16
            r9 = r17
            r0.<init>(r1, r2, r4, r6, r8, r9)
            return
    }

    public k(android.net.Uri r11, long r12, java.lang.String r14) {
            r10 = this;
            r6 = -1
            r9 = 0
            r0 = r10
            r1 = r11
            r2 = r12
            r4 = r12
            r8 = r14
            r0.<init>(r1, r2, r4, r6, r8, r9)
            return
    }

    public k(android.net.Uri r6, byte[] r7, long r8, long r10, long r12, java.lang.String r14, int r15) {
            r5 = this;
            r5.<init>()
            r0 = 0
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            r3 = 1
            r4 = 0
            if (r2 < 0) goto Ld
            r2 = r3
            goto Le
        Ld:
            r2 = r4
        Le:
            com.tkay.expressad.exoplayer.k.a.a(r2)
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 < 0) goto L17
            r2 = r3
            goto L18
        L17:
            r2 = r4
        L18:
            com.tkay.expressad.exoplayer.k.a.a(r2)
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r0 > 0) goto L27
            r0 = -1
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r0 != 0) goto L26
            goto L27
        L26:
            r3 = r4
        L27:
            com.tkay.expressad.exoplayer.k.a.a(r3)
            r5.c = r6
            r5.d = r7
            r5.e = r8
            r5.f = r10
            r5.g = r12
            r5.h = r14
            r5.i = r15
            return
    }

    private com.tkay.expressad.exoplayer.j.k a(long r15, long r17) {
            r14 = this;
            r0 = r14
            r1 = 0
            int r1 = (r15 > r1 ? 1 : (r15 == r1 ? 0 : -1))
            if (r1 != 0) goto Le
            long r1 = r0.g
            int r1 = (r1 > r17 ? 1 : (r1 == r17 ? 0 : -1))
            if (r1 != 0) goto Le
            return r0
        Le:
            com.tkay.expressad.exoplayer.j.k r1 = new com.tkay.expressad.exoplayer.j.k
            android.net.Uri r4 = r0.c
            byte[] r5 = r0.d
            long r2 = r0.e
            long r6 = r2 + r15
            long r2 = r0.f
            long r8 = r2 + r15
            java.lang.String r12 = r0.h
            int r13 = r0.i
            r3 = r1
            r10 = r17
            r3.<init>(r4, r5, r6, r8, r10, r12, r13)
            return r1
    }

    private com.tkay.expressad.exoplayer.j.k a(android.net.Uri r13) {
            r12 = this;
            com.tkay.expressad.exoplayer.j.k r11 = new com.tkay.expressad.exoplayer.j.k
            byte[] r2 = r12.d
            long r3 = r12.e
            long r5 = r12.f
            long r7 = r12.g
            java.lang.String r9 = r12.h
            int r10 = r12.i
            r0 = r11
            r1 = r13
            r0.<init>(r1, r2, r3, r5, r7, r9, r10)
            return r11
    }

    public final com.tkay.expressad.exoplayer.j.k a(long r17) {
            r16 = this;
            r0 = r16
            long r1 = r0.g
            r3 = -1
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto Lb
            goto Ld
        Lb:
            long r3 = r1 - r17
        Ld:
            r12 = r3
            r1 = 0
            int r1 = (r17 > r1 ? 1 : (r17 == r1 ? 0 : -1))
            if (r1 != 0) goto L1b
            long r1 = r0.g
            int r1 = (r1 > r12 ? 1 : (r1 == r12 ? 0 : -1))
            if (r1 != 0) goto L1b
            return r0
        L1b:
            com.tkay.expressad.exoplayer.j.k r1 = new com.tkay.expressad.exoplayer.j.k
            android.net.Uri r6 = r0.c
            byte[] r7 = r0.d
            long r2 = r0.e
            long r8 = r2 + r17
            long r2 = r0.f
            long r10 = r2 + r17
            java.lang.String r14 = r0.h
            int r15 = r0.i
            r5 = r1
            r5.<init>(r6, r7, r8, r10, r12, r14, r15)
            return r1
    }

    public final boolean a(int r2) {
            r1 = this;
            int r0 = r1.i
            r0 = r0 & r2
            if (r0 != r2) goto L7
            r2 = 1
            return r2
        L7:
            r2 = 0
            return r2
    }

    public final java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "DataSpec["
            r0.<init>(r1)
            android.net.Uri r1 = r4.c
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            byte[] r2 = r4.d
            java.lang.String r2 = java.util.Arrays.toString(r2)
            r0.append(r2)
            r0.append(r1)
            long r2 = r4.e
            r0.append(r2)
            r0.append(r1)
            long r2 = r4.f
            r0.append(r2)
            r0.append(r1)
            long r2 = r4.g
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r4.h
            r0.append(r2)
            r0.append(r1)
            int r1 = r4.i
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
