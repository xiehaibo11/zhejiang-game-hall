package com.kwad.sdk.utils;

public final class bg {
    public static void a(long r4, int r6, android.content.Context r7) {
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 == 0) goto L44
            if (r7 != 0) goto L9
            goto L44
        L9:
            if (r6 <= 0) goto L44
            r0 = 100
            if (r6 <= r0) goto L10
            goto L44
        L10:
            long r0 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r0
            long r0 = java.lang.Math.abs(r4)
            r2 = 3600000(0x36ee80, double:1.7786363E-317)
            long r0 = r0 / r2
            long r2 = (long) r6
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            java.lang.String r0 = "key_time_diff_s2c"
            r1 = 0
            java.lang.String r2 = "ksadsdk_pref"
            if (r6 <= 0) goto L37
            android.content.SharedPreferences r6 = r7.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r6 = r6.edit()
            android.content.SharedPreferences$Editor r4 = r6.putLong(r0, r4)
        L33:
            r4.apply()
            return
        L37:
            android.content.SharedPreferences r4 = r7.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r4 = r4.edit()
            android.content.SharedPreferences$Editor r4 = r4.remove(r0)
            goto L33
        L44:
            return
    }

    public static long v(android.content.Context r4, boolean r5) {
            long r0 = java.lang.System.currentTimeMillis()
            if (r5 != 0) goto L7
            return r0
        L7:
            if (r4 == 0) goto L1e
            r5 = 0
            java.lang.String r2 = "ksadsdk_pref"
            android.content.SharedPreferences r4 = r4.getSharedPreferences(r2, r5)
            r2 = 0
            java.lang.String r5 = "key_time_diff_s2c"
            long r4 = r4.getLong(r5, r2)
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 == 0) goto L1e
            long r0 = r0 + r4
            return r0
        L1e:
            long r4 = java.lang.Math.abs(r0)
            return r4
    }
}
