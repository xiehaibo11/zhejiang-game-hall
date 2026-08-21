package com.cmic.gen.sdk.c.b;

public class e extends com.cmic.gen.sdk.c.b.g {
    private com.cmic.gen.sdk.c.b.a a;
    private byte[] b;
    private java.lang.String c;
    private byte[] d;
    private java.lang.String e;
    private boolean f;

    public e() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.f = r0
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            com.cmic.gen.sdk.c.b.a r0 = r1.a
            java.lang.String r0 = r0.a()
            return r0
    }

    public void a(com.cmic.gen.sdk.c.b.a r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void a(byte[] r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    protected java.lang.String a_(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public org.json.JSONObject b() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            boolean r1 = r5.f
            if (r1 == 0) goto L3b
            java.lang.String r1 = "encrypted"
            java.lang.String r2 = r5.c     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "encryptedIV"
            byte[] r2 = r5.d     // Catch: org.json.JSONException -> L37
            r3 = 0
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "reqdata"
            byte[] r2 = r5.b     // Catch: org.json.JSONException -> L37
            com.cmic.gen.sdk.c.b.a r3 = r5.a     // Catch: org.json.JSONException -> L37
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L37
            byte[] r4 = r5.d     // Catch: org.json.JSONException -> L37
            java.lang.String r2 = com.cmic.gen.sdk.e.a.a(r2, r3, r4)     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "securityreinforce"
            java.lang.String r2 = r5.e     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            goto L3b
        L37:
            r1 = move-exception
            r1.printStackTrace()
        L3b:
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void b(byte[] r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public com.cmic.gen.sdk.c.b.a c() {
            r1 = this;
            com.cmic.gen.sdk.c.b.a r0 = r1.a
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
