package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

public final class l extends b<String> {
    private boolean amH;

    public l(String str, String str2) {
        super(str, str2);
        this.amH = false;
    }

    public l(String str, String str2, boolean z) {
        this(str, str2);
        this.amH = false;
    }

    @Override
    public final void a(SharedPreferences sharedPreferences) {
        if (this.amH) {
            setValue(sharedPreferences.getString(getKey(), zZ()));
        }
    }

    @Override
    public final void b(SharedPreferences.Editor editor) {
        if (this.amH) {
            editor.putString(getKey(), getValue());
        }
    }

    @Override
    public final void g(JSONObject jSONObject) {
        JSONObject jSONObjectOptJSONObject;
        setValue((jSONObject == null || (jSONObjectOptJSONObject = jSONObject.optJSONObject(getKey())) == null) ? zZ() : jSONObjectOptJSONObject.toString());
    }

    @Override
    public final String getValue() {
        return (String) super.getValue();
    }
}
