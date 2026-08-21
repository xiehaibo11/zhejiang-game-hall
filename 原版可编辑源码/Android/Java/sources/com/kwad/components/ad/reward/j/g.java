package com.kwad.components.ad.reward.j;

public final class g implements com.kwad.sdk.core.webview.c.a {
    private int xz;

    public g(int i) {
        this.xz = i;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.components.core.webview.b.b.f fVar = new com.kwad.components.core.webview.b.b.f();
        fVar.WU = this.xz;
        cVar.a(fVar);
    }

    @Override
    public final String getKey() {
        return "getCloseDelaySeconds";
    }

    @Override
    public final void onDestroy() {
    }
}
