package com.kwad.sdk.core.webview.c;

import com.kwad.sdk.utils.t;
import org.json.JSONObject;

public final class e implements com.kwad.sdk.core.b {
    private final String aiE;
    private final int result;

    public e(int i, String str) {
        this.result = i;
        this.aiE = str;
    }

    @Override
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "result", this.result);
        t.putValue(jSONObject, "error_msg", this.aiE);
        return jSONObject;
    }
}
