package com.tkay.expressad.exoplayer.h;

public final class q extends com.tkay.expressad.exoplayer.h.f<java.lang.Void> {
    private final com.tkay.expressad.exoplayer.h.s a;
    private final int b;
    private int c;

    private static final class a extends com.tkay.expressad.exoplayer.h.p {
        public a(com.tkay.expressad.exoplayer.ae r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final int a(int r2, int r3, boolean r4) {
                r1 = this;
                com.tkay.expressad.exoplayer.ae r0 = r1.b
                int r2 = r0.a(r2, r3, r4)
                r3 = -1
                if (r2 != r3) goto Ld
                int r2 = r1.b(r4)
            Ld:
                return r2
        }

        @Override
        public final int b(int r2, int r3, boolean r4) {
                r1 = this;
                com.tkay.expressad.exoplayer.ae r0 = r1.b
                int r2 = r0.b(r2, r3, r4)
                r3 = -1
                if (r2 != r3) goto Ld
                int r2 = r1.a(r4)
            Ld:
                return r2
        }
    }

    private static final class b extends com.tkay.expressad.exoplayer.h.a {
        private final com.tkay.expressad.exoplayer.ae b;
        private final int c;
        private final int d;
        private final int e;

        public b(com.tkay.expressad.exoplayer.ae r3, int r4) {
                r2 = this;
                com.tkay.expressad.exoplayer.h.aa$b r0 = new com.tkay.expressad.exoplayer.h.aa$b
                r0.<init>(r4)
                r1 = 0
                r2.<init>(r1, r0)
                r2.b = r3
                int r0 = r3.c()
                r2.c = r0
                int r3 = r3.b()
                r2.d = r3
                r2.e = r4
                int r3 = r2.c
                if (r3 <= 0) goto L29
                r0 = 2147483647(0x7fffffff, float:NaN)
                int r0 = r0 / r3
                if (r4 > r0) goto L24
                r1 = 1
            L24:
                java.lang.String r3 = "LoopingMediaSource contains too many periods"
                com.tkay.expressad.exoplayer.k.a.b(r1, r3)
            L29:
                return
        }

        @Override
        protected final int a(int r2) {
                r1 = this;
                int r0 = r1.c
                int r2 = r2 / r0
                return r2
        }

        @Override
        public final int b() {
                r2 = this;
                int r0 = r2.d
                int r1 = r2.e
                int r0 = r0 * r1
                return r0
        }

        @Override
        protected final int b(int r2) {
                r1 = this;
                int r0 = r1.d
                int r2 = r2 / r0
                return r2
        }

        @Override
        protected final int b(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof java.lang.Integer
                if (r0 != 0) goto L6
                r2 = -1
                return r2
            L6:
                java.lang.Integer r2 = (java.lang.Integer) r2
                int r2 = r2.intValue()
                return r2
        }

        @Override
        public final int c() {
                r2 = this;
                int r0 = r2.c
                int r1 = r2.e
                int r0 = r0 * r1
                return r0
        }

        @Override
        protected final com.tkay.expressad.exoplayer.ae c(int r1) {
                r0 = this;
                com.tkay.expressad.exoplayer.ae r1 = r0.b
                return r1
        }

        @Override
        protected final int d(int r2) {
                r1 = this;
                int r0 = r1.c
                int r2 = r2 * r0
                return r2
        }

        @Override
        protected final int e(int r2) {
                r1 = this;
                int r0 = r1.d
                int r2 = r2 * r0
                return r2
        }

        @Override
        protected final java.lang.Object f(int r1) {
                r0 = this;
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                return r1
        }
    }

    private q(com.tkay.expressad.exoplayer.h.s r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private q(com.tkay.expressad.exoplayer.h.s r1, byte r2) {
            r0 = this;
            r0.<init>()
            r2 = 1
            com.tkay.expressad.exoplayer.k.a.a(r2)
            r0.a = r1
            r1 = 2147483647(0x7fffffff, float:NaN)
            r0.b = r1
            return
    }

    private void b(com.tkay.expressad.exoplayer.ae r3, java.lang.Object r4) {
            r2 = this;
            int r0 = r3.c()
            r2.c = r0
            int r0 = r2.b
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r0 == r1) goto L15
            com.tkay.expressad.exoplayer.h.q$b r0 = new com.tkay.expressad.exoplayer.h.q$b
            int r1 = r2.b
            r0.<init>(r3, r1)
            goto L1a
        L15:
            com.tkay.expressad.exoplayer.h.q$a r0 = new com.tkay.expressad.exoplayer.h.q$a
            r0.<init>(r3)
        L1a:
            r2.a(r0, r4)
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.r a(com.tkay.expressad.exoplayer.h.s.a r4, com.tkay.expressad.exoplayer.j.b r5) {
            r3 = this;
            int r0 = r3.b
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r0 == r1) goto L17
            com.tkay.expressad.exoplayer.h.s r0 = r3.a
            int r1 = r4.a
            int r2 = r3.c
            int r1 = r1 % r2
            com.tkay.expressad.exoplayer.h.s$a r4 = r4.a(r1)
            com.tkay.expressad.exoplayer.h.r r4 = r0.a(r4, r5)
            return r4
        L17:
            com.tkay.expressad.exoplayer.h.s r0 = r3.a
            com.tkay.expressad.exoplayer.h.r r4 = r0.a(r4, r5)
            return r4
    }

    @Override
    public final void a() {
            r1 = this;
            super.a()
            r0 = 0
            r1.c = r0
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.s r0 = r1.a
            r0.a(r2)
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
            int r1 = r3.c()
            r0.c = r1
            int r1 = r0.b
            r2 = 2147483647(0x7fffffff, float:NaN)
            if (r1 == r2) goto L15
            com.tkay.expressad.exoplayer.h.q$b r1 = new com.tkay.expressad.exoplayer.h.q$b
            int r2 = r0.b
            r1.<init>(r3, r2)
            goto L1a
        L15:
            com.tkay.expressad.exoplayer.h.q$a r1 = new com.tkay.expressad.exoplayer.h.q$a
            r1.<init>(r3)
        L1a:
            r0.a(r1, r4)
            return
    }
}
