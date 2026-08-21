package com.tkay.rewardvideo.a;

public class a extends com.tkay.core.common.f<com.tkay.rewardvideo.a.f> {
    public static final java.lang.String a = null;
    java.lang.Runnable m;



    static {
            java.lang.Class<com.tkay.rewardvideo.a.a> r0 = com.tkay.rewardvideo.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.rewardvideo.a.a.a = r0
            return
    }

    private a(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            com.tkay.rewardvideo.a.a$2 r1 = new com.tkay.rewardvideo.a.a$2
            r1.<init>(r0)
            r0.m = r1
            return
    }

    private static com.tkay.core.common.h a(com.tkay.rewardvideo.a.f r2) {
            com.tkay.rewardvideo.a.b r0 = new com.tkay.rewardvideo.a.b
            android.content.Context r1 = r2.a()
            r0.<init>(r1)
            int r2 = r2.d
            r0.a(r2)
            return r0
    }

    public static com.tkay.rewardvideo.a.a a(android.content.Context r3, java.lang.String r4) {
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = "1"
            com.tkay.core.common.f r0 = r0.a(r4, r1)
            if (r0 == 0) goto L10
            boolean r2 = r0 instanceof com.tkay.rewardvideo.a.a
            if (r2 != 0) goto L1c
        L10:
            com.tkay.rewardvideo.a.a r0 = new com.tkay.rewardvideo.a.a
            r0.<init>(r3, r4)
            com.tkay.core.common.v r3 = com.tkay.core.common.v.a()
            r3.a(r4, r1, r0)
        L1c:
            com.tkay.rewardvideo.a.a r0 = (com.tkay.rewardvideo.a.a) r0
            return r0
    }

    static java.lang.String a(com.tkay.rewardvideo.a.a r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    static android.content.Context b(com.tkay.rewardvideo.a.a r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static android.content.Context c(com.tkay.rewardvideo.a.a r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static android.content.Context d(com.tkay.rewardvideo.a.a r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    private void m() {
            r6 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r6.m
            int r2 = r6.h
            double r2 = (double) r2
            r4 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r2 = java.lang.Math.pow(r4, r2)
            long r2 = (long) r2
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            r0.a(r1, r2)
            return
    }

    @Override
    public final com.tkay.core.api.TYAdStatusInfo a(android.content.Context r8, java.util.Map<java.lang.String, java.lang.Object> r9) {
            r7 = this;
            com.tkay.core.api.TYAdStatusInfo r9 = super.a(r8, r9)
            boolean r0 = r7.c()
            if (r0 != 0) goto L19
            boolean r0 = r7.a(r9)
            if (r0 == 0) goto L19
            r3 = 5
            r4 = 0
            r5 = 0
            r6 = 0
            r1 = r7
            r2 = r8
            r1.a(r2, r3, r4, r5, r6)
        L19:
            return r9
    }

    @Override
    public final com.tkay.core.common.h a(com.tkay.core.common.j r3) {
            r2 = this;
            com.tkay.rewardvideo.a.f r3 = (com.tkay.rewardvideo.a.f) r3
            com.tkay.rewardvideo.a.b r0 = new com.tkay.rewardvideo.a.b
            android.content.Context r1 = r3.a()
            r0.<init>(r1)
            int r3 = r3.d
            r0.a(r3)
            return r0
    }

    @Override
    protected final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "1"
            return r0
    }

    public final synchronized void a(android.app.Activity r11, java.lang.String r12, com.tkay.rewardvideo.api.TYRewardVideoListener r13, com.tkay.core.api.TYEventInterface r14, java.util.Map<java.lang.String, java.lang.Object> r15) {
            r10 = this;
            monitor-enter(r10)
            r0 = 0
            r1 = 1
            com.tkay.core.common.f.a r4 = r10.a(r11, r0, r1, r15)     // Catch: java.lang.Throwable -> L60
            if (r4 == 0) goto L34
            com.tkay.core.api.TYBaseAdAdapter r0 = r4.e()     // Catch: java.lang.Throwable -> L60
            boolean r0 = r0 instanceof com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter     // Catch: java.lang.Throwable -> L60
            if (r0 == 0) goto L34
            r10.a(r4)     // Catch: java.lang.Throwable -> L60
            r10.f()     // Catch: java.lang.Throwable -> L60
            int r0 = r4.d()     // Catch: java.lang.Throwable -> L60
            int r0 = r0 + r1
            r4.a(r0)     // Catch: java.lang.Throwable -> L60
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L60
            com.tkay.rewardvideo.a.a$1 r1 = new com.tkay.rewardvideo.a.a$1     // Catch: java.lang.Throwable -> L60
            r2 = r1
            r3 = r10
            r5 = r12
            r6 = r15
            r7 = r11
            r8 = r14
            r9 = r13
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L60
            r0.a(r1)     // Catch: java.lang.Throwable -> L60
            monitor-exit(r10)
            return
        L34:
            r11 = 0
            boolean r12 = r10.a(r11)     // Catch: java.lang.Throwable -> L60
            if (r12 == 0) goto L4b
            com.tkay.core.common.b.m r12 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L60
            android.content.Context r1 = r12.D()     // Catch: java.lang.Throwable -> L60
            r2 = 7
            r3 = 0
            r4 = 0
            r0 = r10
            r5 = r15
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L60
        L4b:
            java.lang.String r12 = "4001"
            java.lang.String r14 = ""
            java.lang.String r15 = "No Cache."
            com.tkay.core.api.AdError r12 = com.tkay.core.api.ErrorCode.getErrorCode(r12, r14, r15)     // Catch: java.lang.Throwable -> L60
            if (r13 == 0) goto L5e
            com.tkay.core.common.b.i r11 = com.tkay.core.common.b.i.a(r11)     // Catch: java.lang.Throwable -> L60
            r13.onRewardedVideoAdPlayFailed(r12, r11)     // Catch: java.lang.Throwable -> L60
        L5e:
            monitor-exit(r10)
            return
        L60:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    public final void a(android.content.Context r7, int r8, com.tkay.core.common.b.a r9, com.tkay.core.common.b.b r10, java.util.Map<java.lang.String, java.lang.Object> r11) {
            r6 = this;
            com.tkay.rewardvideo.a.f r4 = new com.tkay.rewardvideo.a.f
            r4.<init>()
            r4.a(r7)
            r4.d = r8
            r4.e = r10
            if (r11 == 0) goto L15
            java.util.HashMap r7 = new java.util.HashMap     // Catch: java.lang.Throwable -> L15
            r7.<init>(r11)     // Catch: java.lang.Throwable -> L15
            r4.g = r7     // Catch: java.lang.Throwable -> L15
        L15:
            android.content.Context r1 = r6.b
            java.lang.String r3 = r6.c
            java.lang.String r2 = "1"
            r0 = r6
            r5 = r9
            super.a(r1, r2, r3, r4, r5)
            return
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r7) {
            r6 = this;
            super.b(r7)
            boolean r0 = r6.j()
            if (r0 == 0) goto L2c
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r6.m
            r2 = 4611686018427387904(0x4000000000000000, double:2.0)
            int r4 = r6.h
            double r4 = (double) r4
            double r2 = java.lang.Math.pow(r2, r4)
            long r2 = (long) r2
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            r0.a(r1, r2)
            com.tkay.rewardvideo.a.d r0 = com.tkay.rewardvideo.a.d.a()
            com.tkay.rewardvideo.api.TYRewardVideoAutoLoadListener r0 = r0.b
            if (r0 == 0) goto L2c
            java.lang.String r1 = r6.c
            r0.onRewardVideoAutoLoadFail(r1, r7)
        L2c:
            return
    }

    @Override
    protected final boolean j() {
            r2 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r1 = r2.c
            boolean r0 = r0.e(r1)
            return r0
    }

    @Override
    protected final void k() {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.m
            r0.c(r1)
            return
    }

    @Override
    protected final void l() {
            r2 = this;
            super.l()
            boolean r0 = r2.j()
            if (r0 == 0) goto L16
            com.tkay.rewardvideo.a.d r0 = com.tkay.rewardvideo.a.d.a()
            com.tkay.rewardvideo.api.TYRewardVideoAutoLoadListener r0 = r0.b
            if (r0 == 0) goto L16
            java.lang.String r1 = r2.c
            r0.onRewardVideoAutoLoaded(r1)
        L16:
            return
    }
}
