package com.cmic.gen.sdk.c.b;

public class b extends com.cmic.gen.sdk.c.b.g {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    @Override
    protected java.lang.String a_(java.lang.String r2) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = r1.a
            r2.append(r0)
            java.lang.String r0 = r1.e
            r2.append(r0)
            java.lang.String r0 = r1.f
            r2.append(r0)
            java.lang.String r0 = "iYm0HAnkxQtpvN44"
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            return r2
    }

    @Override
    public org.json.JSONObject b() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "version"
            java.lang.String r2 = r3.a     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "apptype"
            java.lang.String r2 = r3.b     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "phone_ID"
            java.lang.String r2 = r3.c     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "certflag"
            java.lang.String r2 = r3.d     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "sdkversion"
            java.lang.String r2 = r3.e     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "appid"
            java.lang.String r2 = r3.f     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "expandparams"
            java.lang.String r2 = ""
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            java.lang.String r1 = "sign"
            java.lang.String r2 = r3.g     // Catch: org.json.JSONException -> L3e
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L3e
            goto L42
        L3e:
            r1 = move-exception
            r1.printStackTrace()
        L42:
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void f(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void g(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void h(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }
}
