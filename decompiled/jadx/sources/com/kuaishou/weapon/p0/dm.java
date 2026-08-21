package com.kuaishou.weapon.p0;

import android.content.Context;

/* JADX INFO: loaded from: classes2.dex */
public final class dm {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a f2770a;

    public enum a {
        UNKNOWN,
        ARMEABI_V7A,
        ARM64_V8A
    }

    private dm() {
    }

    public static String a(Context context) {
        return b(context) ? "arm64-v8a" : "armeabi-v7a";
    }

    public static boolean b(Context context) {
        return c(context) == a.ARM64_V8A;
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x000b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.kuaishou.weapon.p0.dm.a c(android.content.Context r5) {
        /*
            com.kuaishou.weapon.p0.dm$a r0 = com.kuaishou.weapon.p0.dm.f2770a
            if (r0 == 0) goto L5
            return r0
        L5:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L10
        Lb:
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.ARMEABI_V7A
        Ld:
            com.kuaishou.weapon.p0.dm.f2770a = r5
            goto L77
        L10:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r0 < r2) goto L1f
            boolean r5 = android.os.Process.is64Bit()
            if (r5 == 0) goto Lb
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.ARM64_V8A
            goto Ld
        L1f:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L77
            java.lang.String r0 = "dalvik.system.VMRuntime"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "getRuntime"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L56
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = "is64Bit"
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L56
            java.lang.reflect.Method r3 = r0.getDeclaredMethod(r3, r4)     // Catch: java.lang.Throwable -> L56
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L56
            java.lang.Object r0 = r1.invoke(r0, r4)     // Catch: java.lang.Throwable -> L56
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L56
            java.lang.Object r0 = r3.invoke(r0, r1)     // Catch: java.lang.Throwable -> L56
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Throwable -> L56
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Throwable -> L56
            if (r0 == 0) goto L51
            com.kuaishou.weapon.p0.dm$a r0 = com.kuaishou.weapon.p0.dm.a.ARM64_V8A     // Catch: java.lang.Throwable -> L56
            goto L53
        L51:
            com.kuaishou.weapon.p0.dm$a r0 = com.kuaishou.weapon.p0.dm.a.ARMEABI_V7A     // Catch: java.lang.Throwable -> L56
        L53:
            com.kuaishou.weapon.p0.dm.f2770a = r0     // Catch: java.lang.Throwable -> L56
            goto L77
        L56:
            r0 = move-exception
            r0.printStackTrace()
            android.content.pm.ApplicationInfo r5 = r5.getApplicationInfo()     // Catch: java.lang.Throwable -> L70
            java.lang.String r5 = r5.nativeLibraryDir     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = "arm64"
            boolean r5 = r5.contains(r0)     // Catch: java.lang.Throwable -> L70
            if (r5 == 0) goto L6d
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.ARM64_V8A     // Catch: java.lang.Throwable -> L70
        L6a:
            com.kuaishou.weapon.p0.dm.f2770a = r5     // Catch: java.lang.Throwable -> L70
            goto L77
        L6d:
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.UNKNOWN     // Catch: java.lang.Throwable -> L70
            goto L6a
        L70:
            r5 = move-exception
            r5.printStackTrace()
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.a.UNKNOWN
            goto Ld
        L77:
            com.kuaishou.weapon.p0.dm$a r5 = com.kuaishou.weapon.p0.dm.f2770a
            return r5
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kuaishou.weapon.p0.dm.c(android.content.Context):com.kuaishou.weapon.p0.dm$a");
    }
}
