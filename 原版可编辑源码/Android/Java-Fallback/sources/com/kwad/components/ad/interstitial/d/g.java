package com.kwad.components.ad.interstitial.d;

public final class g extends com.kwad.components.ad.interstitial.d.b implements com.kwad.components.core.video.a.c {
    private static long kP = 1000;
    private com.kwad.components.ad.interstitial.d.c jf;
    private com.kwad.components.ad.interstitial.d.g.a kQ;
    private int kR;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;

    class a implements java.lang.Runnable {
        private int kS;
        private boolean kT;
        private boolean kU;
        final com.kwad.components.ad.interstitial.d.g kV;

        private a(com.kwad.components.ad.interstitial.d.g r1) {
                r0 = this;
                r0.kV = r1
                r0.<init>()
                r1 = -2147483648(0xffffffff80000000, float:-0.0)
                r0.kS = r1
                r1 = 0
                r0.kT = r1
                r0.kU = r1
                return
        }

        a(com.kwad.components.ad.interstitial.d.g r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public final void q(boolean r1) {
                r0 = this;
                r1 = 1
                r0.kU = r1
                return
        }

        public final void r(boolean r1) {
                r0 = this;
                r0.kT = r1
                return
        }

        @Override
        public final void run() {
                r4 = this;
                boolean r0 = r4.kU
                if (r0 == 0) goto L5
                return
            L5:
                boolean r0 = r4.kT
                r1 = 0
                if (r0 == 0) goto L12
            La:
                long r2 = com.kwad.components.ad.interstitial.d.g.dX()
                com.kwad.sdk.utils.bj.a(r4, r1, r2)
                return
            L12:
                int r0 = r4.kS
                r2 = -2147483648(0xffffffff80000000, float:-0.0)
                if (r0 != r2) goto L20
                com.kwad.components.ad.interstitial.d.g r0 = r4.kV
                int r0 = com.kwad.components.ad.interstitial.d.g.a(r0)
                r4.kS = r0
            L20:
                int r0 = r4.kS
                if (r0 >= 0) goto L25
                return
            L25:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                com.kwad.components.ad.interstitial.d.g r2 = r4.kV
                java.lang.String r2 = r2.toString()
                r0.append(r2)
                java.lang.String r2 = ", this: "
                r0.append(r2)
                java.lang.String r2 = r4.toString()
                r0.append(r2)
                java.lang.String r2 = " PlayableTimerRunnable run : "
                r0.append(r2)
                int r2 = r4.kS
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                java.lang.String r2 = "InterstitialPlayablePresenter"
                com.kwad.sdk.core.e.c.d(r2, r0)
                com.kwad.components.ad.interstitial.d.g r0 = r4.kV
                int r2 = r4.kS
                com.kwad.components.ad.interstitial.d.g.a(r0, r2)
                int r0 = r4.kS
                int r0 = r0 + (-1)
                r4.kS = r0
                goto La
        }
    }

    static {
            return
    }

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    private void D(int r4) {
            r3 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            com.kwad.components.ad.interstitial.f.f r0 = r0.jg
            if (r0 != 0) goto L7
            return
        L7:
            r0 = 1
            if (r4 != 0) goto L29
            com.kwad.components.ad.interstitial.d.c r4 = r3.jf
            boolean r4 = r4.cU()
            if (r4 != 0) goto L30
            com.kwad.components.ad.interstitial.d.c r4 = r3.jf
            android.content.Context r1 = r3.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            r4.b(r1, r2)
            r3.dr()
            com.kwad.components.ad.interstitial.d.c r4 = r3.jf
            r1 = -1
            com.kwad.sdk.core.video.videoview.a r2 = r4.ex
            r4.a(r0, r1, r2)
            return
        L29:
            com.kwad.components.ad.interstitial.d.c r1 = r3.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            r1.b(r0, r4)
        L30:
            return
    }

    static int a(com.kwad.components.ad.interstitial.d.g r0) {
            int r0 = r0.kR
            return r0
    }

    static void a(com.kwad.components.ad.interstitial.d.g r0, int r1) {
            r0.D(r1)
            return
    }

    static long dX() {
            long r0 = com.kwad.components.ad.interstitial.d.g.kP
            return r0
    }

    private void dr() {
            r1 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            if (r0 == 0) goto Ld
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            com.kwad.sdk.core.video.videoview.a r0 = r0.ex
            r0.release()
        Ld:
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            com.kwad.components.ad.interstitial.d r0 = r0.hG
            r0.dismiss()
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            boolean r0 = r0.jk
            if (r0 != 0) goto L27
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r0.hz
            if (r0 == 0) goto L27
            com.kwad.components.ad.interstitial.d.c r0 = r1.jf
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r0.hz
            r0.onAdClosed()
        L27:
            return
    }

    @Override
    public final void ah() {
            r5 = this;
            super.ah()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r1 = " onBind"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "InterstitialPlayablePresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            java.lang.Object r0 = r5.Gk()
            com.kwad.components.ad.interstitial.d.c r0 = (com.kwad.components.ad.interstitial.d.c) r0
            r5.jf = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r5.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r1 = r0.adInsertScreenInfo
            int r1 = r1.autoCloseTime
            long r1 = (long) r1
            r3 = 0
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 <= 0) goto L3f
            int r3 = com.kwad.components.ad.interstitial.a.b.b(r0)
            long r3 = (long) r3
            long r1 = java.lang.Math.min(r3, r1)
            int r1 = (int) r1
            goto L43
        L3f:
            int r1 = com.kwad.components.ad.interstitial.a.b.b(r0)
        L43:
            r5.kR = r1
            com.kwad.components.ad.interstitial.d.c r1 = r5.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            if (r1 == 0) goto L55
            com.kwad.components.ad.interstitial.d.c r1 = r5.jf
            com.kwad.components.ad.interstitial.f.f r1 = r1.jg
            r2 = 1
            int r3 = r5.kR
            r1.b(r2, r3)
        L55:
            boolean r0 = com.kwad.sdk.core.response.b.a.aU(r0)
            r1 = 0
            if (r0 == 0) goto L64
            r5.kQ = r1
            com.kwad.components.ad.interstitial.d.c r0 = r5.jf
            r0.a(r5)
            return
        L64:
            com.kwad.components.ad.interstitial.d.g$a r0 = new com.kwad.components.ad.interstitial.d.g$a
            r2 = 0
            r0.<init>(r5, r2)
            r5.kQ = r0
            r2 = 1000(0x3e8, double:4.94E-321)
            com.kwad.sdk.utils.bj.a(r0, r1, r2)
            return
    }

    @Override
    public final void bj() {
            r0 = this;
            return
    }

    @Override
    public final void bk() {
            r3 = this;
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            boolean r0 = r0.cU()
            if (r0 != 0) goto L16
            com.kwad.components.ad.interstitial.d.c r0 = r3.jf
            android.content.Context r1 = r3.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            r0.b(r1, r2)
            r3.dr()
        L16:
            return
    }

    @Override
    public final void cN() {
            r2 = this;
            super.cN()
            com.kwad.components.ad.interstitial.d.g$a r0 = r2.kQ
            if (r0 == 0) goto Lb
            r1 = 0
            r0.r(r1)
        Lb:
            return
    }

    @Override
    public final void cO() {
            r2 = this;
            super.cO()
            com.kwad.components.ad.interstitial.d.g$a r0 = r2.kQ
            if (r0 == 0) goto Lb
            r1 = 1
            r0.r(r1)
        Lb:
            return
    }

    @Override
    public final void d(long r3) {
            r2 = this;
            r0 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 / r0
            int r3 = (int) r3
            int r4 = r2.kR
            int r4 = r4 - r3
            r2.D(r4)
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r1 = " onUnbind"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "InterstitialPlayablePresenter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.components.ad.interstitial.d.c r0 = r2.jf
            r0.b(r2)
            com.kwad.components.ad.interstitial.d.g$a r0 = r2.kQ
            if (r0 == 0) goto L2e
            r1 = 1
            r0.q(r1)
            com.kwad.components.ad.interstitial.d.g$a r0 = r2.kQ
            com.kwad.sdk.utils.bj.b(r0)
            r0 = 0
            r2.kQ = r0
        L2e:
            return
    }

    @Override
    public final void onVideoPlayStart() {
            r0 = this;
            return
    }
}
