package com.kwad.sdk.core.webview.c;

import com.kwad.sdk.utils.t;
import org.json.JSONObject;

public final class f implements com.kwad.sdk.core.b {
    public final com.kwad.sdk.core.b ayV;
    public final int result = 1;

    public f(com.kwad.sdk.core.b bVar) {
        this.ayV = bVar;
    }

    @Override
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "result", this.result);
        t.a(jSONObject, "data", this.ayV);
        return jSONObject;
    }
}
