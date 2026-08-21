package com.tramini.plugin.a.c;

public final class b {
    public static final int a = 1;
    public static final int b = 2;
    public java.lang.String c;
    public int d;
    public java.lang.String e;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public final org.json.JSONObject a() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1b
            r0.<init>()     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "att_pl"
            int r2 = r3.d     // Catch: java.lang.Exception -> L1b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "att_ver"
            java.lang.String r2 = r3.c     // Catch: java.lang.Exception -> L1b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "att_inf"
            java.lang.String r2 = r3.e     // Catch: java.lang.Exception -> L1b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1b
            return r0
        L1b:
            r0 = 0
            return r0
    }
}
