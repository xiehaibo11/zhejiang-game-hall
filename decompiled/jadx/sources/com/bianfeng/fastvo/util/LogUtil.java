package com.bianfeng.fastvo.util;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class LogUtil {
    private static final String TAG_DEF = "fastvo";

    private LogUtil() {
    }

    public static void d(String str) {
        Log.d(TAG_DEF, str);
    }

    public static void dFormat(String str, Object... objArr) {
        Log.d(TAG_DEF, String.format(str, objArr));
    }

    public static void i(String str) {
        Log.i(TAG_DEF, str);
    }

    public static void iFormat(String str, Object... objArr) {
        Log.i(TAG_DEF, String.format(str, objArr));
    }

    public static void w(String str) {
        Log.w(TAG_DEF, str);
    }

    public static void wFormat(String str, Object... objArr) {
        Log.w(TAG_DEF, String.format(str, objArr));
    }

    public static void e(String str) {
        Log.e(TAG_DEF, str);
    }

    public static void eFormat(String str, Object... objArr) {
        Log.e(TAG_DEF, String.format(str, objArr));
    }
}
