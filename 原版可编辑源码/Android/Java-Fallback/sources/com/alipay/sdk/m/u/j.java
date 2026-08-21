package com.alipay.sdk.m.u;

public class j {
    public static java.lang.String a;

    static {
            return
    }

    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r2) {
            java.lang.String r0 = com.alipay.sdk.m.u.j.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L31
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L11
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L11
            goto L17
        L11:
            r2 = move-exception
            com.alipay.sdk.m.u.e.a(r2)
            java.lang.String r2 = ""
        L17:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "0000000000000000000000000000"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r0 = 0
            r1 = 24
            java.lang.String r2 = r2.substring(r0, r1)
            com.alipay.sdk.m.u.j.a = r2
        L31:
            java.lang.String r2 = com.alipay.sdk.m.u.j.a
            return r2
    }

    public static synchronized java.lang.String a(com.alipay.sdk.m.s.a r4, android.content.Context r5, java.lang.String r6, java.lang.String r7) {
            java.lang.Class<com.alipay.sdk.m.u.j> r0 = com.alipay.sdk.m.u.j.class
            monitor-enter(r0)
            r1 = 0
            android.content.SharedPreferences r2 = android.preference.PreferenceManager.getDefaultSharedPreferences(r5)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            java.lang.String r7 = r2.getString(r6, r7)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            if (r2 != 0) goto L1a
            java.lang.String r5 = a(r5)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            java.lang.String r1 = com.alipay.sdk.m.n.e.a(r5, r7, r6)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
        L1a:
            boolean r5 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            if (r5 != 0) goto L43
            boolean r5 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            if (r5 == 0) goto L43
            java.lang.String r5 = "%s,%s"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            r3 = 0
            r2[r3] = r6     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            r6 = 1
            r2[r6] = r7     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            java.lang.String r5 = java.lang.String.format(r5, r2)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            java.lang.String r6 = "cp"
            java.lang.String r7 = "TriDesEncryptError"
            com.alipay.sdk.m.k.a.b(r4, r6, r7, r5)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            goto L43
        L3d:
            r4 = move-exception
            goto L45
        L3f:
            r4 = move-exception
            com.alipay.sdk.m.u.e.a(r4)     // Catch: java.lang.Throwable -> L3d
        L43:
            monitor-exit(r0)
            return r1
        L45:
            monitor-exit(r0)
            throw r4
    }

    public static synchronized boolean a(android.content.Context r1, java.lang.String r2) {
            java.lang.Class<com.alipay.sdk.m.u.j> r0 = com.alipay.sdk.m.u.j.class
            monitor-enter(r0)
            android.content.SharedPreferences r1 = android.preference.PreferenceManager.getDefaultSharedPreferences(r1)     // Catch: java.lang.Throwable -> Lc
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> Lc
            goto L11
        Lc:
            r1 = move-exception
            com.alipay.sdk.m.u.e.a(r1)     // Catch: java.lang.Throwable -> L13
            r1 = 0
        L11:
            monitor-exit(r0)
            return r1
        L13:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized void b(android.content.Context r1, java.lang.String r2) {
            java.lang.Class<com.alipay.sdk.m.u.j> r0 = com.alipay.sdk.m.u.j.class
            monitor-enter(r0)
            android.content.SharedPreferences r1 = android.preference.PreferenceManager.getDefaultSharedPreferences(r1)     // Catch: java.lang.Throwable -> L13
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L13
            android.content.SharedPreferences$Editor r1 = r1.remove(r2)     // Catch: java.lang.Throwable -> L13
            r1.apply()     // Catch: java.lang.Throwable -> L13
            goto L17
        L13:
            r1 = move-exception
            com.alipay.sdk.m.u.e.a(r1)     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)
            return
        L19:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized void b(com.alipay.sdk.m.s.a r5, android.content.Context r6, java.lang.String r7, java.lang.String r8) {
            java.lang.Class<com.alipay.sdk.m.u.j> r0 = com.alipay.sdk.m.u.j.class
            monitor-enter(r0)
            java.lang.String r1 = a(r6)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = com.alipay.sdk.m.n.e.b(r1, r8, r7)     // Catch: java.lang.Throwable -> L3d
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L3d
            if (r2 != 0) goto L2d
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3d
            if (r2 == 0) goto L2d
            java.lang.String r2 = "%s,%s"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L3d
            r4 = 0
            r3[r4] = r7     // Catch: java.lang.Throwable -> L3d
            r4 = 1
            r3[r4] = r8     // Catch: java.lang.Throwable -> L3d
            java.lang.String r8 = java.lang.String.format(r2, r3)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = "cp"
            java.lang.String r3 = "TriDesDecryptError"
            com.alipay.sdk.m.k.a.b(r5, r2, r3, r8)     // Catch: java.lang.Throwable -> L3d
        L2d:
            android.content.SharedPreferences r5 = android.preference.PreferenceManager.getDefaultSharedPreferences(r6)     // Catch: java.lang.Throwable -> L3d
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> L3d
            android.content.SharedPreferences$Editor r5 = r5.putString(r7, r1)     // Catch: java.lang.Throwable -> L3d
            r5.apply()     // Catch: java.lang.Throwable -> L3d
            goto L41
        L3d:
            r5 = move-exception
            com.alipay.sdk.m.u.e.a(r5)     // Catch: java.lang.Throwable -> L43
        L41:
            monitor-exit(r0)
            return
        L43:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }
}
