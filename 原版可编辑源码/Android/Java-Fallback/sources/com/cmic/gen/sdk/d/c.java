package com.cmic.gen.sdk.d;

public class c extends com.cmic.gen.sdk.d.b {
    public static java.util.ArrayList<java.lang.Throwable> b;
    private org.json.JSONObject c;
    private org.json.JSONArray d;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.cmic.gen.sdk.d.c.b = r0
            return
    }

    public c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            return
    }

    @Override
    public void a(org.json.JSONArray r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void a(org.json.JSONObject r1) {
            r0 = this;
            r0.c = r1
            return
    }

    @Override
    public org.json.JSONObject b() {
            r3 = this;
            org.json.JSONObject r0 = super.b()
            java.lang.String r1 = "event"
            org.json.JSONObject r2 = r3.c     // Catch: org.json.JSONException -> L13
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L13
            java.lang.String r1 = "exceptionStackTrace"
            org.json.JSONArray r2 = r3.d     // Catch: org.json.JSONException -> L13
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L13
            goto L17
        L13:
            r1 = move-exception
            r1.printStackTrace()
        L17:
            return r0
    }
}
