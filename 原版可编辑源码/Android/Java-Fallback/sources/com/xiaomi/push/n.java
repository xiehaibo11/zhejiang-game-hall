package com.xiaomi.push;

public abstract class n {
    public static void a(android.content.Context r0) {
            return
    }

    public static void a(android.content.Context r0, java.lang.String r1, boolean r2) {
            a(r0)
            android.content.SharedPreferences r0 = android.preference.PreferenceManager.getDefaultSharedPreferences(r0)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putBoolean(r1, r2)
            r0.commit()
            return
    }

    public static void a(java.util.Map<java.lang.String, java.lang.String> r0, java.lang.String r1, java.lang.String r2) {
            if (r0 == 0) goto L9
            if (r1 == 0) goto L9
            if (r2 == 0) goto L9
            r0.put(r1, r2)
        L9:
            return
    }

    public static boolean a(android.content.Context r0, java.lang.String r1, boolean r2) {
            a(r0)
            android.content.SharedPreferences r0 = android.preference.PreferenceManager.getDefaultSharedPreferences(r0)
            boolean r0 = r0.getBoolean(r1, r2)
            return r0
    }
}
