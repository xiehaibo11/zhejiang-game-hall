package com.kwad.components.ad.interstitial.d;

import com.kwad.components.core.video.a;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.bj;

public final class g extends b implements a.c {
    private static long kP = 1000;
    private c jf;
    private a kQ;
    private int kR;
    private AdTemplate mAdTemplate;

    class a implements Runnable {
        private int kS;
        private boolean kT;
        private boolean kU;

        private a() {
            this.kS = Integer.MIN_VALUE;
            this.kT = false;
            this.kU = false;
        }

        a(g gVar, byte b) {
            this();
        }

        public final void q(boolean z) {
            this.kU = true;
        }

        public final void r(boolean z) {
            this.kT = z;
        }

        @Override
        public final void run() {
            if (this.kU) {
                return;
            }
            if (!this.kT) {
                if (this.kS == Integer.MIN_VALUE) {
                    this.kS = g.this.kR;
                }
                if (this.kS < 0) {
                    return;
                }
                com.kwad.sdk.core.e.c.d("InterstitialPlayablePresenter", g.this.toString() + ", this: " + toString() + " PlayableTimerRunnable run : " + this.kS);
                g.this.D(this.kS);
                this.kS = this.kS + (-1);
            }
            bj.a(this, null, g.kP);
        }
    }

    private void D(int i) {
        if (this.jf.jg == null) {
            return;
        }
        if (i != 0) {
            this.jf.jg.b(true, i);
        } else {
            if (this.jf.cU()) {
                return;
            }
            this.jf.b(getContext(), this.mAdTemplate);
            dr();
            c cVar = this.jf;
            cVar.a(true, -1, cVar.ex);
        }
    }

    private void dr() {
        if (this.jf.ex != null) {
            this.jf.ex.release();
        }
        this.jf.hG.dismiss();
        if (this.jf.jk || this.jf.hz == null) {
            return;
        }
        this.jf.hz.onAdClosed();
    }

    @Override
    public final void ah() {
        super.ah();
        com.kwad.sdk.core.e.c.d("InterstitialPlayablePresenter", this + " onBind");
        c cVar = (c) Gk();
        this.jf = cVar;
        AdTemplate adTemplate = cVar.mAdTemplate;
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        long j = adInfoCg.adInsertScreenInfo.autoCloseTime;
        this.kR = j > 0 ? (int) Math.min(com.kwad.components.ad.interstitial.a.b.b(adInfoCg), j) : com.kwad.components.ad.interstitial.a.b.b(adInfoCg);
        if (this.jf.jg != null) {
            this.jf.jg.b(true, this.kR);
        }
        if (com.kwad.sdk.core.response.b.a.aU(adInfoCg)) {
            this.kQ = null;
            this.jf.a(this);
        } else {
            a aVar = new a(this, (byte) 0);
            this.kQ = aVar;
            bj.a(aVar, null, 1000L);
        }
    }

    @Override
    public final void bj() {
    }

    @Override
    public final void bk() {
        if (this.jf.cU()) {
            return;
        }
        this.jf.b(getContext(), this.mAdTemplate);
        dr();
    }

    @Override
    public final void cN() {
        super.cN();
        a aVar = this.kQ;
        if (aVar != null) {
            aVar.r(false);
        }
    }

    @Override
    public final void cO() {
        super.cO();
        a aVar = this.kQ;
        if (aVar != null) {
            aVar.r(true);
        }
    }

    @Override
    public final void d(long j) {
        D(this.kR - ((int) (j / 1000)));
    }

    @Override
    public final void onCreate() {
        super.onCreate();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.sdk.core.e.c.d("InterstitialPlayablePresenter", this + " onUnbind");
        this.jf.b(this);
        a aVar = this.kQ;
        if (aVar != null) {
            aVar.q(true);
            bj.b(this.kQ);
            this.kQ = null;
        }
    }

    @Override
    public final void onVideoPlayStart() {
    }
}
