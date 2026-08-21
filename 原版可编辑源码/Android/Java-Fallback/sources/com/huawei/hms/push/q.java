package com.huawei.hms.push;

public class q {
    public static long a(java.lang.String r11) {
            java.lang.String r0 = "PushSelfShowLog"
            if (r11 != 0) goto L6
            java.lang.String r11 = ""
        L6:
            r1 = 0
            java.util.Date r3 = new java.util.Date     // Catch: java.lang.Exception -> L92
            r3.<init>()     // Catch: java.lang.Exception -> L92
            int r4 = r3.getHours()     // Catch: java.lang.Exception -> L92
            int r4 = r4 * 2
            int r5 = r3.getMinutes()     // Catch: java.lang.Exception -> L92
            int r5 = r5 / 30
            int r4 = r4 + r5
            java.lang.String r11 = r11.concat(r11)     // Catch: java.lang.Exception -> L92
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L92
            r5.<init>()     // Catch: java.lang.Exception -> L92
            java.lang.String r6 = "startIndex is "
            r5.append(r6)     // Catch: java.lang.Exception -> L92
            r5.append(r4)     // Catch: java.lang.Exception -> L92
            java.lang.String r6 = ",ap is:"
            r5.append(r6)     // Catch: java.lang.Exception -> L92
            r5.append(r11)     // Catch: java.lang.Exception -> L92
            java.lang.String r6 = ",length is:"
            r5.append(r6)     // Catch: java.lang.Exception -> L92
            int r6 = r11.length()     // Catch: java.lang.Exception -> L92
            r5.append(r6)     // Catch: java.lang.Exception -> L92
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L92
            com.huawei.hms.support.log.HMSLog.i(r0, r5)     // Catch: java.lang.Exception -> L92
            int r5 = r11.length()     // Catch: java.lang.Exception -> L92
            r6 = r4
        L4b:
            if (r6 >= r5) goto L98
            char r7 = r11.charAt(r6)     // Catch: java.lang.Exception -> L92
            r8 = 48
            if (r7 == r8) goto L8f
            r7 = 60000(0xea60, double:2.9644E-319)
            int r11 = r6 - r4
            int r11 = r11 * 30
            int r3 = r3.getMinutes()     // Catch: java.lang.Exception -> L92
            int r3 = r3 % 30
            int r11 = r11 - r3
            long r9 = (long) r11     // Catch: java.lang.Exception -> L92
            long r9 = r9 * r7
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L92
            r11.<init>()     // Catch: java.lang.Exception -> L92
            java.lang.String r3 = "startIndex is:"
            r11.append(r3)     // Catch: java.lang.Exception -> L92
            r11.append(r4)     // Catch: java.lang.Exception -> L92
            java.lang.String r3 = " i is:"
            r11.append(r3)     // Catch: java.lang.Exception -> L92
            r11.append(r6)     // Catch: java.lang.Exception -> L92
            java.lang.String r3 = " delay:"
            r11.append(r3)     // Catch: java.lang.Exception -> L92
            r11.append(r9)     // Catch: java.lang.Exception -> L92
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> L92
            com.huawei.hms.support.log.HMSLog.d(r0, r11)     // Catch: java.lang.Exception -> L92
            int r11 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r11 < 0) goto L8e
            r1 = r9
        L8e:
            return r1
        L8f:
            int r6 = r6 + 1
            goto L4b
        L92:
            r11 = move-exception
            java.lang.String r3 = "error "
            com.huawei.hms.support.log.HMSLog.e(r0, r3, r11)
        L98:
            return r1
    }

    public static java.lang.Boolean a(android.content.Context r3, java.lang.String r4, android.content.Intent r5) {
            r0 = 0
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L3d
            java.util.List r3 = r3.queryIntentActivities(r5, r0)     // Catch: java.lang.Exception -> L3d
            if (r3 == 0) goto L47
            int r5 = r3.size()     // Catch: java.lang.Exception -> L3d
            if (r5 <= 0) goto L47
            int r5 = r3.size()     // Catch: java.lang.Exception -> L3d
            r1 = r0
        L16:
            if (r1 >= r5) goto L47
            java.lang.Object r2 = r3.get(r1)     // Catch: java.lang.Exception -> L3d
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2     // Catch: java.lang.Exception -> L3d
            android.content.pm.ActivityInfo r2 = r2.activityInfo     // Catch: java.lang.Exception -> L3d
            if (r2 == 0) goto L3a
            java.lang.Object r2 = r3.get(r1)     // Catch: java.lang.Exception -> L3d
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2     // Catch: java.lang.Exception -> L3d
            android.content.pm.ActivityInfo r2 = r2.activityInfo     // Catch: java.lang.Exception -> L3d
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo     // Catch: java.lang.Exception -> L3d
            java.lang.String r2 = r2.packageName     // Catch: java.lang.Exception -> L3d
            boolean r2 = r4.equals(r2)     // Catch: java.lang.Exception -> L3d
            if (r2 == 0) goto L3a
            r3 = 1
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Exception -> L3d
            return r3
        L3a:
            int r1 = r1 + 1
            goto L16
        L3d:
            r3 = move-exception
            java.lang.String r4 = r3.toString()
            java.lang.String r5 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.e(r5, r4, r3)
        L47:
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r0)
            return r3
    }

    public static java.lang.String a(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            r0 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r1.getApplicationInfo(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            java.lang.CharSequence r1 = r1.getApplicationLabel(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            java.lang.String r1 = r1.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L13
            return r1
        L13:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "get the app name of package:"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r2 = " failed."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            r1 = 0
            return r1
    }

    public static void a(android.content.Context r2, int r3) {
            java.lang.String r0 = "PushSelfShowLog"
            if (r2 != 0) goto La
            java.lang.String r2 = "context is null"
            com.huawei.hms.support.log.HMSLog.e(r0, r2)
            return
        La:
            java.lang.String r1 = "notification"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L18
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2     // Catch: java.lang.Exception -> L18
            if (r2 == 0) goto L31
            r2.cancel(r3)     // Catch: java.lang.Exception -> L18
            goto L31
        L18:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "removeNotifiCationById err:"
            r3.append(r1)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r2)
        L31:
            return
    }

    public static void a(android.content.Context r4, android.content.Intent r5) {
            java.lang.String r0 = "PushSelfShowLog"
            java.lang.String r1 = "selfshow_auto_clear_id"
            r2 = 0
            int r5 = r5.getIntExtra(r1, r2)     // Catch: java.lang.Exception -> L55
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            r1.<init>()     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "setDelayAlarm(cancel) alarmNotityId "
            r1.append(r2)     // Catch: java.lang.Exception -> L55
            r1.append(r5)     // Catch: java.lang.Exception -> L55
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L55
            com.huawei.hms.support.log.HMSLog.d(r0, r1)     // Catch: java.lang.Exception -> L55
            if (r5 != 0) goto L20
            return
        L20:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "com.huawei.intent.action.PUSH_DELAY_NOTIFY"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = r4.getPackageName()     // Catch: java.lang.Exception -> L55
            android.content.Intent r2 = r1.setPackage(r2)     // Catch: java.lang.Exception -> L55
            r3 = 32
            r2.setFlags(r3)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = "alarm"
            java.lang.Object r2 = r4.getSystemService(r2)     // Catch: java.lang.Exception -> L55
            android.app.AlarmManager r2 = (android.app.AlarmManager) r2     // Catch: java.lang.Exception -> L55
            r3 = 536870912(0x20000000, float:1.0842022E-19)
            android.app.PendingIntent r4 = android.app.PendingIntent.getBroadcast(r4, r5, r1, r3)     // Catch: java.lang.Exception -> L55
            if (r4 == 0) goto L4f
            if (r2 == 0) goto L4f
            java.lang.String r5 = "alarm cancel"
            com.huawei.hms.support.log.HMSLog.d(r0, r5)     // Catch: java.lang.Exception -> L55
            r2.cancel(r4)     // Catch: java.lang.Exception -> L55
            goto L6e
        L4f:
            java.lang.String r4 = "alarm not exist"
            com.huawei.hms.support.log.HMSLog.d(r0, r4)     // Catch: java.lang.Exception -> L55
            goto L6e
        L55:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "cancelAlarm err:"
            r5.append(r1)
            java.lang.String r4 = r4.toString()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
        L6e:
            return
    }

    public static void a(android.content.Context r6, android.content.Intent r7, long r8) {
            java.lang.String r0 = "PushSelfShowLog"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4a
            r1.<init>()     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "enter setAPDelayAlarm(intent:"
            r1.append(r2)     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = r7.toURI()     // Catch: java.lang.Exception -> L4a
            r1.append(r2)     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = " interval:"
            r1.append(r2)     // Catch: java.lang.Exception -> L4a
            r1.append(r8)     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "ms, context:"
            r1.append(r2)     // Catch: java.lang.Exception -> L4a
            r1.append(r6)     // Catch: java.lang.Exception -> L4a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L4a
            com.huawei.hms.support.log.HMSLog.d(r0, r1)     // Catch: java.lang.Exception -> L4a
            java.lang.String r1 = "alarm"
            java.lang.Object r1 = r6.getSystemService(r1)     // Catch: java.lang.Exception -> L4a
            android.app.AlarmManager r1 = (android.app.AlarmManager) r1     // Catch: java.lang.Exception -> L4a
            if (r1 == 0) goto L63
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L4a
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            int r2 = (int) r2     // Catch: java.lang.Exception -> L4a
            r3 = 0
            android.app.PendingIntent r6 = android.app.PendingIntent.getBroadcast(r6, r2, r7, r3)     // Catch: java.lang.Exception -> L4a
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L4a
            long r4 = r4 + r8
            r1.set(r3, r4, r6)     // Catch: java.lang.Exception -> L4a
            goto L63
        L4a:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "set DelayAlarm error"
            r7.append(r8)
            java.lang.String r6 = r6.toString()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.huawei.hms.support.log.HMSLog.w(r0, r6)
        L63:
            return
    }

    public static boolean a() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean a(android.content.Context r1) {
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r0 = "com.huawei.hwid"
            boolean r1 = r0.equals(r1)
            return r1
    }

    public static android.content.Intent b(android.content.Context r0, java.lang.String r1) {
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            android.content.Intent r0 = r0.getLaunchIntentForPackage(r1)     // Catch: java.lang.Exception -> L9
            goto L20
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = " not have launch activity"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.w(r1, r0)
            r0 = 0
        L20:
            return r0
    }

    public static boolean c(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L33
            if (r3 == 0) goto L33
            java.lang.String r1 = ""
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto Le
            goto L33
        Le:
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L33
            r1 = 8192(0x2000, float:1.148E-41)
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo(r3, r1)     // Catch: java.lang.Exception -> L33
            if (r2 != 0) goto L1b
            return r0
        L1b:
            java.lang.String r2 = "PushSelfShowLog"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L33
            r1.<init>()     // Catch: java.lang.Exception -> L33
            r1.append(r3)     // Catch: java.lang.Exception -> L33
            java.lang.String r3 = " is installed"
            r1.append(r3)     // Catch: java.lang.Exception -> L33
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L33
            com.huawei.hms.support.log.HMSLog.d(r2, r3)     // Catch: java.lang.Exception -> L33
            r2 = 1
            return r2
        L33:
            return r0
    }

    public static boolean d(android.content.Context r2, java.lang.String r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            r2.getPreferredActivities(r0, r1, r3)
            int r2 = r1.size()
            if (r2 <= 0) goto L19
            r2 = 1
            goto L1a
        L19:
            r2 = 0
        L1a:
            return r2
    }

    public static void e(android.content.Context r6, java.lang.String r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r1 = "PushSelfShowLog"
            if (r0 == 0) goto Le
            java.lang.String r6 = "url is null."
            com.huawei.hms.support.log.HMSLog.i(r1, r6)
            return
        Le:
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L6e
            java.lang.String r2 = "android.intent.action.VIEW"
            r0.<init>(r2)     // Catch: java.lang.Exception -> L6e
            android.net.Uri r7 = android.net.Uri.parse(r7)     // Catch: java.lang.Exception -> L6e
            r0.setData(r7)     // Catch: java.lang.Exception -> L6e
            r7 = 402653184(0x18000000, float:1.6543612E-24)
            r0.setFlags(r7)     // Catch: java.lang.Exception -> L6e
            android.content.pm.PackageManager r7 = r6.getPackageManager()     // Catch: java.lang.Exception -> L6e
            r2 = 0
            java.util.List r7 = r7.queryIntentActivities(r0, r2)     // Catch: java.lang.Exception -> L6e
            r2 = 0
            java.util.Iterator r3 = r7.iterator()     // Catch: java.lang.Exception -> L6e
        L2f:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L6e
            if (r4 == 0) goto L46
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Exception -> L6e
            android.content.pm.ResolveInfo r4 = (android.content.pm.ResolveInfo) r4     // Catch: java.lang.Exception -> L6e
            android.content.pm.ActivityInfo r4 = r4.activityInfo     // Catch: java.lang.Exception -> L6e
            java.lang.String r4 = r4.packageName     // Catch: java.lang.Exception -> L6e
            boolean r5 = d(r6, r4)     // Catch: java.lang.Exception -> L6e
            if (r5 == 0) goto L2f
            r2 = r4
        L46:
            if (r2 != 0) goto L65
            java.lang.String r3 = "com.android.browser"
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Exception -> L6e
        L4e:
            boolean r4 = r7.hasNext()     // Catch: java.lang.Exception -> L6e
            if (r4 == 0) goto L65
            java.lang.Object r4 = r7.next()     // Catch: java.lang.Exception -> L6e
            android.content.pm.ResolveInfo r4 = (android.content.pm.ResolveInfo) r4     // Catch: java.lang.Exception -> L6e
            android.content.pm.ActivityInfo r4 = r4.activityInfo     // Catch: java.lang.Exception -> L6e
            java.lang.String r4 = r4.packageName     // Catch: java.lang.Exception -> L6e
            boolean r5 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Exception -> L6e
            if (r5 == 0) goto L4e
            r2 = r4
        L65:
            if (r2 == 0) goto L6a
            r0.setPackage(r2)     // Catch: java.lang.Exception -> L6e
        L6a:
            r6.startActivity(r0)     // Catch: java.lang.Exception -> L6e
            goto L87
        L6e:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "start browser activity failed, exception:"
            r7.append(r0)
            java.lang.String r6 = r6.getMessage()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r6)
        L87:
            return
    }
}
