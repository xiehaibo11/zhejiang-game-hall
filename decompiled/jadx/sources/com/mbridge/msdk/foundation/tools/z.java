package com.mbridge.msdk.foundation.tools;

import android.text.TextUtils;
import android.util.Log;
import com.mbridge.msdk.MBridgeConstans;

/* JADX INFO: compiled from: SameLogTool.java */
/* JADX INFO: loaded from: classes2.dex */
public final class z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static boolean f3552a = true;
    public static boolean b = true;
    public static boolean c = true;
    public static boolean d = true;
    public static boolean e = true;
    public static boolean f = false;
    public static boolean g = true;
    public static boolean h;

    static {
        if (MBridgeConstans.DEBUG) {
            return;
        }
        f3552a = false;
        b = false;
        c = false;
        d = false;
        e = false;
        f = false;
        g = false;
        h = false;
    }

    public static void a(String str, String str2) {
        if (!b || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.d(a(str), str2);
    }

    public static void a(String str, String str2, Throwable th) {
        if (!b || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.d(a(str), str2, th);
    }

    public static void b(String str, String str2) {
        if (!c || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.i(a(str), str2);
    }

    public static void c(String str, String str2) {
        if (!d || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.w(a(str), str2);
    }

    public static void b(String str, String str2, Throwable th) {
        if (!d || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.w(a(str), str2, th);
    }

    public static void d(String str, String str2) {
        if (!e || str2 == null) {
            return;
        }
        Log.e(a(str), str2);
    }

    public static void c(String str, String str2, Throwable th) {
        if (!e || str2 == null || th == null) {
            return;
        }
        Log.e(a(str), str2, th);
    }

    private static String a(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        return "MBRIDGE_" + str;
    }
}
