package com.mbridge.msdk.widget.custom.b;

public final class d {
    public static boolean a = false;
    public static java.lang.String b = "com.mbridge.msdk.widget.custom.baseview.MB";

    static {
            return
    }

    public static void a(java.lang.String r2) {
            boolean r0 = com.mbridge.msdk.widget.custom.b.d.a
            if (r0 == 0) goto L1c
            java.lang.SecurityManager r0 = new java.lang.SecurityManager
            r0.<init>()
            java.lang.Throwable r0 = new java.lang.Throwable
            r0.<init>()
            java.lang.StackTraceElement[] r0 = r0.getStackTrace()
            r1 = 1
            r0 = r0[r1]
            java.lang.String r0 = r0.getFileName()
            android.util.Log.e(r0, r2)
        L1c:
            return
    }
}
