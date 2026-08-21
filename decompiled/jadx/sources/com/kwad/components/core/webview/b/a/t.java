package com.kwad.components.core.webview.b.a;

import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class t implements com.kwad.sdk.core.webview.c.a {
    private a WH;

    public interface a {
        void b(com.kwad.components.core.webview.b.b.t tVar);
    }

    public final void a(a aVar) {
        this.WH = aVar;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (this.WH != null) {
            com.kwad.components.core.webview.b.b.t tVar = new com.kwad.components.core.webview.b.b.t();
            try {
                try {
                    tVar.parseJson(new JSONObject(str));
                } catch (JSONException e) {
                    e.printStackTrace();
                }
            } finally {
                this.WH.b(tVar);
            }
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "skipVideo";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.WH = null;
    }
}
