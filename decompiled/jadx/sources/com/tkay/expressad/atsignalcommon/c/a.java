package com.tkay.expressad.atsignalcommon.c;

import android.text.TextUtils;
import android.util.Base64;
import android.webkit.WebView;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.j;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class a {
    private static int b = 0;
    private static int c = 1;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f6423a;
    private String d;
    private String e;
    private WindVaneWebView f;

    /* synthetic */ a(byte b2) {
        this();
    }

    /* JADX INFO: renamed from: com.tkay.expressad.atsignalcommon.c.a$a, reason: collision with other inner class name */
    private static class C0433a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static a f6424a = new a(0);

        private C0433a() {
        }
    }

    private a() {
        this.f6423a = "ShakeCacheManager";
    }

    public static a a() {
        return C0433a.f6424a;
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

    public final void a(Object obj, WindVaneWebView windVaneWebView, String str, String str2) {
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
            a(obj, windVaneWebView);
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

    private void a(Object obj, WindVaneWebView windVaneWebView, String str, String str2, String str3) {
        if ((str + str2 + str3).equals(this.d)) {
            a(obj, windVaneWebView);
        }
    }

    private static void a(Object obj, WindVaneWebView windVaneWebView) {
        if (windVaneWebView != null) {
            j.a().a(obj, "releaseShake", "");
        }
    }

    private static void b(Object obj) {
        a(obj, new JSONObject());
    }

    private static void a(Object obj, WebView webView, String str, String str2) {
        if (webView != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("currentCache", str);
                a(obj, str2, jSONObject);
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
    }

    private static void a(Object obj, JSONObject jSONObject) {
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("code", b);
            jSONObject2.put("message", "");
            jSONObject2.put("data", jSONObject);
            j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (Exception e) {
            a(obj, e.getMessage(), new JSONObject());
            e.getMessage();
        }
    }

    private static void a(Object obj, String str, JSONObject jSONObject) {
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("code", c);
            jSONObject2.put("message", str);
            jSONObject2.put("data", jSONObject);
            j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
        } catch (Exception e) {
            e.getMessage();
        }
    }
}
