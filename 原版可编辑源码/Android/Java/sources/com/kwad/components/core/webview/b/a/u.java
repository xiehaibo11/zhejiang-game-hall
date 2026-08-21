package com.kwad.components.core.webview.b.a;

import org.json.JSONException;
import org.json.JSONObject;

public final class u implements com.kwad.sdk.core.webview.c.a {
    private a WI;

    public interface a {
        void a(com.kwad.components.core.webview.b.b.m mVar);
    }

    public final void a(a aVar) {
        this.WI = aVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (this.WI != null) {
            com.kwad.components.core.webview.b.b.m mVar = new com.kwad.components.core.webview.b.b.m();
            try {
                mVar.parseJson(new JSONObject(str));
                this.WI.a(mVar);
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
    }

    @Override
    public final String getKey() {
        return "updateVideoMuteState";
    }

    @Override
    public final void onDestroy() {
        this.WI = null;
    }
}
