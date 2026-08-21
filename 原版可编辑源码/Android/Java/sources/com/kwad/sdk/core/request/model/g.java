package com.kwad.sdk.core.request.model;

import com.kwad.sdk.utils.t;
import org.json.JSONObject;

public final class g implements com.kwad.sdk.core.b {
    public int ajr;
    public int ajs;
    public String ajt;
    private String aux;
    private String auy;

    public static g Cy() {
        return new g();
    }

    public final void dC(String str) {
        this.auy = str;
    }

    @Override
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "user_id", this.aux);
        t.putValue(jSONObject, "thirdUserId", this.auy);
        int i = this.ajr;
        if (i != 0) {
            t.putValue(jSONObject, "thirdAge", i);
        }
        int i2 = this.ajs;
        if (i2 != 0) {
            t.putValue(jSONObject, "thirdGender", i2);
        }
        t.putValue(jSONObject, "thirdInterest", this.ajt);
        return jSONObject;
    }
}
