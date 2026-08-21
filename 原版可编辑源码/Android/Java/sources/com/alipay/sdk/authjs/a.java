package com.alipay.sdk.authjs;

import com.bianfeng.libuniverse.Device;
import org.json.JSONException;
import org.json.JSONObject;

public class a {
    public static final String a = "call";
    public static final String b = "callback";
    public static final String c = "bundleName";
    public static final String d = "clientId";
    public static final String e = "param";
    public static final String f = "func";
    public static final String g = "msgType";
    private String h;
    private String i;
    private String j;
    private String k;
    private JSONObject l;
    private boolean m = false;

    public enum a {
        a,
        b,
        c,
        d,
        e
    }

    public static final String a(a aVar) {
        int i = b.a[aVar.ordinal()];
        return i != 1 ? i != 2 ? i != 3 ? Device.NETWORN_NONE : "runtime error" : "invalid parameter" : "function not found";
    }

    public boolean a() {
        return this.m;
    }

    public void a(boolean z) {
        this.m = z;
    }

    public a(String str) {
        d(str);
    }

    public String b() {
        return this.h;
    }

    public void a(String str) {
        this.h = str;
    }

    public String c() {
        return this.i;
    }

    public void b(String str) {
        this.i = str;
    }

    public String d() {
        return this.j;
    }

    public void c(String str) {
        this.j = str;
    }

    public String e() {
        return this.k;
    }

    public void d(String str) {
        this.k = str;
    }

    public JSONObject f() {
        return this.l;
    }

    public void a(JSONObject jSONObject) {
        this.l = jSONObject;
    }

    public String g() throws JSONException {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put(d, this.h);
        jSONObject.put(f, this.j);
        jSONObject.put("param", this.l);
        jSONObject.put(g, this.k);
        return jSONObject.toString();
    }
}
