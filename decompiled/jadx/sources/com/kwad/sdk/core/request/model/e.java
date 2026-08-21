package com.kwad.sdk.core.request.model;

import com.kwad.sdk.core.network.l;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class e implements com.kwad.sdk.core.b {
    private com.kwad.sdk.core.b auq;

    public static e Cx() {
        e eVar = new e();
        l lVar = (l) ServiceProvider.get(l.class);
        if (lVar != null) {
            eVar.auq = lVar.xp();
        }
        return eVar;
    }

    @Override // com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override // com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.a(jSONObject, "modeInfo", this.auq);
        return jSONObject;
    }
}
