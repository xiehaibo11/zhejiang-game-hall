package com.alipay.sdk.util;

public class j {
    private static java.lang.String a;

    static {
            return
    }

    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(android.content.Context r2) {
            java.lang.String r0 = com.alipay.sdk.util.j.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L31
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L11
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L11
            goto L17
        L11:
            r2 = move-exception
            com.alipay.sdk.util.c.a(r2)
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
            com.alipay.sdk.util.j.a = r2
        L31:
            java.lang.String r2 = com.alipay.sdk.util.j.a
            return r2
    }

    public static void a(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = a(r4)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r0 = com.alipay.sdk.encrypt.e.a(r0, r6)     // Catch: java.lang.Throwable -> L3a
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L3a
            if (r1 != 0) goto L2a
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3a
            if (r1 == 0) goto L2a
            java.lang.String r1 = "%s,%s"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L3a
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.Throwable -> L3a
            r3 = 1
            r2[r3] = r6     // Catch: java.lang.Throwable -> L3a
            java.lang.String r6 = java.lang.String.format(r1, r2)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "cp"
            java.lang.String r2 = "TriDesDecryptError"
            com.alipay.sdk.app.statistic.a.a(r1, r2, r6)     // Catch: java.lang.Throwable -> L3a
        L2a:
            android.content.SharedPreferences r4 = android.preference.PreferenceManager.getDefaultSharedPreferences(r4)     // Catch: java.lang.Throwable -> L3a
            android.content.SharedPreferences$Editor r4 = r4.edit()     // Catch: java.lang.Throwable -> L3a
            android.content.SharedPreferences$Editor r4 = r4.putString(r5, r0)     // Catch: java.lang.Throwable -> L3a
            r4.commit()     // Catch: java.lang.Throwable -> L3a
            goto L3e
        L3a:
            r4 = move-exception
            com.alipay.sdk.util.c.a(r4)
        L3e:
            return
    }

    public static boolean a(android.content.Context r0, java.lang.String r1) {
            android.content.SharedPreferences r0 = android.preference.PreferenceManager.getDefaultSharedPreferences(r0)     // Catch: java.lang.Throwable -> L9
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Throwable -> L9
            goto Le
        L9:
            r0 = move-exception
            com.alipay.sdk.util.c.a(r0)
            r0 = 0
        Le:
            return r0
    }

    public static java.lang.String b(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r0 = 0
            android.content.SharedPreferences r1 = android.preference.PreferenceManager.getDefaultSharedPreferences(r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r5 = r1.getString(r4, r5)     // Catch: java.lang.Exception -> L3a
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L3a
            if (r1 != 0) goto L17
            java.lang.String r3 = a(r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r0 = com.alipay.sdk.encrypt.e.b(r3, r5)     // Catch: java.lang.Exception -> L3a
        L17:
            boolean r3 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L3a
            if (r3 != 0) goto L3e
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L3a
            if (r3 == 0) goto L3e
            java.lang.String r3 = "%s,%s"
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3a
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L3a
            r4 = 1
            r1[r4] = r5     // Catch: java.lang.Exception -> L3a
            java.lang.String r3 = java.lang.String.format(r3, r1)     // Catch: java.lang.Exception -> L3a
            java.lang.String r4 = "cp"
            java.lang.String r5 = "TriDesEncryptError"
            com.alipay.sdk.app.statistic.a.a(r4, r5, r3)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r3 = move-exception
            com.alipay.sdk.util.c.a(r3)
        L3e:
            return r0
    }

    public static void b(android.content.Context r0, java.lang.String r1) {
            android.content.SharedPreferences r0 = android.preference.PreferenceManager.getDefaultSharedPreferences(r0)     // Catch: java.lang.Throwable -> L10
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L10
            android.content.SharedPreferences$Editor r0 = r0.remove(r1)     // Catch: java.lang.Throwable -> L10
            r0.commit()     // Catch: java.lang.Throwable -> L10
            goto L14
        L10:
            r0 = move-exception
            com.alipay.sdk.util.c.a(r0)
        L14:
            return
    }
}
