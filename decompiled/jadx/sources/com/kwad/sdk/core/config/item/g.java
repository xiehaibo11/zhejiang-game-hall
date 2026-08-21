package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class g extends a<Float> {
    public g(String str, float f) {
        super(str, Float.valueOf(f));
    }

    @Override // com.kwad.sdk.core.config.item.b
    /* JADX INFO: renamed from: Ad, reason: merged with bridge method [inline-methods] */
    public final Float getValue() {
        return (Float) super.getValue();
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void a(SharedPreferences sharedPreferences) {
        setValue(Float.valueOf(sharedPreferences.getFloat(getKey(), zZ().floatValue())));
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void b(SharedPreferences.Editor editor) {
        editor.putFloat(getKey(), getValue().floatValue());
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void g(JSONObject jSONObject) {
        setValue(jSONObject != null ? Float.valueOf((float) jSONObject.optDouble(getKey(), zZ().floatValue())) : zZ());
    }
}
