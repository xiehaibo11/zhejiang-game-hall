package com.kwad.components.core.webview.b.a;

public final class g implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.b.b.k Wx;

    public g(com.kwad.components.core.webview.b.b.k r1) {
            r0 = this;
            r0.<init>()
            r0.Wx = r1
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            com.kwad.components.core.webview.b.b.k r1 = r0.Wx
            if (r1 == 0) goto L7
            r2.a(r1)
        L7:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getKsAdExtraData"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
