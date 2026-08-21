package com.kwad.components.ad.reward.j;

import org.json.JSONException;
import org.json.JSONObject;

public final class d implements com.kwad.sdk.core.webview.c.a {
    private a xu;

    public interface a {
        void a(com.kwad.components.core.webview.b.b.p pVar);
    }

    public final void a(a aVar) {
        this.xu = aVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.components.core.webview.b.b.p pVar = new com.kwad.components.core.webview.b.b.p();
        try {
            pVar.parseJson(new JSONObject(str));
            if (this.xu != null) {
                this.xu.a(pVar);
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    @Override
    public final String getKey() {
        return "clickCall";
    }

    @Override
    public final void onDestroy() {
        this.xu = null;
    }
}
