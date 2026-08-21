package com.kwad.components.ad.splashscreen.c.b;

import android.widget.FrameLayout;
import com.kwad.components.ad.splashscreen.f;
import com.kwad.components.ad.splashscreen.g;
import com.kwad.components.core.webview.b.a.m;
import com.kwad.components.core.webview.b.j;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.o;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.R;
import com.kwad.sdk.components.l;
import com.kwad.sdk.core.h.c;
import com.kwad.sdk.core.webview.b;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.splashscreen.c.c.a implements g, c {
    private m ED;
    f Ey = new f() { // from class: com.kwad.components.ad.splashscreen.c.b.a.2
        @Override // com.kwad.components.ad.splashscreen.f
        public final void kz() {
            a.this.lr.setVisibility(8);
        }
    };
    private FrameLayout lr;
    private am wH;

    private o a(b bVar) {
        return new o(bVar, this.CM.mApkDownloadHelper, new com.kwad.sdk.core.webview.d.a.a() { // from class: com.kwad.components.ad.splashscreen.c.b.a.1
            @Override // com.kwad.sdk.core.webview.d.a.a
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                if (aVar != null) {
                    a.this.CM.mRootContainer.post(new Runnable() { // from class: com.kwad.components.ad.splashscreen.c.b.a.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            a.this.CM.kE();
                        }
                    });
                }
            }
        });
    }

    private m lz() {
        m mVar = new m();
        this.ED = mVar;
        return mVar;
    }

    @Override // com.kwad.components.ad.splashscreen.g
    public final void X(int i) {
        m mVar = this.ED;
        if (mVar != null) {
            mVar.aP(i);
        }
    }

    @Override // com.kwad.components.ad.splashscreen.c.c.a, com.kwad.components.core.webview.b.i
    public final void a(am amVar) {
        super.a(amVar);
        this.wH = amVar;
    }

    @Override // com.kwad.components.ad.splashscreen.c.c.a, com.kwad.components.core.webview.b.i
    public final void a(l lVar, b bVar) {
        super.a(lVar, bVar);
        lVar.c(a(bVar));
        lVar.c(lz());
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aK() {
        am amVar;
        if (this.CM.Cj || (amVar = this.wH) == null) {
            return;
        }
        amVar.rD();
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aL() {
        am amVar;
        if (this.CM.Cj || (amVar = this.wH) == null) {
            return;
        }
        amVar.rE();
    }

    @Override // com.kwad.components.ad.splashscreen.c.c.a, com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.CM.Ce.a(this);
        this.CM.a(this);
        this.CM.a(this.Ey);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(t.a aVar) {
        aVar.width = com.kwad.sdk.d.a.a.b(getContext(), this.CM.mRootContainer.getWidth());
        aVar.height = com.kwad.sdk.d.a.a.b(getContext(), this.CM.mRootContainer.getHeight());
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void cc() {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rB();
            this.wH.rC();
        }
        this.lr.setVisibility(8);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void eh() {
        if (this.CM.Cj) {
            return;
        }
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rz();
            this.wH.rA();
        }
        this.lr.setVisibility(0);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final FrameLayout getTKContainer() {
        return this.lr;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final String getTkTemplateId() {
        return j.b("ksad-splash-play-card", this.CM.mAdTemplate);
    }

    @Override // com.kwad.components.ad.splashscreen.g
    public final void kD() {
    }

    @Override // com.kwad.components.ad.splashscreen.c.c.a, com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.lr = (FrameLayout) findViewById(R.id.splash_tk_play_card_view);
    }

    @Override // com.kwad.components.ad.splashscreen.c.c.a, com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rB();
            this.wH.rC();
        }
        super.onUnbind();
        this.CM.Ce.b(this);
        this.CM.b(this.Ey);
        this.CM.b(this);
    }
}
