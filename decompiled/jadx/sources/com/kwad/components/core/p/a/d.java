package com.kwad.components.core.p.a;

import com.kwad.sdk.core.scene.URLPackage;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class d implements com.kwad.sdk.core.b {
    public long Qr;
    public long photoId;

    @Override // com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override // com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "photoId", this.photoId);
        t.putValue(jSONObject, URLPackage.KEY_AUTHOR_ID, this.Qr);
        return jSONObject;
    }
}
