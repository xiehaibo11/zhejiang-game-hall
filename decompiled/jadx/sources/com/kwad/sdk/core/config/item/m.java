package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class m extends a<Long> {
    public m(String str) {
        this(str, 0L);
    }

    public m(String str, Long l) {
        super(str, l);
    }

    @Override // com.kwad.sdk.core.config.item.b
    /* JADX INFO: renamed from: Ag, reason: merged with bridge method [inline-methods] */
    public final Long getValue() {
        return (Long) super.getValue();
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void a(SharedPreferences sharedPreferences) {
        setValue(Long.valueOf(sharedPreferences.getLong(getKey(), zZ().longValue())));
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void b(SharedPreferences.Editor editor) {
        editor.putLong(getKey(), getValue().longValue());
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void g(JSONObject jSONObject) {
        setValue(jSONObject != null ? Long.valueOf(jSONObject.optLong(getKey(), zZ().longValue())) : zZ());
    }
}
