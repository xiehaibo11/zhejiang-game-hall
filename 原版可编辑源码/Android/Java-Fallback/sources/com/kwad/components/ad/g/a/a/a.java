package com.kwad.components.ad.g.a.a;

public final class a implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c nA;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.nA = r2
            return
    }

    public final void eW() {
            r2 = this;
            com.kwad.sdk.core.webview.c.c r0 = r2.nA
            if (r0 == 0) goto L8
            r1 = 0
            r0.a(r1)
        L8:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerPlayStateResetListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.nA = r0
            return
    }
}
