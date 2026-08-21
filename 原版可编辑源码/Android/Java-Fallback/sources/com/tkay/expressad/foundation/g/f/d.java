package com.tkay.expressad.foundation.g.f;

public class d implements com.tkay.expressad.foundation.g.f.c {
    private final java.lang.String a;
    private final java.util.concurrent.Executor b;








    private class a implements java.lang.Runnable {
        final com.tkay.expressad.foundation.g.f.d a;
        private final com.tkay.expressad.foundation.g.f.i b;
        private final com.tkay.expressad.foundation.g.f.k c;

        public a(com.tkay.expressad.foundation.g.f.d r1, com.tkay.expressad.foundation.g.f.i r2, com.tkay.expressad.foundation.g.f.k r3) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.expressad.foundation.g.f.i r0 = r2.b
                boolean r0 = r0.f()
                if (r0 == 0) goto L13
                com.tkay.expressad.foundation.g.f.i r0 = r2.b
                r0.c()
                com.tkay.expressad.foundation.g.f.i r0 = r2.b
                r0.m()
                return
            L13:
                com.tkay.expressad.foundation.g.f.k r0 = r2.c
                com.tkay.expressad.foundation.g.f.a.a r0 = r0.b
                if (r0 != 0) goto L1b
                r0 = 1
                goto L1c
            L1b:
                r0 = 0
            L1c:
                if (r0 == 0) goto L26
                com.tkay.expressad.foundation.g.f.i r0 = r2.b
                com.tkay.expressad.foundation.g.f.k r1 = r2.c
                r0.a(r1)
                goto L2f
            L26:
                com.tkay.expressad.foundation.g.f.i r0 = r2.b
                com.tkay.expressad.foundation.g.f.k r1 = r2.c
                com.tkay.expressad.foundation.g.f.a.a r1 = r1.b
                r0.b(r1)
            L2f:
                com.tkay.expressad.foundation.g.f.i r0 = r2.b
                r0.c()
                com.tkay.expressad.foundation.g.f.i r0 = r2.b
                r0.o()
                return
        }
    }

    public d(android.os.Handler r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.tkay.expressad.foundation.g.f.d> r0 = com.tkay.expressad.foundation.g.f.d.class
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            com.tkay.expressad.foundation.g.f.d$1 r0 = new com.tkay.expressad.foundation.g.f.d$1
            r0.<init>(r1, r2)
            r1.b = r0
            return
    }

    @Override
    public final void a(com.tkay.expressad.foundation.g.f.i<?> r3) {
            r2 = this;
            java.util.concurrent.Executor r0 = r2.b
            if (r0 == 0) goto Lc
            com.tkay.expressad.foundation.g.f.d$2 r1 = new com.tkay.expressad.foundation.g.f.d$2
            r1.<init>(r2, r3)
            r0.execute(r1)
        Lc:
            return
    }

    @Override
    public final void a(com.tkay.expressad.foundation.g.f.i<?> r10, long r11, long r13) {
            r9 = this;
            java.util.concurrent.Executor r0 = r9.b
            if (r0 == 0) goto L11
            com.tkay.expressad.foundation.g.f.d$7 r8 = new com.tkay.expressad.foundation.g.f.d$7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r6 = r13
            r1.<init>(r2, r3, r4, r6)
            r0.execute(r8)
        L11:
            return
    }

    @Override
    public final void a(com.tkay.expressad.foundation.g.f.i<?> r3, com.tkay.expressad.foundation.g.f.a.a r4) {
            r2 = this;
            java.util.concurrent.Executor r0 = r2.b
            if (r0 == 0) goto L12
            com.tkay.expressad.foundation.g.f.k r4 = com.tkay.expressad.foundation.g.f.k.a(r4)
            java.util.concurrent.Executor r0 = r2.b
            com.tkay.expressad.foundation.g.f.d$a r1 = new com.tkay.expressad.foundation.g.f.d$a
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
        L12:
            return
    }

    @Override
    public final void a(com.tkay.expressad.foundation.g.f.i<?> r3, com.tkay.expressad.foundation.g.f.k<?> r4) {
            r2 = this;
            java.util.concurrent.Executor r0 = r2.b
            if (r0 == 0) goto Lc
            com.tkay.expressad.foundation.g.f.d$a r1 = new com.tkay.expressad.foundation.g.f.d$a
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
        Lc:
            return
    }

    @Override
    public final void b(com.tkay.expressad.foundation.g.f.i<?> r3) {
            r2 = this;
            java.util.concurrent.Executor r0 = r2.b
            if (r0 == 0) goto Lc
            com.tkay.expressad.foundation.g.f.d$3 r1 = new com.tkay.expressad.foundation.g.f.d$3
            r1.<init>(r2, r3)
            r0.execute(r1)
        Lc:
            return
    }

    @Override
    public final void c(com.tkay.expressad.foundation.g.f.i<?> r3) {
            r2 = this;
            java.util.concurrent.Executor r0 = r2.b
            if (r0 == 0) goto Lc
            com.tkay.expressad.foundation.g.f.d$4 r1 = new com.tkay.expressad.foundation.g.f.d$4
            r1.<init>(r2, r3)
            r0.execute(r1)
        Lc:
            return
    }

    @Override
    public final void d(com.tkay.expressad.foundation.g.f.i<?> r3) {
            r2 = this;
            java.util.concurrent.Executor r0 = r2.b
            if (r0 == 0) goto Lc
            com.tkay.expressad.foundation.g.f.d$5 r1 = new com.tkay.expressad.foundation.g.f.d$5
            r1.<init>(r2, r3)
            r0.execute(r1)
        Lc:
            return
    }

    @Override
    public final void e(com.tkay.expressad.foundation.g.f.i<?> r3) {
            r2 = this;
            java.util.concurrent.Executor r0 = r2.b
            if (r0 == 0) goto Lc
            com.tkay.expressad.foundation.g.f.d$6 r1 = new com.tkay.expressad.foundation.g.f.d$6
            r1.<init>(r2, r3)
            r0.execute(r1)
        Lc:
            return
    }
}
