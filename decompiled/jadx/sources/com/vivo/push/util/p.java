package com.vivo.push.util;

import android.content.Context;

/* JADX INFO: loaded from: classes4.dex */
public final class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final o f7952a = new n();
    private static boolean b;
    private static boolean c;

    static {
        b();
    }

    public static int a(String str, String str2) {
        return f7952a.a(str, str2);
    }

    public static int a(String str, String str2, Throwable th) {
        return f7952a.a(str, str2, th);
    }

    public static int a(String str, Throwable th) {
        return f7952a.a(str, th);
    }

    public static String a(Throwable th) {
        return f7952a.a(th);
    }

    public static void a(Context context, String str) {
        f7952a.a(context, str);
    }

    public static void a(boolean z) {
        b();
        c = z;
    }

    public static boolean a() {
        return b && c;
    }

    public static int b(String str, String str2) {
        return f7952a.b(str, str2);
    }

    public static int b(String str, String str2, Throwable th) {
        return f7952a.b(str, str2, th);
    }

    private static void b() {
        b = z.b("persist.sys.log.ctrl", "no").equals("yes");
    }

    public static void b(Context context, String str) {
        f7952a.b(context, str);
    }

    public static int c(String str, String str2) {
        return f7952a.c(str, str2);
    }

    public static void c(Context context, String str) {
        f7952a.c(context, str);
    }

    public static int d(String str, String str2) {
        return f7952a.d(str, str2);
    }

    public static int e(String str, String str2) {
        return f7952a.e(str, str2);
    }
}
