package com.vivo.push.util;

import android.os.Build;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.lang.reflect.Method;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes4.dex */
public final class j {
    private static Method e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final boolean f7948a = b("rom_1.0");
    public static final boolean b = b("rom_2.0");
    public static final boolean c = b("rom_2.5");
    public static final boolean d = b("rom_3.0");
    private static String f = null;
    private static String g = null;

    /* JADX WARN: Removed duplicated region for block: B:13:0x0085 A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0087 A[Catch: all -> 0x0096, TRY_ENTER, TRY_LEAVE, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x0008, B:8:0x000c, B:10:0x0053, B:11:0x005a, B:15:0x0087), top: B:23:0x0003, inners: #1 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static synchronized java.lang.String a() {
        /*
            java.lang.Class<com.vivo.push.util.j> r0 = com.vivo.push.util.j.class
            monitor-enter(r0)
            java.lang.String r1 = com.vivo.push.util.j.f     // Catch: java.lang.Throwable -> L96
            r2 = 0
            if (r1 != 0) goto L5a
            java.lang.String r1 = com.vivo.push.util.j.g     // Catch: java.lang.Throwable -> L96
            if (r1 != 0) goto L5a
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r3 = "get"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r5)     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            com.vivo.push.util.j.e = r1     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            r1.setAccessible(r8)     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.reflect.Method r1 = com.vivo.push.util.j.e     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r5 = "ro.vivo.rom"
            r3[r7] = r5     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r5 = "@><@"
            r3[r8] = r5     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            com.vivo.push.util.j.f = r1     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.reflect.Method r1 = com.vivo.push.util.j.e     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r4 = "ro.vivo.rom.version"
            r3[r7] = r4     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r4 = "@><@"
            r3[r8] = r4     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            com.vivo.push.util.j.g = r1     // Catch: java.lang.Exception -> L53 java.lang.Throwable -> L96
            goto L5a
        L53:
            java.lang.String r1 = "Device"
            java.lang.String r3 = "getRomCode error"
            com.vivo.push.util.p.b(r1, r3)     // Catch: java.lang.Throwable -> L96
        L5a:
            java.lang.String r1 = "Device"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = "sRomProperty1 : "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = com.vivo.push.util.j.f     // Catch: java.lang.Throwable -> L96
            r3.append(r4)     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = " ; sRomProperty2 : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = com.vivo.push.util.j.g     // Catch: java.lang.Throwable -> L96
            r3.append(r4)     // Catch: java.lang.Throwable -> L96
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L96
            com.vivo.push.util.p.d(r1, r3)     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = com.vivo.push.util.j.f     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L96
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L96
            if (r3 != 0) goto L87
            monitor-exit(r0)
            return r1
        L87:
            java.lang.String r1 = com.vivo.push.util.j.g     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> L96
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L96
            monitor-exit(r0)
            if (r3 != 0) goto L95
            return r1
        L95:
            return r2
        L96:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vivo.push.util.j.a():java.lang.String");
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
