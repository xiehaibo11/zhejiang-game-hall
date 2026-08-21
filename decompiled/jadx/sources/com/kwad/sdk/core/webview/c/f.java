package com.kwad.sdk.core.webview.c;

import com.kwad.sdk.utils.t;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class f implements com.kwad.sdk.core.b {
    public final com.kwad.sdk.core.b ayV;
    public final int result = 1;

    public f(com.kwad.sdk.core.b bVar) {
        this.ayV = bVar;
    }

    @Override // com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override // com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "result", this.result);
        t.a(jSONObject, "data", this.ayV);
        return jSONObject;
    }
}
