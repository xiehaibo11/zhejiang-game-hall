package com.mbridge.msdk.mbjscommon.d;

import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.mbjscommon.windvane.h;
import org.json.JSONException;
import org.json.JSONObject;

public final class a {
    private static int b = 0;
    private static int c = 1;
    private String a;
    private String d;
    private String e;
    private WindVaneWebView f;

    private static class a {
        static a a = new a();
    }

    private a() {
        this.a = "ShakeCacheManager";
    }

    public static a a() {
        return a.a;
    }

    public final void a(Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("cache", this.e);
            a(obj, jSONObject);
        } catch (JSONException e) {
            a(obj, e.getMessage(), new JSONObject());
        }
    }

    public final void a(Object obj, WindVaneWebView windVaneWebView, String str, String str2, int i) {
        if ((!TextUtils.isEmpty(this.e) && this.e.equals(str)) || (TextUtils.isEmpty(this.e) && TextUtils.isEmpty(str))) {
            this.e = str2;
            if (!TextUtils.isEmpty(str2)) {
                try {
                    this.d = new JSONObject(str2).optString("sid");
                } catch (JSONException e) {
                    e.printStackTrace();
                }
            }
            this.f = windVaneWebView;
            a(obj, new JSONObject());
            return;
        }
        String str3 = this.e;
        if (windVaneWebView != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("currentCache", str3);
                a(obj, "cache had changed", jSONObject);
            } catch (JSONException e2) {
                e2.printStackTrace();
            }
        }
    }

    public final void a(Object obj, WindVaneWebView windVaneWebView, String str) {
        if (!TextUtils.isEmpty(this.e) && this.e.equals(str)) {
            this.e = "";
            this.f = null;
            if (windVaneWebView != null) {
                h.a().a(obj, "releaseShake", "");
            }
            a(obj, new JSONObject());
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("currentCache", this.e);
            a(obj, "cache is exception", jSONObject);
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    private void a(Object obj, JSONObject jSONObject) {
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("code", b);
            jSONObject2.put("message", "");
            jSONObject2.put("data", jSONObject);
            h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (Exception e) {
            a(obj, e.getMessage(), new JSONObject());
            z.a(this.a, e.getMessage());
        }
    }

    private void a(Object obj, String str, JSONObject jSONObject) {
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("code", c);
            jSONObject2.put("message", str);
            jSONObject2.put("data", jSONObject);
            h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (Exception e) {
            z.a(this.a, e.getMessage());
        }
    }
}
