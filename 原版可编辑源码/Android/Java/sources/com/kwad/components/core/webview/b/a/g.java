package com.kwad.components.core.webview.b.a;

public final class g implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.components.core.webview.b.b.k Wx;

    public g(com.kwad.components.core.webview.b.b.k kVar) {
        this.Wx = kVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.components.core.webview.b.b.k kVar = this.Wx;
        if (kVar != null) {
            cVar.a(kVar);
        }
    }

    @Override
    public final String getKey() {
        return "getKsAdExtraData";
    }

    @Override
    public final void onDestroy() {
    }
}
