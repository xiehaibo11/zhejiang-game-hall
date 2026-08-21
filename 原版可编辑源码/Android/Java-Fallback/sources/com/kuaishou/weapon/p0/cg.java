package com.kuaishou.weapon.p0;

public class cg {
    private android.content.Context a;
    private int b;

    public cg(android.content.Context r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public java.lang.String a(java.lang.String r4) {
            r3 = this;
            r0 = 0
            com.kuaishou.weapon.p0.cl r1 = new com.kuaishou.weapon.p0.cl     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = com.kuaishou.weapon.p0.cj.j     // Catch: java.lang.Throwable -> L22
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L22
            android.content.Context r4 = r3.a     // Catch: java.lang.Throwable -> L22
            org.json.JSONObject r4 = r1.a(r4)     // Catch: java.lang.Throwable -> L22
            if (r4 != 0) goto L11
            return r0
        L11:
            org.json.JSONObject r1 = r3.a()     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L18
            return r0
        L18:
            java.lang.String r2 = "module_section"
            r4.put(r2, r1)     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L22
            return r4
        L22:
            return r0
    }

    public org.json.JSONObject a() {
            r5 = this;
            r0 = 0
            java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L77
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L77
            r1.<init>()     // Catch: java.lang.Throwable -> L77
            android.content.Context r2 = r5.a     // Catch: java.lang.Throwable -> L77
            java.lang.String r3 = "re_po_rt"
            com.kuaishou.weapon.p0.h r2 = com.kuaishou.weapon.p0.h.a(r2, r3)     // Catch: java.lang.Throwable -> L77
            java.lang.String r3 = "plc001_act_s"
            r4 = 1
            int r2 = r2.b(r3, r4)     // Catch: java.lang.Throwable -> L77
            if (r2 != r4) goto L77
            com.kuaishou.weapon.p0.x r2 = new com.kuaishou.weapon.p0.x     // Catch: java.lang.Throwable -> L77
            r2.<init>()     // Catch: java.lang.Throwable -> L77
            android.content.Context r3 = r5.a     // Catch: java.lang.Throwable -> L77
            org.json.JSONArray r2 = r2.a(r3)     // Catch: java.lang.Throwable -> L77
            if (r2 == 0) goto L77
            int r3 = r2.length()     // Catch: java.lang.Throwable -> L77
            if (r3 <= 0) goto L77
            java.lang.String r3 = "10000"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L77
            java.lang.String r0 = "11203"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = r2.Fy()     // Catch: java.lang.Throwable -> L76
            int r2 = com.kuaishou.weapon.p0.bg.b(r2)     // Catch: java.lang.Throwable -> L76
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = "11301"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = r2.Fz()     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.c(r2)     // Catch: java.lang.Throwable -> L76
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = "11302"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = r2.getSdkVersion()     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.c(r2)     // Catch: java.lang.Throwable -> L76
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = "11303"
            com.kwad.sdk.f.b r2 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = r2.getAppId()     // Catch: java.lang.Throwable -> L76
            java.lang.String r2 = com.kuaishou.weapon.p0.bg.c(r2)     // Catch: java.lang.Throwable -> L76
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L76
        L76:
            return r1
        L77:
            return r0
    }
}
