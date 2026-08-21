package com.cmic.gen.sdk.view;

public class a {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public org.json.JSONObject a() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "authPageOut"
            java.lang.String r2 = r3.b     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            java.lang.String r1 = "authPageIn"
            java.lang.String r2 = r3.a     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            java.lang.String r1 = "authClickSuccess"
            java.lang.String r2 = r3.d     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            java.lang.String r1 = "timeOnAuthPage"
            java.lang.String r2 = r3.e     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            java.lang.String r1 = "authClickFailed"
            java.lang.String r2 = r3.c     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            java.lang.String r1 = "authPrivacyState"
            java.lang.String r2 = r3.f     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            goto L34
        L30:
            r1 = move-exception
            r1.printStackTrace()
        L34:
            return r0
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void f(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
