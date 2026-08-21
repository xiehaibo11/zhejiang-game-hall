package com.kwad.sdk.k.a;

import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ax;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    public int aGw = -1;
    public int aGx = -1;

    public static synchronized f Hm() {
        if (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xu()) {
            return null;
        }
        return ax.Hm();
    }

    private void a(f fVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        fVar.aGw = jSONObject.optInt("phoneCount", -1);
        fVar.aGx = jSONObject.optInt("activePhoneCount", -1);
        super.afterToJson(jSONObject);
    }

    private static JSONObject b(f fVar, JSONObject jSONObject) {
        t.putValue(jSONObject, "phoneCount", fVar.aGw);
        t.putValue(jSONObject, "activePhoneCount", fVar.aGx);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.response.a.a, com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
        a(this, jSONObject);
        afterParseJson(jSONObject);
    }

    @Override // com.kwad.sdk.core.response.a.a, com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObjectB = b(this, new JSONObject());
        afterToJson(jSONObjectB);
        return jSONObjectB;
    }
}
