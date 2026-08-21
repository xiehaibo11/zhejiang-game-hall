package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import android.text.TextUtils;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class p extends a<String> {
    public p(String str, String str2) {
        super(str, str2);
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void a(SharedPreferences sharedPreferences) {
        setValue(cx(sharedPreferences.getString(getKey(), zZ())));
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void b(SharedPreferences.Editor editor) {
        editor.putString(getKey(), cw(getValue()));
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void g(JSONObject jSONObject) {
        String strOptString = jSONObject != null ? jSONObject.optString(getKey(), zZ()) : null;
        if (TextUtils.isEmpty(strOptString)) {
            setValue(zZ());
        } else {
            setValue(strOptString);
        }
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final String getValue() {
        return (String) super.getValue();
    }
}
