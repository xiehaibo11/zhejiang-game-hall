package com.cmic.gen.sdk.view;

import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: LoginAuthParameter.java */
/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f1701a;
    private String b;
    private String c;
    private String d;
    private String e;
    private String f;

    public void a(String str) {
        this.f = str;
    }

    public void b(String str) {
        this.c = str;
    }

    public void c(String str) {
        this.d = str;
    }

    public void d(String str) {
        this.e = str;
    }

    public void e(String str) {
        this.f1701a = str;
    }

    public void f(String str) {
        this.b = str;
    }

    public JSONObject a() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("authPageOut", this.b);
            jSONObject.put("authPageIn", this.f1701a);
            jSONObject.put("authClickSuccess", this.d);
            jSONObject.put("timeOnAuthPage", this.e);
            jSONObject.put("authClickFailed", this.c);
            jSONObject.put("authPrivacyState", this.f);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }
}
