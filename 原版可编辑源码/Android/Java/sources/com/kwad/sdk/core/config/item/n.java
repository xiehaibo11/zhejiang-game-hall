package com.kwad.sdk.core.config.item;

import android.content.SharedPreferences;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import org.json.JSONObject;

public final class n extends b<String> {
    private static volatile String[] amI;

    public n(String str, String str2) {
        super(str, str2);
        amI = null;
    }

    public static boolean Q(long j) {
        if (amI == null) {
            return false;
        }
        for (String str : amI) {
            if (str != null && String.valueOf(j).equals(str.trim())) {
                return true;
            }
        }
        return false;
    }

    private static void cy(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        amI = str.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
    }

    @Override
    public final void a(SharedPreferences sharedPreferences) {
        String string = sharedPreferences.getString(getKey(), zZ());
        setValue(string);
        cy(string);
    }

    @Override
    public final void b(SharedPreferences.Editor editor) {
        editor.putString(getKey(), getValue());
    }

    @Override
    public final void g(JSONObject jSONObject) {
        if (jSONObject == null) {
            setValue(zZ());
            return;
        }
        String strOptString = jSONObject.optString(getKey(), zZ());
        setValue(strOptString);
        cy(strOptString);
    }
}
