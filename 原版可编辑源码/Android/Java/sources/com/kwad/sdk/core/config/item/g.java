package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

public final class g extends a<Float> {
    public g(String str, float f) {
        super(str, Float.valueOf(f));
    }

    @Override
    public final Float getValue() {
        return (Float) super.getValue();
    }

    @Override
    public final void a(SharedPreferences sharedPreferences) {
        setValue(Float.valueOf(sharedPreferences.getFloat(getKey(), zZ().floatValue())));
    }

    @Override
    public final void b(SharedPreferences.Editor editor) {
        editor.putFloat(getKey(), getValue().floatValue());
    }

    @Override
    public final void g(JSONObject jSONObject) {
        setValue(jSONObject != null ? Float.valueOf((float) jSONObject.optDouble(getKey(), zZ().floatValue())) : zZ());
    }
}
