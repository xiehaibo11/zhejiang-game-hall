package com.alipay.sdk.data;

import android.content.Context;
import android.text.TextUtils;
import com.alipay.sdk.util.j;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f1140a = 3500;
    public static final String b = "https://h5.m.taobao.com/mlapp/olist.html";
    public static final int c = 10;
    public static final boolean d = true;
    public static final boolean e = true;
    public static final int f = 1000;
    public static final int g = 20000;
    public static final String h = "alipay_cashier_dynamic_config";
    public static final String i = "timeout";
    public static final String j = "st_sdk_config";
    public static final String k = "tbreturl";
    public static final String l = "launchAppSwitch";
    public static final String m = "configQueryInterval";
    public static final String n = "scheme_pay";
    public static final String o = "intercept_batch";
    private static a w;
    private int q = f1140a;
    private String r = "https://h5.m.taobao.com/mlapp/olist.html";
    private int s = 10;
    private boolean t = true;
    private boolean u = true;
    public boolean p = false;
    private List<C0006a> v = null;

    public int a() {
        int i2 = this.q;
        if (i2 < 1000 || i2 > 20000) {
            com.alipay.sdk.util.c.b("", "DynamicConfig::getJumpTimeout(default) >3500");
            return f1140a;
        }
        com.alipay.sdk.util.c.b("", "DynamicConfig::getJumpTimeout >" + this.q);
        return this.q;
    }

    public boolean b() {
        return this.t;
    }

    public boolean c() {
        return this.u;
    }

    public String d() {
        return this.r;
    }

    public int e() {
        return this.s;
    }

    public List<C0006a> f() {
        return this.v;
    }

    public void a(boolean z) {
        this.p = z;
    }

    public static a g() {
        if (w == null) {
            w = new a();
            w.h();
        }
        return w;
    }

    private void h() {
        a(j.b(com.alipay.sdk.sys.b.a().b(), "alipay_cashier_dynamic_config", null));
    }

    private void a(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            this.q = jSONObject.optInt("timeout", f1140a);
            this.r = jSONObject.optString("tbreturl", "https://h5.m.taobao.com/mlapp/olist.html").trim();
            this.s = jSONObject.optInt("configQueryInterval", 10);
            this.v = C0006a.a(jSONObject.optJSONArray("launchAppSwitch"));
            this.t = jSONObject.optBoolean(n, true);
            this.u = jSONObject.optBoolean("intercept_batch", true);
        } catch (Throwable th) {
            com.alipay.sdk.util.c.a(th);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void i() {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("timeout", a());
            jSONObject.put("tbreturl", d());
            jSONObject.put("configQueryInterval", e());
            jSONObject.put("launchAppSwitch", C0006a.a(f()));
            jSONObject.put(n, b());
            jSONObject.put("intercept_batch", c());
            j.a(com.alipay.sdk.sys.b.a().b(), "alipay_cashier_dynamic_config", jSONObject.toString());
        } catch (Exception e2) {
            com.alipay.sdk.util.c.a(e2);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            JSONObject jSONObjectOptJSONObject = new JSONObject(str).optJSONObject("st_sdk_config");
            if (jSONObjectOptJSONObject != null) {
                this.q = jSONObjectOptJSONObject.optInt("timeout", f1140a);
                this.r = jSONObjectOptJSONObject.optString("tbreturl", "https://h5.m.taobao.com/mlapp/olist.html").trim();
                this.s = jSONObjectOptJSONObject.optInt("configQueryInterval", 10);
                this.v = C0006a.a(jSONObjectOptJSONObject.optJSONArray("launchAppSwitch"));
                this.t = jSONObjectOptJSONObject.optBoolean(n, true);
                this.u = jSONObjectOptJSONObject.optBoolean("intercept_batch", true);
            } else {
                com.alipay.sdk.util.c.d(com.alipay.sdk.m.o.a.f1226a, "config is null");
            }
        } catch (Throwable th) {
            com.alipay.sdk.util.c.a(th);
        }
    }

    public void a(Context context) {
        new Thread(new b(this, context)).start();
    }

    /* JADX INFO: renamed from: com.alipay.sdk.data.a$a, reason: collision with other inner class name */
    public static final class C0006a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f1141a;
        public final int b;
        public final String c;

        public C0006a(String str, int i, String str2) {
            this.f1141a = str;
            this.b = i;
            this.c = str2;
        }

        public static C0006a a(JSONObject jSONObject) {
            if (jSONObject == null) {
                return null;
            }
            return new C0006a(jSONObject.optString("pn"), jSONObject.optInt("v", 0), jSONObject.optString(PushConstants.URI_PACKAGE_NAME));
        }

        public static List<C0006a> a(JSONArray jSONArray) {
            if (jSONArray == null) {
                return null;
            }
            ArrayList arrayList = new ArrayList();
            int length = jSONArray.length();
            for (int i = 0; i < length; i++) {
                C0006a c0006aA = a(jSONArray.optJSONObject(i));
                if (c0006aA != null) {
                    arrayList.add(c0006aA);
                }
            }
            return arrayList;
        }

        public static JSONObject a(C0006a c0006a) {
            if (c0006a == null) {
                return null;
            }
            try {
                return new JSONObject().put("pn", c0006a.f1141a).put("v", c0006a.b).put(PushConstants.URI_PACKAGE_NAME, c0006a.c);
            } catch (JSONException e) {
                com.alipay.sdk.util.c.a(e);
                return null;
            }
        }

        public static JSONArray a(List<C0006a> list) {
            if (list == null) {
                return null;
            }
            JSONArray jSONArray = new JSONArray();
            Iterator<C0006a> it = list.iterator();
            while (it.hasNext()) {
                jSONArray.put(a(it.next()));
            }
            return jSONArray;
        }

        public String toString() {
            return String.valueOf(a(this));
        }
    }
}
