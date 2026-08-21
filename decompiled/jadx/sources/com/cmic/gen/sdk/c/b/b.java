package com.cmic.gen.sdk.c.b;

import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: GetConfigParameter.java */
/* JADX INFO: loaded from: classes.dex */
public class b extends g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f1646a;
    private String b;
    private String c;
    private String d;
    private String e;
    private String f;
    private String g;

    @Override // com.cmic.gen.sdk.c.b.g
    public String a() {
        return this.f;
    }

    @Override // com.cmic.gen.sdk.c.b.g
    public JSONObject b() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("version", this.f1646a);
            jSONObject.put("apptype", this.b);
            jSONObject.put("phone_ID", this.c);
            jSONObject.put("certflag", this.d);
            jSONObject.put("sdkversion", this.e);
            jSONObject.put("appid", this.f);
            jSONObject.put("expandparams", "");
            jSONObject.put("sign", this.g);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    @Override // com.cmic.gen.sdk.c.b.g
    protected String a_(String str) {
        return this.f1646a + this.e + this.f + "iYm0HAnkxQtpvN44";
    }

    public void b(String str) {
        this.f1646a = str;
    }

    public void c(String str) {
        this.b = str;
    }

    public void d(String str) {
        this.c = str;
    }

    public void e(String str) {
        this.d = str;
    }

    public void f(String str) {
        this.e = str;
    }

    public void g(String str) {
        this.f = str;
    }

    public void h(String str) {
        this.g = str;
    }
}
