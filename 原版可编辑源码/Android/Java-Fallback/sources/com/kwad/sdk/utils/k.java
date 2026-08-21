package com.kwad.sdk.utils;

public final class k {
    public static java.lang.String J(android.content.Context r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L1e
            if (r2 != 0) goto Lb
            goto L1e
        Lb:
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Exception -> L1e
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1e
            r0 = 64
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r0)     // Catch: java.lang.Exception -> L1e
            if (r2 == 0) goto L1e
            java.lang.String r2 = r2.versionName     // Catch: java.lang.Exception -> L1e
            return r2
        L1e:
            return r1
    }

    public static java.lang.String bQ(android.content.Context r2) {
            android.content.Context r0 = r2.getApplicationContext()     // Catch: java.lang.Exception -> L17
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L17
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L17
            r1 = 64
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L17
            if (r2 == 0) goto L17
            java.lang.String r2 = r2.versionName     // Catch: java.lang.Exception -> L17
            return r2
        L17:
            java.lang.String r2 = ""
            return r2
    }

    public static int bR(android.content.Context r1) {
            java.lang.String r0 = "audio"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.media.AudioManager r1 = (android.media.AudioManager) r1
            if (r1 == 0) goto L10
            r0 = 3
            int r1 = r1.getStreamVolume(r0)
            return r1
        L10:
            r1 = 0
            return r1
    }

    public static int bS(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            android.util.DisplayMetrics r1 = new android.util.DisplayMetrics     // Catch: java.lang.Exception -> L20
            r1.<init>()     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = "window"
            java.lang.Object r3 = r3.getSystemService(r2)     // Catch: java.lang.Exception -> L20
            android.view.WindowManager r3 = (android.view.WindowManager) r3     // Catch: java.lang.Exception -> L20
            android.view.Display r3 = r3.getDefaultDisplay()     // Catch: java.lang.Exception -> L20
            r3.getMetrics(r1)     // Catch: java.lang.Exception -> L20
            int r3 = r1.widthPixels     // Catch: java.lang.Exception -> L20
            float r3 = (float) r3     // Catch: java.lang.Exception -> L20
            float r0 = r1.density     // Catch: java.lang.Exception -> L20
            float r3 = r3 / r0
            int r3 = (int) r3
            return r3
        L20:
            return r0
    }

    public static int bT(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            android.util.DisplayMetrics r1 = new android.util.DisplayMetrics     // Catch: java.lang.Exception -> L20
            r1.<init>()     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = "window"
            java.lang.Object r3 = r3.getSystemService(r2)     // Catch: java.lang.Exception -> L20
            android.view.WindowManager r3 = (android.view.WindowManager) r3     // Catch: java.lang.Exception -> L20
            android.view.Display r3 = r3.getDefaultDisplay()     // Catch: java.lang.Exception -> L20
            r3.getMetrics(r1)     // Catch: java.lang.Exception -> L20
            int r3 = r1.heightPixels     // Catch: java.lang.Exception -> L20
            float r3 = (float) r3     // Catch: java.lang.Exception -> L20
            float r0 = r1.density     // Catch: java.lang.Exception -> L20
            float r3 = r3 / r0
            int r3 = (int) r3
            return r3
        L20:
            return r0
    }

    public static java.lang.String getLanguage() {
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.getLanguage()
            return r0
    }

    public static int getScreenHeight(android.content.Context r2) {
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics     // Catch: java.lang.Exception -> L17
            r0.<init>()     // Catch: java.lang.Exception -> L17
            java.lang.String r1 = "window"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L17
            android.view.WindowManager r2 = (android.view.WindowManager) r2     // Catch: java.lang.Exception -> L17
            android.view.Display r2 = r2.getDefaultDisplay()     // Catch: java.lang.Exception -> L17
            r2.getMetrics(r0)     // Catch: java.lang.Exception -> L17
            int r2 = r0.heightPixels     // Catch: java.lang.Exception -> L17
            return r2
        L17:
            r2 = 0
            return r2
    }

    public static int getScreenWidth(android.content.Context r2) {
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics     // Catch: java.lang.Exception -> L17
            r0.<init>()     // Catch: java.lang.Exception -> L17
            java.lang.String r1 = "window"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L17
            android.view.WindowManager r2 = (android.view.WindowManager) r2     // Catch: java.lang.Exception -> L17
            android.view.Display r2 = r2.getDefaultDisplay()     // Catch: java.lang.Exception -> L17
            r2.getMetrics(r0)     // Catch: java.lang.Exception -> L17
            int r2 = r0.widthPixels     // Catch: java.lang.Exception -> L17
            return r2
        L17:
            r2 = 0
            return r2
    }
}
