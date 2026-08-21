package com.mbridge.msdk.rover;

public final class e {
    private java.lang.String a;
    private int b;
    private int c;
    private int d;
    private java.lang.String e;
    private java.lang.String f;

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public final org.json.JSONObject a() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "url"
            java.lang.String r2 = r3.a     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            java.lang.String r1 = "type"
            int r2 = r3.b     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            java.lang.String r1 = "time"
            int r2 = r3.c     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            java.lang.String r1 = "code"
            int r2 = r3.d     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            java.lang.String r1 = "header"
            java.lang.String r2 = r3.e     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            java.lang.String r1 = "exception"
            java.lang.String r2 = r3.f     // Catch: org.json.JSONException -> L30
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L30
            goto L34
        L30:
            r1 = move-exception
            r1.printStackTrace()
        L34:
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void c(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void c(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = ""
            r0.<init>(r1)
            java.lang.String r1 = "url="
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r2 = "type="
            r0.append(r2)
            int r2 = r3.b
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "time="
            r0.append(r2)
            int r2 = r3.c
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "code="
            r0.append(r2)
            int r2 = r3.d
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "header="
            r0.append(r2)
            java.lang.String r2 = r3.e
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = "exception="
            r0.append(r1)
            java.lang.String r1 = r3.f
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
