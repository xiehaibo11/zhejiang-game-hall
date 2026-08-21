package com.cmic.gen.sdk.c.b;

public class d extends com.cmic.gen.sdk.c.b.g {
    private final java.lang.String a;
    private final java.lang.String b;
    private final java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;

    public d(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "authz"
            r1.d = r0
            r1.a = r2
            r1.b = r3
            r1.c = r4
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    protected java.lang.String a_(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public org.json.JSONObject b() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "ver"
            java.lang.String r2 = r3.b     // Catch: org.json.JSONException -> L22
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L22
            java.lang.String r1 = "data"
            java.lang.String r2 = r3.c     // Catch: org.json.JSONException -> L22
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L22
            java.lang.String r1 = "userCapaid"
            java.lang.String r2 = r3.e     // Catch: org.json.JSONException -> L22
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L22
            java.lang.String r1 = "funcType"
            java.lang.String r2 = r3.d     // Catch: org.json.JSONException -> L22
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L22
            goto L26
        L22:
            r1 = move-exception
            r1.printStackTrace()
        L26:
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }
}
