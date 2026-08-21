package com.kwad.components.core.webview.b.c;

import com.kwad.components.core.webview.b.a.o;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.t;
import com.kwad.components.core.webview.b.h;
import com.kwad.components.core.webview.b.i;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.l;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.widget.e;

public abstract class a extends Presenter implements i {
    protected b Xl;
    protected h lp;

    @Override
    public final void a(o oVar) {
    }

    @Override
    public void a(p pVar) {
    }

    @Override
    public void a(t tVar) {
    }

    protected void a(b bVar) {
    }

    public void a(l lVar, com.kwad.sdk.core.webview.b bVar) {
    }

    public void a(com.kwad.sdk.core.webview.d.b.a aVar) {
    }

    @Override
    public void ah() {
        super.ah();
        b bVar = (b) Gk();
        this.Xl = bVar;
        a(bVar);
        if (this.lp == null) {
            this.lp = hU();
        }
        if (this.Xl.QO != null) {
            this.lp.a(this.Xl.QO);
        }
        this.lp.a(this.Xl.mActivity, this.Xl.mAdTemplate, this);
    }

    @Override
    public final void b(m mVar) {
    }

    public void b(WebCloseStatus webCloseStatus) {
        if (this.Xl.VP != null) {
            this.Xl.VP.dismiss();
        }
    }

    @Override
    public void em() {
    }

    @Override
    public e getTouchCoordsView() {
        return this.Xl.Xm;
    }

    protected h hU() {
        return new h(this.Xl.xI, getContext());
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.lp.jv();
        this.lp = null;
    }
}
