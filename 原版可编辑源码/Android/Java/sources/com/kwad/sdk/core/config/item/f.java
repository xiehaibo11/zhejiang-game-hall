package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

public final class f extends a<Double> {
    public f(String str, Double d) {
        super(str, d);
    }

    @Override
    private Double getValue() {
        return (Double) super.getValue();
    }

    @Override
    public final void a(SharedPreferences sharedPreferences) {
        setValue(Double.valueOf(Double.parseDouble(sharedPreferences.getString(getKey(), zZ().toString()))));
    }

    @Override
    public final void b(SharedPreferences.Editor editor) {
        editor.putString(getKey(), getValue().toString());
    }

    @Override
    public final void g(JSONObject jSONObject) {
        setValue(jSONObject != null ? Double.valueOf(jSONObject.optDouble(getKey(), zZ().doubleValue())) : zZ());
    }
}
