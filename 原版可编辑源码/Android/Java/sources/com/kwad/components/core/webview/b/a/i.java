package com.kwad.components.core.webview.b.a;

import org.json.JSONException;
import org.json.JSONObject;

public final class i implements com.kwad.sdk.core.webview.c.a {
    private a WA;

    public interface a {
        void a(com.kwad.sdk.core.webview.d.b.a aVar);
    }

    public i(a aVar) {
        this.WA = aVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.sdk.core.webview.d.b.a aVar = new com.kwad.sdk.core.webview.d.b.a();
        try {
            aVar.parseJson(new JSONObject(str));
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
        a aVar2 = this.WA;
        if (aVar2 != null) {
            aVar2.a(aVar);
        }
    }

    @Override
    public final String getKey() {
        return "notifyClickAd";
    }

    @Override
    public final void onDestroy() {
    }
}
