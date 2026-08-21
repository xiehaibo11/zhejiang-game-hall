package com.kuaishou.weapon.p0;

public class ch {
    private android.content.Context a;
    private int b;

    public ch(android.content.Context r1, int r2) {
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
            r9 = this;
            r0 = 0
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L8e
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8e
            r3.<init>()     // Catch: java.lang.Throwable -> L8e
            boolean r4 = com.kuaishou.weapon.p0.WeaponHI.as     // Catch: java.lang.Throwable -> L8e
            if (r4 != 0) goto Lf
            return r0
        Lf:
            android.content.Context r4 = r9.a     // Catch: java.lang.Throwable -> L8e
            java.lang.String r5 = "re_po_rt"
            com.kuaishou.weapon.p0.h r4 = com.kuaishou.weapon.p0.h.a(r4, r5)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r5 = "plc001_al_s"
            r6 = 0
            int r5 = r4.b(r5, r6)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r7 = "a1_p_s_p_s"
            boolean r7 = r4.e(r7)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r8 = "a1_p_s_p_s_c_b"
            boolean r4 = r4.e(r8)     // Catch: java.lang.Throwable -> L8e
            r8 = 1
            if (r5 != r8) goto L8e
            if (r7 != 0) goto L31
            if (r4 == 0) goto L8e
        L31:
            com.kuaishou.weapon.p0.w r4 = new com.kuaishou.weapon.p0.w     // Catch: java.lang.Throwable -> L8e
            android.content.Context r5 = r9.a     // Catch: java.lang.Throwable -> L8e
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L8e
            org.json.JSONArray r4 = r4.a(r6)     // Catch: java.lang.Throwable -> L8e
            if (r4 == 0) goto L8e
            java.lang.String r5 = "10000"
            r3.put(r5, r4)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r4 = "11301"
            com.kwad.sdk.f.b r5 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = r5.Fz()     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = com.kuaishou.weapon.p0.bg.c(r5)     // Catch: java.lang.Throwable -> L76
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L76
            java.lang.String r4 = "11302"
            com.kwad.sdk.f.b r5 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = r5.getSdkVersion()     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = com.kuaishou.weapon.p0.bg.c(r5)     // Catch: java.lang.Throwable -> L76
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L76
            java.lang.String r4 = "11303"
            com.kwad.sdk.f.b r5 = com.kwad.sdk.f.b.FA()     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = r5.getAppId()     // Catch: java.lang.Throwable -> L76
            java.lang.String r5 = com.kuaishou.weapon.p0.bg.c(r5)     // Catch: java.lang.Throwable -> L76
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L76
        L76:
            java.lang.String r4 = "11007"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L8e
            long r5 = r5 - r1
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r1 = "11017"
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L8e
            int r2 = r2.length()     // Catch: java.lang.Throwable -> L8e
            r3.put(r1, r2)     // Catch: java.lang.Throwable -> L8e
            return r3
        L8e:
            return r0
    }
}
