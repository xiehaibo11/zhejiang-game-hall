package com.kwad.components.ad.reward.j;

import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class k implements com.kwad.sdk.core.webview.c.a {
    private a xB;

    public interface a {
        void d(com.kwad.components.core.webview.b.b.q qVar);
    }

    public final void a(a aVar) {
        this.xB = aVar;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (this.xB != null) {
            com.kwad.components.core.webview.b.b.q qVar = new com.kwad.components.core.webview.b.b.q();
            try {
                qVar.parseJson(new JSONObject(str));
                this.xB.d(qVar);
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "showPlayEnd";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.xB = null;
    }
}
