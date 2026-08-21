package com.tkay.expressad.foundation.h;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.widget.Toast;

public final class o {
    public static boolean a = true;
    public static boolean b = true;
    public static boolean c = true;
    public static boolean d = true;
    public static boolean e = true;
    public static boolean f = false;
    public static boolean g = true;
    public static boolean h = false;
    private static final String i = "tkay_";

    static {
        if (com.tkay.expressad.b.a) {
            return;
        }
        a = false;
        b = false;
        c = false;
        d = false;
        e = false;
        f = false;
        g = false;
        h = false;
    }

    private o() {
    }

    private static void a(String str, String str2) {
        if (!a || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.v(a(str), str2);
    }

    private static void a(String str, String str2, Throwable th) {
        if (!a || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.v(a(str), str2, th);
    }

    private static void b(String str, String str2) {
        if (!b || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.d(a(str), str2);
    }

    private static void b(String str, String str2, Throwable th) {
        if (!b || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.d(a(str), str2, th);
    }

    private static void c(String str, String str2) {
        if (!c || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.i(a(str), str2);
    }

    private static void c(String str, String str2, Throwable th) {
        if (!c || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.i(a(str), str2, th);
    }

    private static void d(String str, String str2) {
        if (!d || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.w(a(str), str2);
    }

    private static void d(String str, String str2, Throwable th) {
        if (!d || TextUtils.isEmpty(str2)) {
            return;
        }
        Log.w(a(str), str2, th);
    }

    private static void a(String str, Throwable th) {
        if (!d || th == null) {
            return;
        }
        Log.w(a(str), th);
    }

    private static void e(String str, String str2) {
        if (!e || str2 == null) {
            return;
        }
        Log.e(a(str), str2);
    }

    private static void e(String str, String str2, Throwable th) {
        if (!e || str2 == null) {
            return;
        }
        Log.e(a(str), str2, th);
    }

    private static void a(Context context, String str) {
        if (f) {
            Toast.makeText(context, str, 1).show();
        }
    }

    private static String a(String str) {
        return !TextUtils.isEmpty(str) ? i.concat(String.valueOf(str)) : str;
    }
}
