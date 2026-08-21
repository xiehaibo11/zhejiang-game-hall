package com.vivo.push.util;

import android.os.Build;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.lang.reflect.Method;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public final class j {
    private static Method e;
    public static final boolean a = b("rom_1.0");
    public static final boolean b = b("rom_2.0");
    public static final boolean c = b("rom_2.5");
    public static final boolean d = b("rom_3.0");
    private static String f = null;
    private static String g = null;

    /* JADX WARN: Removed duplicated region for block: B:13:0x0085 A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0087 A[Catch: all -> 0x0096, TRY_ENTER, TRY_LEAVE, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x0008, B:8:0x000c, B:10:0x0053, B:11:0x005a, B:15:0x0087), top: B:23:0x0003, inners: #1 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static synchronized String a() {
        String strA;
        if (f != null || g != null) {
            p.d("Device", "sRomProperty1 : " + f + " ; sRomProperty2 : " + g);
            strA = a(f);
            if (TextUtils.isEmpty(strA)) {
                return strA;
            }
            String strA2 = a(g);
            if (TextUtils.isEmpty(strA2)) {
                return null;
            }
            return strA2;
        }
        try {
            Method declaredMethod = Class.forName("android.os.SystemProperties").getDeclaredMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class);
            e = declaredMethod;
            declaredMethod.setAccessible(true);
            f = (String) e.invoke(null, "ro.vivo.rom", "@><@");
            g = (String) e.invoke(null, "ro.vivo.rom.version", "@><@");
        } catch (Exception unused) {
            p.b("Device", "getRomCode error");
        }
        p.d("Device", "sRomProperty1 : " + f + " ; sRomProperty2 : " + g);
        strA = a(f);
        if (TextUtils.isEmpty(strA)) {
        }
    }

    private static String a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        Matcher matcher = Pattern.compile("rom_([\\d]*).?([\\d]*)", 2).matcher(str);
        if (!matcher.find()) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        sb.append(matcher.group(1));
        sb.append(TextUtils.isEmpty(matcher.group(2)) ? "0" : matcher.group(2).substring(0, 1));
        return sb.toString();
    }

    public static String a(String str, String str2) {
        String str3;
        try {
            str3 = (String) Class.forName("android.os.SystemProperties").getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(null, str);
        } catch (Exception e2) {
            e2.printStackTrace();
            str3 = str2;
        }
        return (str3 == null || str3.length() == 0) ? str2 : str3;
    }

    public static boolean b() {
        if (TextUtils.isEmpty(Build.MANUFACTURER)) {
            p.d("Device", "Build.MANUFACTURER is null");
            return false;
        }
        p.d("Device", "Build.MANUFACTURER is " + Build.MANUFACTURER);
        return Build.MANUFACTURER.toLowerCase().contains("bbk") || Build.MANUFACTURER.toLowerCase().startsWith("vivo");
    }

    private static boolean b(String str) {
        String strB = z.b("ro.vivo.rom", "");
        String strB2 = z.b("ro.vivo.rom.version", "");
        p.d("Device", "ro.vivo.rom = " + strB + " ; ro.vivo.rom.version = " + strB2);
        if (strB == null || !strB.contains(str)) {
            return strB2 != null && strB2.contains(str);
        }
        return true;
    }
}
