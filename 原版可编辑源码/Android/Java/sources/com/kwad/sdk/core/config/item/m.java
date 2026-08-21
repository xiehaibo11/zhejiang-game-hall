package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

public final class m extends a<Long> {
    public m(String str) {
        this(str, 0L);
    }

    public m(String str, Long l) {
        super(str, l);
    }

    @Override
    public final Long getValue() {
        return (Long) super.getValue();
    }

    @Override
    public final void a(SharedPreferences sharedPreferences) {
        setValue(Long.valueOf(sharedPreferences.getLong(getKey(), zZ().longValue())));
    }

    @Override
    public final void b(SharedPreferences.Editor editor) {
        editor.putLong(getKey(), getValue().longValue());
    }

    @Override
    public final void g(JSONObject jSONObject) {
        setValue(jSONObject != null ? Long.valueOf(jSONObject.optLong(getKey(), zZ().longValue())) : zZ());
    }
}
