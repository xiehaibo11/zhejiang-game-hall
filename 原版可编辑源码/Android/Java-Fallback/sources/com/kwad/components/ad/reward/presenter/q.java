package com.kwad.components.ad.reward.presenter;

public final class q extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.e.f, com.kwad.components.ad.reward.e.h, com.kwad.components.core.webview.jshandler.ah.b {
    private com.kwad.components.core.webview.b.e.e gk;
    private boolean sO;
    private com.kwad.components.ad.reward.presenter.q.a sP;
    private com.kwad.components.ad.reward.presenter.p sQ;
    private com.kwad.components.ad.reward.presenter.n sR;
    private com.kwad.components.ad.reward.presenter.o sS;
    private int sT;
    private boolean sU;
    private boolean sV;
    private boolean sW;
    private float sz;



    class a extends com.kwad.components.core.video.l {
        final com.kwad.components.ad.reward.presenter.q sX;
        private long sY;
        private long videoDuration;

        private a(com.kwad.components.ad.reward.presenter.q r1) {
                r0 = this;
                r0.sX = r1
                r0.<init>()
                return
        }

        a(com.kwad.components.ad.reward.presenter.q r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        static long a(com.kwad.components.ad.reward.presenter.q.a r2) {
                long r0 = r2.videoDuration
                return r0
        }

        static long b(com.kwad.components.ad.reward.presenter.q.a r2) {
                long r0 = r2.sY
                return r0
        }

        @Override
        public final void onMediaPlayProgress(long r8, long r10) {
                r7 = this;
                super.onMediaPlayProgress(r8, r10)
                r7.sY = r10
                r7.videoDuration = r8
                com.kwad.components.ad.reward.presenter.q r0 = r7.sX
                com.kwad.components.ad.reward.j r0 = r0.qx
                boolean r0 = r0.fO()
                if (r0 != 0) goto L19
                com.kwad.components.ad.reward.presenter.q r1 = r7.sX
                r6 = 0
                r2 = r8
                r4 = r10
                com.kwad.components.ad.reward.presenter.q.a(r1, r2, r4, r6)
            L19:
                return
        }
    }

    public q(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0, r0)
            return
    }

    public q(com.kwad.sdk.core.response.model.AdTemplate r2, boolean r3, boolean r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.sT = r0
            r1.sU = r0
            r0 = 1
            r1.sV = r0
            r1.sW = r0
            r1.sV = r3
            r1.sW = r4
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r2 = com.kwad.sdk.core.response.b.a.bv(r2)
            if (r2 == 0) goto L25
            com.kwad.components.ad.reward.presenter.o r2 = new com.kwad.components.ad.reward.presenter.o
            r2.<init>()
            r1.sS = r2
            r1.a(r2)
        L25:
            return
    }

    private int a(com.kwad.components.ad.reward.e.f r2) {
            r1 = this;
            int r0 = r1.getPriority()
            int r2 = r2.getPriority()
            int r0 = r0 - r2
            return r0
    }

    private void a(long r5, long r7, boolean r9) {
            r4 = this;
            boolean r0 = r4.hN()
            r1 = 1
            if (r0 == 0) goto L18
            r2 = 10000(0x2710, double:4.9407E-320)
            int r0 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r0 < 0) goto L18
            float r7 = (float) r7
            float r5 = (float) r5
            float r6 = r4.sz
            float r5 = r5 * r6
            int r5 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r5 < 0) goto L18
            r5 = r1
            goto L19
        L18:
            r5 = 0
        L19:
            if (r5 != 0) goto L1c
            return
        L1c:
            boolean r5 = com.kwad.components.ad.reward.a.b.gK()
            if (r5 == 0) goto L32
            boolean r5 = r4.sU
            if (r5 != 0) goto L3e
            com.kwad.components.ad.reward.presenter.p r5 = r4.sQ
            if (r5 == 0) goto L3e
            r5.hI()
            r4.sT = r1
            r4.sU = r1
            return
        L32:
            com.kwad.components.ad.reward.presenter.n r5 = r4.sR
            if (r5 == 0) goto L3e
            r6 = r9 ^ 1
            r5.J(r6)
            r5 = 2
            r4.sT = r5
        L3e:
            return
    }

    static void a(com.kwad.components.ad.reward.presenter.q r0) {
            r0.hM()
            return
    }

    static void a(com.kwad.components.ad.reward.presenter.q r6, long r7, long r9, boolean r11) {
            r5 = 0
            r0 = r6
            r1 = r7
            r3 = r9
            r0.a(r1, r3, r5)
            return
    }

    private com.kwad.components.core.webview.b.e.e bO() {
            r1 = this;
            com.kwad.components.core.webview.b.e.e r0 = r1.gk
            if (r0 != 0) goto Lb
            com.kwad.components.ad.reward.presenter.q$2 r0 = new com.kwad.components.ad.reward.presenter.q$2
            r0.<init>(r1)
            r1.gk = r0
        Lb:
            com.kwad.components.core.webview.b.e.e r0 = r1.gk
            return r0
    }

    private void hM() {
            r2 = this;
            boolean r0 = r2.sW
            r1 = 1
            if (r0 == 0) goto Lf
            com.kwad.components.ad.reward.presenter.p r0 = new com.kwad.components.ad.reward.presenter.p
            r0.<init>(r2)
            r2.sQ = r0
            r2.a(r0, r1)
        Lf:
            boolean r0 = r2.sV
            if (r0 == 0) goto L1d
            com.kwad.components.ad.reward.presenter.n r0 = new com.kwad.components.ad.reward.presenter.n
            r0.<init>(r2)
            r2.sR = r0
            r2.a(r0, r1)
        L1d:
            return
    }

    private boolean hN() {
            r1 = this;
            boolean r0 = r1.sO
            return r0
    }

    @Override
    public final void a(com.kwad.components.core.playable.PlayableSource r1, com.kwad.components.ad.reward.e.l r2) {
            r0 = this;
            com.kwad.components.ad.reward.j r1 = r0.qx
            r2 = 1
            r1.A(r2)
            int r1 = r0.sT
            if (r1 != r2) goto L12
            com.kwad.components.ad.reward.presenter.p r1 = r0.sQ
            if (r1 == 0) goto L12
            r1.hJ()
            return
        L12:
            int r1 = r0.sT
            r2 = 2
            if (r1 != r2) goto L1e
            com.kwad.components.ad.reward.presenter.n r1 = r0.sR
            if (r1 == 0) goto L1e
            r1.hide()
        L1e:
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.ah.a r7) {
            r6 = this;
            boolean r7 = r7.isSuccess()
            r6.sO = r7
            if (r7 == 0) goto L1b
            com.kwad.components.ad.reward.presenter.q$a r7 = r6.sP
            if (r7 == 0) goto L1b
            long r1 = com.kwad.components.ad.reward.presenter.q.a.a(r7)
            com.kwad.components.ad.reward.presenter.q$a r7 = r6.sP
            long r3 = com.kwad.components.ad.reward.presenter.q.a.b(r7)
            r5 = 0
            r0 = r6
            r0.a(r1, r3, r5)
        L1b:
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r1 = com.kwad.sdk.core.response.b.a.bv(r0)
            if (r1 == 0) goto L2e
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = r0.pk
            if (r0 != 0) goto L22
            com.kwad.components.ad.reward.presenter.q$1 r0 = new com.kwad.components.ad.reward.presenter.q$1
            r0.<init>(r3)
            r1 = 100
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            goto L3f
        L22:
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r3.bO()
            r0.a(r1)
            goto L3f
        L2e:
            boolean r0 = com.kwad.sdk.core.response.b.a.by(r0)
            if (r0 != 0) goto L3f
            com.kwad.components.core.o.a r0 = com.kwad.components.core.o.a.pA()
            com.kwad.components.ad.reward.j r1 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r0.V(r1)
        L3f:
            com.kwad.components.ad.reward.j r0 = r3.qx
            r0.b(r3)
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.core.playable.a r0 = r0.oX
            if (r0 == 0) goto L51
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.core.playable.a r0 = r0.oX
            r0.a(r3)
        L51:
            boolean r0 = com.kwad.components.ad.reward.a.b.gJ()
            float r1 = com.kwad.components.ad.reward.a.b.gI()
            r3.sz = r1
            if (r0 == 0) goto L6e
            com.kwad.components.ad.reward.presenter.q$a r0 = new com.kwad.components.ad.reward.presenter.q$a
            r1 = 0
            r0.<init>(r3, r1)
            r3.sP = r0
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.ad.reward.presenter.q$a r1 = r3.sP
            r0.a(r1)
        L6e:
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.a(r3)
            return
    }

    @Override
    public final void bD() {
            r2 = this;
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl r0 = r0.oY
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r0 = r0.in()
            if (r0 == 0) goto Lf
            com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl$ShowActionBarResult r1 = com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_PLAYABLE_PORTRAIT
            r0.equals(r1)
        Lf:
            com.kwad.components.ad.reward.presenter.o r0 = r2.sS
            if (r0 == 0) goto L2f
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = r0.fX()
            if (r0 == 0) goto L1c
            goto L2f
        L1c:
            boolean r0 = r2.hN()
            if (r0 == 0) goto L2a
            com.kwad.components.ad.reward.presenter.o r0 = r2.sS
            com.kwad.components.core.playable.PlayableSource r1 = com.kwad.components.core.playable.PlayableSource.PLAY_FINISHED_NORMAL
            r0.e(r1)
            return
        L2a:
            com.kwad.components.ad.reward.presenter.o r0 = r2.sS
            r0.hH()
        L2f:
            return
    }

    public final boolean bP() {
            r3 = this;
            com.kwad.components.ad.reward.j r0 = r3.qx
            boolean r0 = r0.ga()
            com.kwad.components.ad.reward.j r1 = r3.qx
            boolean r1 = r1.fO()
            r2 = 0
            if (r1 == 0) goto L20
            if (r0 == 0) goto L12
            return r2
        L12:
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.fq()
            com.kwad.components.ad.reward.j r0 = r3.qx
            r0.A(r2)
            r0 = 1
            return r0
        L20:
            return r2
    }

    @Override
    public final void bS() {
            r9 = this;
            com.kwad.components.ad.reward.j r0 = r9.qx
            r1 = 0
            r0.A(r1)
            com.kwad.components.ad.reward.presenter.q$a r0 = r9.sP
            if (r0 == 0) goto L1e
            int r1 = r9.sT
            r2 = 2
            if (r1 != r2) goto L1e
            long r4 = com.kwad.components.ad.reward.presenter.q.a.a(r0)
            com.kwad.components.ad.reward.presenter.q$a r0 = r9.sP
            long r6 = com.kwad.components.ad.reward.presenter.q.a.b(r0)
            r8 = 1
            r3 = r9
            r3.a(r4, r6, r8)
        L1e:
            return
    }

    @Override
    public final void bT() {
            r0 = this;
            return
    }

    @Override
    public final int compareTo(com.kwad.components.ad.reward.e.f r1) {
            r0 = this;
            com.kwad.components.ad.reward.e.f r1 = (com.kwad.components.ad.reward.e.f) r1
            int r1 = r0.a(r1)
            return r1
    }

    @Override
    public final int getPriority() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.c(r2)
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.core.playable.a r0 = r0.oX
            if (r0 == 0) goto L15
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.core.playable.a r0 = r0.oX
            r0.b(r2)
        L15:
            com.kwad.components.ad.reward.presenter.q$a r0 = r2.sP
            if (r0 == 0) goto L22
            com.kwad.components.ad.reward.j r0 = r2.qx
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            com.kwad.components.ad.reward.presenter.q$a r1 = r2.sP
            r0.b(r1)
        L22:
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.b(r2)
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gk
            r0.b(r1)
            return
    }
}
