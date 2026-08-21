package com.kwad.components.ad.g.a.a;

import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.bj;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements com.kwad.sdk.core.webview.c.a {
    public static int nB = 1;
    public static int nC = 2;
    private com.kwad.sdk.core.webview.c.c nA;
    private int nD;
    private int nE;
    private InterfaceC0103b nG;
    private c nF = new c(this, 0);
    private Runnable nH = null;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int nJ;
        public int nK;
    }

    /* JADX INFO: renamed from: com.kwad.components.ad.g.a.a.b$b, reason: collision with other inner class name */
    public interface InterfaceC0103b {
        void C(int i);
    }

    class c implements Runnable {
        private boolean nL;
        private int nM;

        private c() {
            this.nL = false;
            this.nM = -1;
        }

        /* synthetic */ c(b bVar, byte b) {
            this();
        }

        public final void I(int i) {
            this.nM = i;
        }

        @Override // java.lang.Runnable
        public final void run() {
            com.kwad.sdk.core.e.c.d("RegisterTimer", "TimerRunnable run timerPaused:  " + this.nL + ", currentTime: " + this.nM);
            if (this.nL) {
                bj.a(this, null, 1000L);
                return;
            }
            int i = this.nM;
            if (i < 0) {
                return;
            }
            b.this.H(i);
            this.nM--;
            bj.a(this, null, 1000L);
        }

        public final void y(boolean z) {
            this.nL = z;
        }
    }

    private b(int i, int i2) {
        this.nD = i;
        this.nE = i2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void H(int i) {
        com.kwad.sdk.core.e.c.d("RegisterTimer", "updateTimer: " + i + ", mCallBackFunction: " + this.nA);
        if (i >= 0 && this.nA != null) {
            InterfaceC0103b interfaceC0103b = this.nG;
            if (interfaceC0103b != null && i == 0) {
                interfaceC0103b.C(this.nD);
            }
            a aVar = new a();
            aVar.nK = i;
            aVar.nJ = this.nD;
            com.kwad.sdk.core.webview.c.c cVar = this.nA;
            if (cVar != null) {
                cVar.a(aVar);
            }
        }
    }

    private static int f(AdInfo adInfo) {
        int iB = com.kwad.components.ad.interstitial.a.b.b(adInfo);
        if (iB <= 0) {
            iB = 60;
        }
        int i = adInfo.adInsertScreenInfo.autoCloseTime;
        return i > 0 ? Math.min(iB, i) : iB;
    }

    public static b m(AdTemplate adTemplate) {
        AdInfo adInfoCg = d.cg(adTemplate);
        if (!(!com.kwad.sdk.core.response.b.a.aU(adInfoCg))) {
            return null;
        }
        if (com.kwad.sdk.core.response.b.a.bv(adInfoCg)) {
            return new b(nC, f(adInfoCg));
        }
        if (adInfoCg.adInsertScreenInfo.autoCloseTime > 0) {
            return new b(nB, adInfoCg.adInsertScreenInfo.autoCloseTime);
        }
        return null;
    }

    public final void a(InterfaceC0103b interfaceC0103b) {
        this.nG = interfaceC0103b;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.nA = cVar;
        Runnable runnable = this.nH;
        if (runnable != null) {
            runnable.run();
            this.nH = null;
        }
    }

    public final void eX() {
        com.kwad.sdk.core.e.c.d("RegisterTimer", "startTimer: mCallBackFunction: " + this.nA);
        if (this.nA == null) {
            this.nH = new Runnable() { // from class: com.kwad.components.ad.g.a.a.b.1
                @Override // java.lang.Runnable
                public final void run() {
                    b.this.eX();
                }
            };
        } else {
            this.nF.I(this.nE);
            bj.runOnUiThread(this.nF);
        }
    }

    public final void eY() {
        this.nF.y(true);
    }

    public final void eZ() {
        this.nF.y(false);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "registerTimerListener";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.nA = null;
    }
}
