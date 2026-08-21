package com.kwad.components.core.webview.b;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements com.kwad.sdk.core.webview.c.a {
    private a VL;

    public interface a {
        void eo();
    }

    public b(a aVar) {
        this.VL = aVar;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        a aVar = this.VL;
        if (aVar != null) {
            aVar.eo();
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "cardImpression";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
    }
}
