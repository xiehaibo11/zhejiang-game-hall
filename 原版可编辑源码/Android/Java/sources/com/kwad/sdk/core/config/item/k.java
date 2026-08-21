package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

public final class k extends a<Integer> {
    public k(String str, Integer num) {
        super(str, num);
    }

    public final boolean Ae() {
        return getValue().intValue() == 1;
    }

    @Override
    public final Integer getValue() {
        return (Integer) super.getValue();
    }

    @Override
    public final void a(SharedPreferences sharedPreferences) {
        setValue(Integer.valueOf(sharedPreferences.getInt(getKey(), zZ().intValue())));
    }

    @Override
    public final void b(SharedPreferences.Editor editor) {
        editor.putInt(getKey(), getValue().intValue());
    }

    @Override
    public final void g(JSONObject jSONObject) {
        setValue(jSONObject != null ? Integer.valueOf(jSONObject.optInt(getKey(), zZ().intValue())) : zZ());
    }
}
