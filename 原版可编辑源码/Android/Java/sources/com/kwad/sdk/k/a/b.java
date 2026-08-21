package com.kwad.sdk.k.a;

import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ax;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

public final class b extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    public int aGl;
    public int aGm;
    public int aGn;

    public b(int i, int i2, int i3) {
        this.aGl = i;
        this.aGm = i2;
        this.aGn = i3;
    }

    public static synchronized b Hl() {
        if (!((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xw()) {
            return null;
        }
        return ax.Hl();
    }

    private static void a(b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.aGl = jSONObject.optInt("cellId", -1);
        bVar.aGm = jSONObject.optInt("lac", -1);
        bVar.aGn = jSONObject.optInt("bsss", -1);
    }

    private static JSONObject b(b bVar, JSONObject jSONObject) {
        t.putValue(jSONObject, "cellId", bVar.aGl);
        t.putValue(jSONObject, "lac", bVar.aGm);
        t.putValue(jSONObject, "bsss", bVar.aGn);
        return jSONObject;
    }

    @Override
    public final void parseJson(JSONObject jSONObject) {
        a(this, jSONObject);
        super.afterParseJson(jSONObject);
    }

    @Override
    public final JSONObject toJson() {
        return b(this, new JSONObject());
    }
}
