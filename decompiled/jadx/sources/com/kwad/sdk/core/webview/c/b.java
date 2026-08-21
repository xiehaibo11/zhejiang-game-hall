package com.kwad.sdk.core.webview.c;

import com.kwad.sdk.utils.t;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements com.kwad.sdk.core.b {
    public String ayT;
    public String ayU;
    public String data;

    @Override // com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        this.ayT = jSONObject.optString("action");
        this.data = jSONObject.optString("data");
        this.ayU = jSONObject.optString(com.alipay.sdk.authjs.a.b);
    }

    @Override // com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "action", this.ayT);
        t.putValue(jSONObject, "data", this.data);
        t.putValue(jSONObject, com.alipay.sdk.authjs.a.b, this.ayU);
        return jSONObject;
    }
}
