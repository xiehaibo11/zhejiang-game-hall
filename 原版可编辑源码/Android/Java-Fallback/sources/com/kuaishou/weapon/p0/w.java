package com.kuaishou.weapon.p0;

public class w {
    private android.content.Context a;
    private int b;
    private com.kuaishou.weapon.p0.h c;

    public w(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r2.a = r3
            java.lang.String r1 = "re_po_rt"
            com.kuaishou.weapon.p0.h r3 = com.kuaishou.weapon.p0.h.a(r3, r1)
            r2.c = r3
            if (r3 == 0) goto L1a
            java.lang.String r1 = "plc001_al_m"
            int r3 = r3.b(r1, r0)
            r2.b = r3
        L1a:
            return
    }

    public org.json.JSONArray a(int r5) {
            r4 = this;
            r0 = 0
            com.kuaishou.weapon.p0.jni.A r1 = new com.kuaishou.weapon.p0.jni.A     // Catch: java.lang.Throwable -> L28
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L28
            r1.<init>(r2, r5)     // Catch: java.lang.Throwable -> L28
            org.json.JSONArray r5 = com.kuaishou.weapon.p0.jni.A.getJsonObject()     // Catch: java.lang.Throwable -> L28
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L28
            r1.<init>()     // Catch: java.lang.Throwable -> L28
            if (r5 == 0) goto L28
            r2 = 0
        L14:
            int r3 = r5.length()     // Catch: java.lang.Throwable -> L28
            if (r2 >= r3) goto L24
            java.lang.Object r3 = r5.get(r2)     // Catch: java.lang.Throwable -> L28
            r1.put(r3)     // Catch: java.lang.Throwable -> L28
            int r2 = r2 + 1
            goto L14
        L24:
            com.kuaishou.weapon.p0.jni.A.setJsonObject(r0)     // Catch: java.lang.Throwable -> L28
            return r1
        L28:
            return r0
    }

    public org.json.JSONArray b(int r1) {
            r0 = this;
            org.json.JSONArray r1 = r0.c(r1)     // Catch: java.lang.Throwable -> L5
            return r1
        L5:
            r1 = 0
            return r1
    }

    public org.json.JSONArray c(int r1) {
            r0 = this;
            org.json.JSONArray r1 = r0.d(r1)
            return r1
    }

    public org.json.JSONArray d(int r11) {
            r10 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            android.content.Context r1 = r10.a     // Catch: java.lang.Exception -> L45
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L45
            r2 = 1000(0x3e8, float:1.401E-42)
        Ld:
            r3 = 19999(0x4e1f, float:2.8025E-41)
            if (r2 > r3) goto L45
            r3 = 0
            java.lang.String[] r3 = r1.getPackagesForUid(r2)     // Catch: java.lang.Exception -> L16
        L16:
            if (r3 == 0) goto L42
            int r4 = r3.length     // Catch: java.lang.Exception -> L45
            r5 = 0
            r6 = r5
        L1b:
            if (r6 >= r4) goto L42
            r7 = r3[r6]     // Catch: java.lang.Exception -> L45
            android.content.pm.PackageInfo r7 = r1.getPackageInfo(r7, r5)     // Catch: java.lang.Exception -> L3f
            r8 = 1
            if (r11 != r8) goto L2e
            android.content.pm.ApplicationInfo r9 = r7.applicationInfo     // Catch: java.lang.Exception -> L3f
            int r9 = r9.flags     // Catch: java.lang.Exception -> L3f
            r9 = r9 & r8
            if (r9 != r8) goto L2e
            goto L3f
        L2e:
            com.kuaishou.weapon.p0.v r8 = new com.kuaishou.weapon.p0.v     // Catch: java.lang.Exception -> L3f
            android.content.Context r9 = r10.a     // Catch: java.lang.Exception -> L3f
            r8.<init>(r7, r9)     // Catch: java.lang.Exception -> L3f
            r8.h()     // Catch: java.lang.Exception -> L3f
            org.json.JSONObject r7 = r8.k()     // Catch: java.lang.Exception -> L3f
            r0.put(r7)     // Catch: java.lang.Exception -> L3f
        L3f:
            int r6 = r6 + 1
            goto L1b
        L42:
            int r2 = r2 + 1
            goto Ld
        L45:
            return r0
    }
}
