package com.kwad.components.ad.splashscreen.c;

import android.os.SystemClock;
import com.kwad.sdk.utils.bj;

/* JADX INFO: loaded from: classes2.dex */
public final class j extends e {
    private com.kwad.components.core.offline.api.b.b Da;
    private long Db;
    private volatile boolean Dc = false;
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() { // from class: com.kwad.components.ad.splashscreen.c.j.1
        @Override // com.kwad.components.core.webview.b.e.e
        public final void a(String str, long j, long j2, long j3) {
            if (com.kwad.components.core.webview.b.j.b("ksad-splash-play-card", j.this.CM.mAdTemplate).equals(str)) {
                j.this.CM.Co = j;
                j.this.CM.Cp = j2;
                j.this.CM.Cq = j3;
                bj.b(j.this.Dd);
            }
        }

        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            j.this.CM.Cj = true;
            if (com.kwad.components.core.webview.b.j.b("ksad-splash-play-card", j.this.CM.mAdTemplate).equals(str)) {
                j.this.lj();
            }
        }
    };
    private final Runnable Dd = new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.j.2
        @Override // java.lang.Runnable
        public final void run() {
            if (!j.this.Dc) {
                j.this.li();
            } else {
                j.this.CM.Cj = true;
                j.this.lj();
            }
        }
    };
    private com.kwad.components.core.offline.api.b.a De = new com.kwad.components.core.offline.api.b.a() { // from class: com.kwad.components.ad.splashscreen.c.j.3
        @Override // com.kwad.components.core.offline.api.b.a
        public final void a(int i, int i2, long j, long j2) {
            j.this.CM.Ck = i;
            j.this.CM.Cl = i2;
            j.this.CM.Cm = j;
            j.this.CM.Cn = j2;
            com.kwad.components.ad.splashscreen.monitor.a.kN();
            com.kwad.components.ad.splashscreen.monitor.a.d(j.this.CM.mAdTemplate, SystemClock.elapsedRealtime() - j.this.Db);
            j.this.li();
        }
    };

    private void lh() {
        com.kwad.components.core.offline.api.b.b bVar = (com.kwad.components.core.offline.api.b.b) com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.b.b.class);
        this.Da = bVar;
        if (bVar != null) {
            bVar.a(this.De);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void li() {
        if (this.Dc) {
            return;
        }
        this.Dc = true;
        if (com.kwad.sdk.core.response.b.b.cN(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate))) {
            bj.postOnUiThread(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.j.4
                @Override // java.lang.Runnable
                public final void run() {
                    j.this.a(new com.kwad.components.ad.splashscreen.c.b.a(), true);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void lj() {
        if (com.kwad.sdk.core.response.b.b.dk(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate))) {
            this.CM.Ci = true;
            bj.postOnUiThread(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.j.5
                @Override // java.lang.Runnable
                public final void run() {
                    j.this.a(new p(), true);
                }
            });
        }
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (com.kwad.sdk.core.response.b.b.cN(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate))) {
            bj.runOnUiThreadDelay(this.Dd, com.kwad.sdk.core.response.b.b.cT(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate)));
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        }
        lh();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.Db = SystemClock.elapsedRealtime();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.offline.api.b.b bVar = this.Da;
        if (bVar != null) {
            bVar.b(this.De);
        }
        if (com.kwad.sdk.core.response.b.b.cN(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate))) {
            bj.b(this.Dd);
            com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        }
    }
}
