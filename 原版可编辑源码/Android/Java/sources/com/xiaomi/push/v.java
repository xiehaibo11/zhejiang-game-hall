package com.xiaomi.push;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;

public class v {
    private static Context a;
    private static String a;

    public static int a() {
        try {
            Class<?> clsA = a(null, "miui.os.Build");
            if (clsA.getField("IS_STABLE_VERSION").getBoolean(null)) {
                return 3;
            }
            return clsA.getField("IS_DEVELOPMENT_VERSION").getBoolean(null) ? 2 : 1;
        } catch (Exception unused) {
            return 0;
        }
    }

    public static Context a() {
        return a;
    }

    public static Class<?> a(Context context, String str) throws ClassNotFoundException {
        if (str == null || str.trim().length() == 0) {
            throw new ClassNotFoundException("class is empty");
        }
        boolean z = context != null;
        if (z && Build.VERSION.SDK_INT >= 29) {
            try {
                return context.getClassLoader().loadClass(str);
            } catch (Throwable unused) {
            }
        }
        try {
            return Class.forName(str);
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a(String.format("loadClass fail hasContext= %s, errMsg = %s", Boolean.valueOf(z), th.getLocalizedMessage()));
            throw new ClassNotFoundException("loadClass fail ", th);
        }
    }

    public static synchronized String a() {
        if (a != null) {
            return a;
        }
        String strValueOf = Build.VERSION.INCREMENTAL;
        if (a() <= 0) {
            String strB = b();
            if (TextUtils.isEmpty(strB)) {
                strB = c();
                if (TextUtils.isEmpty(strB)) {
                    strB = d();
                    if (TextUtils.isEmpty(strB)) {
                        strValueOf = String.valueOf(u.a("ro.product.brand", "Android") + "_" + strValueOf);
                    }
                }
                strValueOf = strB;
            } else {
                strValueOf = strB;
            }
        }
        a = strValueOf;
        return strValueOf;
    }

    public static void a(Context context) {
        a = context.getApplicationContext();
    }

    public static boolean a() {
        return TextUtils.equals((String) bk.a("android.os.SystemProperties", MonitorConstants.CONNECT_TYPE_GET, "sys.boot_completed"), "1");
    }

    public static boolean a(Context context) {
        try {
            return (context.getApplicationInfo().flags & 2) != 0;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return false;
        }
    }

    private static String b() {
        String strA = u.a(com.alipay.sdk.m.c.a.a, "");
        a = strA;
        return strA;
    }

    public static boolean b() {
        try {
            return a(null, "miui.os.Build").getField("IS_GLOBAL_BUILD").getBoolean(false);
        } catch (ClassNotFoundException unused) {
            com.xiaomi.channel.commonutils.logger.b.d("miui.os.Build ClassNotFound");
            return false;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return false;
        }
    }

    private static String c() {
        String strA = u.a("ro.build.version.opporom", "");
        if (!TextUtils.isEmpty(strA) && !strA.startsWith("ColorOS_")) {
            a = "ColorOS_" + strA;
        }
        return a;
    }

    private static String d() {
        String strA = u.a("ro.vivo.os.version", "");
        if (!TextUtils.isEmpty(strA) && !strA.startsWith("FuntouchOS_")) {
            a = "FuntouchOS_" + strA;
        }
        return a;
    }
}
