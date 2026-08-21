package com.kwad.components.core.webview.jshandler;

import org.json.JSONObject;

public final class t implements com.kwad.sdk.core.webview.c.a {
    protected final com.kwad.sdk.core.webview.b TL;
    protected b Uc;

    public static class a implements com.kwad.sdk.core.b {
        public int height;
        public int width;

        @Override
        public final void parseJson(JSONObject jSONObject) {
        }

        @Override
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            com.kwad.sdk.utils.t.putValue(jSONObject, "width", this.width);
            com.kwad.sdk.utils.t.putValue(jSONObject, "height", this.height);
            return jSONObject;
        }
    }

    public interface b {
        void a(a aVar);
    }

    public t(com.kwad.sdk.core.webview.b bVar) {
        this.TL = bVar;
    }

    public final void a(b bVar) {
        this.Uc = bVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        a aVar = new a();
        b bVar = this.Uc;
        if (bVar != null) {
            bVar.a(aVar);
        } else {
            aVar.width = this.TL.MT.getWidth();
            aVar.height = this.TL.MT.getHeight();
        }
        cVar.a(aVar);
    }

    @Override
    public final String getKey() {
        return "getContainerLimit";
    }

    @Override
    public final void onDestroy() {
    }
}
