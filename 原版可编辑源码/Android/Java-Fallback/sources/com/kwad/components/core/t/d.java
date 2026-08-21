package com.kwad.components.core.t;

public final class d {
    public static void a(android.app.Activity r0, int r1, boolean r2) {
            r1 = 1
            r2 = 0
            a(r0, r2, r1, r1)
            return
    }

    public static void a(android.app.Activity r1, int r2, boolean r3, boolean r4) {
            boolean r0 = qn()
            if (r0 != 0) goto L7
            return
        L7:
            b(r1, r2, r3)
            if (r4 != 0) goto L1b
            r2 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r2 = r1.findViewById(r2)
            int r1 = com.kwad.sdk.d.a.a.getStatusBarHeight(r1)
            r3 = 0
            r2.setPadding(r3, r1, r3, r3)
        L1b:
            return
    }

    private static boolean a(android.app.Activity r4, boolean r5) {
            r5 = 0
            java.lang.String r0 = "android.view.MiuiWindowManager$LayoutParams"
            java.lang.String r1 = "EXTRA_FLAG_STATUS_BAR_DARK_MODE"
            java.lang.Object r0 = com.kwad.sdk.utils.s.an(r0, r1)     // Catch: java.lang.Exception -> L29
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> L29
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> L29
            android.view.Window r4 = r4.getWindow()     // Catch: java.lang.Exception -> L29
            java.lang.String r1 = "setExtraFlags"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L29
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L29
            r2[r5] = r3     // Catch: java.lang.Exception -> L29
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L29
            r3 = 1
            r2[r3] = r0     // Catch: java.lang.Exception -> L29
            com.kwad.sdk.utils.s.f(r4, r1, r2)     // Catch: java.lang.Exception -> L29
            return r3
        L29:
            r4 = move-exception
            r4.printStackTrace()
            return r5
    }

    private static void b(android.app.Activity r4, int r5, boolean r6) {
            android.view.Window r0 = r4.getWindow()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 1280(0x500, float:1.794E-42)
            r3 = 21
            if (r1 < r3) goto L46
            if (r6 == 0) goto L34
            int r6 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r6 < r1) goto L34
            r2 = 9472(0x2500, float:1.3273E-41)
            r6 = 67108864(0x4000000, float:1.5046328E-36)
            r0.clearFlags(r6)
            r6 = -2147483648(0xffffffff80000000, float:-0.0)
            r0.addFlags(r6)
            boolean r6 = com.kwad.sdk.utils.as.IT()
            r1 = 1
            if (r6 == 0) goto L2b
            a(r4, r1)
            goto L34
        L2b:
            boolean r6 = com.kwad.sdk.utils.as.IU()
            if (r6 == 0) goto L34
            com.kwad.components.core.t.i.b(r4, r1)
        L34:
            android.view.View r4 = r0.getDecorView()
            r4.setSystemUiVisibility(r2)
            r0.setStatusBarColor(r5)
            int r4 = r0.getNavigationBarColor()
            r0.setNavigationBarColor(r4)
            return
        L46:
            int r4 = android.os.Build.VERSION.SDK_INT
            r5 = 19
            if (r4 < r5) goto L53
            android.view.View r4 = r0.getDecorView()
            r4.setSystemUiVisibility(r2)
        L53:
            return
    }

    public static boolean qn() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }
}
