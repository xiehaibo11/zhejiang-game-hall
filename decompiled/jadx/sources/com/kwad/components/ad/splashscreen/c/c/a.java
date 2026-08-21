package com.kwad.components.ad.splashscreen.c.c;

import android.app.Activity;
import com.kwad.components.ad.splashscreen.c.e;
import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.h;
import com.kwad.components.core.webview.b.i;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;
import com.kwad.sdk.core.webview.b;

/* JADX INFO: loaded from: classes2.dex */
public abstract class a extends e implements i {
    private h lp;

    @Override // com.kwad.components.core.webview.b.i
    public final void a(o oVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(p pVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(t tVar) {
    }

    public void a(am amVar) {
    }

    public void a(l lVar, b bVar) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
    }

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public void ah() {
        super.ah();
        this.lp.a((Activity) null, this.CM.mAdTemplate, this);
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void b(m mVar) {
    }

    public void b(WebCloseStatus webCloseStatus) {
    }

    @Override // com.kwad.components.core.webview.b.i
    public final void em() {
    }

    @Override // com.kwad.components.core.webview.b.i
    public com.kwad.sdk.widget.e getTouchCoordsView() {
        return this.CM.mRootContainer;
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public void onCreate() {
        super.onCreate();
        this.lp = new h(getContext(), 1000);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public void onUnbind() {
        super.onUnbind();
        this.lp.jv();
    }
}
