package com.huawei.agconnect.config.a;

import android.util.Log;
import java.io.IOException;
import java.io.InputStream;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
class f implements d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final JSONObject f1936a;

    f(InputStream inputStream) {
        this.f1936a = a(inputStream);
    }

    private JSONObject a(InputStream inputStream) {
        String str;
        if (inputStream != null) {
            try {
                return new JSONObject(j.a(inputStream, "UTF-8"));
            } catch (IOException unused) {
                str = "IOException when reading the 'Config' from InputStream.";
                Log.e("InputStreamReader", str);
                return new JSONObject();
            } catch (JSONException unused2) {
                str = "JSONException when reading the 'Config' from InputStream.";
                Log.e("InputStreamReader", str);
                return new JSONObject();
            }
        }
        return new JSONObject();
    }

    @Override // com.huawei.agconnect.config.a.d
    public String a(String str, String str2) {
        JSONObject jSONObject;
        int i;
        if (str.endsWith("/")) {
            return str2;
        }
        String[] strArrSplit = str.split("/");
        try {
            jSONObject = this.f1936a;
        } catch (JSONException unused) {
            Log.w("InputStreamReader", "JSONException when reading 'path': " + str);
        }
        for (i = 1; i < strArrSplit.length; i++) {
            if (i == strArrSplit.length - 1) {
                str = jSONObject.get(strArrSplit[i]).toString();
                return str;
            }
            jSONObject = jSONObject.getJSONObject(strArrSplit[i]);
            return str2;
        }
        return str2;
    }

    public String toString() {
        return "InputStreamReader{config=" + this.f1936a.toString().hashCode() + '}';
    }
}
