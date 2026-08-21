package com.kwad.components.core.e.a;

import android.app.Activity;
import android.widget.FrameLayout;
import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.i;
import com.kwad.components.core.webview.b.j;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.utils.bj;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends Presenter implements i, com.kwad.sdk.core.h.c {
    private com.kwad.components.core.widget.a.b IT;
    private a Jd;
    private am cG;
    private com.kwad.components.core.webview.b.h lp;
    private AdTemplate mAdTemplate;

    private void ak(boolean z) {
        if (!z) {
            this.Jd.mK();
        }
        bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.core.e.a.f.2
            @Override // java.lang.Runnable
            public final void run() {
                f.this.Jd.IU.mM();
            }
        });
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(o oVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(p pVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(t tVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(am amVar) {
        this.cG = amVar;
        this.Jd.cG = amVar;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
        com.kwad.sdk.core.e.c.d("InstalledActivatePresenter", "onAdClicked");
        ak(false);
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aK() {
        com.kwad.sdk.core.e.c.d("InstalledActivatePresenter", "onPageVisible");
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rD();
        }
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aL() {
        com.kwad.sdk.core.e.c.d("InstalledActivatePresenter", "onPageInvisible");
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rE();
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        a aVar = (a) Gk();
        this.Jd = aVar;
        this.mAdTemplate = aVar.mAdTemplate;
        this.IT = this.Jd.IT;
        com.kwad.components.core.webview.b.h hVar = new com.kwad.components.core.webview.b.h(getContext()) { // from class: com.kwad.components.core.e.a.f.1
            @Override // com.kwad.components.core.webview.b.h
            public final boolean mS() {
                return true;
            }
        };
        this.lp = hVar;
        hVar.a((Activity) null, this.mAdTemplate, this);
        this.IT.a(this);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(m mVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        float screenHeight = com.kwad.sdk.d.a.a.getScreenHeight(getContext());
        aVar.width = (int) ((com.kwad.sdk.d.a.a.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((screenHeight / fAH) + 0.5f);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(WebCloseStatus webCloseStatus) {
        ak(false);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void cc() {
        com.kwad.sdk.core.e.c.d("InstalledActivatePresenter", "onTkLoadFailed");
        ak(true);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void eh() {
        com.kwad.sdk.core.e.c.d("InstalledActivatePresenter", "onTkLoadSuccess");
        this.Jd.bt();
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void em() {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final FrameLayout getTKContainer() {
        return this.Jd.IS;
    }

    @Override // com.kwad.components.core.webview.b.i
    public final String getTkTemplateId() {
        return j.b("ksad-installed-activate-card", this.mAdTemplate);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final com.kwad.sdk.widget.e getTouchCoordsView() {
        return this.Jd.IS;
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.lp.jv();
        this.IT.b(this);
    }
}
