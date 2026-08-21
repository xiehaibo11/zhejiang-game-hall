package com.huawei.hms.hatool;

public class g0 {
    public static long a(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4) {
            if (r1 == 0) goto L1a
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1a
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lf
            goto L1a
        Lf:
            android.content.SharedPreferences r1 = b(r1, r2)
            if (r1 == 0) goto L19
            long r4 = r1.getLong(r3, r4)
        L19:
            return r4
        L1a:
            java.lang.String r1 = "hmsSdk"
            java.lang.String r2 = "context is null or spName empty or spkey is empty"
            com.huawei.hms.hatool.y.f(r1, r2)
            return r4
    }

    public static java.lang.String a(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            if (r1 == 0) goto L1a
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1a
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lf
            goto L1a
        Lf:
            android.content.SharedPreferences r1 = b(r1, r2)
            if (r1 == 0) goto L19
            java.lang.String r4 = r1.getString(r3, r4)
        L19:
            return r4
        L1a:
            java.lang.String r1 = "hmsSdk"
            java.lang.String r2 = "context is null or spName empty or spkey is empty"
            com.huawei.hms.hatool.y.f(r1, r2)
            return r4
    }

    public static java.util.Map<java.lang.String, ?> a(android.content.Context r0, java.lang.String r1) {
            android.content.SharedPreferences r0 = b(r0, r1)
            java.util.Map r0 = r0.getAll()
            return r0
    }

    public static void a(android.content.Context r4, java.lang.String r5, java.lang.String... r6) {
            java.lang.String r0 = "hmsSdk"
            if (r4 == 0) goto L3d
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto Lb
            goto L3d
        Lb:
            if (r6 != 0) goto L13
            java.lang.String r4 = "clearData(): No data need to be deleted,keys is null"
        Lf:
            com.huawei.hms.hatool.y.f(r0, r4)
            return
        L13:
            android.content.SharedPreferences r4 = b(r4, r5)
            if (r4 == 0) goto L3c
            android.content.SharedPreferences$Editor r5 = r4.edit()
            int r0 = r6.length
            if (r0 != 0) goto L27
            r5.clear()
            r5.commit()
            goto L3c
        L27:
            int r0 = r6.length
            r1 = 0
        L29:
            if (r1 >= r0) goto L3c
            r2 = r6[r1]
            boolean r3 = r4.contains(r2)
            if (r3 == 0) goto L39
            r5.remove(r2)
            r5.commit()
        L39:
            int r1 = r1 + 1
            goto L29
        L3c:
            return
        L3d:
            java.lang.String r4 = "clearData(): parameter error.context,spname"
            goto Lf
    }

    public static android.content.SharedPreferences b(android.content.Context r1, java.lang.String r2) {
            java.lang.String r2 = c(r1, r2)
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)
            return r1
    }

    public static void b(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4) {
            if (r1 == 0) goto L20
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L20
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lf
            goto L20
        Lf:
            android.content.SharedPreferences r1 = b(r1, r2)
            if (r1 == 0) goto L1f
            android.content.SharedPreferences$Editor r1 = r1.edit()
            r1.putLong(r3, r4)
            r1.commit()
        L1f:
            return
        L20:
            java.lang.String r1 = "hmsSdk"
            java.lang.String r2 = "context is null or spName empty or spkey is empty"
            com.huawei.hms.hatool.y.f(r1, r2)
            return
    }

    public static void b(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            if (r1 == 0) goto L20
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L20
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lf
            goto L20
        Lf:
            android.content.SharedPreferences r1 = b(r1, r2)
            if (r1 == 0) goto L1f
            android.content.SharedPreferences$Editor r1 = r1.edit()
            r1.putString(r3, r4)
            r1.commit()
        L1f:
            return
        L20:
            java.lang.String r1 = "hmsSdk"
            java.lang.String r2 = "context is null or spName empty or spkey is empty"
            com.huawei.hms.hatool.y.e(r1, r2)
            return
    }

    public static java.lang.String c(android.content.Context r4, java.lang.String r5) {
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r0 = "_hms_config_tag"
            java.lang.String r1 = "oper"
            java.lang.String r0 = com.huawei.hms.hatool.c.n(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "hms_"
            java.lang.String r3 = "_"
            if (r1 == 0) goto L2c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r5)
            r0.append(r3)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            return r4
        L2c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r5)
            r1.append(r3)
            r1.append(r4)
            r1.append(r3)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            return r4
    }
}
