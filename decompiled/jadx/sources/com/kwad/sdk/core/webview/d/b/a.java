package com.kwad.sdk.core.webview.d.b;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    public boolean JC;
    public String JT;

    @Deprecated
    public boolean UX;
    public int UZ;
    public c Va;
    public int azc;
    public int azd;
    public int jG;
    public boolean JK = true;
    public long creativeId = -1;
    public int adStyle = -1;

    public final boolean Ek() {
        return 1 == this.UZ;
    }

    @Override // com.kwad.sdk.core.response.a.a, com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
        super.parseJson(jSONObject);
        try {
            if (this.jG == 0 && this.azd == 0 && jSONObject != null && jSONObject.has("logParam")) {
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("logParam");
                this.jG = jSONObjectOptJSONObject.getInt("itemClickType");
                this.azd = jSONObjectOptJSONObject.getInt("sceneType");
            }
        } catch (Throwable unused) {
        }
    }
}
