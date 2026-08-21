package com.kwad.components.core.p.a;

import com.kwad.sdk.core.scene.URLPackage;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

public final class d implements com.kwad.sdk.core.b {
    public long Qr;
    public long photoId;

    @Override
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "photoId", this.photoId);
        t.putValue(jSONObject, URLPackage.KEY_AUTHOR_ID, this.Qr);
        return jSONObject;
    }
}
