package com.reyun.tracking.utils;

import android.content.Context;
import android.support.v4.os.EnvironmentCompat;

public class f {
    public static long a(Context context, String str, String str2, long j) {
        if (context == null) {
            return j;
        }
        try {
            return context.getSharedPreferences(str, 0).getLong(str2, j);
        } catch (Exception unused) {
            return j;
        }
    }

    public static String a(Context context, String str, String str2) {
        return a(context, str, str2, "_default_");
    }

    public static String a(Context context, String str, String str2, String str3) {
        if (context == null) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        try {
            return context.getSharedPreferences(str, 0).getString(str2, str3);
        } catch (Exception unused) {
            return str3;
        }
    }

    public static long b(Context context, String str, String str2) {
        return a(context, str, str2, 0L);
    }

    public static void b(Context context, String str, String str2, long j) {
        com.reyun.tracking.sdk.a.a().a(new g(context, str, str2, j));
    }

    public static void b(Context context, String str, String str2, String str3) {
        com.reyun.tracking.sdk.a.a().a(new h(context, str, str2, str3));
    }
}
