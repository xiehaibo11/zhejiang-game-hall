package com.tkay.expressad.exoplayer.j.a;

public class e implements java.lang.Comparable<com.tkay.expressad.exoplayer.j.a.e> {
    public final java.lang.String a;
    public final long b;
    public final long c;
    public final boolean d;
    public final java.io.File e;
    public final long f;

    private e(java.lang.String r10, long r11, long r13) {
            r9 = this;
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r4 = r13
            r0.<init>(r1, r2, r4, r6, r8)
            return
    }

    public e(java.lang.String r1, long r2, long r4, long r6, java.io.File r8) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r4
            if (r8 == 0) goto Ld
            r1 = 1
            goto Le
        Ld:
            r1 = 0
        Le:
            r0.d = r1
            r0.e = r8
            r0.f = r6
            return
    }

    private int a(com.tkay.expressad.exoplayer.j.a.e r5) {
            r4 = this;
            java.lang.String r0 = r4.a
            java.lang.String r1 = r5.a
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L13
            java.lang.String r0 = r4.a
            java.lang.String r5 = r5.a
            int r5 = r0.compareTo(r5)
            return r5
        L13:
            long r0 = r4.b
            long r2 = r5.b
            long r0 = r0 - r2
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L20
            r5 = 0
            return r5
        L20:
            if (r5 >= 0) goto L24
            r5 = -1
            return r5
        L24:
            r5 = 1
            return r5
    }

    public final boolean a() {
            r4 = this;
            long r0 = r4.c
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public final boolean b() {
            r1 = this;
            boolean r0 = r1.d
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    @Override
    public int compareTo(com.tkay.expressad.exoplayer.j.a.e r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.j.a.e r5 = (com.tkay.expressad.exoplayer.j.a.e) r5
            java.lang.String r0 = r4.a
            java.lang.String r1 = r5.a
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L15
            java.lang.String r0 = r4.a
            java.lang.String r5 = r5.a
            int r5 = r0.compareTo(r5)
            return r5
        L15:
            long r0 = r4.b
            long r2 = r5.b
            long r0 = r0 - r2
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L22
            r5 = 0
            return r5
        L22:
            if (r5 >= 0) goto L26
            r5 = -1
            return r5
        L26:
            r5 = 1
            return r5
    }
}
