package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends a<Boolean> {
    public d(String str, boolean z) {
        super(str, Boolean.valueOf(z));
    }

    @Override // com.kwad.sdk.core.config.item.b
    /* JADX INFO: renamed from: Aa, reason: merged with bridge method [inline-methods] */
    public final Boolean getValue() {
        return (Boolean) super.getValue();
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void a(SharedPreferences sharedPreferences) {
        setValue(Boolean.valueOf(sharedPreferences.getBoolean(getKey(), zZ().booleanValue())));
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void b(SharedPreferences.Editor editor) {
        editor.putBoolean(getKey(), getValue().booleanValue());
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void g(JSONObject jSONObject) {
        setValue(jSONObject != null ? Boolean.valueOf(jSONObject.optBoolean(getKey(), zZ().booleanValue())) : zZ());
    }
}
