package com.mbridge.msdk.foundation.tools;

public final class z {
    public static boolean a = true;
    public static boolean b = true;
    public static boolean c = true;
    public static boolean d = true;
    public static boolean e = true;
    public static boolean f = false;
    public static boolean g = true;
    public static boolean h;

    static {
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 != 0) goto L15
            r0 = 0
            com.mbridge.msdk.foundation.tools.z.a = r0
            com.mbridge.msdk.foundation.tools.z.b = r0
            com.mbridge.msdk.foundation.tools.z.c = r0
            com.mbridge.msdk.foundation.tools.z.d = r0
            com.mbridge.msdk.foundation.tools.z.e = r0
            com.mbridge.msdk.foundation.tools.z.f = r0
            com.mbridge.msdk.foundation.tools.z.g = r0
            com.mbridge.msdk.foundation.tools.z.h = r0
        L15:
            return
    }

    private static java.lang.String a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L17
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "MBRIDGE_"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L17:
            return r2
    }

    public static void a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.mbridge.msdk.foundation.tools.z.b
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.d(r1, r2)
        L11:
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = com.mbridge.msdk.foundation.tools.z.b
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.d(r1, r2, r3)
        L11:
            return
    }

    public static void b(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.mbridge.msdk.foundation.tools.z.c
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.i(r1, r2)
        L11:
            return
    }

    public static void b(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = com.mbridge.msdk.foundation.tools.z.d
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.w(r1, r2, r3)
        L11:
            return
    }

    public static void c(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.mbridge.msdk.foundation.tools.z.d
            if (r0 == 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            java.lang.String r1 = a(r1)
            android.util.Log.w(r1, r2)
        L11:
            return
    }

    public static void c(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            boolean r0 = com.mbridge.msdk.foundation.tools.z.e
            if (r0 == 0) goto Lf
            if (r2 == 0) goto Lf
            if (r3 == 0) goto Lf
            java.lang.String r1 = a(r1)
            android.util.Log.e(r1, r2, r3)
        Lf:
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.mbridge.msdk.foundation.tools.z.e
            if (r0 == 0) goto Ld
            if (r2 == 0) goto Ld
            java.lang.String r1 = a(r1)
            android.util.Log.e(r1, r2)
        Ld:
            return
    }
}
