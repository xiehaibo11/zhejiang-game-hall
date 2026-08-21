package com.kwad.components.core.webview.b.c;

public abstract class a extends com.kwad.sdk.mvp.Presenter implements com.kwad.components.core.webview.b.i {
    protected com.kwad.components.core.webview.b.c.b Xl;
    protected com.kwad.components.core.webview.b.h lp;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.b.a.o r1) {
            r0 = this;
            return
    }

    @Override
    public void a(com.kwad.components.core.webview.b.a.p r1) {
            r0 = this;
            return
    }

    @Override
    public void a(com.kwad.components.core.webview.b.b.t r1) {
            r0 = this;
            return
    }

    protected void a(com.kwad.components.core.webview.b.c.b r1) {
            r0 = this;
            return
    }

    public void a(com.kwad.sdk.components.l r1, com.kwad.sdk.core.webview.b r2) {
            r0 = this;
            return
    }

    public void a(com.kwad.sdk.core.webview.d.b.a r1) {
            r0 = this;
            return
    }

    @Override
    public void ah() {
            r3 = this;
            super.ah()
            java.lang.Object r0 = r3.Gk()
            com.kwad.components.core.webview.b.c.b r0 = (com.kwad.components.core.webview.b.c.b) r0
            r3.Xl = r0
            r3.a(r0)
            com.kwad.components.core.webview.b.h r0 = r3.lp
            if (r0 != 0) goto L18
            com.kwad.components.core.webview.b.h r0 = r3.hU()
            r3.lp = r0
        L18:
            com.kwad.components.core.webview.b.c.b r0 = r3.Xl
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r0.QO
            if (r0 == 0) goto L27
            com.kwad.components.core.webview.b.h r0 = r3.lp
            com.kwad.components.core.webview.b.c.b r1 = r3.Xl
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = r1.QO
            r0.a(r1)
        L27:
            com.kwad.components.core.webview.b.h r0 = r3.lp
            com.kwad.components.core.webview.b.c.b r1 = r3.Xl
            android.app.Activity r1 = r1.mActivity
            com.kwad.components.core.webview.b.c.b r2 = r3.Xl
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public final void b(com.kwad.components.core.webview.b.b.m r1) {
            r0 = this;
            return
    }

    public void b(com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0 = this;
            com.kwad.components.core.webview.b.c.b r1 = r0.Xl
            com.kwad.components.core.webview.b.c.d r1 = r1.VP
            if (r1 == 0) goto Ld
            com.kwad.components.core.webview.b.c.b r1 = r0.Xl
            com.kwad.components.core.webview.b.c.d r1 = r1.VP
            r1.dismiss()
        Ld:
            return
    }

    @Override
    public void em() {
            r0 = this;
            return
    }

    @Override
    public com.kwad.sdk.widget.e getTouchCoordsView() {
            r1 = this;
            com.kwad.components.core.webview.b.c.b r0 = r1.Xl
            com.kwad.sdk.widget.e r0 = r0.Xm
            return r0
    }

    protected com.kwad.components.core.webview.b.h hU() {
            r4 = this;
            com.kwad.components.core.webview.b.h r0 = new com.kwad.components.core.webview.b.h
            com.kwad.components.core.webview.b.c.b r1 = r4.Xl
            long r1 = r1.xI
            android.content.Context r3 = r4.getContext()
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.h r0 = r1.lp
            r0.jv()
            r0 = 0
            r1.lp = r0
            return
    }
}
