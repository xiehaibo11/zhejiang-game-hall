package com.meizu.cloud.pushsdk.a.a;

public class c {
    private final int a;
    private final java.lang.String b;

    public c(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public java.lang.String toString() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "code"
            int r2 = r3.a     // Catch: org.json.JSONException -> L14
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L14
            java.lang.String r1 = "body"
            java.lang.String r2 = r3.b     // Catch: org.json.JSONException -> L14
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L14
            goto L18
        L14:
            r1 = move-exception
            r1.printStackTrace()
        L18:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[NetResponse] "
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
