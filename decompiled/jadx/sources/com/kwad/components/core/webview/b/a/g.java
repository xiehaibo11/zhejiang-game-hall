package com.kwad.components.core.webview.b.a;

/* JADX INFO: loaded from: classes2.dex */
public final class g implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.b.b.k Wx;

    public g(com.kwad.components.core.webview.b.b.k kVar) {
        this.Wx = kVar;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.components.core.webview.b.b.k kVar = this.Wx;
        if (kVar != null) {
            cVar.a(kVar);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "getKsAdExtraData";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
