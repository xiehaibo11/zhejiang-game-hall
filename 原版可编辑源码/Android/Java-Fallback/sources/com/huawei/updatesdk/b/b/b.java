package com.huawei.updatesdk.b.b;

public class b {
    private android.content.SharedPreferences a;

    private b(android.content.SharedPreferences r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static com.huawei.updatesdk.b.b.b a(java.lang.String r2, android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L10
            r1 = 24
            if (r0 < r1) goto La
            android.content.Context r3 = r3.createDeviceProtectedStorageContext()     // Catch: java.lang.Exception -> L10
        La:
            r0 = 0
            android.content.SharedPreferences r2 = r3.getSharedPreferences(r2, r0)     // Catch: java.lang.Exception -> L10
            goto L18
        L10:
            java.lang.String r2 = "SharedPreferencesWrapper"
            java.lang.String r3 = "getSharedPreference error"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r2, r3)
            r2 = 0
        L18:
            com.huawei.updatesdk.b.b.b r3 = new com.huawei.updatesdk.b.b.b
            r3.<init>(r2)
            return r3
    }

    public long a(java.lang.String r2, long r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.a     // Catch: java.lang.Exception -> L7
            long r2 = r0.getLong(r2, r3)     // Catch: java.lang.Exception -> L7
            return r2
        L7:
            return r3
    }

    public java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.a     // Catch: java.lang.Exception -> L7
            java.lang.String r2 = r0.getString(r2, r3)     // Catch: java.lang.Exception -> L7
            return r2
        L7:
            return r3
    }

    public void a(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.a     // Catch: java.lang.Exception -> L16
            boolean r0 = r0.contains(r3)     // Catch: java.lang.Exception -> L16
            if (r0 != 0) goto L9
            return
        L9:
            android.content.SharedPreferences r0 = r2.a     // Catch: java.lang.Exception -> L16
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L16
            r0.remove(r3)     // Catch: java.lang.Exception -> L16
            r0.commit()     // Catch: java.lang.Exception -> L16
            goto L2c
        L16:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "remove error!!key:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "SharedPreferencesWrapper"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r0, r3)
        L2c:
            return
    }

    public void b(java.lang.String r2, long r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.a     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putLong(r2, r3)     // Catch: java.lang.Exception -> Ld
            r0.commit()     // Catch: java.lang.Exception -> Ld
            goto L24
        Ld:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "putLong error!!key:"
            r4.append(r0)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            java.lang.String r4 = "SharedPreferencesWrapper"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r4, r2, r3)
        L24:
            return
    }

    public void b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.a     // Catch: java.lang.Exception -> Ld
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> Ld
            r0.putString(r3, r4)     // Catch: java.lang.Exception -> Ld
            r0.commit()     // Catch: java.lang.Exception -> Ld
            goto L24
        Ld:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "putString error!!key:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "SharedPreferencesWrapper"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r3, r4)
        L24:
            return
    }
}
