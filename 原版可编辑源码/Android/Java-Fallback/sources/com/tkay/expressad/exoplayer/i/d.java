package com.tkay.expressad.exoplayer.i;

public final class d extends com.tkay.expressad.exoplayer.i.b {
    private final int a;
    private final java.lang.Object b;

    public static final class a implements com.tkay.expressad.exoplayer.i.f.a {
        private final int a;
        private final java.lang.Object b;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                r0 = 0
                r1.b = r0
                return
        }

        private a(int r1, java.lang.Object r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        private com.tkay.expressad.exoplayer.i.d b(com.tkay.expressad.exoplayer.h.ae r4, int... r5) {
                r3 = this;
                int r0 = r5.length
                r1 = 0
                r2 = 1
                if (r0 != r2) goto L6
                goto L7
            L6:
                r2 = r1
            L7:
                com.tkay.expressad.exoplayer.k.a.a(r2)
                com.tkay.expressad.exoplayer.i.d r0 = new com.tkay.expressad.exoplayer.i.d
                r5 = r5[r1]
                int r1 = r3.a
                java.lang.Object r2 = r3.b
                r0.<init>(r4, r5, r1, r2)
                return r0
        }

        @Override
        public final com.tkay.expressad.exoplayer.i.f a(com.tkay.expressad.exoplayer.h.ae r4, int[] r5) {
                r3 = this;
                int r0 = r5.length
                r1 = 0
                r2 = 1
                if (r0 != r2) goto L6
                goto L7
            L6:
                r2 = r1
            L7:
                com.tkay.expressad.exoplayer.k.a.a(r2)
                com.tkay.expressad.exoplayer.i.d r0 = new com.tkay.expressad.exoplayer.i.d
                r5 = r5[r1]
                int r1 = r3.a
                java.lang.Object r2 = r3.b
                r0.<init>(r4, r5, r1, r2)
                return r0
        }
    }

    public d(com.tkay.expressad.exoplayer.h.ae r3, int r4) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r4, r0, r1)
            return
    }

    public d(com.tkay.expressad.exoplayer.h.ae r3, int r4, int r5, java.lang.Object r6) {
            r2 = this;
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r0[r1] = r4
            r2.<init>(r3, r0)
            r2.a = r5
            r2.b = r6
            return
    }

    @Override
    public final void a(long r1, long r3) {
            r0 = this;
            return
    }

    @Override
    public final int b() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final int c() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    @Override
    public final java.lang.Object d() {
            r1 = this;
            java.lang.Object r0 = r1.b
            return r0
    }
}
