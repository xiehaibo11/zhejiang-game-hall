package com.sigmob.sdk.base.utils;

import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f4941a = "com.wind.Settings";

    private c() {
    }

    public static int a(String str, int i) {
        return com.sigmob.sdk.b.b().getSharedPreferences(f4941a, 4).getInt(str, i);
    }

    public static SharedPreferences a() {
        return com.sigmob.sdk.b.b().getSharedPreferences(f4941a, 4);
    }

    public static SharedPreferences a(String str) {
        return com.sigmob.sdk.b.b().getSharedPreferences(str, 4);
    }

    public static String a(String str, String str2) {
        return com.sigmob.sdk.b.b().getSharedPreferences(f4941a, 4).getString(str, str2);
    }
}
