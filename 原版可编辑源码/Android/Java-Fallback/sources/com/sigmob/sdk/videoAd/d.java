package com.sigmob.sdk.videoAd;

class d extends com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable {
    private final com.sigmob.sdk.videoAd.l a;
    private final com.sigmob.sdk.videoAd.a b;

    public d(com.sigmob.sdk.videoAd.l r3, com.sigmob.sdk.videoAd.a r4, android.os.Handler r5) {
            r2 = this;
            r2.<init>(r5)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r4)
            r2.a = r3
            r2.b = r4
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            com.sigmob.sdk.videoAd.f r4 = new com.sigmob.sdk.videoAd.f
            com.sigmob.sdk.base.common.g$a r5 = com.sigmob.sdk.base.common.g.a.b
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.a
            r1 = 0
            r4.<init>(r5, r0, r1)
            r3.add(r4)
            com.sigmob.sdk.videoAd.f r4 = new com.sigmob.sdk.videoAd.f
            com.sigmob.sdk.base.common.g$a r5 = com.sigmob.sdk.base.common.g.a.b
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.n
            r1 = 1048576000(0x3e800000, float:0.25)
            r4.<init>(r5, r0, r1)
            r3.add(r4)
            com.sigmob.sdk.videoAd.f r4 = new com.sigmob.sdk.videoAd.f
            com.sigmob.sdk.base.common.g$a r5 = com.sigmob.sdk.base.common.g.a.b
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.o
            r1 = 1056964608(0x3f000000, float:0.5)
            r4.<init>(r5, r0, r1)
            r3.add(r4)
            com.sigmob.sdk.videoAd.f r4 = new com.sigmob.sdk.videoAd.f
            com.sigmob.sdk.base.common.g$a r5 = com.sigmob.sdk.base.common.g.a.b
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.p
            r1 = 1061158912(0x3f400000, float:0.75)
            r4.<init>(r5, r0, r1)
            r3.add(r4)
            com.sigmob.sdk.videoAd.a r4 = r2.b
            r4.a(r3)
            return
    }

    @Override
    public void doWork() {
            r7 = this;
            com.sigmob.sdk.videoAd.l r0 = r7.a
            int r0 = r0.s()
            com.sigmob.sdk.videoAd.l r1 = r7.a
            int r1 = r1.t()
            if (r0 <= 0) goto L6c
            com.sigmob.sdk.videoAd.l r2 = r7.a
            boolean r2 = r2.w()
            if (r2 == 0) goto L1c
            com.sigmob.sdk.videoAd.l r2 = r7.a
            r3 = 0
            r2.c(r3)
        L1c:
            com.sigmob.sdk.videoAd.l r2 = r7.a
            r2.x()
            int r2 = r1 + 1000
            if (r2 >= r0) goto L32
            com.sigmob.sdk.videoAd.l r2 = r7.a
            boolean r2 = r2.p()
            if (r2 == 0) goto L32
            com.sigmob.sdk.videoAd.l r2 = r7.a
            r2.v()
        L32:
            com.sigmob.sdk.videoAd.l r2 = r7.a
            boolean r2 = r2.q()
            if (r2 == 0) goto L3f
            com.sigmob.sdk.videoAd.l r2 = r7.a
            r2.r()
        L3f:
            com.sigmob.sdk.videoAd.a r2 = r7.b
            long r3 = (long) r1
            long r5 = (long) r0
            java.util.List r2 = r2.a(r3, r5)
            java.util.Iterator r2 = r2.iterator()
        L4b:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L64
            java.lang.Object r3 = r2.next()
            com.sigmob.sdk.base.common.g r3 = (com.sigmob.sdk.base.common.g) r3
            com.sigmob.sdk.videoAd.l r4 = r7.a
            com.sigmob.sdk.base.common.a r5 = r3.p()
            r4.a(r5)
            r3.l()
            goto L4b
        L64:
            if (r1 <= r0) goto L6c
            com.sigmob.sdk.videoAd.l r0 = r7.a
            r1 = 1
            r0.b(r1)
        L6c:
            return
    }
}
