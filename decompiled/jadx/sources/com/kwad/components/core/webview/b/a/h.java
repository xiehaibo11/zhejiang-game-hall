package com.kwad.components.core.webview.b.a;

/* JADX INFO: loaded from: classes2.dex */
public final class h extends v {
    private a Wy;

    public interface a {
        void a(h hVar);
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public int Wz;
    }

    public final void a(a aVar) {
        this.Wy = aVar;
    }

    @Override // com.kwad.components.core.webview.b.a.v, com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        super.a(str, cVar);
        a aVar = this.Wy;
        if (aVar != null) {
            aVar.a(this);
        }
    }

    public final void aN(boolean z) {
        int i = z ? 1 : 2;
        b bVar = new b();
        bVar.Wz = i;
        b(bVar);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "getPlayEndType";
    }

    @Override // com.kwad.components.core.webview.b.a.v, com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        super.onDestroy();
        this.Wy = null;
    }
}
