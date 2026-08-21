package com.mbridge.msdk.video.dynview.i.c;

public final class b {
    private long a;
    private long b;
    private com.mbridge.msdk.video.dynview.i.c.a c;
    private com.mbridge.msdk.video.dynview.i.c.b.a d;

    private static class a extends android.os.CountDownTimer {
        private com.mbridge.msdk.video.dynview.i.c.a a;

        public a(long r1, long r3) {
                r0 = this;
                r0.<init>(r1, r3)
                return
        }

        final void a(com.mbridge.msdk.video.dynview.i.c.a r1) {
                r0 = this;
                r0.a = r1
                return
        }

        @Override
        public final void onFinish() {
                r1 = this;
                com.mbridge.msdk.video.dynview.i.c.a r0 = r1.a
                if (r0 == 0) goto L7
                r0.a()
            L7:
                return
        }

        @Override
        public final void onTick(long r2) {
                r1 = this;
                com.mbridge.msdk.video.dynview.i.c.a r0 = r1.a
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
            r2.a = r0
            return
    }

    private void c() {
            r5 = this;
            com.mbridge.msdk.video.dynview.i.c.b$a r0 = r5.d
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r5.d = r0
        La:
            long r0 = r5.b
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L19
            long r0 = r5.a
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 + r2
            r5.b = r0
        L19:
            com.mbridge.msdk.video.dynview.i.c.b$a r0 = new com.mbridge.msdk.video.dynview.i.c.b$a
            long r1 = r5.a
            long r3 = r5.b
            r0.<init>(r1, r3)
            r5.d = r0
            com.mbridge.msdk.video.dynview.i.c.a r1 = r5.c
            r0.a(r1)
            return
    }

    public final com.mbridge.msdk.video.dynview.i.c.b a(long r3) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 >= 0) goto L8
            r3 = 1000(0x3e8, double:4.94E-321)
        L8:
            r2.b = r3
            return r2
    }

    public final com.mbridge.msdk.video.dynview.i.c.b a(com.mbridge.msdk.video.dynview.i.c.a r1) {
            r0 = this;
            r0.c = r1
            return r0
    }

    public final void a() {
            r1 = this;
            com.mbridge.msdk.video.dynview.i.c.b$a r0 = r1.d
            if (r0 != 0) goto L7
            r1.c()
        L7:
            com.mbridge.msdk.video.dynview.i.c.b$a r0 = r1.d
            r0.start()
            return
    }

    public final void a(long r1, com.mbridge.msdk.video.dynview.i.c.a r3) {
            r0 = this;
            r0.a = r1
            r0.c = r3
            r0.c()
            com.mbridge.msdk.video.dynview.i.c.b$a r1 = r0.d
            if (r1 == 0) goto Le
            r1.start()
        Le:
            return
    }

    public final com.mbridge.msdk.video.dynview.i.c.b b(long r1) {
            r0 = this;
            r0.a = r1
            return r0
    }

    public final void b() {
            r1 = this;
            com.mbridge.msdk.video.dynview.i.c.b$a r0 = r1.d
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r1.d = r0
        La:
            return
    }
}
