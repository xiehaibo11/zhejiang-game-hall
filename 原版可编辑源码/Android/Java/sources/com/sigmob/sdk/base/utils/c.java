package com.sigmob.sdk.base.utils;

import android.content.SharedPreferences;

public final class c {
    private static String a = "com.wind.Settings";

    private c() {
    }

    public static int a(String str, int i) {
        return com.sigmob.sdk.b.b().getSharedPreferences(a, 4).getInt(str, i);
    }

    public static SharedPreferences a() {
        return com.sigmob.sdk.b.b().getSharedPreferences(a, 4);
    }

    public static SharedPreferences a(String str) {
        return com.sigmob.sdk.b.b().getSharedPreferences(str, 4);
    }

    public static String a(String str, String str2) {
        return com.sigmob.sdk.b.b().getSharedPreferences(a, 4).getString(str, str2);
    }
}
