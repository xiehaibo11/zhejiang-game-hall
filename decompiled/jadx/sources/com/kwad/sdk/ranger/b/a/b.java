package com.kwad.sdk.ranger.b.a;

import com.kwad.sdk.utils.t;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class b extends com.kwad.sdk.core.response.a.a {
    public List<a> aHr;
    public int avp;

    @Override // com.kwad.sdk.core.response.a.a, com.kwad.sdk.core.b
    public JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        for (a aVar : this.aHr) {
            t.putValue(jSONObject, aVar.key, aVar.value);
        }
        t.putValue(jSONObject, "func_ratio_count", this.avp);
        JSONObject jSONObject2 = new JSONObject();
        t.putValue(jSONObject2, "ranger", jSONObject);
        return jSONObject2;
    }
}
