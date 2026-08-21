package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class l extends b<String> {
    private boolean amH;

    public l(String str, String str2) {
        super(str, str2);
        this.amH = false;
    }

    public l(String str, String str2, boolean z) {
        this(str, str2);
        this.amH = false;
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void a(SharedPreferences sharedPreferences) {
        if (this.amH) {
            setValue(sharedPreferences.getString(getKey(), zZ()));
        }
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void b(SharedPreferences.Editor editor) {
        if (this.amH) {
            editor.putString(getKey(), getValue());
        }
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void g(JSONObject jSONObject) {
        JSONObject jSONObjectOptJSONObject;
        setValue((jSONObject == null || (jSONObjectOptJSONObject = jSONObject.optJSONObject(getKey())) == null) ? zZ() : jSONObjectOptJSONObject.toString());
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final String getValue() {
        return (String) super.getValue();
    }
}
