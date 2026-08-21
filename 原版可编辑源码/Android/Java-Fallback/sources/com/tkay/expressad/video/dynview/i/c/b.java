package com.tkay.expressad.video.dynview.i.c;

public final class b {
    private static final long a = 1000;
    private long b;
    private long c;
    private com.tkay.expressad.video.dynview.i.c.a d;
    private com.tkay.expressad.video.dynview.i.c.b.a e;

    private static class a extends android.os.CountDownTimer {
        private com.tkay.expressad.video.dynview.i.c.a a;

        public a(long r1, long r3) {
                r0 = this;
                r0.<init>(r1, r3)
                return
        }

        final void a(com.tkay.expressad.video.dynview.i.c.a r1) {
                r0 = this;
                r0.a = r1
                return
        }

        @Override
        public final void onFinish() {
                r1 = this;
                com.tkay.expressad.video.dynview.i.c.a r0 = r1.a
                if (r0 == 0) goto L7
                r0.a()
            L7:
                return
        }

        @Override
        public final void onTick(long r2) {
                r1 = this;
                com.tkay.expressad.video.dynview.i.c.a r0 = r1.a
                if (r0 == 0) goto L7
                r0.a(r2)
            L7:
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

    private void d() {
            r5 = this;
            com.tkay.expressad.video.dynview.i.c.b$a r0 = r5.e
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
            com.tkay.expressad.video.dynview.i.c.b$a r0 = new com.tkay.expressad.video.dynview.i.c.b$a
            long r1 = r5.b
            long r3 = r5.c
            r0.<init>(r1, r3)
            r5.e = r0
            com.tkay.expressad.video.dynview.i.c.a r1 = r5.d
            r0.a(r1)
            return
    }

    public final com.tkay.expressad.video.dynview.i.c.b a() {
            r2 = this;
            r0 = 1000(0x3e8, double:4.94E-321)
            r2.c = r0
            return r2
    }

    public final com.tkay.expressad.video.dynview.i.c.b a(long r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    public final com.tkay.expressad.video.dynview.i.c.b a(com.tkay.expressad.video.dynview.i.c.a r1) {
            r0 = this;
            r0.d = r1
            return r0
    }

    public final void a(long r1, com.tkay.expressad.video.dynview.i.c.a r3) {
            r0 = this;
            r0.b = r1
            r0.d = r3
            r0.d()
            com.tkay.expressad.video.dynview.i.c.b$a r1 = r0.e
            if (r1 == 0) goto Le
            r1.start()
        Le:
            return
    }

    public final void b() {
            r1 = this;
            com.tkay.expressad.video.dynview.i.c.b$a r0 = r1.e
            if (r0 != 0) goto L7
            r1.d()
        L7:
            com.tkay.expressad.video.dynview.i.c.b$a r0 = r1.e
            r0.start()
            return
    }

    public final void c() {
            r1 = this;
            com.tkay.expressad.video.dynview.i.c.b$a r0 = r1.e
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r1.e = r0
        La:
            return
    }
}
