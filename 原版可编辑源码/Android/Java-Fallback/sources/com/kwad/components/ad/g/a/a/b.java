package com.kwad.components.ad.g.a.a;

public final class b implements com.kwad.sdk.core.webview.c.a {
    public static int nB = 1;
    public static int nC = 2;
    private com.kwad.sdk.core.webview.c.c nA;
    private int nD;
    private int nE;
    private com.kwad.components.ad.g.a.a.b.c nF;
    private com.kwad.components.ad.g.a.a.b.b nG;
    private java.lang.Runnable nH;


    public static class a extends com.kwad.sdk.core.response.a.a {
        public int nJ;
        public int nK;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public interface b {
        void C(int r1);
    }

    class c implements java.lang.Runnable {
        final com.kwad.components.ad.g.a.a.b nI;
        private boolean nL;
        private int nM;

        private c(com.kwad.components.ad.g.a.a.b r1) {
                r0 = this;
                r0.nI = r1
                r0.<init>()
                r1 = 0
                r0.nL = r1
                r1 = -1
                r0.nM = r1
                return
        }

        c(com.kwad.components.ad.g.a.a.b r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public final void I(int r1) {
                r0 = this;
                r0.nM = r1
                return
        }

        @Override
        public final void run() {
                r5 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "TimerRunnable run timerPaused:  "
                r0.<init>(r1)
                boolean r1 = r5.nL
                r0.append(r1)
                java.lang.String r1 = ", currentTime: "
                r0.append(r1)
                int r1 = r5.nM
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "RegisterTimer"
                com.kwad.sdk.core.e.c.d(r1, r0)
                boolean r0 = r5.nL
                r1 = 1000(0x3e8, double:4.94E-321)
                r3 = 0
                if (r0 == 0) goto L2a
                com.kwad.sdk.utils.bj.a(r5, r3, r1)
                return
            L2a:
                int r0 = r5.nM
                if (r0 >= 0) goto L2f
                return
            L2f:
                com.kwad.components.ad.g.a.a.b r4 = r5.nI
                com.kwad.components.ad.g.a.a.b.a(r4, r0)
                int r0 = r5.nM
                int r0 = r0 + (-1)
                r5.nM = r0
                com.kwad.sdk.utils.bj.a(r5, r3, r1)
                return
        }

        public final void y(boolean r1) {
                r0 = this;
                r0.nL = r1
                return
        }
    }

    static {
            return
    }

    private b(int r3, int r4) {
            r2 = this;
            r2.<init>()
            com.kwad.components.ad.g.a.a.b$c r0 = new com.kwad.components.ad.g.a.a.b$c
            r1 = 0
            r0.<init>(r2, r1)
            r2.nF = r0
            r0 = 0
            r2.nH = r0
            r2.nD = r3
            r2.nE = r4
            return
    }

    private void H(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "updateTimer: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r1 = ", mCallBackFunction: "
            r0.append(r1)
            com.kwad.sdk.core.webview.c.c r1 = r2.nA
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RegisterTimer"
            com.kwad.sdk.core.e.c.d(r1, r0)
            if (r3 >= 0) goto L20
            return
        L20:
            com.kwad.sdk.core.webview.c.c r0 = r2.nA
            if (r0 != 0) goto L25
            return
        L25:
            com.kwad.components.ad.g.a.a.b$b r0 = r2.nG
            if (r0 == 0) goto L30
            if (r3 != 0) goto L30
            int r1 = r2.nD
            r0.C(r1)
        L30:
            com.kwad.components.ad.g.a.a.b$a r0 = new com.kwad.components.ad.g.a.a.b$a
            r0.<init>()
            r0.nK = r3
            int r3 = r2.nD
            r0.nJ = r3
            com.kwad.sdk.core.webview.c.c r3 = r2.nA
            if (r3 == 0) goto L42
            r3.a(r0)
        L42:
            return
    }

    static void a(com.kwad.components.ad.g.a.a.b r0, int r1) {
            r0.H(r1)
            return
    }

    private static int f(com.kwad.sdk.core.response.model.AdInfo r1) {
            int r0 = com.kwad.components.ad.interstitial.a.b.b(r1)
            if (r0 > 0) goto L8
            r0 = 60
        L8:
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r1 = r1.adInsertScreenInfo
            int r1 = r1.autoCloseTime
            if (r1 <= 0) goto L12
            int r0 = java.lang.Math.min(r0, r1)
        L12:
            return r0
    }

    public static com.kwad.components.ad.g.a.a.b m(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r0 = com.kwad.sdk.core.response.b.a.aU(r2)
            r0 = r0 ^ 1
            r1 = 0
            if (r0 != 0) goto Le
            return r1
        Le:
            boolean r0 = com.kwad.sdk.core.response.b.a.bv(r2)
            if (r0 == 0) goto L20
            com.kwad.components.ad.g.a.a.b r0 = new com.kwad.components.ad.g.a.a.b
            int r1 = com.kwad.components.ad.g.a.a.b.nC
            int r2 = f(r2)
            r0.<init>(r1, r2)
            return r0
        L20:
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r2.adInsertScreenInfo
            int r0 = r0.autoCloseTime
            if (r0 <= 0) goto L32
            com.kwad.components.ad.g.a.a.b r0 = new com.kwad.components.ad.g.a.a.b
            int r1 = com.kwad.components.ad.g.a.a.b.nB
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r2 = r2.adInsertScreenInfo
            int r2 = r2.autoCloseTime
            r0.<init>(r1, r2)
            return r0
        L32:
            return r1
    }

    public final void a(com.kwad.components.ad.g.a.a.b.b r1) {
            r0 = this;
            r0.nG = r1
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.nA = r2
            java.lang.Runnable r1 = r0.nH
            if (r1 == 0) goto Lc
            r1.run()
            r1 = 0
            r0.nH = r1
        Lc:
            return
    }

    public final void eX() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "startTimer: mCallBackFunction: "
            r0.<init>(r1)
            com.kwad.sdk.core.webview.c.c r1 = r2.nA
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RegisterTimer"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.sdk.core.webview.c.c r0 = r2.nA
            if (r0 != 0) goto L21
            com.kwad.components.ad.g.a.a.b$1 r0 = new com.kwad.components.ad.g.a.a.b$1
            r0.<init>(r2)
            r2.nH = r0
            return
        L21:
            com.kwad.components.ad.g.a.a.b$c r0 = r2.nF
            int r1 = r2.nE
            r0.I(r1)
            com.kwad.components.ad.g.a.a.b$c r0 = r2.nF
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    public final void eY() {
            r2 = this;
            com.kwad.components.ad.g.a.a.b$c r0 = r2.nF
            r1 = 1
            r0.y(r1)
            return
    }

    public final void eZ() {
            r2 = this;
            com.kwad.components.ad.g.a.a.b$c r0 = r2.nF
            r1 = 0
            r0.y(r1)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerTimerListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.nA = r0
            return
    }
}
