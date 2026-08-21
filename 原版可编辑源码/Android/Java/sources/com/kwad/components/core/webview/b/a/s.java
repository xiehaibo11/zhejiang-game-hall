package com.kwad.components.core.webview.b.a;

import org.json.JSONException;
import org.json.JSONObject;

public final class s implements com.kwad.sdk.core.webview.c.a {
    private a WG;

    public interface a {
        void a(com.kwad.components.core.webview.b.b.s sVar);
    }

    public final void a(a aVar) {
        this.WG = aVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (this.WG != null) {
            com.kwad.components.core.webview.b.b.s sVar = new com.kwad.components.core.webview.b.b.s();
            try {
                sVar.parseJson(new JSONObject(str));
                this.WG.a(sVar);
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
    }

    @Override
    public final String getKey() {
        return "showToast";
    }

    @Override
    public final void onDestroy() {
        this.WG = null;
    }
}
