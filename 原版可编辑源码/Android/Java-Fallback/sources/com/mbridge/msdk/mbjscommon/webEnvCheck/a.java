package com.mbridge.msdk.mbjscommon.webEnvCheck;

public final class a {
    private static volatile java.lang.Boolean a;
    private static volatile android.os.Handler b;
    private static java.lang.Boolean c;


    static java.lang.Boolean a() {
            java.lang.Boolean r0 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a
            return r0
    }

    static java.lang.Boolean a(java.lang.Boolean r0) {
            com.mbridge.msdk.mbjscommon.webEnvCheck.a.a = r0
            return r0
    }

    public static boolean a(android.content.Context r4) {
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L11
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L11
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L11
            com.mbridge.msdk.c.a r0 = r0.g(r1)     // Catch: java.lang.Exception -> L11
            goto L12
        L11:
            r0 = 0
        L12:
            r1 = 0
            if (r0 == 0) goto L20
            boolean r0 = r0.d()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.mbridge.msdk.mbjscommon.webEnvCheck.a.c = r0
            goto L26
        L20:
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r1)
            com.mbridge.msdk.mbjscommon.webEnvCheck.a.c = r0
        L26:
            java.lang.Boolean r0 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.c
            r2 = 1
            if (r0 == 0) goto L8c
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L32
            goto L8c
        L32:
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r3 = android.os.Looper.myLooper()
            if (r0 != r3) goto L63
            java.lang.Boolean r0 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a
            if (r0 != 0) goto L51
            boolean r4 = c(r4)     // Catch: java.lang.Exception -> L4b
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.mbjscommon.webEnvCheck.a.a = r4     // Catch: java.lang.Exception -> L4b
            goto L51
        L4b:
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r1)
            com.mbridge.msdk.mbjscommon.webEnvCheck.a.a = r4
        L51:
            java.lang.Boolean r4 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a
            if (r4 != 0) goto L5c
            java.lang.Boolean r4 = new java.lang.Boolean
            r4.<init>(r1)
            com.mbridge.msdk.mbjscommon.webEnvCheck.a.a = r4
        L5c:
            java.lang.Boolean r4 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a
            boolean r4 = r4.booleanValue()
            return r4
        L63:
            java.lang.Boolean r0 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a
            if (r0 != 0) goto L80
            android.os.Handler r0 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.b
            if (r0 != 0) goto L80
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.mbridge.msdk.mbjscommon.webEnvCheck.a.b = r0
            android.os.Handler r0 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.b
            com.mbridge.msdk.mbjscommon.webEnvCheck.a$1 r1 = new com.mbridge.msdk.mbjscommon.webEnvCheck.a$1
            r1.<init>(r4)
            r0.post(r1)
        L80:
            java.lang.Boolean r4 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a
            if (r4 != 0) goto L85
            return r2
        L85:
            java.lang.Boolean r4 = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a
            boolean r4 = r4.booleanValue()
            return r4
        L8c:
            return r2
    }

    static boolean b(android.content.Context r0) {
            boolean r0 = c(r0)
            return r0
    }

    private static boolean c(android.content.Context r1) {
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
}
