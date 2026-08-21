package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import org.json.JSONException;
import org.json.JSONObject;

public final class j extends b<a> {

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int amF = 180000;
        public int amG = com.tkay.expressad.foundation.g.a.bM;
    }

    public j(String str) {
        super(str, new a());
    }

    @Override
    public final void a(SharedPreferences sharedPreferences) {
        a value = getValue();
        if (value == null) {
            value = new a();
        }
        JSONObject jSONObject = null;
        try {
            jSONObject = new JSONObject(sharedPreferences.getString(getKey(), ""));
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        if (jSONObject != null) {
            value.parseJson(jSONObject);
        }
        setValue(value);
    }

    @Override
    public final void b(SharedPreferences.Editor editor) {
        String key;
        String string;
        if (getValue() == null || getValue().toJson() == null) {
            key = getKey();
            string = "";
        } else {
            key = getKey();
            string = getValue().toJson().toString();
        }
        editor.putString(key, string);
    }

    @Override
    public final void g(JSONObject jSONObject) {
        JSONObject jSONObjectOptJSONObject;
        if (jSONObject == null || (jSONObjectOptJSONObject = jSONObject.optJSONObject(getKey())) == null) {
            setValue(zZ());
            return;
        }
        a aVar = new a();
        aVar.parseJson(jSONObjectOptJSONObject);
        setValue(aVar);
    }
}
