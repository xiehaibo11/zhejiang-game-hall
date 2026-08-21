package com.huawei.secure.android.common.ssl.util;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;

/* JADX INFO: loaded from: classes2.dex */
public class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2264a = "aegis";
    private static SharedPreferences b;

    public static long a(String str, long j, Context context) {
        return b(context).getLong(str, j);
    }

    public static synchronized SharedPreferences b(Context context) {
        if (b == null) {
            if (Build.VERSION.SDK_INT >= 24) {
                b = context.createDeviceProtectedStorageContext().getSharedPreferences(f2264a, 0);
            } else {
                b = context.getApplicationContext().getSharedPreferences(f2264a, 0);
            }
        }
        return b;
    }

    public static int a(String str, int i, Context context) {
        return b(context).getInt(str, i);
    }

    public static String a(String str, String str2, Context context) {
        return b(context).getString(str, str2);
    }

    public static void a(String str, Context context) {
        b(context).edit().remove(str).apply();
    }

    public static void a(Context context) {
        b(context).edit().clear().apply();
    }

    public static void b(String str, long j, Context context) {
        b(context).edit().putLong(str, j).apply();
    }

    public static void b(String str, int i, Context context) {
        b(context).edit().putInt(str, i).apply();
    }

    public static void b(String str, String str2, Context context) {
        b(context).edit().putString(str, str2).apply();
    }
}
