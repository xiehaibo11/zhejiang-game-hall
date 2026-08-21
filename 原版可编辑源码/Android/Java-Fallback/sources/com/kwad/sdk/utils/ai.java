package com.kwad.sdk.utils;

public final class ai {
    public static boolean IN() {
            boolean r0 = IO()
            return r0
    }

    public static boolean IO() {
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            android.content.Context r0 = r0.getApplicationContext()
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.orientation
            r1 = 1
            if (r0 != r1) goto L16
            return r1
        L16:
            r0 = 0
            return r0
    }

    public static void b(android.content.Context r1, boolean r2) {
            android.app.Activity r1 = com.kwad.sdk.m.l.dr(r1)     // Catch: java.lang.Exception -> L4a
            if (r1 != 0) goto L7
            return
        L7:
            r0 = 19
            if (r2 == 0) goto L2b
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L4a
            if (r2 >= r0) goto L1d
            android.view.Window r1 = r1.getWindow()     // Catch: java.lang.Exception -> L4a
            android.view.View r1 = r1.getDecorView()     // Catch: java.lang.Exception -> L4a
            r2 = 8
            r1.setSystemUiVisibility(r2)     // Catch: java.lang.Exception -> L4a
            goto L4e
        L1d:
            android.view.Window r1 = r1.getWindow()     // Catch: java.lang.Exception -> L4a
            android.view.View r1 = r1.getDecorView()     // Catch: java.lang.Exception -> L4a
            r2 = 1792(0x700, float:2.511E-42)
            r1.setSystemUiVisibility(r2)     // Catch: java.lang.Exception -> L4a
            goto L4e
        L2b:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L4a
            if (r2 >= r0) goto L3c
            android.view.Window r1 = r1.getWindow()     // Catch: java.lang.Exception -> L4a
            android.view.View r1 = r1.getDecorView()     // Catch: java.lang.Exception -> L4a
            r2 = 0
            r1.setSystemUiVisibility(r2)     // Catch: java.lang.Exception -> L4a
            goto L4e
        L3c:
            android.view.Window r1 = r1.getWindow()     // Catch: java.lang.Exception -> L4a
            android.view.View r1 = r1.getDecorView()     // Catch: java.lang.Exception -> L4a
            r2 = 3846(0xf06, float:5.39E-42)
            r1.setSystemUiVisibility(r2)     // Catch: java.lang.Exception -> L4a
            return
        L4a:
            r1 = move-exception
            r1.printStackTrace()
        L4e:
            return
    }

    public static boolean ck(android.content.Context r3) {
            android.app.Activity r3 = com.kwad.sdk.m.l.dr(r3)
            r0 = 0
            if (r3 == 0) goto L1a
            android.view.Window r3 = r3.getWindow()
            android.view.WindowManager$LayoutParams r1 = r3.getAttributes()
            int r1 = r1.flags
            r2 = 1024(0x400, float:1.435E-42)
            r1 = r1 & r2
            if (r1 != r2) goto L17
            r0 = 1
        L17:
            r3.setFlags(r2, r2)
        L1a:
            return r0
    }

    public static void cl(android.content.Context r1) {
            android.app.Activity r1 = com.kwad.sdk.m.l.dr(r1)
            if (r1 == 0) goto Lf
            android.view.Window r1 = r1.getWindow()
            r0 = 1024(0x400, float:1.435E-42)
            r1.clearFlags(r0)
        Lf:
            return
    }

    public static void cm(android.content.Context r1) {
            android.app.Activity r1 = com.kwad.sdk.m.l.dr(r1)
            if (r1 == 0) goto La
            r0 = 0
            r1.setRequestedOrientation(r0)
        La:
            return
    }

    public static void cn(android.content.Context r1) {
            android.app.Activity r1 = com.kwad.sdk.m.l.dr(r1)
            if (r1 == 0) goto La
            r0 = 1
            r1.setRequestedOrientation(r0)
        La:
            return
    }
}
