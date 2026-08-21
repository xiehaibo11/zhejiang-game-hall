package com.tkay.expressad.exoplayer.h.b;

public final class d implements com.tkay.expressad.exoplayer.e.g {
    public final com.tkay.expressad.exoplayer.e.e a;
    private final int b;
    private final com.tkay.expressad.exoplayer.m c;
    private final android.util.SparseArray<com.tkay.expressad.exoplayer.h.b.d.a> d;
    private boolean e;
    private com.tkay.expressad.exoplayer.h.b.d.b f;
    private com.tkay.expressad.exoplayer.e.k g;
    private com.tkay.expressad.exoplayer.m[] h;

    private static final class a implements com.tkay.expressad.exoplayer.e.m {
        public com.tkay.expressad.exoplayer.m a;
        private final int b;
        private final int c;
        private final com.tkay.expressad.exoplayer.m d;
        private com.tkay.expressad.exoplayer.e.m e;

        public a(int r1, int r2, com.tkay.expressad.exoplayer.m r3) {
                r0 = this;
                r0.<init>()
                r0.b = r1
                r0.c = r2
                r0.d = r3
                return
        }

        @Override
        public final int a(com.tkay.expressad.exoplayer.e.f r2, int r3, boolean r4) {
                r1 = this;
                com.tkay.expressad.exoplayer.e.m r0 = r1.e
                int r2 = r0.a(r2, r3, r4)
                return r2
        }

        @Override
        public final void a(long r8, int r10, int r11, int r12, com.tkay.expressad.exoplayer.e.m.a r13) {
                r7 = this;
                com.tkay.expressad.exoplayer.e.m r0 = r7.e
                r1 = r8
                r3 = r10
                r4 = r11
                r5 = r12
                r6 = r13
                r0.a(r1, r3, r4, r5, r6)
                return
        }

        public final void a(com.tkay.expressad.exoplayer.h.b.d.b r2) {
                r1 = this;
                if (r2 != 0) goto La
                com.tkay.expressad.exoplayer.e.d r2 = new com.tkay.expressad.exoplayer.e.d
                r2.<init>()
                r1.e = r2
                return
            La:
                int r0 = r1.c
                com.tkay.expressad.exoplayer.e.m r2 = r2.a(r0)
                r1.e = r2
                com.tkay.expressad.exoplayer.m r0 = r1.a
                if (r0 == 0) goto L19
                r2.a(r0)
            L19:
                return
        }

        @Override
        public final void a(com.tkay.expressad.exoplayer.k.s r2, int r3) {
                r1 = this;
                com.tkay.expressad.exoplayer.e.m r0 = r1.e
                r0.a(r2, r3)
                return
        }

        @Override
        public final void a(com.tkay.expressad.exoplayer.m r2) {
                r1 = this;
                com.tkay.expressad.exoplayer.m r0 = r1.d
                if (r0 == 0) goto L8
                com.tkay.expressad.exoplayer.m r2 = r2.a(r0)
            L8:
                r1.a = r2
                com.tkay.expressad.exoplayer.e.m r0 = r1.e
                r0.a(r2)
                return
        }
    }

    public interface b {
        com.tkay.expressad.exoplayer.e.m a(int r1);
    }

    private d(com.tkay.expressad.exoplayer.e.e r1, int r2, com.tkay.expressad.exoplayer.m r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            r0.d = r1
            return
    }

    private com.tkay.expressad.exoplayer.e.k b() {
            r1 = this;
            com.tkay.expressad.exoplayer.e.k r0 = r1.g
            return r0
    }

    private com.tkay.expressad.exoplayer.m[] c() {
            r1 = this;
            com.tkay.expressad.exoplayer.m[] r0 = r1.h
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.e.m a(int r3, int r4) {
            r2 = this;
            android.util.SparseArray<com.tkay.expressad.exoplayer.h.b.d$a> r0 = r2.d
            java.lang.Object r0 = r0.get(r3)
            com.tkay.expressad.exoplayer.h.b.d$a r0 = (com.tkay.expressad.exoplayer.h.b.d.a) r0
            if (r0 != 0) goto L2b
            com.tkay.expressad.exoplayer.m[] r0 = r2.h
            if (r0 != 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            com.tkay.expressad.exoplayer.h.b.d$a r0 = new com.tkay.expressad.exoplayer.h.b.d$a
            int r1 = r2.b
            if (r4 != r1) goto L1d
            com.tkay.expressad.exoplayer.m r1 = r2.c
            goto L1e
        L1d:
            r1 = 0
        L1e:
            r0.<init>(r3, r4, r1)
            com.tkay.expressad.exoplayer.h.b.d$b r4 = r2.f
            r0.a(r4)
            android.util.SparseArray<com.tkay.expressad.exoplayer.h.b.d$a> r4 = r2.d
            r4.put(r3, r0)
        L2b:
            return r0
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.e.k r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(com.tkay.expressad.exoplayer.h.b.d.b r6, long r7) {
            r5 = this;
            r5.f = r6
            boolean r0 = r5.e
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3 = 0
            if (r0 != 0) goto L1f
            com.tkay.expressad.exoplayer.e.e r6 = r5.a
            r6.a(r5)
            int r6 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r6 == 0) goto L1b
            com.tkay.expressad.exoplayer.e.e r6 = r5.a
            r6.a(r3, r7)
        L1b:
            r6 = 1
            r5.e = r6
            return
        L1f:
            com.tkay.expressad.exoplayer.e.e r0 = r5.a
            int r1 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r1 != 0) goto L26
            r7 = r3
        L26:
            r0.a(r3, r7)
            r7 = 0
        L2a:
            android.util.SparseArray<com.tkay.expressad.exoplayer.h.b.d$a> r8 = r5.d
            int r8 = r8.size()
            if (r7 >= r8) goto L40
            android.util.SparseArray<com.tkay.expressad.exoplayer.h.b.d$a> r8 = r5.d
            java.lang.Object r8 = r8.valueAt(r7)
            com.tkay.expressad.exoplayer.h.b.d$a r8 = (com.tkay.expressad.exoplayer.h.b.d.a) r8
            r8.a(r6)
            int r7 = r7 + 1
            goto L2a
        L40:
            return
    }

    @Override
    public final void c_() {
            r3 = this;
            android.util.SparseArray<com.tkay.expressad.exoplayer.h.b.d$a> r0 = r3.d
            int r0 = r0.size()
            com.tkay.expressad.exoplayer.m[] r0 = new com.tkay.expressad.exoplayer.m[r0]
            r1 = 0
        L9:
            android.util.SparseArray<com.tkay.expressad.exoplayer.h.b.d$a> r2 = r3.d
            int r2 = r2.size()
            if (r1 >= r2) goto L20
            android.util.SparseArray<com.tkay.expressad.exoplayer.h.b.d$a> r2 = r3.d
            java.lang.Object r2 = r2.valueAt(r1)
            com.tkay.expressad.exoplayer.h.b.d$a r2 = (com.tkay.expressad.exoplayer.h.b.d.a) r2
            com.tkay.expressad.exoplayer.m r2 = r2.a
            r0[r1] = r2
            int r1 = r1 + 1
            goto L9
        L20:
            r3.h = r0
            return
    }
}
