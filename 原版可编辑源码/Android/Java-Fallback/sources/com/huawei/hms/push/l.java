package com.huawei.hms.push;

public class l {
    public static int a(android.content.Context r3) {
            android.content.pm.ApplicationInfo r0 = r3.getApplicationInfo()
            int r0 = r0.icon
            if (r0 != 0) goto L27
            android.content.res.Resources r3 = r3.getResources()
            java.lang.String r0 = "btn_star_big_on"
            java.lang.String r1 = "drawable"
            java.lang.String r2 = "android"
            int r0 = r3.getIdentifier(r0, r1, r2)
            java.lang.String r3 = "PushSelfShowLog"
            java.lang.String r1 = "icon is btn_star_big_on "
            com.huawei.hms.support.log.HMSLog.d(r3, r1)
            if (r0 != 0) goto L27
            r0 = 17301651(0x1080093, float:2.4979667E-38)
            java.lang.String r1 = "icon is sym_def_app_icon "
            com.huawei.hms.support.log.HMSLog.d(r3, r1)
        L27:
            return r0
    }

    public static android.graphics.Bitmap a(android.content.Context r5, com.huawei.hms.push.k r6) {
            java.lang.String r0 = ""
            java.lang.String r1 = "PushSelfShowLog"
            r2 = 0
            if (r5 == 0) goto L7c
            if (r6 != 0) goto La
            goto L7c
        La:
            int r3 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            r4 = 11
            if (r3 < r4) goto L16
            java.lang.String r5 = "huawei phone, and emui5.0, need not show large icon."
            com.huawei.hms.support.log.HMSLog.i(r1, r5)     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            return r2
        L16:
            java.lang.String r3 = "com.huawei.android.pushagent"
            java.lang.String r4 = r6.k()     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            if (r3 != 0) goto L7c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            r3.<init>()     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            java.lang.String r4 = "get left bitmap from "
            r3.append(r4)     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            java.lang.String r4 = r6.k()     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            r3.append(r4)     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            com.huawei.hms.support.log.HMSLog.i(r1, r3)     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            android.content.pm.PackageManager r5 = r5.getPackageManager()     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            java.lang.String r6 = r6.k()     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            android.graphics.drawable.Drawable r5 = r5.getApplicationIcon(r6)     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            android.graphics.drawable.BitmapDrawable r5 = (android.graphics.drawable.BitmapDrawable) r5     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            android.graphics.Bitmap r2 = r5.getBitmap()     // Catch: java.lang.Exception -> L4d android.content.pm.PackageManager.NameNotFoundException -> L65
            goto L7c
        L4d:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            java.lang.String r0 = r5.toString()
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r6, r5)
            goto L7c
        L65:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            java.lang.String r0 = r5.toString()
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r6, r5)
        L7c:
            return r2
    }

    public static void a(android.content.Context r0, android.app.Notification.Builder r1, com.huawei.hms.push.k r2) {
            if (r0 == 0) goto Lf
            if (r1 == 0) goto Lf
            if (r2 != 0) goto L7
            goto Lf
        L7:
            int r0 = b(r0, r2)
            r1.setSmallIcon(r0)
            return
        Lf:
            java.lang.String r0 = "PushSelfShowLog"
            java.lang.String r1 = "msg is null"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            return
    }

    public static int b(android.content.Context r3, com.huawei.hms.push.k r4) {
            r0 = 0
            if (r3 == 0) goto L38
            if (r4 != 0) goto L6
            goto L38
        L6:
            java.lang.String r1 = r4.m()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L28
            java.lang.String r4 = r4.m()
            java.lang.String r1 = "/"
            java.lang.String[] r4 = r4.split(r1)
            int r1 = r4.length
            r2 = 3
            if (r1 != r2) goto L28
            r0 = 1
            r0 = r4[r0]
            r1 = 2
            r4 = r4[r1]
            int r0 = com.huawei.hms.push.r.a(r3, r0, r4)
        L28:
            if (r0 != 0) goto L30
            java.lang.String r4 = "com.huawei.messaging.default_notification_icon"
            int r0 = com.huawei.hms.push.r.a(r3, r4)
        L30:
            if (r0 == 0) goto L33
            goto L37
        L33:
            int r0 = a(r3)
        L37:
            return r0
        L38:
            java.lang.String r3 = "PushSelfShowLog"
            java.lang.String r4 = "enter getSmallIconId, context or msg is null"
            com.huawei.hms.support.log.HMSLog.i(r3, r4)
            return r0
    }
}
