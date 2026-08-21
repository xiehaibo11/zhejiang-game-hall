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
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                f.this.Jd.IU.mM();
            }
        });
    }

    @Override
    public final void a(o oVar) {
    }

    @Override
    public final void a(p pVar) {
    }

    @Override
    public final void a(t tVar) {
    }

    @Override
    public final void a(am amVar) {
        this.cG = amVar;
        this.Jd.cG = amVar;
    }

    @Override
    public final void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
        com.kwad.sdk.core.e.c.d("InstalledActivatePresenter", "onAdClicked");
        ak(false);
    }

    @Override
    public final void aK() {
        com.kwad.sdk.core.e.c.d("InstalledActivatePresenter", "onPageVisible");
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rD();
        }
    }

    @Override
    public final void aL() {
        com.kwad.sdk.core.e.c.d("InstalledActivatePresenter", "onPageInvisible");
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rE();
        }
    }

    @Override
    public final void ah() {
        super.ah();
        a aVar = (a) Gk();
        this.Jd = aVar;
        this.mAdTemplate = aVar.mAdTemplate;
        this.IT = this.Jd.IT;
        com.kwad.components.core.webview.b.h hVar = new com.kwad.components.core.webview.b.h(getContext()) {
            @Override
            public final boolean mS() {
                return true;
            }
        };
        this.lp = hVar;
        hVar.a((Activity) null, this.mAdTemplate, this);
        this.IT.a(this);
    }

    @Override
    public final void b(m mVar) {
    }

    @Override
    public final void b(t.a aVar) {
        float fAH = com.kwad.sdk.d.a.a.aH(getContext());
        float screenHeight = com.kwad.sdk.d.a.a.getScreenHeight(getContext());
        aVar.width = (int) ((com.kwad.sdk.d.a.a.getScreenWidth(getContext()) / fAH) + 0.5f);
        aVar.height = (int) ((screenHeight / fAH) + 0.5f);
    }

    @Override
    public final void b(WebCloseStatus webCloseStatus) {
        ak(false);
    }

    @Override
    public final void cc() {
        com.kwad.sdk.core.e.c.d("InstalledActivatePresenter", "onTkLoadFailed");
        ak(true);
    }

    @Override
    public final void eh() {
        com.kwad.sdk.core.e.c.d("InstalledActivatePresenter", "onTkLoadSuccess");
        this.Jd.bt();
    }

    @Override
    public final void em() {
    }

    @Override
    public final FrameLayout getTKContainer() {
        return this.Jd.IS;
    }

    @Override
    public final String getTkTemplateId() {
        return j.b("ksad-installed-activate-card", this.mAdTemplate);
    }

    @Override
    public final com.kwad.sdk.widget.e getTouchCoordsView() {
        return this.Jd.IS;
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.lp.jv();
        this.IT.b(this);
    }
}
