package com.kwad.components.core.webview.b;

public class e implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c nA;


    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.sdk.core.webview.c.c a(com.kwad.components.core.webview.b.e r0) {
            com.kwad.sdk.core.webview.c.c r0 = r0.nA
            return r0
    }

    @Override
    public void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.nA = r2
            return
    }

    public final void b(com.kwad.sdk.core.response.a.a r2) {
            r1 = this;
            com.kwad.sdk.core.webview.c.c r0 = r1.nA
            if (r0 == 0) goto Lc
            com.kwad.components.core.webview.b.e$1 r0 = new com.kwad.components.core.webview.b.e$1
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
        Lc:
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "giveRewardInAdvance"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
