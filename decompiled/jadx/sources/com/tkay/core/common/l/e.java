package com.tkay.core.common.l;

import android.util.Log;

/* JADX INFO: loaded from: classes3.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static boolean f6239a;
    public static boolean b;
    private static boolean c;
    private static boolean d;
    private static boolean e;
    private static boolean f;
    private static boolean g;
    private static boolean h;

    private e() {
    }

    private static void a(String str, String str2) {
        if (c) {
            Log.v(str, str2);
        }
    }

    private static void a(String str, String str2, Throwable th) {
        if (c) {
            Log.v(str, str2, th);
        }
    }

    private static void b(String str, String str2) {
        if (d) {
            Log.d(str, str2);
        }
    }

    private static void b(String str, String str2, Throwable th) {
        if (d) {
            Log.d(str, str2, th);
        }
    }

    private static void c(String str, String str2) {
        if (e) {
            Log.i(str, str2);
        }
    }

    private static void c(String str, String str2, Throwable th) {
        if (e) {
            Log.i(str, str2, th);
        }
    }

    private static void d(String str, String str2) {
        if (f) {
            Log.w(str, str2);
        }
    }

    private static void d(String str, String str2, Throwable th) {
        if (f) {
            Log.w(str, str2, th);
        }
    }

    private static void a(String str, Throwable th) {
        if (f) {
            Log.w(str, th);
        }
    }

    private static void e(String str, String str2) {
        if (g) {
            Log.e(str, str2);
        }
    }

    private static void e(String str, String str2, Throwable th) {
        if (g) {
            Log.e(str, str2, th);
        }
        if (!h) {
        }
    }
}
