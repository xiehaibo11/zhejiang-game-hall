package com.qq.e.comm.util;

public class GDTLogger {
    public static final boolean DEBUG_ENABLE = false;

    public GDTLogger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void d(java.lang.String r0) {
            return
    }

    public static void e(java.lang.String r1) {
            java.lang.String r0 = "gdt_ad_mob"
            android.util.Log.e(r0, r1)
            return
    }

    public static void e(java.lang.String r1, java.lang.Throwable r2) {
            java.lang.String r0 = "gdt_ad_mob"
            if (r2 != 0) goto L8
            android.util.Log.e(r0, r1)
            goto Lb
        L8:
            android.util.Log.e(r0, r1, r2)
        Lb:
            return
    }

    public static void i(java.lang.String r0) {
            return
    }

    public static void w(java.lang.String r1) {
            java.lang.String r0 = "gdt_ad_mob"
            android.util.Log.e(r0, r1)
            return
    }

    public static void w(java.lang.String r1, java.lang.Throwable r2) {
            java.lang.String r0 = "gdt_ad_mob"
            if (r2 != 0) goto L8
            android.util.Log.w(r0, r1)
            goto Lb
        L8:
            android.util.Log.w(r0, r1, r2)
        Lb:
            return
    }
}
