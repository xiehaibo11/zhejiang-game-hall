package com.kwad.components.core.e.b;

public final class c {
    private final int[] Jo;

    private c(int[] r1) {
            r0 = this;
            r0.<init>()
            r0.Jo = r1
            return
    }

    private static long a(int r11, int[] r12, long r13) {
            r0 = 48
            long r1 = r13 >>> r0
            r3 = 32
            long r4 = r13 >> r3
            r6 = 65535(0xffff, double:3.23786E-319)
            long r4 = r4 & r6
            r8 = 16
            long r9 = r13 >> r8
            long r9 = r9 & r6
            long r13 = r13 & r6
            long r6 = e(r11, r12, r1)
            long r13 = r13 ^ r6
            int r6 = r11 + 1
            long r6 = (long) r6
            long r13 = r13 ^ r6
            long r11 = e(r11, r12, r1)
            long r13 = r13 << r0
            long r11 = r11 << r3
            long r11 = r11 | r13
            long r13 = r4 << r8
            long r11 = r11 | r13
            long r11 = r11 | r9
            return r11
    }

    private static long a(long r2, int[] r4) {
            r0 = 0
        L1:
            r1 = 8
            if (r0 >= r1) goto Lc
            long r2 = a(r0, r4, r2)
            int r0 = r0 + 1
            goto L1
        Lc:
            r1 = 16
            if (r0 >= r1) goto L17
            long r2 = b(r0, r4, r2)
            int r0 = r0 + 1
            goto Lc
        L17:
            r1 = 24
            if (r0 >= r1) goto L22
            long r2 = a(r0, r4, r2)
            int r0 = r0 + 1
            goto L17
        L22:
            r1 = 32
            if (r0 >= r1) goto L2d
            long r2 = b(r0, r4, r2)
            int r0 = r0 + 1
            goto L22
        L2d:
            return r2
    }

    public static com.kwad.components.core.e.b.c a(int[] r1) {
            com.kwad.components.core.e.b.c r0 = new com.kwad.components.core.e.b.c
            r0.<init>(r1)
            return r0
    }

    private static long b(int r11, int[] r12, long r13) {
            r0 = 48
            long r1 = r13 >>> r0
            r3 = 32
            long r4 = r13 >> r3
            r6 = 65535(0xffff, double:3.23786E-319)
            long r4 = r4 & r6
            r8 = 16
            long r9 = r13 >> r8
            long r9 = r9 & r6
            long r13 = r13 & r6
            long r6 = e(r11, r12, r1)
            long r1 = r1 ^ r4
            int r11 = r11 + 1
            long r11 = (long) r11
            long r11 = r11 ^ r1
            long r13 = r13 << r0
            long r0 = r6 << r3
            long r13 = r13 | r0
            long r11 = r11 << r8
            long r11 = r11 | r13
            long r11 = r11 | r9
            return r11
    }

    private static long b(long r2, int[] r4) {
            r0 = 31
        L2:
            r1 = 23
            if (r0 <= r1) goto Ld
            long r2 = d(r0, r4, r2)
            int r0 = r0 + (-1)
            goto L2
        Ld:
            r1 = 15
            if (r0 <= r1) goto L18
            long r2 = c(r0, r4, r2)
            int r0 = r0 + (-1)
            goto Ld
        L18:
            r1 = 7
            if (r0 <= r1) goto L22
            long r2 = d(r0, r4, r2)
            int r0 = r0 + (-1)
            goto L18
        L22:
            if (r0 < 0) goto L2b
            long r2 = c(r0, r4, r2)
            int r0 = r0 + (-1)
            goto L22
        L2b:
            return r2
    }

    private static long c(int r11, int[] r12, long r13) {
            r0 = 48
            long r1 = r13 >>> r0
            r3 = 32
            long r4 = r13 >> r3
            r6 = 65535(0xffff, double:3.23786E-319)
            long r4 = r4 & r6
            r8 = 16
            long r9 = r13 >> r8
            long r9 = r9 & r6
            long r13 = r13 & r6
            long r6 = f(r11, r12, r4)
            long r1 = r1 ^ r4
            int r11 = r11 + 1
            long r11 = (long) r11
            long r11 = r11 ^ r1
            long r0 = r6 << r0
            long r2 = r9 << r3
            long r0 = r0 | r2
            long r13 = r13 << r8
            long r13 = r13 | r0
            long r11 = r11 | r13
            return r11
    }

    private static long d(int r11, int[] r12, long r13) {
            r0 = 48
            long r1 = r13 >>> r0
            r3 = 32
            long r4 = r13 >> r3
            r6 = 65535(0xffff, double:3.23786E-319)
            long r4 = r4 & r6
            r8 = 16
            long r9 = r13 >> r8
            long r9 = r9 & r6
            long r13 = r13 & r6
            long r6 = f(r11, r12, r4)
            long r4 = f(r11, r12, r4)
            long r4 = r4 ^ r9
            int r11 = r11 + 1
            long r11 = (long) r11
            long r11 = r11 ^ r4
            long r4 = r6 << r0
            long r11 = r11 << r3
            long r11 = r11 | r4
            long r13 = r13 << r8
            long r11 = r11 | r13
            long r11 = r11 | r1
            return r11
    }

    private static long e(int r4, int[] r5, long r6) {
            r0 = 8
            long r1 = r6 >>> r0
            int r1 = (int) r1
            r2 = 255(0xff, double:1.26E-321)
            long r6 = r6 & r2
            int r6 = (int) r6
            int r4 = r4 * 4
            int r7 = r4 % 10
            r7 = r5[r7]
            int r2 = r4 + 1
            int r2 = r2 % 10
            r2 = r5[r2]
            int r3 = r4 + 2
            int r3 = r3 % 10
            r3 = r5[r3]
            int r4 = r4 + 3
            int r4 = r4 % 10
            r4 = r5[r4]
            int[] r5 = com.kwad.components.core.e.b.b.Jn
            r7 = r7 ^ r6
            r5 = r5[r7]
            r5 = r5 ^ r1
            int[] r7 = com.kwad.components.core.e.b.b.Jn
            r1 = r5 ^ r2
            r7 = r7[r1]
            r6 = r6 ^ r7
            int[] r7 = com.kwad.components.core.e.b.b.Jn
            r1 = r6 ^ r3
            r7 = r7[r1]
            r5 = r5 ^ r7
            int[] r7 = com.kwad.components.core.e.b.b.Jn
            r4 = r4 ^ r5
            r4 = r7[r4]
            r4 = r4 ^ r6
            long r5 = (long) r5
            long r5 = r5 << r0
            long r0 = (long) r4
            long r4 = r5 | r0
            return r4
    }

    private static long f(int r4, int[] r5, long r6) {
            r0 = 255(0xff, double:1.26E-321)
            long r0 = r0 & r6
            int r0 = (int) r0
            r1 = 8
            long r6 = r6 >>> r1
            int r6 = (int) r6
            int r4 = r4 * 4
            int r7 = r4 + 3
            int r7 = r7 % 10
            r7 = r5[r7]
            int r2 = r4 + 2
            int r2 = r2 % 10
            r2 = r5[r2]
            int r3 = r4 + 1
            int r3 = r3 % 10
            r3 = r5[r3]
            int r4 = r4 % 10
            r4 = r5[r4]
            int[] r5 = com.kwad.components.core.e.b.b.Jn
            r7 = r7 ^ r6
            r5 = r5[r7]
            r5 = r5 ^ r0
            int[] r7 = com.kwad.components.core.e.b.b.Jn
            r0 = r5 ^ r2
            r7 = r7[r0]
            r6 = r6 ^ r7
            int[] r7 = com.kwad.components.core.e.b.b.Jn
            r0 = r6 ^ r3
            r7 = r7[r0]
            r5 = r5 ^ r7
            int[] r7 = com.kwad.components.core.e.b.b.Jn
            r4 = r4 ^ r5
            r4 = r7[r4]
            r4 = r4 ^ r6
            long r6 = (long) r4
            long r6 = r6 << r1
            long r4 = (long) r5
            long r4 = r4 | r6
            return r4
    }

    public final long aj(java.lang.String r6) {
            r5 = this;
            com.kwad.sdk.core.a.c$a r0 = com.kwad.sdk.core.a.c.AM()
            byte[] r0 = r0.decode(r6)
            if (r0 == 0) goto L21
            int r1 = r0.length
            long r1 = (long) r1
            r3 = 8
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L21
            java.nio.ByteBuffer r6 = java.nio.ByteBuffer.wrap(r0)
            long r0 = r6.getLong()
            int[] r6 = r5.Jo
            long r0 = b(r0, r6)
            return r0
        L21:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "fail to decode: "
            r1.<init>(r2)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
    }

    public final java.lang.String r(long r2) {
            r1 = this;
            int[] r0 = r1.Jo
            long r2 = a(r2, r0)
            r0 = 8
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            java.nio.ByteBuffer r2 = r0.putLong(r2)
            byte[] r2 = r2.array()
            com.kwad.sdk.core.a.c$b r3 = com.kwad.sdk.core.a.c.AK()
            java.lang.String r2 = r3.encodeToString(r2)
            return r2
    }
}
