package com.kwad.components.ad.reward.j;

public final class g implements com.kwad.sdk.core.webview.c.a {
    private int xz;

    public g(int r1) {
            r0 = this;
            r0.<init>()
            r0.xz = r1
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            com.kwad.components.core.webview.b.b.f r2 = new com.kwad.components.core.webview.b.b.f
            r2.<init>()
            int r0 = r1.xz
            r2.WU = r0
            r3.a(r2)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "getCloseDelaySeconds"
            return r0
    }

    @Override
    public final void onDestroy() {
            r0 = this;
            return
    }
}
