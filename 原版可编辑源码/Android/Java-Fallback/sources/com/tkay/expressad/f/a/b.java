package com.tkay.expressad.f.a;

public final class b {
    private static final long a = 1000;
    private long b;
    private long c;
    private com.tkay.expressad.f.a.a d;
    private com.tkay.expressad.f.a.b.a e;

    private static class a extends android.os.CountDownTimer {
        private com.tkay.expressad.f.a.a a;

        public a(long r1, long r3) {
                r0 = this;
                r0.<init>(r1, r3)
                return
        }

        final void a(com.tkay.expressad.f.a.a r1) {
                r0 = this;
                r0.a = r1
                return
        }

        @Override
        public final void onFinish() {
                r0 = this;
                return
        }

        @Override
        public final void onTick(long r1) {
                r0 = this;
                return
        }
    }

    public b() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            return
    }

    private com.tkay.expressad.f.a.b a(long r3) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L8
            r3 = 1000(0x3e8, double:4.94E-321)
        L8:
            r2.c = r3
            return r2
    }

    private com.tkay.expressad.f.a.b a(com.tkay.expressad.f.a.a r1) {
            r0 = this;
            r0.d = r1
            return r0
    }

    private void a() {
            r5 = this;
            com.tkay.expressad.f.a.b$a r0 = r5.e
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r5.e = r0
        La:
            long r0 = r5.c
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L19
            long r0 = r5.b
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 + r2
            r5.c = r0
        L19:
            com.tkay.expressad.f.a.b$a r0 = new com.tkay.expressad.f.a.b$a
            long r1 = r5.b
            long r3 = r5.c
            r0.<init>(r1, r3)
            r5.e = r0
            com.tkay.expressad.f.a.a r1 = r5.d
            r0.a(r1)
            return
    }

    private com.tkay.expressad.f.a.b b(long r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    private void b() {
            r5 = this;
            com.tkay.expressad.f.a.b$a r0 = r5.e
            if (r0 != 0) goto L2b
            if (r0 == 0) goto Lc
            r0.cancel()
            r0 = 0
            r5.e = r0
        Lc:
            long r0 = r5.c
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L1b
            long r0 = r5.b
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 + r2
            r5.c = r0
        L1b:
            com.tkay.expressad.f.a.b$a r0 = new com.tkay.expressad.f.a.b$a
            long r1 = r5.b
            long r3 = r5.c
            r0.<init>(r1, r3)
            r5.e = r0
            com.tkay.expressad.f.a.a r1 = r5.d
            r0.a(r1)
        L2b:
            com.tkay.expressad.f.a.b$a r0 = r5.e
            r0.start()
            return
    }

    private void c() {
            r1 = this;
            com.tkay.expressad.f.a.b$a r0 = r1.e
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r1.e = r0
        La:
            return
    }
}
