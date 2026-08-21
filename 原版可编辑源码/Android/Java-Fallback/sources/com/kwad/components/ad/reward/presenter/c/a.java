package com.kwad.components.ad.reward.presenter.c;

public final class a extends com.kwad.components.ad.reward.presenter.a {
    private java.util.List<java.lang.Integer> cr;
    private volatile boolean cs;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.os.Handler mHandler;
    private long mPlayTime;
    private com.kwad.components.core.video.l mVideoPlayStateListener;
    private com.kwad.components.core.video.l sr;
    private com.kwad.components.core.video.l ss;
    private final com.kwad.components.core.video.i tS;
    private boolean tT;
    private java.lang.Runnable tU;





    public a() {
            r2 = this;
            r2.<init>()
            com.kwad.components.core.video.i r0 = new com.kwad.components.core.video.i
            r0.<init>()
            r2.tS = r0
            r0 = 0
            r2.mPlayTime = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mHandler = r0
            r0 = 1
            r2.tT = r0
            r0 = 0
            r2.cs = r0
            com.kwad.components.ad.reward.presenter.c.a$1 r0 = new com.kwad.components.ad.reward.presenter.c.a$1
            r0.<init>(r2)
            r2.tU = r0
            com.kwad.components.ad.reward.presenter.c.a$2 r0 = new com.kwad.components.ad.reward.presenter.c.a$2
            r0.<init>(r2)
            r2.ss = r0
            com.kwad.components.ad.reward.presenter.c.a$3 r0 = new com.kwad.components.ad.reward.presenter.c.a$3
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            return
    }

    static com.kwad.components.core.video.i a(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.core.video.i r0 = r0.tS
            return r0
    }

    static void a(com.kwad.components.ad.reward.presenter.c.a r0, long r1) {
            r0.c(r1)
            return
    }

    static boolean a(com.kwad.components.ad.reward.presenter.c.a r0, boolean r1) {
            r1 = 0
            r0.tT = r1
            return r1
    }

    static long b(com.kwad.components.ad.reward.presenter.c.a r0, long r1) {
            r0.mPlayTime = r1
            return r1
    }

    static com.kwad.components.ad.reward.j b(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static boolean b(com.kwad.components.ad.reward.presenter.c.a r0, boolean r1) {
            r1 = 1
            r0.cs = r1
            return r1
    }

    private void c(long r3) {
            r2 = this;
            float r3 = (float) r3
            r4 = 1148846080(0x447a0000, float:1000.0)
            float r3 = r3 / r4
            double r3 = (double) r3
            double r3 = java.lang.Math.ceil(r3)
            int r3 = (int) r3
            java.util.List<java.lang.Integer> r4 = r2.cr
            if (r4 == 0) goto L3b
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L15
            goto L3b
        L15:
            java.util.List<java.lang.Integer> r4 = r2.cr
            java.util.Iterator r4 = r4.iterator()
        L1b:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L3b
            java.lang.Object r0 = r4.next()
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r1 = r0.intValue()
            if (r3 < r1) goto L1b
            com.kwad.sdk.core.response.model.AdTemplate r4 = r2.mAdTemplate
            com.kwad.components.ad.reward.j r1 = r2.qx
            org.json.JSONObject r1 = r1.mReportExtData
            com.kwad.sdk.core.report.a.a(r4, r3, r1)
            java.util.List<java.lang.Integer> r3 = r2.cr
            r3.remove(r0)
        L3b:
            return
    }

    static boolean c(com.kwad.components.ad.reward.presenter.c.a r0) {
            boolean r0 = r0.tT
            return r0
    }

    private void checkExposure() {
            r6 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r6.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = r0.adRewardInfo
            com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r0 = r0.callBackStrategyInfo
            int r0 = r0.impressionCheckMs
            long r0 = (long) r0
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L25
            com.kwad.sdk.core.response.model.AdInfo r2 = r6.mAdInfo
            long r2 = com.kwad.sdk.core.response.b.a.Y(r2)
            r4 = 5000(0x1388, double:2.4703E-320)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L25
            android.os.Handler r2 = r6.mHandler
            com.kwad.components.ad.reward.presenter.c.a$4 r3 = new com.kwad.components.ad.reward.presenter.c.a$4
            r3.<init>(r6)
            r2.postDelayed(r3, r0)
        L25:
            return
    }

    static com.kwad.components.ad.reward.j d(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate e(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static boolean f(com.kwad.components.ad.reward.presenter.c.a r0) {
            boolean r0 = r0.cs
            return r0
    }

    static com.kwad.components.ad.reward.j g(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j h(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j i(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j j(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j k(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j l(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static com.kwad.components.ad.reward.j m(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static java.lang.Runnable n(com.kwad.components.ad.reward.presenter.c.a r0) {
            java.lang.Runnable r0 = r0.tU
            return r0
    }

    static android.os.Handler o(com.kwad.components.ad.reward.presenter.c.a r0) {
            android.os.Handler r0 = r0.mHandler
            return r0
    }

    static com.kwad.components.ad.reward.j p(com.kwad.components.ad.reward.presenter.c.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r4.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.mAdInfo = r0
            java.util.List r0 = com.kwad.sdk.core.response.b.a.bd(r0)
            r4.cr = r0
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            boolean r0 = r0.jR()
            if (r0 == 0) goto L22
            com.kwad.components.core.video.l r0 = r4.ss
            goto L24
        L22:
            com.kwad.components.core.video.l r0 = r4.mVideoPlayStateListener
        L24:
            r4.sr = r0
            com.kwad.components.ad.reward.j r0 = r4.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r4.sr
            r0.a(r1)
            android.os.Handler r0 = r4.mHandler
            java.lang.Runnable r1 = r4.tU
            r2 = 5000(0x1388, double:2.4703E-320)
            r0.postDelayed(r1, r2)
            return
    }

    public final void hE() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = r0.pj
            if (r0 == 0) goto Lc
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = r0.po
            if (r0 != 0) goto L15
        Lc:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.components.ad.reward.j r1 = r2.qx
            org.json.JSONObject r1 = r1.mReportExtData
            com.kwad.sdk.core.report.a.h(r0, r1)
        L15:
            com.kwad.components.core.video.i r0 = r2.tS
            r0.rc()
            return
    }

    public final void hX() {
            r4 = this;
            r0 = 0
            r4.cs = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            com.kwad.components.ad.reward.model.EcOrderCardStyle r0 = com.kwad.components.ad.reward.model.EcOrderCardStyle.createFromAdInfo(r0)
            com.kwad.sdk.core.report.j r1 = new com.kwad.sdk.core.report.j
            r1.<init>()
            if (r0 == 0) goto L22
            com.kwad.sdk.core.report.z$a r2 = new com.kwad.sdk.core.report.z$a
            r2.<init>()
            int r0 = r0.getValue()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.asK = r0
            r1.a(r2)
        L22:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            boolean r0 = r0.mPvReported
            if (r0 != 0) goto L2b
            r4.checkExposure()
        L2b:
            com.kwad.components.core.t.b r0 = com.kwad.components.core.t.b.qj()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            r3 = 0
            r0.a(r2, r3, r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.components.ad.reward.j r1 = r4.qx
            org.json.JSONObject r1 = r1.mReportExtData
            com.kwad.sdk.core.report.a.g(r0, r1)
            return
    }

    @Override
    public final void onUnbind() {
            r8 = this;
            super.onUnbind()
            android.os.Handler r0 = r8.mHandler
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            com.kwad.components.ad.reward.j r0 = r8.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.core.video.l r1 = r8.sr
            r0.b(r1)
            com.kwad.components.core.video.i r0 = r8.tS
            com.kwad.components.core.video.i$a r0 = r0.re()
            com.kwad.components.core.o.a r1 = com.kwad.components.core.o.a.pA()
            com.kwad.components.ad.reward.j r2 = r8.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            long r3 = r8.mPlayTime
            long r5 = r0.rh()
            int r7 = r0.rg()
            r1.a(r2, r3, r5, r7)
            return
    }
}
