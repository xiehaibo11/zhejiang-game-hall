package com.tkay.expressad.exoplayer.e.a;

final class i {
    private static final int a = 4096;
    private static final int[] b = null;

    static {
            r0 = 24
            int[] r0 = new int[r0]
            java.lang.String r1 = "isom"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "iso2"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "iso3"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = "iso4"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 3
            r0[r2] = r1
            java.lang.String r1 = "iso5"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 4
            r0[r2] = r1
            java.lang.String r1 = "iso6"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 5
            r0[r2] = r1
            java.lang.String r1 = "avc1"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 6
            r0[r2] = r1
            java.lang.String r1 = "hvc1"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 7
            r0[r2] = r1
            java.lang.String r1 = "hev1"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 8
            r0[r2] = r1
            java.lang.String r1 = "mp41"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 9
            r0[r2] = r1
            java.lang.String r1 = "mp42"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 10
            r0[r2] = r1
            java.lang.String r1 = "3g2a"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 11
            r0[r2] = r1
            java.lang.String r1 = "3g2b"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 12
            r0[r2] = r1
            java.lang.String r1 = "3gr6"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 13
            r0[r2] = r1
            java.lang.String r1 = "3gs6"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 14
            r0[r2] = r1
            java.lang.String r1 = "3ge6"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 15
            r0[r2] = r1
            java.lang.String r1 = "3gg6"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 16
            r0[r2] = r1
            java.lang.String r1 = "M4V "
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 17
            r0[r2] = r1
            java.lang.String r1 = "M4A "
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 18
            r0[r2] = r1
            java.lang.String r1 = "f4v "
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 19
            r0[r2] = r1
            java.lang.String r1 = "kddi"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 20
            r0[r2] = r1
            java.lang.String r1 = "M4VP"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 21
            r0[r2] = r1
            java.lang.String r1 = "qt  "
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 22
            r0[r2] = r1
            java.lang.String r1 = "MSNV"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 23
            r0[r2] = r1
            com.tkay.expressad.exoplayer.e.a.i.b = r0
            return
    }

    private i() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean a(int r6) {
            int r0 = r6 >>> 8
            java.lang.String r1 = "3gp"
            int r1 = com.tkay.expressad.exoplayer.k.af.f(r1)
            r2 = 1
            if (r0 != r1) goto Lc
            return r2
        Lc:
            int[] r0 = com.tkay.expressad.exoplayer.e.a.i.b
            int r1 = r0.length
            r3 = 0
            r4 = r3
        L11:
            if (r4 >= r1) goto L1b
            r5 = r0[r4]
            if (r5 != r6) goto L18
            return r2
        L18:
            int r4 = r4 + 1
            goto L11
        L1b:
            return r3
    }

    public static boolean a(com.tkay.expressad.exoplayer.e.f r1) {
            r0 = 1
            boolean r1 = a(r1, r0)
            return r1
    }

    private static boolean a(com.tkay.expressad.exoplayer.e.f r16, boolean r17) {
            r0 = r16
            long r1 = r16.d()
            r3 = -1
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r6 = 4096(0x1000, double:2.0237E-320)
            if (r5 == 0) goto L12
            int r5 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r5 <= 0) goto L13
        L12:
            r1 = r6
        L13:
            int r1 = (int) r1
            com.tkay.expressad.exoplayer.k.s r2 = new com.tkay.expressad.exoplayer.k.s
            r5 = 64
            r2.<init>(r5)
            r5 = 0
            r6 = r5
            r7 = r6
        L1e:
            if (r6 >= r1) goto Lb9
            r9 = 8
            r2.a(r9)
            byte[] r10 = r2.a
            r0.d(r10, r5, r9)
            long r10 = r2.h()
            int r12 = r2.i()
            r13 = 1
            int r13 = (r10 > r13 ? 1 : (r10 == r13 ? 0 : -1))
            r14 = 16
            if (r13 != 0) goto L47
            byte[] r10 = r2.a
            r0.d(r10, r9, r9)
            r2.b(r14)
            long r10 = r2.n()
            goto L5e
        L47:
            r13 = 0
            int r13 = (r10 > r13 ? 1 : (r10 == r13 ? 0 : -1))
            if (r13 != 0) goto L5d
            long r13 = r16.d()
            int r15 = (r13 > r3 ? 1 : (r13 == r3 ? 0 : -1))
            if (r15 == 0) goto L5d
            long r10 = r16.c()
            long r13 = r13 - r10
            r10 = 8
            long r10 = r10 + r13
        L5d:
            r14 = r9
        L5e:
            long r3 = (long) r14
            int r13 = (r10 > r3 ? 1 : (r10 == r3 ? 0 : -1))
            if (r13 >= 0) goto L64
            return r5
        L64:
            int r6 = r6 + r14
            int r13 = com.tkay.expressad.exoplayer.e.a.a.G
            if (r12 == r13) goto Lb5
            int r13 = com.tkay.expressad.exoplayer.e.a.a.P
            if (r12 == r13) goto Lb3
            int r13 = com.tkay.expressad.exoplayer.e.a.a.R
            if (r12 != r13) goto L72
            goto Lb3
        L72:
            long r13 = (long) r6
            long r13 = r13 + r10
            long r13 = r13 - r3
            long r8 = (long) r1
            int r8 = (r13 > r8 ? 1 : (r13 == r8 ? 0 : -1))
            if (r8 >= 0) goto Lb9
            long r10 = r10 - r3
            int r3 = (int) r10
            int r6 = r6 + r3
            int r4 = com.tkay.expressad.exoplayer.e.a.a.f
            if (r12 != r4) goto Lad
            r4 = 8
            if (r3 >= r4) goto L86
            return r5
        L86:
            r2.a(r3)
            byte[] r4 = r2.a
            r0.d(r4, r5, r3)
            int r3 = r3 / 4
            r4 = r5
        L91:
            if (r4 >= r3) goto Laa
            r8 = 1
            if (r4 != r8) goto L9b
            r8 = 4
            r2.d(r8)
            goto La7
        L9b:
            int r8 = r2.i()
            boolean r8 = a(r8)
            if (r8 == 0) goto La7
            r7 = 1
            goto Laa
        La7:
            int r4 = r4 + 1
            goto L91
        Laa:
            if (r7 != 0) goto Lb5
            return r5
        Lad:
            if (r3 == 0) goto Lb5
            r0.e(r3)
            goto Lb5
        Lb3:
            r8 = 1
            goto Lba
        Lb5:
            r3 = -1
            goto L1e
        Lb9:
            r8 = r5
        Lba:
            if (r7 == 0) goto Lc2
            r0 = r17
            if (r0 != r8) goto Lc2
            r0 = 1
            return r0
        Lc2:
            return r5
    }

    public static boolean b(com.tkay.expressad.exoplayer.e.f r1) {
            r0 = 0
            boolean r1 = a(r1, r0)
            return r1
    }
}
