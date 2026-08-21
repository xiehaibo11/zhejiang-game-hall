package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import android.text.TextUtils;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class h extends b<a> {

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public String amD = "";
        public String amE = "";
    }

    public h() {
        super("idMapping", new a());
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void a(SharedPreferences sharedPreferences) {
        a value = getValue();
        if (value == null) {
            value = new a();
        }
        String string = sharedPreferences.getString(getKey(), "");
        if (!TextUtils.isEmpty(string)) {
            try {
                value.parseJson(new JSONObject(cx(string)));
            } catch (JSONException e) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            }
        }
        setValue(value);
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void b(SharedPreferences.Editor editor) {
        if (getValue() == null || getValue().toJson() == null) {
            editor.putString(getKey(), "");
        } else {
            editor.putString(getKey(), cw(getValue().toJson().toString()));
        }
    }

    @Override // com.kwad.sdk.core.config.item.b
    public final void g(JSONObject jSONObject) {
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(getKey());
        if (jSONObjectOptJSONObject == null) {
            return;
        }
        a aVar = new a();
        aVar.parseJson(jSONObjectOptJSONObject);
        setValue(aVar);
    }

    public final String getImei() {
        a value = getValue();
        return (value == null || TextUtils.isEmpty(value.amD)) ? "" : value.amD;
    }

    public final String getOaid() {
        a value = getValue();
        return (value == null || TextUtils.isEmpty(value.amE)) ? "" : value.amE;
    }
}
