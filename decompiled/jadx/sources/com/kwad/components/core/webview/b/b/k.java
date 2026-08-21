package com.kwad.components.core.webview.b.b;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class k extends com.kwad.sdk.core.response.a.a {
    public int WW;
    public int WX = -1;
    public int WY;

    @Override // com.kwad.sdk.core.response.a.a, com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        com.kwad.sdk.utils.t.putValue(jSONObject, "insertScreenAdShowStrategy", this.WW);
        com.kwad.sdk.utils.t.putValue(jSONObject, "isAutoShow", this.WY);
        int i = this.WX;
        if (i != -1) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "triggerType", i);
        }
        return jSONObject;
    }
}
