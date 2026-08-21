package com.tkay.expressad.exoplayer.e.a;

final class d {
    private static final int a = 8192;

    static class 1 {
    }

    public static final class a {
        public final long[] a;
        public final int[] b;
        public final int c;
        public final long[] d;
        public final int[] e;
        public final long f;

        private a(long[] r1, int[] r2, int r3, long[] r4, int[] r5, long r6) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.f = r6
                return
        }

        a(long[] r1, int[] r2, int r3, long[] r4, int[] r5, long r6, byte r8) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4, r5, r6)
                return
        }
    }

    private d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.exoplayer.e.a.d.a a(int r16, long[] r17, int[] r18, long r19) {
            r0 = r18
            r1 = 8192(0x2000, float:1.148E-41)
            int r1 = r1 / r16
            int r2 = r0.length
            r3 = 0
            r4 = r3
            r5 = r4
        La:
            if (r4 >= r2) goto L16
            r6 = r0[r4]
            int r6 = com.tkay.expressad.exoplayer.k.af.a(r6, r1)
            int r5 = r5 + r6
            int r4 = r4 + 1
            goto La
        L16:
            long[] r7 = new long[r5]
            int[] r8 = new int[r5]
            long[] r10 = new long[r5]
            int[] r11 = new int[r5]
            r2 = r3
            r4 = r2
            r9 = r4
        L21:
            int r5 = r0.length
            if (r3 >= r5) goto L4e
            r5 = r0[r3]
            r12 = r17[r3]
        L28:
            if (r5 <= 0) goto L4b
            int r6 = java.lang.Math.min(r1, r5)
            r7[r4] = r12
            int r14 = r16 * r6
            r8[r4] = r14
            r14 = r8[r4]
            int r9 = java.lang.Math.max(r9, r14)
            long r14 = (long) r2
            long r14 = r14 * r19
            r10[r4] = r14
            r14 = 1
            r11[r4] = r14
            r14 = r8[r4]
            long r14 = (long) r14
            long r12 = r12 + r14
            int r2 = r2 + r6
            int r5 = r5 - r6
            int r4 = r4 + 1
            goto L28
        L4b:
            int r3 = r3 + 1
            goto L21
        L4e:
            long r0 = (long) r2
            long r12 = r19 * r0
            com.tkay.expressad.exoplayer.e.a.d$a r0 = new com.tkay.expressad.exoplayer.e.a.d$a
            r14 = 0
            r6 = r0
            r6.<init>(r7, r8, r9, r10, r11, r12, r14)
            return r0
    }
}
