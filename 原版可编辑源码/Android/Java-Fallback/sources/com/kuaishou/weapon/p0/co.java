package com.kuaishou.weapon.p0;

public class co {


    public co() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            r1 = 0
            r2 = 1
            a(r3, r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L6
        L6:
            return
    }

    public static void a(android.content.Context r3, java.lang.String r4, java.lang.String r5, boolean r6, boolean r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93
            r0.<init>()     // Catch: java.lang.Throwable -> L93
            java.lang.String r1 = com.kuaishou.weapon.p0.ct.a     // Catch: java.lang.Throwable -> L93
            r0.append(r1)     // Catch: java.lang.Throwable -> L93
            java.lang.String r1 = com.kuaishou.weapon.p0.ct.e     // Catch: java.lang.Throwable -> L93
            r0.append(r1)     // Catch: java.lang.Throwable -> L93
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L93
            java.lang.String r1 = com.kuaishou.weapon.p0.cu.a(r3)     // Catch: java.lang.Throwable -> L93
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L93
            if (r2 != 0) goto L50
            boolean r2 = com.kuaishou.weapon.p0.ct.a()     // Catch: java.lang.Throwable -> L93
            if (r2 == 0) goto L42
            if (r5 == 0) goto L42
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93
            r2.<init>()     // Catch: java.lang.Throwable -> L93
            r2.append(r0)     // Catch: java.lang.Throwable -> L93
            java.lang.String r0 = "?logId="
            r2.append(r0)     // Catch: java.lang.Throwable -> L93
            r2.append(r5)     // Catch: java.lang.Throwable -> L93
            java.lang.String r0 = "&"
            r2.append(r0)     // Catch: java.lang.Throwable -> L93
        L3a:
            r2.append(r1)     // Catch: java.lang.Throwable -> L93
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L93
            goto L50
        L42:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93
            r2.<init>()     // Catch: java.lang.Throwable -> L93
            r2.append(r0)     // Catch: java.lang.Throwable -> L93
            java.lang.String r0 = "?"
            r2.append(r0)     // Catch: java.lang.Throwable -> L93
            goto L3a
        L50:
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L93
            if (r1 == 0) goto L57
            return
        L57:
            if (r7 == 0) goto L73
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L93
            r7.<init>()     // Catch: java.lang.Throwable -> L93
            com.kuaishou.weapon.p0.bm r1 = new com.kuaishou.weapon.p0.bm     // Catch: java.lang.Throwable -> L93
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L93
            java.lang.String r4 = r1.c(r4)     // Catch: java.lang.Throwable -> L93
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L93
            if (r1 != 0) goto L78
            java.lang.String r1 = "data"
            r7.put(r1, r4)     // Catch: java.lang.Throwable -> L93
            goto L78
        L73:
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L93
            r7.<init>(r4)     // Catch: java.lang.Throwable -> L93
        L78:
            com.kuaishou.weapon.p0.l r3 = com.kuaishou.weapon.p0.l.a(r3)     // Catch: java.lang.Throwable -> L93
            com.kuaishou.weapon.p0.m r4 = new com.kuaishou.weapon.p0.m     // Catch: java.lang.Throwable -> L93
            r4.<init>(r0, r7)     // Catch: java.lang.Throwable -> L93
            java.lang.String r7 = com.kuaishou.weapon.p0.WeaponHI.cookieData     // Catch: java.lang.Throwable -> L93
            r4.a(r7)     // Catch: java.lang.Throwable -> L93
            java.lang.String r7 = com.kuaishou.weapon.p0.WeaponHI.encryENV     // Catch: java.lang.Throwable -> L93
            r4.b(r7)     // Catch: java.lang.Throwable -> L93
            com.kuaishou.weapon.p0.co$1 r7 = new com.kuaishou.weapon.p0.co$1     // Catch: java.lang.Throwable -> L93
            r7.<init>(r6, r5)     // Catch: java.lang.Throwable -> L93
            r3.b(r4, r7)     // Catch: java.lang.Throwable -> L93
        L93:
            return
    }
}
