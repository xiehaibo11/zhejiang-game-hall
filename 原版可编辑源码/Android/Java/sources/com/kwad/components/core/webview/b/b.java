package com.kwad.components.core.webview.b;

public final class b implements com.kwad.sdk.core.webview.c.a {
    private a VL;

    public interface a {
        void eo();
    }

    public b(a aVar) {
        this.VL = aVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        a aVar = this.VL;
        if (aVar != null) {
            aVar.eo();
        }
    }

    @Override
    public final String getKey() {
        return "cardImpression";
    }

    @Override
    public final void onDestroy() {
    }
}
