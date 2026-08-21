package com.kwad.components.core.webview.jshandler;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class af implements com.kwad.sdk.core.webview.c.a {
    private a Vg;

    public interface a {
        void a(com.kwad.components.core.webview.a.b bVar);
    }

    public af(a aVar) {
        this.Vg = aVar;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.components.core.webview.a.b bVar = new com.kwad.components.core.webview.a.b();
        try {
            bVar.parseJson(new JSONObject(str));
            if (this.Vg != null) {
                this.Vg.a(bVar);
            }
        } catch (Exception e) {
            cVar.onError(-1, "");
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "openNewPage";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.Vg = null;
    }
}
