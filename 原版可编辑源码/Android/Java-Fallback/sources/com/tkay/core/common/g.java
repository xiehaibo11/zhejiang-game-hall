package com.tkay.core.common;

public final class g extends android.os.CountDownTimer {
    protected com.tkay.core.common.f.aj a;
    protected com.tkay.core.common.f.d b;
    protected com.tkay.core.c.d c;
    boolean d;
    private final java.lang.String e;

    static class 1 {
    }

    private class a implements com.tkay.core.api.TYCustomLoadListener {
        com.tkay.core.api.TYBaseAdAdapter a;
        long b;
        final com.tkay.core.common.g c;

        private a(com.tkay.core.common.g r1, long r2, com.tkay.core.api.TYBaseAdAdapter r4) {
                r0 = this;
                r0.c = r1
                r0.<init>()
                r0.b = r2
                r0.a = r4
                return
        }

        a(com.tkay.core.common.g r1, long r2, com.tkay.core.api.TYBaseAdAdapter r4, byte r5) {
                r0 = this;
                r0.<init>(r1, r2, r4)
                return
        }

        @Override
        public final void onAdCacheLoaded(com.tkay.core.api.BaseAd... r5) {
                r4 = this;
                com.tkay.core.common.g r0 = r4.c
                long r1 = r4.b
                com.tkay.core.api.TYBaseAdAdapter r3 = r4.a
                if (r5 == 0) goto Ld
                java.util.List r5 = java.util.Arrays.asList(r5)
                goto Le
            Ld:
                r5 = 0
            Le:
                r0.a(r1, r3, r5)
                com.tkay.core.api.TYBaseAdAdapter r5 = r4.a
                if (r5 == 0) goto L18
                r5.releaseLoadResource()
            L18:
                return
        }

        @Override
        public final void onAdDataLoaded() {
                r3 = this;
                long r0 = r3.b
                com.tkay.core.api.TYBaseAdAdapter r2 = r3.a
                com.tkay.core.common.g.a(r0, r2)
                return
        }

        @Override
        public final void onAdLoadError(java.lang.String r6, java.lang.String r7) {
                r5 = this;
                com.tkay.core.common.g r0 = r5.c
                long r1 = r5.b
                com.tkay.core.api.TYBaseAdAdapter r3 = r5.a
                java.lang.String r4 = "4001"
                com.tkay.core.api.AdError r6 = com.tkay.core.api.ErrorCode.getErrorCode(r4, r6, r7)
                com.tkay.core.common.f.d r7 = r3.getTrackingInfo()
                boolean r3 = r0.d
                if (r3 != 0) goto L2b
                r3 = 1
                r0.d = r3
                r0 = 0
                long r3 = android.os.SystemClock.elapsedRealtime()
                long r3 = r3 - r1
                com.tkay.core.common.k.c.a(r7, r0, r6, r3)
                java.lang.String r0 = com.tkay.core.common.b.f.i.b
                java.lang.String r1 = com.tkay.core.common.b.f.i.m
                java.lang.String r6 = r6.printStackTrace()
                com.tkay.core.common.l.g.a(r7, r0, r1, r6)
            L2b:
                com.tkay.core.api.TYBaseAdAdapter r6 = r5.a
                if (r6 == 0) goto L32
                r6.releaseLoadResource()
            L32:
                return
        }
    }

    public g(long r1, long r3, com.tkay.core.common.f.aj r5, com.tkay.core.common.f.d r6) {
            r0 = this;
            r0.<init>(r1, r3)
            java.lang.Class r1 = r0.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.e = r1
            r1 = 0
            r0.d = r1
            r0.a = r5
            r0.b = r6
            return
    }

    protected static void a(long r2, com.tkay.core.common.b.n r4) {
            com.tkay.core.common.f.d r4 = r4.getTrackingInfo()
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r0 = r0 - r2
            r4.c(r0)
            return
    }

    private void a(long r4, com.tkay.core.common.b.n r6, com.tkay.core.api.AdError r7) {
            r3 = this;
            com.tkay.core.common.f.d r6 = r6.getTrackingInfo()
            boolean r0 = r3.d
            if (r0 != 0) goto L1f
            r0 = 1
            r3.d = r0
            r0 = 0
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r4
            com.tkay.core.common.k.c.a(r6, r0, r7, r1)
            java.lang.String r4 = com.tkay.core.common.b.f.i.b
            java.lang.String r5 = com.tkay.core.common.b.f.i.m
            java.lang.String r7 = r7.printStackTrace()
            com.tkay.core.common.l.g.a(r6, r4, r5, r7)
        L1f:
            return
    }

    private void a(android.content.Context r11) {
            r10 = this;
            com.tkay.core.common.f.aj r0 = r10.a
            com.tkay.core.api.TYBaseAdAdapter r0 = com.tkay.core.common.l.i.a(r0)
            if (r0 != 0) goto L9
            return
        L9:
            com.tkay.core.common.f.d r1 = r10.b
            r2 = 1
            r1.q = r2
            com.tkay.core.common.f.d r1 = r10.b
            r3 = 0
            r1.r = r3
            com.tkay.core.common.f.d r1 = r10.b
            r1.s = r3
            com.tkay.core.common.f.d r1 = r10.b
            r0.setTrackingInfo(r1)
            com.tkay.core.common.f.aj r1 = r10.a
            r0.setUnitGroupInfo(r1)
            long r4 = android.os.SystemClock.elapsedRealtime()
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r11)
            com.tkay.core.common.f.d r6 = r10.b
            r1.a(r2, r6)
            com.tkay.core.common.f.d r1 = r10.b
            java.lang.String r2 = com.tkay.core.common.b.f.i.a
            java.lang.String r6 = com.tkay.core.common.b.f.i.n
            java.lang.String r7 = ""
            com.tkay.core.common.l.g.a(r1, r2, r6, r7)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.c.e r1 = com.tkay.core.c.e.a(r1)
            com.tkay.core.common.f.d r2 = r10.b
            java.lang.String r2 = r2.W()
            com.tkay.core.c.d r1 = r1.a(r2)
            r10.c = r1
            com.tkay.core.common.a r1 = com.tkay.core.common.a.a()
            com.tkay.core.common.f.d r2 = r10.b
            java.lang.String r2 = r2.W()
            com.tkay.core.common.f.d r6 = r10.b
            java.lang.String r6 = r6.x()
            r1.a(r2, r6)
            r10.d = r3
            com.tkay.core.common.v r1 = com.tkay.core.common.v.a()
            com.tkay.core.common.f.d r2 = r10.b
            java.lang.String r2 = r2.W()
            java.util.Map r7 = r1.b(r2)
            com.tkay.core.c.d r1 = r10.c
            com.tkay.core.common.f.d r2 = r10.b
            java.lang.String r2 = r2.W()
            com.tkay.core.common.f.d r3 = r10.b
            java.lang.String r3 = r3.X()
            com.tkay.core.common.f.aj r6 = r0.getUnitGroupInfo()
            java.util.Map r8 = r1.a(r2, r3, r6)
            com.tkay.core.common.g$a r9 = new com.tkay.core.common.g$a
            r6 = 0
            r1 = r9
            r2 = r10
            r3 = r4
            r5 = r0
            r1.<init>(r2, r3, r5, r6)
            r0.internalLoad(r11, r8, r7, r9)
            return
    }

    protected final void a(long r10, com.tkay.core.api.TYBaseAdAdapter r12, java.util.List<? extends com.tkay.core.api.BaseAd> r13) {
            r9 = this;
            com.tkay.core.common.f.d r0 = r12.getTrackingInfo()
            boolean r1 = r9.d
            if (r1 != 0) goto L2c
            r1 = 1
            r9.d = r1
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r1 = r1 - r10
            r0.d(r1)
            com.tkay.core.common.b.m r10 = com.tkay.core.common.b.m.a()
            android.content.Context r10 = r10.f()
            com.tkay.core.common.k.a r10 = com.tkay.core.common.k.a.a(r10)
            r11 = 2
            r10.a(r11, r0)
            java.lang.String r10 = com.tkay.core.common.b.f.i.b
            java.lang.String r11 = com.tkay.core.common.b.f.i.l
            java.lang.String r1 = ""
            com.tkay.core.common.l.g.a(r0, r10, r11, r1)
        L2c:
            com.tkay.core.common.a r2 = com.tkay.core.common.a.a()
            java.lang.String r3 = r0.W()
            int r4 = r0.z()
            com.tkay.core.common.f.aj r10 = r9.a
            long r7 = r10.p()
            r5 = r12
            r6 = r13
            r2.a(r3, r4, r5, r6, r7)
            return
    }

    @Override
    public final void onFinish() {
            r11 = this;
            com.tkay.core.common.f.aj r0 = r11.a
            if (r0 == 0) goto Lab
            com.tkay.core.common.f.d r0 = r11.b
            if (r0 != 0) goto La
            goto Lab
        La:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 != 0) goto L15
            return
        L15:
            com.tkay.core.common.f.aj r1 = r11.a
            com.tkay.core.api.TYBaseAdAdapter r1 = com.tkay.core.common.l.i.a(r1)
            if (r1 == 0) goto Lab
            com.tkay.core.common.f.d r2 = r11.b
            r3 = 1
            r2.q = r3
            com.tkay.core.common.f.d r2 = r11.b
            r4 = 0
            r2.r = r4
            com.tkay.core.common.f.d r2 = r11.b
            r2.s = r4
            com.tkay.core.common.f.d r2 = r11.b
            r1.setTrackingInfo(r2)
            com.tkay.core.common.f.aj r2 = r11.a
            r1.setUnitGroupInfo(r2)
            long r5 = android.os.SystemClock.elapsedRealtime()
            com.tkay.core.common.k.a r2 = com.tkay.core.common.k.a.a(r0)
            com.tkay.core.common.f.d r7 = r11.b
            r2.a(r3, r7)
            com.tkay.core.common.f.d r2 = r11.b
            java.lang.String r3 = com.tkay.core.common.b.f.i.a
            java.lang.String r7 = com.tkay.core.common.b.f.i.n
            java.lang.String r8 = ""
            com.tkay.core.common.l.g.a(r2, r3, r7, r8)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.core.c.e r2 = com.tkay.core.c.e.a(r2)
            com.tkay.core.common.f.d r3 = r11.b
            java.lang.String r3 = r3.W()
            com.tkay.core.c.d r2 = r2.a(r3)
            r11.c = r2
            com.tkay.core.common.a r2 = com.tkay.core.common.a.a()
            com.tkay.core.common.f.d r3 = r11.b
            java.lang.String r3 = r3.W()
            com.tkay.core.common.f.d r7 = r11.b
            java.lang.String r7 = r7.x()
            r2.a(r3, r7)
            r11.d = r4
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()
            com.tkay.core.common.f.d r3 = r11.b
            java.lang.String r3 = r3.W()
            java.util.Map r8 = r2.b(r3)
            com.tkay.core.c.d r2 = r11.c
            com.tkay.core.common.f.d r3 = r11.b
            java.lang.String r3 = r3.W()
            com.tkay.core.common.f.d r4 = r11.b
            java.lang.String r4 = r4.X()
            com.tkay.core.common.f.aj r7 = r1.getUnitGroupInfo()
            java.util.Map r9 = r2.a(r3, r4, r7)
            com.tkay.core.common.g$a r10 = new com.tkay.core.common.g$a
            r7 = 0
            r2 = r10
            r3 = r11
            r4 = r5
            r6 = r1
            r2.<init>(r3, r4, r6, r7)
            r1.internalLoad(r0, r9, r8, r10)
        Lab:
            return
    }

    @Override
    public final void onTick(long r1) {
            r0 = this;
            return
    }
}
