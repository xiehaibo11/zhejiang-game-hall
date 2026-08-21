package com.tkay.expressad.exoplayer.h;

public final class e extends com.tkay.expressad.exoplayer.h.f<java.lang.Void> {
    private final com.tkay.expressad.exoplayer.h.s a;
    private final long b;
    private final long c;
    private final boolean d;
    private final boolean e;
    private final boolean f;
    private final java.util.ArrayList<com.tkay.expressad.exoplayer.h.d> g;
    private final com.tkay.expressad.exoplayer.ae.b h;
    private java.lang.Object i;
    private com.tkay.expressad.exoplayer.h.e.a j;
    private com.tkay.expressad.exoplayer.h.e.b k;
    private long l;
    private long m;

    private static final class a extends com.tkay.expressad.exoplayer.h.p {
        private final long c;
        private final long d;
        private final long e;
        private final boolean f;

        public a(com.tkay.expressad.exoplayer.ae r10, long r11, long r13) {
                r9 = this;
                r9.<init>(r10)
                int r0 = r10.c()
                r1 = 1
                r2 = 0
                if (r0 != r1) goto L7a
                com.tkay.expressad.exoplayer.ae$b r0 = new com.tkay.expressad.exoplayer.ae$b
                r0.<init>()
                com.tkay.expressad.exoplayer.ae$b r10 = r10.a(r2, r0, r2)
                r3 = 0
                long r11 = java.lang.Math.max(r3, r11)
                r5 = -9223372036854775808
                int r0 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
                if (r0 != 0) goto L23
                long r13 = r10.i
                goto L27
            L23:
                long r13 = java.lang.Math.max(r3, r13)
            L27:
                long r5 = r10.i
                r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
                if (r0 == 0) goto L55
                long r5 = r10.i
                int r0 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
                if (r0 <= 0) goto L3a
                long r13 = r10.i
            L3a:
                int r0 = (r11 > r3 ? 1 : (r11 == r3 ? 0 : -1))
                if (r0 == 0) goto L49
                boolean r0 = r10.d
                if (r0 == 0) goto L43
                goto L49
            L43:
                com.tkay.expressad.exoplayer.h.e$b r10 = new com.tkay.expressad.exoplayer.h.e$b
                r10.<init>(r1)
                throw r10
            L49:
                int r0 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
                if (r0 > 0) goto L4e
                goto L55
            L4e:
                com.tkay.expressad.exoplayer.h.e$b r10 = new com.tkay.expressad.exoplayer.h.e$b
                r11 = 2
                r10.<init>(r11)
                throw r10
            L55:
                r9.c = r11
                r9.d = r13
                int r0 = (r13 > r7 ? 1 : (r13 == r7 ? 0 : -1))
                if (r0 != 0) goto L5f
                r11 = r7
                goto L61
            L5f:
                long r11 = r13 - r11
            L61:
                r9.e = r11
                boolean r11 = r10.e
                if (r11 == 0) goto L76
                if (r0 == 0) goto L77
                long r11 = r10.i
                int r11 = (r11 > r7 ? 1 : (r11 == r7 ? 0 : -1))
                if (r11 == 0) goto L76
                long r10 = r10.i
                int r10 = (r13 > r10 ? 1 : (r13 == r10 ? 0 : -1))
                if (r10 != 0) goto L76
                goto L77
            L76:
                r1 = r2
            L77:
                r9.f = r1
                return
            L7a:
                com.tkay.expressad.exoplayer.h.e$b r10 = new com.tkay.expressad.exoplayer.h.e$b
                r10.<init>(r2)
                throw r10
        }

        @Override
        public final com.tkay.expressad.exoplayer.ae.a a(int r12, com.tkay.expressad.exoplayer.ae.a r13, boolean r14) {
                r11 = this;
                com.tkay.expressad.exoplayer.ae r12 = r11.b
                r0 = 0
                r12.a(r0, r13, r14)
                long r0 = r13.b()
                long r2 = r11.c
                long r9 = r0 - r2
                long r0 = r11.e
                r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                int r12 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r12 != 0) goto L1b
                r7 = r2
                goto L1d
            L1b:
                long r0 = r0 - r9
                r7 = r0
            L1d:
                java.lang.Object r5 = r13.a
                java.lang.Object r6 = r13.b
                r4 = r13
                com.tkay.expressad.exoplayer.ae$a r12 = r4.a(r5, r6, r7, r9)
                return r12
        }

        @Override
        public final com.tkay.expressad.exoplayer.ae.b a(int r7, com.tkay.expressad.exoplayer.ae.b r8, boolean r9, long r10) {
                r6 = this;
                com.tkay.expressad.exoplayer.ae r0 = r6.b
                r1 = 0
                r4 = 0
                r2 = r8
                r3 = r9
                r0.a(r1, r2, r3, r4)
                long r9 = r8.j
                long r0 = r6.c
                long r9 = r9 + r0
                r8.j = r9
                long r9 = r6.e
                r8.i = r9
                boolean r7 = r6.f
                r8.e = r7
                long r9 = r8.h
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                int r7 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
                if (r7 == 0) goto L48
                long r9 = r8.h
                long r2 = r6.c
                long r9 = java.lang.Math.max(r9, r2)
                r8.h = r9
                long r9 = r6.d
                int r7 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
                if (r7 != 0) goto L37
                long r9 = r8.h
                goto L3f
            L37:
                long r9 = r8.h
                long r2 = r6.d
                long r9 = java.lang.Math.min(r9, r2)
            L3f:
                r8.h = r9
                long r9 = r8.h
                long r2 = r6.c
                long r9 = r9 - r2
                r8.h = r9
            L48:
                long r9 = r6.c
                long r9 = com.tkay.expressad.exoplayer.b.a(r9)
                long r2 = r8.b
                int r7 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r7 == 0) goto L59
                long r2 = r8.b
                long r2 = r2 + r9
                r8.b = r2
            L59:
                long r2 = r8.c
                int r7 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r7 == 0) goto L64
                long r0 = r8.c
                long r0 = r0 + r9
                r8.c = r0
            L64:
                return r8
        }
    }

    public static final class b extends java.io.IOException {
        public static final int a = 0;
        public static final int b = 1;
        public static final int c = 2;
        public final int d;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface a {
        }

        public b(int r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Illegal clipping: "
                r0.<init>(r1)
                if (r3 == 0) goto L18
                r1 = 1
                if (r3 == r1) goto L15
                r1 = 2
                if (r3 == r1) goto L12
                java.lang.String r1 = "unknown"
                goto L1a
            L12:
                java.lang.String r1 = "start exceeds end"
                goto L1a
            L15:
                java.lang.String r1 = "not seekable to start"
                goto L1a
            L18:
                java.lang.String r1 = "invalid period count"
            L1a:
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r2.<init>(r0)
                r2.d = r3
                return
        }

        private static java.lang.String a(int r1) {
                if (r1 == 0) goto L11
                r0 = 1
                if (r1 == r0) goto Le
                r0 = 2
                if (r1 == r0) goto Lb
                java.lang.String r1 = "unknown"
                return r1
            Lb:
                java.lang.String r1 = "start exceeds end"
                return r1
            Le:
                java.lang.String r1 = "not seekable to start"
                return r1
            L11:
                java.lang.String r1 = "invalid period count"
                return r1
        }
    }

    private e(com.tkay.expressad.exoplayer.h.s r9, long r10) {
            r8 = this;
            r2 = 0
            r6 = 1
            r7 = 1
            r0 = r8
            r1 = r9
            r4 = r10
            r0.<init>(r1, r2, r4, r6, r7)
            return
    }

    private e(com.tkay.expressad.exoplayer.h.s r9, long r10, long r12) {
            r8 = this;
            r6 = 1
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r4 = r12
            r0.<init>(r1, r2, r4, r6, r7)
            return
    }

    @java.lang.Deprecated
    private e(com.tkay.expressad.exoplayer.h.s r9, long r10, long r12, boolean r14) {
            r8 = this;
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r4 = r12
            r6 = r14
            r0.<init>(r1, r2, r4, r6, r7)
            return
    }

    private e(com.tkay.expressad.exoplayer.h.s r3, long r4, long r6, boolean r8, boolean r9) {
            r2 = this;
            r2.<init>()
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 0
            if (r0 < 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = r1
        Ld:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            java.lang.Object r3 = com.tkay.expressad.exoplayer.k.a.a(r3)
            com.tkay.expressad.exoplayer.h.s r3 = (com.tkay.expressad.exoplayer.h.s) r3
            r2.a = r3
            r2.b = r4
            r2.c = r6
            r2.d = r8
            r2.e = r1
            r2.f = r9
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.g = r3
            com.tkay.expressad.exoplayer.ae$b r3 = new com.tkay.expressad.exoplayer.ae$b
            r3.<init>()
            r2.h = r3
            return
    }

    private void a(com.tkay.expressad.exoplayer.ae r16) {
            r15 = this;
            r1 = r15
            com.tkay.expressad.exoplayer.ae$b r0 = r1.h
            r2 = 0
            r4 = r16
            r4.a(r2, r0, r2)
            com.tkay.expressad.exoplayer.ae$b r0 = r1.h
            long r5 = r0.j
            com.tkay.expressad.exoplayer.h.e$a r0 = r1.j
            r7 = -9223372036854775808
            if (r0 == 0) goto L2f
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.d> r0 = r1.g
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L2f
            boolean r0 = r1.e
            if (r0 == 0) goto L20
            goto L2f
        L20:
            long r2 = r1.l
            long r2 = r2 - r5
            long r9 = r1.c
            int r0 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r0 != 0) goto L2a
            goto L2d
        L2a:
            long r7 = r1.m
            long r7 = r7 - r5
        L2d:
            r5 = r2
            goto L68
        L2f:
            long r9 = r1.b
            long r11 = r1.c
            boolean r0 = r1.f
            if (r0 == 0) goto L3d
            com.tkay.expressad.exoplayer.ae$b r0 = r1.h
            long r13 = r0.h
            long r9 = r9 + r13
            long r11 = r11 + r13
        L3d:
            long r13 = r5 + r9
            r1.l = r13
            long r13 = r1.c
            int r0 = (r13 > r7 ? 1 : (r13 == r7 ? 0 : -1))
            if (r0 != 0) goto L48
            goto L4a
        L48:
            long r7 = r5 + r11
        L4a:
            r1.m = r7
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.d> r0 = r1.g
            int r0 = r0.size()
        L52:
            if (r2 >= r0) goto L66
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.d> r3 = r1.g
            java.lang.Object r3 = r3.get(r2)
            com.tkay.expressad.exoplayer.h.d r3 = (com.tkay.expressad.exoplayer.h.d) r3
            long r5 = r1.l
            long r7 = r1.m
            r3.a(r5, r7)
            int r2 = r2 + 1
            goto L52
        L66:
            r5 = r9
            r7 = r11
        L68:
            com.tkay.expressad.exoplayer.h.e$a r0 = new com.tkay.expressad.exoplayer.h.e$a     // Catch: com.tkay.expressad.exoplayer.h.e.b -> L78
            r3 = r0
            r4 = r16
            r3.<init>(r4, r5, r7)     // Catch: com.tkay.expressad.exoplayer.h.e.b -> L78
            r1.j = r0     // Catch: com.tkay.expressad.exoplayer.h.e.b -> L78
            java.lang.Object r2 = r1.i
            r15.a(r0, r2)
            return
        L78:
            r0 = move-exception
            r1.k = r0
            return
    }

    private long b(long r7) {
            r6 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 != 0) goto La
            return r0
        La:
            long r0 = r6.b
            long r0 = com.tkay.expressad.exoplayer.b.a(r0)
            r2 = 0
            long r7 = r7 - r0
            long r7 = java.lang.Math.max(r2, r7)
            long r2 = r6.c
            r4 = -9223372036854775808
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 == 0) goto L28
            long r2 = com.tkay.expressad.exoplayer.b.a(r2)
            long r2 = r2 - r0
            long r7 = java.lang.Math.min(r2, r7)
        L28:
            return r7
    }

    private void b(com.tkay.expressad.exoplayer.ae r2, java.lang.Object r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.e$b r0 = r1.k
            if (r0 == 0) goto L5
            return
        L5:
            r1.i = r3
            r1.a(r2)
            return
    }

    @Override
    protected final long a(long r7) {
            r6 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 != 0) goto La
            return r0
        La:
            long r0 = r6.b
            long r0 = com.tkay.expressad.exoplayer.b.a(r0)
            r2 = 0
            long r7 = r7 - r0
            long r7 = java.lang.Math.max(r2, r7)
            long r2 = r6.c
            r4 = -9223372036854775808
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 == 0) goto L28
            long r2 = com.tkay.expressad.exoplayer.b.a(r2)
            long r2 = r2 - r0
            long r7 = java.lang.Math.min(r2, r7)
        L28:
            return r7
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.r a(com.tkay.expressad.exoplayer.h.s.a r9, com.tkay.expressad.exoplayer.j.b r10) {
            r8 = this;
            com.tkay.expressad.exoplayer.h.d r7 = new com.tkay.expressad.exoplayer.h.d
            com.tkay.expressad.exoplayer.h.s r0 = r8.a
            com.tkay.expressad.exoplayer.h.r r1 = r0.a(r9, r10)
            boolean r2 = r8.d
            long r3 = r8.l
            long r5 = r8.m
            r0 = r7
            r0.<init>(r1, r2, r3, r5)
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.d> r9 = r8.g
            r9.add(r7)
            return r7
    }

    @Override
    public final void a() {
            r1 = this;
            super.a()
            r0 = 0
            r1.k = r0
            r1.j = r0
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r r2) {
            r1 = this;
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.d> r0 = r1.g
            boolean r0 = r0.remove(r2)
            com.tkay.expressad.exoplayer.k.a.b(r0)
            com.tkay.expressad.exoplayer.h.s r0 = r1.a
            com.tkay.expressad.exoplayer.h.d r2 = (com.tkay.expressad.exoplayer.h.d) r2
            com.tkay.expressad.exoplayer.h.r r2 = r2.a
            r0.a(r2)
            java.util.ArrayList<com.tkay.expressad.exoplayer.h.d> r2 = r1.g
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L25
            boolean r2 = r1.e
            if (r2 != 0) goto L25
            com.tkay.expressad.exoplayer.h.e$a r2 = r1.j
            com.tkay.expressad.exoplayer.ae r2 = r2.b
            r1.a(r2)
        L25:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h r1, boolean r2) {
            r0 = this;
            super.a(r1, r2)
            com.tkay.expressad.exoplayer.h.s r1 = r0.a
            r2 = 0
            r0.a(r2, r1)
            return
    }

    @Override
    protected final void a(java.lang.Void r1, com.tkay.expressad.exoplayer.h.s r2, com.tkay.expressad.exoplayer.ae r3, java.lang.Object r4) {
            r0 = this;
            com.tkay.expressad.exoplayer.h.e$b r1 = r0.k
            if (r1 != 0) goto L9
            r0.i = r4
            r0.a(r3)
        L9:
            return
    }

    @Override
    public final void b() {
            r1 = this;
            com.tkay.expressad.exoplayer.h.e$b r0 = r1.k
            if (r0 != 0) goto L8
            super.b()
            return
        L8:
            throw r0
    }
}
