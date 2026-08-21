package com.kwad.sdk.utils;

import android.content.Context;

public final class bg {
    public static void a(long j, int i, Context context) {
        if (j == 0 || context == null || i <= 0 || i > 100) {
            return;
        }
        long jCurrentTimeMillis = j - System.currentTimeMillis();
        (Math.abs(jCurrentTimeMillis) / 3600000 > ((long) i) ? context.getSharedPreferences("ksadsdk_pref", 0).edit().putLong("key_time_diff_s2c", jCurrentTimeMillis) : context.getSharedPreferences("ksadsdk_pref", 0).edit().remove("key_time_diff_s2c")).apply();
    }

    public static long v(Context context, boolean z) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (!z) {
            return jCurrentTimeMillis;
        }
        if (context != null) {
            long j = context.getSharedPreferences("ksadsdk_pref", 0).getLong("key_time_diff_s2c", 0L);
            if (j != 0) {
                return jCurrentTimeMillis + j;
            }
        }
        return Math.abs(jCurrentTimeMillis);
    }
}
