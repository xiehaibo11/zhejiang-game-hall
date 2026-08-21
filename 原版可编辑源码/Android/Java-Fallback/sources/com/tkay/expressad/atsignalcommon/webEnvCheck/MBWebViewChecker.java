package com.tkay.expressad.atsignalcommon.webEnvCheck;

public final class MBWebViewChecker {
    private static volatile java.lang.Boolean a;
    private static volatile android.os.Handler b;
    private static java.lang.Boolean c;


    public MBWebViewChecker() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.Boolean a() {
            java.lang.Boolean r0 = com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a
            return r0
    }

    static java.lang.Boolean a(java.lang.Boolean r0) {
            com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a = r0
            return r0
    }

    static boolean a(android.content.Context r0) {
            boolean r0 = b(r0)
            return r0
    }

    private static boolean b(android.content.Context r1) {
            android.webkit.WebView r0 = new android.webkit.WebView     // Catch: java.lang.Exception -> L6
            r0.<init>(r1)     // Catch: java.lang.Exception -> L6
            goto L7
        L6:
            r0 = 0
        L7:
            if (r0 == 0) goto Lb
            r1 = 1
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static boolean isWebViewAvailable(android.content.Context r3) {
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.c = r0
            r1 = 1
            if (r0 == 0) goto L61
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto Le
            goto L61
        Le:
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r2 = android.os.Looper.myLooper()
            if (r0 != r2) goto L3a
            java.lang.Boolean r0 = com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a
            if (r0 != 0) goto L2b
            boolean r3 = b(r3)     // Catch: java.lang.Exception -> L27
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Exception -> L27
            com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a = r3     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            java.lang.Boolean r3 = java.lang.Boolean.FALSE
            com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a = r3
        L2b:
            java.lang.Boolean r3 = com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a
            if (r3 != 0) goto L33
            java.lang.Boolean r3 = java.lang.Boolean.FALSE
            com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a = r3
        L33:
            java.lang.Boolean r3 = com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a
            boolean r3 = r3.booleanValue()
            return r3
        L3a:
            java.lang.Boolean r0 = com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a
            if (r0 != 0) goto L55
            android.os.Handler r0 = com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.b
            if (r0 != 0) goto L55
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r0.<init>(r2)
            com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.b = r0
            com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker$1 r2 = new com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker$1
            r2.<init>(r3)
            r0.post(r2)
        L55:
            java.lang.Boolean r3 = com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a
            if (r3 != 0) goto L5a
            return r1
        L5a:
            java.lang.Boolean r3 = com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.a
            boolean r3 = r3.booleanValue()
            return r3
        L61:
            return r1
    }
}
