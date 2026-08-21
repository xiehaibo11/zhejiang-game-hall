package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class k extends a<Integer> {
    public k(String str, Integer num) {
        super(str, num);
    }

    public final boolean Ae() {
        return getValue().intValue() == 1;
    }

    @Override // com.kwad.sdk.core.config.item.b
    /* JADX INFO: renamed from: Af, reason: merged with bridge method [inline-methods] */
    public final Integer getValue() {
        return (Integer) super.getValue();
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void a(SharedPreferences sharedPreferences) {
        setValue(Integer.valueOf(sharedPreferences.getInt(getKey(), zZ().intValue())));
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void b(SharedPreferences.Editor editor) {
        editor.putInt(getKey(), getValue().intValue());
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void g(JSONObject jSONObject) {
        setValue(jSONObject != null ? Integer.valueOf(jSONObject.optInt(getKey(), zZ().intValue())) : zZ());
    }
}
