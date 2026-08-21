package com.kwad.components.core.webview.jshandler;

import com.kwad.sdk.KsAdSDKImpl;
import org.json.JSONObject;

public final class x implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;

    public static final class a implements com.kwad.sdk.core.b {
        private int screenOrientation;

        @Override
        public final void parseJson(JSONObject jSONObject) {
        }

        @Override
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenOrientation", this.screenOrientation);
            return jSONObject;
        }
    }

    public x(com.kwad.sdk.core.webview.b bVar) {
        this.TL = bVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (this.TL.DY()) {
            cVar.onError(-1, "native adTemplate is null");
            return;
        }
        a aVar = new a();
        KsAdSDKImpl.get().getContext();
        aVar.screenOrientation = !com.kwad.sdk.utils.ai.IN() ? 1 : 0;
        cVar.a(aVar);
    }

    @Override
    public final String getKey() {
        return "getScreenOrientation";
    }

    @Override
    public final void onDestroy() {
    }
}
