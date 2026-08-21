package com.tkay.expressad.exoplayer.h;

public abstract class f<T> extends com.tkay.expressad.exoplayer.h.c {
    private final java.util.HashMap<T, com.tkay.expressad.exoplayer.h.f.b> a;
    private com.tkay.expressad.exoplayer.h b;
    private android.os.Handler c;


    private final class a implements com.tkay.expressad.exoplayer.h.t {
        final com.tkay.expressad.exoplayer.h.f a;
        private final T b;
        private com.tkay.expressad.exoplayer.h.t.a c;

        public a(com.tkay.expressad.exoplayer.h.f r2, T r3) {
                r1 = this;
                r1.a = r2
                r1.<init>()
                r0 = 0
                com.tkay.expressad.exoplayer.h.t$a r2 = r2.a(r0)
                r1.c = r2
                r1.b = r3
                return
        }

        private com.tkay.expressad.exoplayer.h.t.c a(com.tkay.expressad.exoplayer.h.t.c r14) {
                r13 = this;
                com.tkay.expressad.exoplayer.h.f r0 = r13.a
                long r1 = r14.f
                long r9 = r0.a(r1)
                com.tkay.expressad.exoplayer.h.f r0 = r13.a
                long r1 = r14.g
                long r11 = r0.a(r1)
                long r0 = r14.f
                int r0 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
                if (r0 != 0) goto L1d
                long r0 = r14.g
                int r0 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
                if (r0 != 0) goto L1d
                return r14
            L1d:
                com.tkay.expressad.exoplayer.h.t$c r0 = new com.tkay.expressad.exoplayer.h.t$c
                int r4 = r14.a
                int r5 = r14.b
                com.tkay.expressad.exoplayer.m r6 = r14.c
                int r7 = r14.d
                java.lang.Object r8 = r14.e
                r3 = r0
                r3.<init>(r4, r5, r6, r7, r8, r9, r11)
                return r0
        }

        private boolean d(int r3, com.tkay.expressad.exoplayer.h.s.a r4) {
                r2 = this;
                if (r4 == 0) goto Le
                com.tkay.expressad.exoplayer.h.f r0 = r2.a
                T r1 = r2.b
                com.tkay.expressad.exoplayer.h.s$a r4 = r0.a(r1, r4)
                if (r4 != 0) goto Lf
                r3 = 0
                return r3
            Le:
                r4 = 0
            Lf:
                com.tkay.expressad.exoplayer.h.f r0 = r2.a
                T r1 = r2.b
                int r3 = r0.a(r1, r3)
                com.tkay.expressad.exoplayer.h.t$a r0 = r2.c
                int r0 = r0.a
                if (r0 != r3) goto L27
                com.tkay.expressad.exoplayer.h.t$a r0 = r2.c
                com.tkay.expressad.exoplayer.h.s$a r0 = r0.b
                boolean r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r4)
                if (r0 != 0) goto L2f
            L27:
                com.tkay.expressad.exoplayer.h.f r0 = r2.a
                com.tkay.expressad.exoplayer.h.t$a r3 = r0.a(r3, r4)
                r2.c = r3
            L2f:
                r3 = 1
                return r3
        }

        @Override
        public final void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2) {
                r0 = this;
                boolean r1 = r0.d(r1, r2)
                if (r1 == 0) goto Lb
                com.tkay.expressad.exoplayer.h.t$a r1 = r0.c
                r1.a()
            Lb:
                return
        }

        @Override
        public final void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4) {
                r0 = this;
                boolean r1 = r0.d(r1, r2)
                if (r1 == 0) goto Lf
                com.tkay.expressad.exoplayer.h.t$a r1 = r0.c
                com.tkay.expressad.exoplayer.h.t$c r2 = r0.a(r4)
                r1.a(r3, r2)
            Lf:
                return
        }

        @Override
        public final void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4, java.io.IOException r5, boolean r6) {
                r0 = this;
                boolean r1 = r0.d(r1, r2)
                if (r1 == 0) goto Lf
                com.tkay.expressad.exoplayer.h.t$a r1 = r0.c
                com.tkay.expressad.exoplayer.h.t$c r2 = r0.a(r4)
                r1.a(r3, r2, r5, r6)
            Lf:
                return
        }

        @Override
        public final void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.c r3) {
                r0 = this;
                boolean r1 = r0.d(r1, r2)
                if (r1 == 0) goto Lf
                com.tkay.expressad.exoplayer.h.t$a r1 = r0.c
                com.tkay.expressad.exoplayer.h.t$c r2 = r0.a(r3)
                r1.a(r2)
            Lf:
                return
        }

        @Override
        public final void b(int r1, com.tkay.expressad.exoplayer.h.s.a r2) {
                r0 = this;
                boolean r1 = r0.d(r1, r2)
                if (r1 == 0) goto Lb
                com.tkay.expressad.exoplayer.h.t$a r1 = r0.c
                r1.b()
            Lb:
                return
        }

        @Override
        public final void b(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4) {
                r0 = this;
                boolean r1 = r0.d(r1, r2)
                if (r1 == 0) goto Lf
                com.tkay.expressad.exoplayer.h.t$a r1 = r0.c
                com.tkay.expressad.exoplayer.h.t$c r2 = r0.a(r4)
                r1.b(r3, r2)
            Lf:
                return
        }

        @Override
        public final void b(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.c r3) {
                r0 = this;
                boolean r1 = r0.d(r1, r2)
                if (r1 == 0) goto Lf
                com.tkay.expressad.exoplayer.h.t$a r1 = r0.c
                com.tkay.expressad.exoplayer.h.t$c r2 = r0.a(r3)
                r1.b(r2)
            Lf:
                return
        }

        @Override
        public final void c(int r1, com.tkay.expressad.exoplayer.h.s.a r2) {
                r0 = this;
                boolean r1 = r0.d(r1, r2)
                if (r1 == 0) goto Lb
                com.tkay.expressad.exoplayer.h.t$a r1 = r0.c
                r1.c()
            Lb:
                return
        }

        @Override
        public final void c(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4) {
                r0 = this;
                boolean r1 = r0.d(r1, r2)
                if (r1 == 0) goto Lf
                com.tkay.expressad.exoplayer.h.t$a r1 = r0.c
                com.tkay.expressad.exoplayer.h.t$c r2 = r0.a(r4)
                r1.c(r3, r2)
            Lf:
                return
        }
    }

    private static final class b {
        public final com.tkay.expressad.exoplayer.h.s a;
        public final com.tkay.expressad.exoplayer.h.s.b b;
        public final com.tkay.expressad.exoplayer.h.t c;

        public b(com.tkay.expressad.exoplayer.h.s r1, com.tkay.expressad.exoplayer.h.s.b r2, com.tkay.expressad.exoplayer.h.t r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }
    }

    protected f() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            return
    }

    protected int a(T r1, int r2) {
            r0 = this;
            return r2
    }

    protected long a(long r1) {
            r0 = this;
            return r1
    }

    protected com.tkay.expressad.exoplayer.h.s.a a(T r1, com.tkay.expressad.exoplayer.h.s.a r2) {
            r0 = this;
            return r2
    }

    @Override
    public void a() {
            r4 = this;
            java.util.HashMap<T, com.tkay.expressad.exoplayer.h.f$b> r0 = r4.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.h.f$b r1 = (com.tkay.expressad.exoplayer.h.f.b) r1
            com.tkay.expressad.exoplayer.h.s r2 = r1.a
            com.tkay.expressad.exoplayer.h.s$b r3 = r1.b
            r2.a(r3)
            com.tkay.expressad.exoplayer.h.s r2 = r1.a
            com.tkay.expressad.exoplayer.h.t r1 = r1.c
            r2.a(r1)
            goto La
        L25:
            java.util.HashMap<T, com.tkay.expressad.exoplayer.h.f$b> r0 = r4.a
            r0.clear()
            r0 = 0
            r4.b = r0
            return
    }

    @Override
    public void a(com.tkay.expressad.exoplayer.h r1, boolean r2) {
            r0 = this;
            r0.b = r1
            android.os.Handler r1 = new android.os.Handler
            r1.<init>()
            r0.c = r1
            return
    }

    protected final void a(T r3) {
            r2 = this;
            java.util.HashMap<T, com.tkay.expressad.exoplayer.h.f$b> r0 = r2.a
            java.lang.Object r3 = r0.remove(r3)
            com.tkay.expressad.exoplayer.h.f$b r3 = (com.tkay.expressad.exoplayer.h.f.b) r3
            com.tkay.expressad.exoplayer.h.s r0 = r3.a
            com.tkay.expressad.exoplayer.h.s$b r1 = r3.b
            r0.a(r1)
            com.tkay.expressad.exoplayer.h.s r0 = r3.a
            com.tkay.expressad.exoplayer.h.t r3 = r3.c
            r0.a(r3)
            return
    }

    protected final void a(T r5, com.tkay.expressad.exoplayer.h.s r6) {
            r4 = this;
            java.util.HashMap<T, com.tkay.expressad.exoplayer.h.f$b> r0 = r4.a
            boolean r0 = r0.containsKey(r5)
            r0 = r0 ^ 1
            com.tkay.expressad.exoplayer.k.a.a(r0)
            com.tkay.expressad.exoplayer.h.f$1 r0 = new com.tkay.expressad.exoplayer.h.f$1
            r0.<init>(r4, r5)
            com.tkay.expressad.exoplayer.h.f$a r1 = new com.tkay.expressad.exoplayer.h.f$a
            r1.<init>(r4, r5)
            java.util.HashMap<T, com.tkay.expressad.exoplayer.h.f$b> r2 = r4.a
            com.tkay.expressad.exoplayer.h.f$b r3 = new com.tkay.expressad.exoplayer.h.f$b
            r3.<init>(r6, r0, r1)
            r2.put(r5, r3)
            android.os.Handler r5 = r4.c
            r6.a(r5, r1)
            com.tkay.expressad.exoplayer.h r5 = r4.b
            r1 = 0
            r6.a(r5, r1, r0)
            return
    }

    protected abstract void a(T r1, com.tkay.expressad.exoplayer.h.s r2, com.tkay.expressad.exoplayer.ae r3, java.lang.Object r4);

    @Override
    public void b() {
            r2 = this;
            java.util.HashMap<T, com.tkay.expressad.exoplayer.h.f$b> r0 = r2.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.h.f$b r1 = (com.tkay.expressad.exoplayer.h.f.b) r1
            com.tkay.expressad.exoplayer.h.s r1 = r1.a
            r1.b()
            goto La
        L1c:
            return
    }
}
