package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

public final class d extends a<Boolean> {
    public d(String str, boolean z) {
        super(str, Boolean.valueOf(z));
    }

    @Override
    public final Boolean getValue() {
        return (Boolean) super.getValue();
    }

    @Override
    public final void a(SharedPreferences sharedPreferences) {
        setValue(Boolean.valueOf(sharedPreferences.getBoolean(getKey(), zZ().booleanValue())));
    }

    @Override
    public final void b(SharedPreferences.Editor editor) {
        editor.putBoolean(getKey(), getValue().booleanValue());
    }

    @Override
    public final void g(JSONObject jSONObject) {
        setValue(jSONObject != null ? Boolean.valueOf(jSONObject.optBoolean(getKey(), zZ().booleanValue())) : zZ());
    }
}
