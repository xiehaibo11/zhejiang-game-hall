package com.kwad.components.core.r;

public final class c extends com.kwad.components.core.webview.b.c.c {


    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.kwad.components.core.webview.b.d qa() {
            r1 = this;
            com.kwad.components.core.r.c$1 r0 = new com.kwad.components.core.r.c$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public final void a(com.kwad.sdk.components.l r1, com.kwad.sdk.core.webview.b r2) {
            r0 = this;
            com.kwad.components.core.webview.b.d r2 = r0.qa()
            r1.c(r2)
            return
    }

    @Override
    public final void b(com.kwad.sdk.commercial.model.WebCloseStatus r1) {
            r0 = this;
            super.b(r1)
            boolean r1 = r1.interactSuccess
            if (r1 == 0) goto Lf
            com.kwad.components.core.webview.b.c.b r1 = r0.Xl
            com.kwad.components.core.webview.b.c.d r1 = r1.VP
            r1.dismiss()
            return
        Lf:
            com.kwad.components.core.webview.b.c.b r1 = r0.Xl
            android.app.Activity r1 = r1.mActivity
            r1.finish()
            return
    }

    @Override
    public final void cc() {
            r0 = this;
            super.cc()
            return
    }
}
