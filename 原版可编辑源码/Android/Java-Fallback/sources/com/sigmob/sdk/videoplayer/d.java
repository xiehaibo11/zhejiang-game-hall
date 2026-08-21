package com.sigmob.sdk.videoplayer;

public class d {
    public static int a;

    static {
            return
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(android.app.Activity r4) {
            boolean r0 = b(r4)
            r1 = 0
            if (r0 == 0) goto L1d
            android.content.res.Resources r4 = r4.getResources()
            java.lang.String r0 = "navigation_bar_height"
            java.lang.String r2 = "dimen"
            java.lang.String r3 = "android"
            int r0 = r4.getIdentifier(r0, r2, r3)
            if (r0 != 0) goto L18
            return r1
        L18:
            int r4 = r4.getDimensionPixelSize(r0)
            return r4
        L1d:
            return r1
    }

    public static int a(android.content.Context r0, float r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }

    public static java.lang.String a(long r6) {
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L66
            r0 = 86400000(0x5265c00, double:4.2687272E-316)
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 < 0) goto Le
            goto L66
        Le:
            r0 = 1000(0x3e8, double:4.94E-321)
            long r6 = r6 / r0
            r0 = 60
            long r2 = r6 % r0
            int r2 = (int) r2
            long r3 = r6 / r0
            long r3 = r3 % r0
            int r0 = (int) r3
            r3 = 3600(0xe10, double:1.7786E-320)
            long r6 = r6 / r3
            int r6 = (int) r6
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.util.Formatter r1 = new java.util.Formatter
            java.util.Locale r3 = java.util.Locale.getDefault()
            r1.<init>(r7, r3)
            r7 = 1
            r3 = 0
            r4 = 2
            if (r6 <= 0) goto L51
            r5 = 3
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r5[r3] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r0)
            r5[r7] = r6
            java.lang.Integer r6 = java.lang.Integer.valueOf(r2)
            r5[r4] = r6
            java.lang.String r6 = "%d:%02d:%02d"
            java.util.Formatter r6 = r1.format(r6, r5)
        L4c:
            java.lang.String r6 = r6.toString()
            return r6
        L51:
            java.lang.Object[] r6 = new java.lang.Object[r4]
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r6[r3] = r0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r2)
            r6[r7] = r0
            java.lang.String r7 = "%02d:%02d"
            java.util.Formatter r6 = r1.format(r7, r6)
            goto L4c
        L66:
            java.lang.String r6 = "00:00"
            return r6
    }

    public static void a(android.content.Context r1, int r2) {
            android.app.Activity r0 = b(r1)
            if (r0 == 0) goto Ld
            android.app.Activity r1 = b(r1)
            r1.setRequestedOrientation(r2)
        Ld:
            return
    }

    public static boolean a(android.content.Context r1) {
            java.lang.String r0 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()
            r0 = 1
            if (r1 == 0) goto L16
            int r1 = r1.getType()
            if (r1 != r0) goto L16
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    public static android.app.Activity b(android.content.Context r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            boolean r1 = r2 instanceof android.app.Activity
            if (r1 == 0) goto Lb
            android.app.Activity r2 = (android.app.Activity) r2
            return r2
        Lb:
            boolean r1 = r2 instanceof android.content.ContextWrapper
            if (r1 == 0) goto L1a
            android.content.ContextWrapper r2 = (android.content.ContextWrapper) r2
            android.content.Context r2 = r2.getBaseContext()
            android.app.Activity r2 = b(r2)
            return r2
        L1a:
            return r0
    }

    public static boolean b(android.app.Activity r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 0
            r3 = 17
            if (r0 < r3) goto L29
            android.view.WindowManager r4 = r4.getWindowManager()
            android.view.Display r4 = r4.getDefaultDisplay()
            android.graphics.Point r0 = new android.graphics.Point
            r0.<init>()
            android.graphics.Point r3 = new android.graphics.Point
            r3.<init>()
            r4.getSize(r0)
            r4.getRealSize(r3)
            int r4 = r3.y
            int r0 = r0.y
            if (r4 == r0) goto L27
            goto L28
        L27:
            r1 = r2
        L28:
            return r1
        L29:
            android.view.ViewConfiguration r4 = android.view.ViewConfiguration.get(r4)
            boolean r4 = r4.hasPermanentMenuKey()
            r0 = 4
            boolean r0 = android.view.KeyCharacterMap.deviceHasKey(r0)
            if (r4 != 0) goto L3c
            if (r0 == 0) goto L3b
            goto L3c
        L3b:
            return r1
        L3c:
            return r2
    }

    public static android.view.Window c(android.content.Context r1) {
            android.app.Activity r0 = b(r1)
            if (r0 == 0) goto Lf
            android.app.Activity r1 = b(r1)
            android.view.Window r1 = r1.getWindow()
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static void d(android.content.Context r1) {
            boolean r0 = com.sigmob.sdk.videoplayer.g.p
            if (r0 == 0) goto Lf
            android.view.Window r1 = c(r1)
            if (r1 == 0) goto Lf
            r0 = 1024(0x400, float:1.435E-42)
            r1.clearFlags(r0)
        Lf:
            return
    }

    public static void e(android.content.Context r1) {
            boolean r0 = com.sigmob.sdk.videoplayer.g.p
            if (r0 == 0) goto Lf
            android.view.Window r1 = c(r1)
            if (r1 == 0) goto Lf
            r0 = 1024(0x400, float:1.435E-42)
            r1.setFlags(r0, r0)
        Lf:
            return
    }

    public static void f(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L9
            r0 = 5638(0x1606, float:7.9E-42)
            goto Lb
        L9:
            r0 = 1542(0x606, float:2.161E-42)
        Lb:
            android.view.Window r2 = c(r2)
            if (r2 == 0) goto L22
            android.view.View r1 = r2.getDecorView()
            int r1 = r1.getSystemUiVisibility()
            com.sigmob.sdk.videoplayer.d.a = r1
            android.view.View r2 = r2.getDecorView()
            r2.setSystemUiVisibility(r0)
        L22:
            return
    }

    public static void g(android.content.Context r1) {
            android.view.Window r1 = c(r1)
            if (r1 == 0) goto Lf
            android.view.View r1 = r1.getDecorView()
            int r0 = com.sigmob.sdk.videoplayer.d.a
            r1.setSystemUiVisibility(r0)
        Lf:
            return
    }

    public static int h(android.content.Context r4) {
            android.content.res.Resources r0 = r4.getResources()
            java.lang.String r1 = "status_bar_height"
            java.lang.String r2 = "dimen"
            java.lang.String r3 = "android"
            int r0 = r0.getIdentifier(r1, r2, r3)
            if (r0 <= 0) goto L19
            android.content.res.Resources r4 = r4.getResources()
            int r4 = r4.getDimensionPixelSize(r0)
            goto L41
        L19:
            java.lang.String r0 = "com.android.internal.R$dimen"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L3c
            java.lang.Object r2 = r0.newInstance()     // Catch: java.lang.Exception -> L3c
            java.lang.reflect.Field r0 = r0.getField(r1)     // Catch: java.lang.Exception -> L3c
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Exception -> L3c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L3c
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L3c
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L3c
            int r4 = r4.getDimensionPixelSize(r0)     // Catch: java.lang.Exception -> L3c
            goto L41
        L3c:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
        L41:
            return r4
    }

    private static void i(android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 134217728(0x8000000, float:3.85186E-34)
            r2 = 21
            if (r0 < r2) goto L33
            android.view.Window r3 = c(r3)
            r3.clearFlags(r1)
            android.view.View r0 = r3.getDecorView()
            int r0 = r0.getSystemUiVisibility()
            android.view.View r1 = r3.getDecorView()
            r0 = r0 | 1024(0x400, float:1.435E-42)
            r0 = r0 | 4
            r0 = r0 | 256(0x100, float:3.59E-43)
            r0 = r0 | 512(0x200, float:7.17E-43)
            r1.setSystemUiVisibility(r0)
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r3.addFlags(r0)
            r0 = 0
            r3.setStatusBarColor(r0)
            r3.setNavigationBarColor(r0)
            goto L40
        L33:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r0 < r2) goto L40
            android.view.Window r3 = c(r3)
            r3.addFlags(r1)
        L40:
            return
    }
}
