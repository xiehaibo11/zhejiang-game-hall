package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends a<Double> {
    public f(String str, Double d) {
        super(str, d);
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // com.kwad.sdk.core.config.item.b
    /* JADX INFO: renamed from: Ac, reason: merged with bridge method [inline-methods] */
    public Double getValue() {
        return (Double) super.getValue();
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void a(SharedPreferences sharedPreferences) {
        setValue(Double.valueOf(Double.parseDouble(sharedPreferences.getString(getKey(), zZ().toString()))));
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void b(SharedPreferences.Editor editor) {
        editor.putString(getKey(), getValue().toString());
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void g(JSONObject jSONObject) {
        setValue(jSONObject != null ? Double.valueOf(jSONObject.optDouble(getKey(), zZ().doubleValue())) : zZ());
    }
}
