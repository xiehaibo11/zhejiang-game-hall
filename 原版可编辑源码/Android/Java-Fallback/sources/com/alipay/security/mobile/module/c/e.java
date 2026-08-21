package com.alipay.security.mobile.module.c;

public final class e {
    public static java.lang.String a(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)
            java.lang.String r1 = r1.getString(r3, r4)
            return r1
    }

    public static void a(android.content.Context r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            r0 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r0)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            if (r2 == 0) goto L2c
            java.util.Set r3 = r4.keySet()
            java.util.Iterator r3 = r3.iterator()
        L13:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L29
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r1 = r4.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            r2.putString(r0, r1)
            goto L13
        L29:
            r2.commit()
        L2c:
            return
    }
}
