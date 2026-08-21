package com.kwad.sdk.core.scene;

import android.support.v4.os.EnvironmentCompat;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

public class EntryPackage extends URLPackage {
    private static final long serialVersionUID = 8251709184937662571L;
    public String entryId;
    public String entryPageSource;

    public EntryPackage() {
        this.entryPageSource = EnvironmentCompat.MEDIA_UNKNOWN;
    }

    public EntryPackage(String str, int i) {
        super(str, i);
        this.entryPageSource = EnvironmentCompat.MEDIA_UNKNOWN;
    }

    @Override
    public void parseJson(JSONObject jSONObject) {
        super.parseJson(jSONObject);
        if (jSONObject == null) {
            return;
        }
        this.entryPageSource = jSONObject.optString("entryPageSource");
        this.entryId = jSONObject.optString("entryId");
    }

    @Override
    public JSONObject toJson() {
        JSONObject json = super.toJson();
        t.putValue(json, "entryPageSource", this.entryPageSource);
        t.putValue(json, "entryId", this.entryId);
        return json;
    }
}
