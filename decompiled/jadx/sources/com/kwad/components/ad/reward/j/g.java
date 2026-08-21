package com.kwad.components.ad.reward.j;

/* JADX INFO: loaded from: classes2.dex */
public final class g implements com.kwad.sdk.core.webview.c.a {
    private int xz;

    public g(int i) {
        this.xz = i;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.components.core.webview.b.b.f fVar = new com.kwad.components.core.webview.b.b.f();
        fVar.WU = this.xz;
        cVar.a(fVar);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "getCloseDelaySeconds";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
