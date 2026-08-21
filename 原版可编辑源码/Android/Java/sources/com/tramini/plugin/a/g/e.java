package com.tramini.plugin.a.g;

import android.content.Context;
import android.os.Build;
import android.provider.Settings;
import android.text.TextUtils;

public final class e {
    private static String a = "";
    private static String b = "";
    private static String c = "";
    private static String d = "";
    private static int e;
    private static String f;

    private e() {
    }

    public static String a(Context context) {
        if (com.tramini.plugin.a.a.c.a().a("app_vc")) {
            return "";
        }
        if (e == 0) {
            try {
                e = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode;
                StringBuilder sb = new StringBuilder();
                sb.append(e);
                return sb.toString();
            } catch (Exception e2) {
                e2.printStackTrace();
                return "";
            }
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(e);
        return sb2.toString();
    }

    public static String b(Context context) {
        if (com.tramini.plugin.a.a.c.a().a("app_vn")) {
            return "";
        }
        try {
            if (TextUtils.isEmpty(d)) {
                String str = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
                d = str;
                return str;
            }
            return d;
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    public static String c(Context context) {
        if (com.tramini.plugin.a.a.c.a().a("package_name")) {
            return "";
        }
        try {
            if (TextUtils.isEmpty(c)) {
                String str = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).packageName;
                c = str;
                return str;
            }
            return c;
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    public static String a() {
        if (com.tramini.plugin.a.a.c.a().a("os_vc")) {
            return "";
        }
        if (TextUtils.isEmpty(b)) {
            b = String.valueOf(Build.VERSION.SDK_INT);
        }
        return b;
    }

    public static String b() {
        if (com.tramini.plugin.a.a.c.a().a("os_vn")) {
            return "";
        }
        if (TextUtils.isEmpty(a)) {
            a = Build.VERSION.RELEASE;
        }
        return a;
    }

    private static int c() {
        return Build.VERSION.SDK_INT;
    }

    public static String d(Context context) {
        if (com.tramini.plugin.a.a.c.a().a("android_id")) {
            return "";
        }
        try {
            if (f == null) {
                String string = Settings.Secure.getString(context.getContentResolver(), "android_id");
                f = string;
                if (string == null) {
                    f = "";
                }
            }
        } catch (Exception unused) {
            f = "";
        }
        return f;
    }
}
