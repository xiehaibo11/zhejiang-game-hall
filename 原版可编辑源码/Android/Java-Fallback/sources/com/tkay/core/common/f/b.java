package com.tkay.core.common.f;

public final class b {
    public int a;
    public long b;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L15
            r0.<init>(r3)     // Catch: java.lang.Exception -> L15
            java.lang.String r3 = "number"
            int r3 = r0.optInt(r3)     // Catch: java.lang.Exception -> L15
            r2.a = r3     // Catch: java.lang.Exception -> L15
            java.lang.String r3 = "loadTime"
            long r0 = r0.optLong(r3)     // Catch: java.lang.Exception -> L15
            r2.b = r0     // Catch: java.lang.Exception -> L15
        L15:
            return
    }

    public final java.lang.String toString() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "number"
            int r2 = r4.a     // Catch: java.lang.Exception -> L13
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L13
            java.lang.String r1 = "loadTime"
            long r2 = r4.b     // Catch: java.lang.Exception -> L13
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L13
        L13:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
