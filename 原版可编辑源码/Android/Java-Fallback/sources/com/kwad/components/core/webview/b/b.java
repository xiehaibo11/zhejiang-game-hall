package com.kwad.components.core.webview.b;

public final class b implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.b.b.a VL;

    public interface a {
        void eo();
    }

    public b(com.kwad.components.core.webview.b.b.a r1) {
            r0 = this;
            r0.<init>()
            r0.VL = r1
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            com.kwad.components.core.webview.b.b$a r1 = r0.VL
            if (r1 == 0) goto L7
            r1.eo()
        L7:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "cardImpression"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
