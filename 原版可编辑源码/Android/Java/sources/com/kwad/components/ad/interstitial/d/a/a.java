package com.kwad.components.ad.interstitial.d.a;

import com.kwad.components.core.webview.b.a.i;
import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.h;
import com.kwad.components.core.webview.b.i;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;
import com.kwad.sdk.widget.e;

public abstract class a extends com.kwad.components.ad.interstitial.d.b implements i {
    private h lp;

    @Override
    public final void a(o oVar) {
        m mVar = new m();
        mVar.Xa = !this.jf.dJ.isVideoSoundEnable();
        oVar.c(mVar);
    }

    @Override
    public final void a(p pVar) {
    }

    @Override
    public void a(t tVar) {
    }

    @Override
    public void a(am amVar) {
    }

    @Override
    public void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
        lVar.c(new com.kwad.components.core.webview.b.a.i(new i.a() {
            @Override
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                a.this.a(aVar);
            }
        }));
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
        this.jf.ji = true;
        this.jf.hz.onAdClicked();
    }

    @Override
    public void ah() {
        super.ah();
        this.lp.a(getActivity(), this.jf.mAdTemplate, this);
    }

    @Override
    public final void b(m mVar) {
    }

    @Override
    public void b(WebCloseStatus webCloseStatus) {
    }

    @Override
    public e getTouchCoordsView() {
        return this.jf.jo;
    }

    @Override
    public void onCreate() {
        super.onCreate();
        this.lp = new h(-1L, getContext());
    }

    @Override
    public void onUnbind() {
        super.onUnbind();
        this.lp.jv();
    }
}
