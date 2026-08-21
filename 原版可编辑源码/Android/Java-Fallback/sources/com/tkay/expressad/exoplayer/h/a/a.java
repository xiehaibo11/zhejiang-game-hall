package com.tkay.expressad.exoplayer.h.a;

public final class a {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public static final int d = 3;
    public static final int e = 4;
    public static final com.tkay.expressad.exoplayer.h.a.a f = null;
    public final int g;
    public final long[] h;
    public final com.tkay.expressad.exoplayer.h.a.a.a[] i;
    public final long j;
    public final long k;

    public static final class a {
        public final int a;
        public final android.net.Uri[] b;
        public final int[] c;
        public final long[] d;

        public a() {
                r4 = this;
                r0 = 0
                int[] r1 = new int[r0]
                android.net.Uri[] r2 = new android.net.Uri[r0]
                long[] r0 = new long[r0]
                r3 = -1
                r4.<init>(r3, r1, r2, r0)
                return
        }

        private a(int r3, int[] r4, android.net.Uri[] r5, long[] r6) {
                r2 = this;
                r2.<init>()
                int r0 = r4.length
                int r1 = r5.length
                if (r0 != r1) goto L9
                r0 = 1
                goto La
            L9:
                r0 = 0
            La:
                com.tkay.expressad.exoplayer.k.a.a(r0)
                r2.a = r3
                r2.c = r4
                r2.b = r5
                r2.d = r6
                return
        }

        private static int[] a(int[] r2, int r3) {
                int r0 = r2.length
                int r3 = java.lang.Math.max(r3, r0)
                int[] r2 = java.util.Arrays.copyOf(r2, r3)
                r1 = 0
                java.util.Arrays.fill(r2, r0, r3, r1)
                return r2
        }

        private static long[] a(long[] r3, int r4) {
                int r0 = r3.length
                int r4 = java.lang.Math.max(r4, r0)
                long[] r3 = java.util.Arrays.copyOf(r3, r4)
                r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                java.util.Arrays.fill(r3, r0, r4, r1)
                return r3
        }

        private int c() {
                r1 = this;
                r0 = -1
                int r0 = r1.a(r0)
                return r0
        }

        public final int a(int r4) {
                r3 = this;
                r0 = 1
                int r4 = r4 + r0
            L2:
                int[] r1 = r3.c
                int r2 = r1.length
                if (r4 >= r2) goto L12
                r2 = r1[r4]
                if (r2 == 0) goto L12
                r1 = r1[r4]
                if (r1 == r0) goto L12
                int r4 = r4 + 1
                goto L2
            L12:
                return r4
        }

        public final com.tkay.expressad.exoplayer.h.a.a.a a(int r6, int r7) {
                r5 = this;
                int r0 = r5.a
                r1 = 0
                r2 = 1
                r3 = -1
                if (r0 == r3) goto Lc
                if (r7 >= r0) goto La
                goto Lc
            La:
                r0 = r1
                goto Ld
            Lc:
                r0 = r2
            Ld:
                com.tkay.expressad.exoplayer.k.a.a(r0)
                int[] r0 = r5.c
                int r3 = r7 + 1
                int[] r0 = a(r0, r3)
                r3 = r0[r7]
                if (r3 == 0) goto L24
                r3 = r0[r7]
                if (r3 == r2) goto L24
                r3 = r0[r7]
                if (r3 != r6) goto L25
            L24:
                r1 = r2
            L25:
                com.tkay.expressad.exoplayer.k.a.a(r1)
                long[] r1 = r5.d
                int r2 = r1.length
                int r3 = r0.length
                if (r2 != r3) goto L2f
                goto L34
            L2f:
                int r2 = r0.length
                long[] r1 = a(r1, r2)
            L34:
                android.net.Uri[] r2 = r5.b
                int r3 = r2.length
                int r4 = r0.length
                if (r3 != r4) goto L3b
                goto L42
            L3b:
                int r3 = r0.length
                java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r3)
                android.net.Uri[] r2 = (android.net.Uri[]) r2
            L42:
                r0[r7] = r6
                com.tkay.expressad.exoplayer.h.a.a$a r6 = new com.tkay.expressad.exoplayer.h.a.a$a
                int r7 = r5.a
                r6.<init>(r7, r0, r2, r1)
                return r6
        }

        public final com.tkay.expressad.exoplayer.h.a.a.a a(android.net.Uri r6, int r7) {
                r5 = this;
                int r0 = r5.a
                r1 = 0
                r2 = 1
                r3 = -1
                if (r0 == r3) goto Lc
                if (r7 >= r0) goto La
                goto Lc
            La:
                r0 = r1
                goto Ld
            Lc:
                r0 = r2
            Ld:
                com.tkay.expressad.exoplayer.k.a.a(r0)
                int[] r0 = r5.c
                int r3 = r7 + 1
                int[] r0 = a(r0, r3)
                r3 = r0[r7]
                if (r3 != 0) goto L1d
                r1 = r2
            L1d:
                com.tkay.expressad.exoplayer.k.a.a(r1)
                long[] r1 = r5.d
                int r3 = r1.length
                int r4 = r0.length
                if (r3 != r4) goto L27
                goto L2c
            L27:
                int r3 = r0.length
                long[] r1 = a(r1, r3)
            L2c:
                android.net.Uri[] r3 = r5.b
                int r4 = r0.length
                java.lang.Object[] r3 = java.util.Arrays.copyOf(r3, r4)
                android.net.Uri[] r3 = (android.net.Uri[]) r3
                r3[r7] = r6
                r0[r7] = r2
                com.tkay.expressad.exoplayer.h.a.a$a r6 = new com.tkay.expressad.exoplayer.h.a.a$a
                int r7 = r5.a
                r6.<init>(r7, r0, r3, r1)
                return r6
        }

        public final com.tkay.expressad.exoplayer.h.a.a.a a(long[] r5) {
                r4 = this;
                int r0 = r4.a
                r1 = -1
                if (r0 == r1) goto Le
                int r0 = r5.length
                android.net.Uri[] r1 = r4.b
                int r1 = r1.length
                if (r0 > r1) goto Lc
                goto Le
            Lc:
                r0 = 0
                goto Lf
            Le:
                r0 = 1
            Lf:
                com.tkay.expressad.exoplayer.k.a.a(r0)
                int r0 = r5.length
                android.net.Uri[] r1 = r4.b
                int r2 = r1.length
                if (r0 >= r2) goto L1d
                int r0 = r1.length
                long[] r5 = a(r5, r0)
            L1d:
                com.tkay.expressad.exoplayer.h.a.a$a r0 = new com.tkay.expressad.exoplayer.h.a.a$a
                int r1 = r4.a
                int[] r2 = r4.c
                android.net.Uri[] r3 = r4.b
                r0.<init>(r1, r2, r3, r5)
                return r0
        }

        public final boolean a() {
                r2 = this;
                int r0 = r2.a
                r1 = -1
                if (r0 == r1) goto L10
                int r0 = r2.a(r1)
                int r1 = r2.a
                if (r0 >= r1) goto Le
                goto L10
            Le:
                r0 = 0
                return r0
            L10:
                r0 = 1
                return r0
        }

        public final com.tkay.expressad.exoplayer.h.a.a.a b() {
                r5 = this;
                int r0 = r5.a
                r1 = 0
                r2 = -1
                if (r0 != r2) goto L12
                com.tkay.expressad.exoplayer.h.a.a$a r0 = new com.tkay.expressad.exoplayer.h.a.a$a
                int[] r2 = new int[r1]
                android.net.Uri[] r3 = new android.net.Uri[r1]
                long[] r4 = new long[r1]
                r0.<init>(r1, r2, r3, r4)
                return r0
            L12:
                int[] r0 = r5.c
                int r2 = r0.length
                int[] r0 = java.util.Arrays.copyOf(r0, r2)
            L19:
                if (r1 >= r2) goto L2a
                r3 = r0[r1]
                r4 = 1
                if (r3 == r4) goto L24
                r3 = r0[r1]
                if (r3 != 0) goto L27
            L24:
                r3 = 2
                r0[r1] = r3
            L27:
                int r1 = r1 + 1
                goto L19
            L2a:
                com.tkay.expressad.exoplayer.h.a.a$a r1 = new com.tkay.expressad.exoplayer.h.a.a$a
                android.net.Uri[] r3 = r5.b
                long[] r4 = r5.d
                r1.<init>(r2, r0, r3, r4)
                return r1
        }

        public final com.tkay.expressad.exoplayer.h.a.a.a b(int r5) {
                r4 = this;
                int r0 = r4.a
                r1 = -1
                if (r0 != r1) goto Lc
                int[] r0 = r4.c
                int r0 = r0.length
                if (r0 > r5) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                com.tkay.expressad.exoplayer.k.a.a(r0)
                int[] r0 = r4.c
                int[] r0 = a(r0, r5)
                long[] r1 = r4.d
                long[] r1 = a(r1, r5)
                android.net.Uri[] r2 = r4.b
                java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r5)
                android.net.Uri[] r2 = (android.net.Uri[]) r2
                com.tkay.expressad.exoplayer.h.a.a$a r3 = new com.tkay.expressad.exoplayer.h.a.a$a
                r3.<init>(r5, r0, r2, r1)
                return r3
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface b {
    }

    static {
            com.tkay.expressad.exoplayer.h.a.a r0 = new com.tkay.expressad.exoplayer.h.a.a
            r1 = 0
            long[] r1 = new long[r1]
            r0.<init>(r1)
            com.tkay.expressad.exoplayer.h.a.a.f = r0
            return
    }

    private a(long... r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.g = r0
            long[] r3 = java.util.Arrays.copyOf(r3, r0)
            r2.h = r3
            com.tkay.expressad.exoplayer.h.a.a$a[] r3 = new com.tkay.expressad.exoplayer.h.a.a.a[r0]
            r2.i = r3
            r0 = 0
            r2.j = r0
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.k = r0
            return
    }

    private a(long[] r2, com.tkay.expressad.exoplayer.h.a.a.a[] r3, long r4, long r6) {
            r1 = this;
            r1.<init>()
            int r0 = r3.length
            r1.g = r0
            r1.h = r2
            r1.i = r3
            r1.j = r4
            r1.k = r6
            return
    }

    private int a(long r7) {
            r6 = this;
            long[] r0 = r6.h
            int r0 = r0.length
            int r0 = r0 + (-1)
        L5:
            if (r0 < 0) goto L1a
            long[] r1 = r6.h
            r2 = r1[r0]
            r4 = -9223372036854775808
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L17
            r2 = r1[r0]
            int r1 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r1 <= 0) goto L1a
        L17:
            int r0 = r0 + (-1)
            goto L5
        L1a:
            if (r0 < 0) goto L27
            com.tkay.expressad.exoplayer.h.a.a$a[] r7 = r6.i
            r7 = r7[r0]
            boolean r7 = r7.a()
            if (r7 == 0) goto L27
            return r0
        L27:
            r7 = -1
            return r7
    }

    private com.tkay.expressad.exoplayer.h.a.a a(int r9) {
            r8 = this;
            com.tkay.expressad.exoplayer.h.a.a$a[] r0 = r8.i
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.tkay.expressad.exoplayer.h.a.a$a[] r3 = (com.tkay.expressad.exoplayer.h.a.a.a[]) r3
            r0 = r3[r9]
            com.tkay.expressad.exoplayer.h.a.a$a r0 = r0.b()
            r3[r9] = r0
            com.tkay.expressad.exoplayer.h.a.a r9 = new com.tkay.expressad.exoplayer.h.a.a
            long[] r2 = r8.h
            long r4 = r8.j
            long r6 = r8.k
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    private com.tkay.expressad.exoplayer.h.a.a a(int r9, int r10) {
            r8 = this;
            if (r10 <= 0) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 0
        L5:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            com.tkay.expressad.exoplayer.h.a.a$a[] r0 = r8.i
            r0 = r0[r9]
            int r0 = r0.a
            if (r0 != r10) goto L11
            return r8
        L11:
            com.tkay.expressad.exoplayer.h.a.a$a[] r0 = r8.i
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.tkay.expressad.exoplayer.h.a.a$a[] r3 = (com.tkay.expressad.exoplayer.h.a.a.a[]) r3
            com.tkay.expressad.exoplayer.h.a.a$a[] r0 = r8.i
            r0 = r0[r9]
            com.tkay.expressad.exoplayer.h.a.a$a r10 = r0.b(r10)
            r3[r9] = r10
            com.tkay.expressad.exoplayer.h.a.a r9 = new com.tkay.expressad.exoplayer.h.a.a
            long[] r2 = r8.h
            long r4 = r8.j
            long r6 = r8.k
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    private com.tkay.expressad.exoplayer.h.a.a a(int r9, int r10, android.net.Uri r11) {
            r8 = this;
            com.tkay.expressad.exoplayer.h.a.a$a[] r0 = r8.i
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.tkay.expressad.exoplayer.h.a.a$a[] r3 = (com.tkay.expressad.exoplayer.h.a.a.a[]) r3
            r0 = r3[r9]
            com.tkay.expressad.exoplayer.h.a.a$a r10 = r0.a(r11, r10)
            r3[r9] = r10
            com.tkay.expressad.exoplayer.h.a.a r9 = new com.tkay.expressad.exoplayer.h.a.a
            long[] r2 = r8.h
            long r4 = r8.j
            long r6 = r8.k
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    private int b(long r7) {
            r6 = this;
            r0 = 0
        L1:
            long[] r1 = r6.h
            int r2 = r1.length
            if (r0 >= r2) goto L21
            r2 = r1[r0]
            r4 = -9223372036854775808
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L21
            r2 = r1[r0]
            int r1 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r1 >= 0) goto L1e
            com.tkay.expressad.exoplayer.h.a.a$a[] r1 = r6.i
            r1 = r1[r0]
            boolean r1 = r1.a()
            if (r1 != 0) goto L21
        L1e:
            int r0 = r0 + 1
            goto L1
        L21:
            long[] r7 = r6.h
            int r7 = r7.length
            if (r0 >= r7) goto L27
            return r0
        L27:
            r7 = -1
            return r7
    }

    private com.tkay.expressad.exoplayer.h.a.a b(int r9, int r10) {
            r8 = this;
            com.tkay.expressad.exoplayer.h.a.a$a[] r0 = r8.i
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.tkay.expressad.exoplayer.h.a.a$a[] r3 = (com.tkay.expressad.exoplayer.h.a.a.a[]) r3
            r0 = r3[r9]
            r1 = 3
            com.tkay.expressad.exoplayer.h.a.a$a r10 = r0.a(r1, r10)
            r3[r9] = r10
            com.tkay.expressad.exoplayer.h.a.a r9 = new com.tkay.expressad.exoplayer.h.a.a
            long[] r2 = r8.h
            long r4 = r8.j
            long r6 = r8.k
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    private com.tkay.expressad.exoplayer.h.a.a c(int r9, int r10) {
            r8 = this;
            com.tkay.expressad.exoplayer.h.a.a$a[] r0 = r8.i
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.tkay.expressad.exoplayer.h.a.a$a[] r3 = (com.tkay.expressad.exoplayer.h.a.a.a[]) r3
            r0 = r3[r9]
            r1 = 2
            com.tkay.expressad.exoplayer.h.a.a$a r10 = r0.a(r1, r10)
            r3[r9] = r10
            com.tkay.expressad.exoplayer.h.a.a r9 = new com.tkay.expressad.exoplayer.h.a.a
            long[] r2 = r8.h
            long r4 = r8.j
            long r6 = r8.k
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    private com.tkay.expressad.exoplayer.h.a.a c(long r9) {
            r8 = this;
            long r0 = r8.j
            int r0 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r0 != 0) goto L7
            return r8
        L7:
            com.tkay.expressad.exoplayer.h.a.a r0 = new com.tkay.expressad.exoplayer.h.a.a
            long[] r2 = r8.h
            com.tkay.expressad.exoplayer.h.a.a$a[] r3 = r8.i
            long r6 = r8.k
            r1 = r0
            r4 = r9
            r1.<init>(r2, r3, r4, r6)
            return r0
    }

    private com.tkay.expressad.exoplayer.h.a.a d(int r9, int r10) {
            r8 = this;
            com.tkay.expressad.exoplayer.h.a.a$a[] r0 = r8.i
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.tkay.expressad.exoplayer.h.a.a$a[] r3 = (com.tkay.expressad.exoplayer.h.a.a.a[]) r3
            r0 = r3[r9]
            r1 = 4
            com.tkay.expressad.exoplayer.h.a.a$a r10 = r0.a(r1, r10)
            r3[r9] = r10
            com.tkay.expressad.exoplayer.h.a.a r9 = new com.tkay.expressad.exoplayer.h.a.a
            long[] r2 = r8.h
            long r4 = r8.j
            long r6 = r8.k
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }

    private com.tkay.expressad.exoplayer.h.a.a d(long r9) {
            r8 = this;
            long r0 = r8.k
            int r0 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r0 != 0) goto L7
            return r8
        L7:
            com.tkay.expressad.exoplayer.h.a.a r0 = new com.tkay.expressad.exoplayer.h.a.a
            long[] r2 = r8.h
            com.tkay.expressad.exoplayer.h.a.a$a[] r3 = r8.i
            long r4 = r8.j
            r1 = r0
            r6 = r9
            r1.<init>(r2, r3, r4, r6)
            return r0
    }

    public final com.tkay.expressad.exoplayer.h.a.a a(long[][] r9) {
            r8 = this;
            com.tkay.expressad.exoplayer.h.a.a$a[] r0 = r8.i
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            r3 = r0
            com.tkay.expressad.exoplayer.h.a.a$a[] r3 = (com.tkay.expressad.exoplayer.h.a.a.a[]) r3
            r0 = 0
        Lb:
            int r1 = r8.g
            if (r0 >= r1) goto L1c
            r1 = r3[r0]
            r2 = r9[r0]
            com.tkay.expressad.exoplayer.h.a.a$a r1 = r1.a(r2)
            r3[r0] = r1
            int r0 = r0 + 1
            goto Lb
        L1c:
            com.tkay.expressad.exoplayer.h.a.a r9 = new com.tkay.expressad.exoplayer.h.a.a
            long[] r2 = r8.h
            long r4 = r8.j
            long r6 = r8.k
            r1 = r9
            r1.<init>(r2, r3, r4, r6)
            return r9
    }
}
