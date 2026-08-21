package com.tkay.expressad.exoplayer.i;

public abstract class e extends com.tkay.expressad.exoplayer.i.h {
    private com.tkay.expressad.exoplayer.i.e.a a;

    public static final class a {
        public static final int a = 0;
        public static final int b = 1;
        public static final int c = 2;
        public static final int d = 3;

        @java.lang.Deprecated
        public final int e;
        private final int f;
        private final int[] g;
        private final com.tkay.expressad.exoplayer.h.af[] h;
        private final int[] i;
        private final int[][][] j;
        private final com.tkay.expressad.exoplayer.h.af k;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        @interface a {
        }

        a(int[] r1, com.tkay.expressad.exoplayer.h.af[] r2, int[] r3, int[][][] r4, com.tkay.expressad.exoplayer.h.af r5) {
                r0 = this;
                r0.<init>()
                r0.g = r1
                r0.h = r2
                r0.j = r4
                r0.i = r3
                r0.k = r5
                int r1 = r1.length
                r0.f = r1
                r0.e = r1
                return
        }

        private int a(int r8, int r9, int[] r10) {
                r7 = this;
                r0 = 0
                r1 = 16
                r2 = 0
                r3 = r1
                r4 = r2
                r1 = r0
                r2 = r1
            L8:
                int r5 = r10.length
                if (r0 >= r5) goto L3a
                r5 = r10[r0]
                com.tkay.expressad.exoplayer.h.af[] r6 = r7.h
                r6 = r6[r8]
                com.tkay.expressad.exoplayer.h.ae r6 = r6.a(r9)
                com.tkay.expressad.exoplayer.m r5 = r6.a(r5)
                java.lang.String r5 = r5.h
                int r6 = r2 + 1
                if (r2 != 0) goto L21
                r4 = r5
                goto L28
            L21:
                boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r4, r5)
                r2 = r2 ^ 1
                r1 = r1 | r2
            L28:
                int[][][] r2 = r7.j
                r2 = r2[r8]
                r2 = r2[r9]
                r2 = r2[r0]
                r2 = r2 & 24
                int r3 = java.lang.Math.min(r3, r2)
                int r0 = r0 + 1
                r2 = r6
                goto L8
            L3a:
                if (r1 == 0) goto L45
                int[] r9 = r7.i
                r8 = r9[r8]
                int r8 = java.lang.Math.min(r3, r8)
                return r8
            L45:
                return r3
        }

        @java.lang.Deprecated
        private int b(int r1, int r2, int r3) {
                r0 = this;
                int r1 = r0.a(r1, r2, r3)
                return r1
        }

        private int c(int r8) {
                r7 = this;
                int[][][] r0 = r7.j
                r8 = r0[r8]
                r0 = 0
                r1 = r0
                r2 = r1
            L7:
                int r3 = r8.length
                if (r1 >= r3) goto L2a
                r3 = r0
            Lb:
                r4 = r8[r1]
                int r4 = r4.length
                if (r3 >= r4) goto L27
                r4 = r8[r1]
                r4 = r4[r3]
                r4 = r4 & 7
                r5 = 3
                if (r4 == r5) goto L1f
                r6 = 4
                if (r4 == r6) goto L1e
                r4 = 1
                goto L20
            L1e:
                return r5
            L1f:
                r4 = 2
            L20:
                int r2 = java.lang.Math.max(r2, r4)
                int r3 = r3 + 1
                goto Lb
            L27:
                int r1 = r1 + 1
                goto L7
            L2a:
                return r2
        }

        @java.lang.Deprecated
        private com.tkay.expressad.exoplayer.h.af c() {
                r1 = this;
                com.tkay.expressad.exoplayer.h.af r0 = r1.k
                return r0
        }

        @java.lang.Deprecated
        private int d(int r11) {
                r10 = this;
                r0 = 0
                r1 = r0
                r2 = r1
            L3:
                int r3 = r10.f
                if (r1 >= r3) goto L3e
                int[] r3 = r10.g
                r3 = r3[r1]
                if (r3 != r11) goto L3b
                int[][][] r3 = r10.j
                r3 = r3[r1]
                r4 = r0
                r5 = r4
            L13:
                int r6 = r3.length
                r7 = 3
                if (r4 >= r6) goto L37
                r6 = r0
            L18:
                r8 = r3[r4]
                int r8 = r8.length
                if (r6 >= r8) goto L34
                r8 = r3[r4]
                r8 = r8[r6]
                r8 = r8 & 7
                if (r8 == r7) goto L2c
                r9 = 4
                if (r8 == r9) goto L2a
                r8 = 1
                goto L2d
            L2a:
                r5 = r7
                goto L37
            L2c:
                r8 = 2
            L2d:
                int r5 = java.lang.Math.max(r5, r8)
                int r6 = r6 + 1
                goto L18
            L34:
                int r4 = r4 + 1
                goto L13
            L37:
                int r2 = java.lang.Math.max(r2, r5)
            L3b:
                int r1 = r1 + 1
                goto L3
            L3e:
                return r2
        }

        private int e(int r11) {
                r10 = this;
                r0 = 0
                r1 = r0
                r2 = r1
            L3:
                int r3 = r10.f
                if (r1 >= r3) goto L3e
                int[] r3 = r10.g
                r3 = r3[r1]
                if (r3 != r11) goto L3b
                int[][][] r3 = r10.j
                r3 = r3[r1]
                r4 = r0
                r5 = r4
            L13:
                int r6 = r3.length
                r7 = 3
                if (r4 >= r6) goto L37
                r6 = r0
            L18:
                r8 = r3[r4]
                int r8 = r8.length
                if (r6 >= r8) goto L34
                r8 = r3[r4]
                r8 = r8[r6]
                r8 = r8 & 7
                if (r8 == r7) goto L2c
                r9 = 4
                if (r8 == r9) goto L2a
                r8 = 1
                goto L2d
            L2a:
                r5 = r7
                goto L37
            L2c:
                r8 = 2
            L2d:
                int r5 = java.lang.Math.max(r5, r8)
                int r6 = r6 + 1
                goto L18
            L34:
                int r4 = r4 + 1
                goto L13
            L37:
                int r2 = java.lang.Math.max(r2, r5)
            L3b:
                int r1 = r1 + 1
                goto L3
            L3e:
                return r2
        }

        public final int a() {
                r1 = this;
                int r0 = r1.f
                return r0
        }

        public final int a(int r2) {
                r1 = this;
                int[] r0 = r1.g
                r2 = r0[r2]
                return r2
        }

        public final int a(int r9, int r10) {
                r8 = this;
                com.tkay.expressad.exoplayer.h.af[] r0 = r8.h
                r0 = r0[r9]
                com.tkay.expressad.exoplayer.h.ae r0 = r0.a(r10)
                int r0 = r0.a
                int[] r1 = new int[r0]
                r2 = 0
                r3 = r2
                r4 = r3
            Lf:
                if (r3 >= r0) goto L20
                int r5 = r8.a(r9, r10, r3)
                r6 = 4
                if (r5 != r6) goto L1d
                int r5 = r4 + 1
                r1[r4] = r3
                r4 = r5
            L1d:
                int r3 = r3 + 1
                goto Lf
            L20:
                int[] r0 = java.util.Arrays.copyOf(r1, r4)
                r1 = 16
                r3 = 0
                r4 = r2
                r5 = r3
                r3 = r4
            L2a:
                int r6 = r0.length
                if (r2 >= r6) goto L5c
                r6 = r0[r2]
                com.tkay.expressad.exoplayer.h.af[] r7 = r8.h
                r7 = r7[r9]
                com.tkay.expressad.exoplayer.h.ae r7 = r7.a(r10)
                com.tkay.expressad.exoplayer.m r6 = r7.a(r6)
                java.lang.String r6 = r6.h
                int r7 = r4 + 1
                if (r4 != 0) goto L43
                r5 = r6
                goto L4a
            L43:
                boolean r4 = com.tkay.expressad.exoplayer.k.af.a(r5, r6)
                r4 = r4 ^ 1
                r3 = r3 | r4
            L4a:
                int[][][] r4 = r8.j
                r4 = r4[r9]
                r4 = r4[r10]
                r4 = r4[r2]
                r4 = r4 & 24
                int r1 = java.lang.Math.min(r1, r4)
                int r2 = r2 + 1
                r4 = r7
                goto L2a
            L5c:
                if (r3 == 0) goto L67
                int[] r10 = r8.i
                r9 = r10[r9]
                int r9 = java.lang.Math.min(r1, r9)
                return r9
            L67:
                return r1
        }

        public final int a(int r2, int r3, int r4) {
                r1 = this;
                int[][][] r0 = r1.j
                r2 = r0[r2]
                r2 = r2[r3]
                r2 = r2[r4]
                r2 = r2 & 7
                return r2
        }

        public final com.tkay.expressad.exoplayer.h.af b() {
                r1 = this;
                com.tkay.expressad.exoplayer.h.af r0 = r1.k
                return r0
        }

        public final com.tkay.expressad.exoplayer.h.af b(int r2) {
                r1 = this;
                com.tkay.expressad.exoplayer.h.af[] r0 = r1.h
                r2 = r0[r2]
                return r2
        }
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(com.tkay.expressad.exoplayer.z[] r7, com.tkay.expressad.exoplayer.h.ae r8) {
            int r0 = r7.length
            r1 = 0
            r2 = r1
            r3 = r2
        L4:
            int r4 = r7.length
            if (r2 >= r4) goto L26
            r4 = r7[r2]
            r5 = r1
        La:
            int r6 = r8.a
            if (r5 >= r6) goto L23
            com.tkay.expressad.exoplayer.m r6 = r8.a(r5)
            int r6 = r4.a(r6)
            r6 = r6 & 7
            if (r6 <= r3) goto L20
            r0 = 4
            if (r6 != r0) goto L1e
            return r2
        L1e:
            r0 = r2
            r3 = r6
        L20:
            int r5 = r5 + 1
            goto La
        L23:
            int r2 = r2 + 1
            goto L4
        L26:
            return r0
    }

    private static int[] a(com.tkay.expressad.exoplayer.z r3, com.tkay.expressad.exoplayer.h.ae r4) {
            int r0 = r4.a
            int[] r0 = new int[r0]
            r1 = 0
        L5:
            int r2 = r4.a
            if (r1 >= r2) goto L16
            com.tkay.expressad.exoplayer.m r2 = r4.a(r1)
            int r2 = r3.a(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L5
        L16:
            return r0
    }

    private static int[] a(com.tkay.expressad.exoplayer.z[] r4) {
            int r0 = r4.length
            int[] r1 = new int[r0]
            r2 = 0
        L4:
            if (r2 >= r0) goto L11
            r3 = r4[r2]
            int r3 = r3.m()
            r1[r2] = r3
            int r2 = r2 + 1
            goto L4
        L11:
            return r1
    }

    protected abstract android.util.Pair<com.tkay.expressad.exoplayer.aa[], com.tkay.expressad.exoplayer.i.f[]> a(com.tkay.expressad.exoplayer.i.e.a r1, int[][][] r2, int[] r3);

    public final com.tkay.expressad.exoplayer.i.e.a a() {
            r1 = this;
            com.tkay.expressad.exoplayer.i.e$a r0 = r1.a
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.i.i a(com.tkay.expressad.exoplayer.z[] r14, com.tkay.expressad.exoplayer.h.af r15) {
            r13 = this;
            int r0 = r14.length
            int r0 = r0 + 1
            int[] r0 = new int[r0]
            int r1 = r14.length
            int r1 = r1 + 1
            com.tkay.expressad.exoplayer.h.ae[][] r2 = new com.tkay.expressad.exoplayer.h.ae[r1][]
            int r3 = r14.length
            int r3 = r3 + 1
            int[][][] r3 = new int[r3][][]
            r4 = 0
            r5 = r4
        L11:
            if (r5 >= r1) goto L22
            int r6 = r15.b
            com.tkay.expressad.exoplayer.h.ae[] r6 = new com.tkay.expressad.exoplayer.h.ae[r6]
            r2[r5] = r6
            int r6 = r15.b
            int[][] r6 = new int[r6][]
            r3[r5] = r6
            int r5 = r5 + 1
            goto L11
        L22:
            int r1 = r14.length
            int[] r10 = new int[r1]
            r5 = r4
        L26:
            if (r5 >= r1) goto L33
            r6 = r14[r5]
            int r6 = r6.m()
            r10[r5] = r6
            int r5 = r5 + 1
            goto L26
        L33:
            r1 = r4
        L34:
            int r5 = r15.b
            if (r1 >= r5) goto L97
            com.tkay.expressad.exoplayer.h.ae r5 = r15.a(r1)
            int r6 = r14.length
            r7 = r4
            r8 = r7
        L3f:
            int r9 = r14.length
            if (r7 >= r9) goto L63
            r9 = r14[r7]
            r11 = r4
        L45:
            int r12 = r5.a
            if (r11 >= r12) goto L60
            com.tkay.expressad.exoplayer.m r12 = r5.a(r11)
            int r12 = r9.a(r12)
            r12 = r12 & 7
            if (r12 <= r8) goto L5d
            r6 = 4
            if (r12 == r6) goto L5b
            r6 = r7
            r8 = r12
            goto L5d
        L5b:
            r6 = r7
            goto L63
        L5d:
            int r11 = r11 + 1
            goto L45
        L60:
            int r7 = r7 + 1
            goto L3f
        L63:
            int r7 = r14.length
            if (r6 != r7) goto L6b
            int r7 = r5.a
            int[] r7 = new int[r7]
            goto L84
        L6b:
            r7 = r14[r6]
            int r8 = r5.a
            int[] r8 = new int[r8]
            r9 = r4
        L72:
            int r11 = r5.a
            if (r9 >= r11) goto L83
            com.tkay.expressad.exoplayer.m r11 = r5.a(r9)
            int r11 = r7.a(r11)
            r8[r9] = r11
            int r9 = r9 + 1
            goto L72
        L83:
            r7 = r8
        L84:
            r8 = r0[r6]
            r9 = r2[r6]
            r9[r8] = r5
            r5 = r3[r6]
            r5[r8] = r7
            r5 = r0[r6]
            int r5 = r5 + 1
            r0[r6] = r5
            int r1 = r1 + 1
            goto L34
        L97:
            int r15 = r14.length
            com.tkay.expressad.exoplayer.h.af[] r6 = new com.tkay.expressad.exoplayer.h.af[r15]
            int r15 = r14.length
            int[] r5 = new int[r15]
        L9d:
            int r15 = r14.length
            if (r4 >= r15) goto Lc6
            r15 = r0[r4]
            com.tkay.expressad.exoplayer.h.af r1 = new com.tkay.expressad.exoplayer.h.af
            r7 = r2[r4]
            java.lang.Object[] r7 = com.tkay.expressad.exoplayer.k.af.a(r7, r15)
            com.tkay.expressad.exoplayer.h.ae[] r7 = (com.tkay.expressad.exoplayer.h.ae[]) r7
            r1.<init>(r7)
            r6[r4] = r1
            r1 = r3[r4]
            java.lang.Object[] r15 = com.tkay.expressad.exoplayer.k.af.a(r1, r15)
            int[][] r15 = (int[][]) r15
            r3[r4] = r15
            r15 = r14[r4]
            int r15 = r15.a()
            r5[r4] = r15
            int r4 = r4 + 1
            goto L9d
        Lc6:
            int r15 = r14.length
            r15 = r0[r15]
            com.tkay.expressad.exoplayer.h.af r9 = new com.tkay.expressad.exoplayer.h.af
            int r14 = r14.length
            r14 = r2[r14]
            java.lang.Object[] r14 = com.tkay.expressad.exoplayer.k.af.a(r14, r15)
            com.tkay.expressad.exoplayer.h.ae[] r14 = (com.tkay.expressad.exoplayer.h.ae[]) r14
            r9.<init>(r14)
            com.tkay.expressad.exoplayer.i.e$a r14 = new com.tkay.expressad.exoplayer.i.e$a
            r4 = r14
            r7 = r10
            r8 = r3
            r4.<init>(r5, r6, r7, r8, r9)
            android.util.Pair r15 = r13.a(r14, r3, r10)
            com.tkay.expressad.exoplayer.i.i r0 = new com.tkay.expressad.exoplayer.i.i
            java.lang.Object r1 = r15.first
            com.tkay.expressad.exoplayer.aa[] r1 = (com.tkay.expressad.exoplayer.aa[]) r1
            java.lang.Object r15 = r15.second
            com.tkay.expressad.exoplayer.i.f[] r15 = (com.tkay.expressad.exoplayer.i.f[]) r15
            r0.<init>(r1, r15, r14)
            return r0
    }

    @Override
    public final void a(java.lang.Object r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.i.e$a r1 = (com.tkay.expressad.exoplayer.i.e.a) r1
            r0.a = r1
            return
    }
}
