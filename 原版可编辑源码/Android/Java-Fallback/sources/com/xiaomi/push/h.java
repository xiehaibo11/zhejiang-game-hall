package com.xiaomi.push;

public class h {

    public enum a extends java.lang.Enum<com.xiaomi.push.h.a> {
        public static final com.xiaomi.push.h.a a = null;
        private static final com.xiaomi.push.h.a[] a = null;
        public static final com.xiaomi.push.h.a b = null;
        public static final com.xiaomi.push.h.a c = null;
        private final int a;

        static {
                com.xiaomi.push.h$a r0 = new com.xiaomi.push.h$a
                r1 = 0
                java.lang.String r2 = "UNKNOWN"
                r0.<init>(r2, r1, r1)
                com.xiaomi.push.h.a.a = r0
                com.xiaomi.push.h$a r0 = new com.xiaomi.push.h$a
                r2 = 1
                java.lang.String r3 = "ALLOWED"
                r0.<init>(r3, r2, r2)
                com.xiaomi.push.h.a.b = r0
                com.xiaomi.push.h$a r0 = new com.xiaomi.push.h$a
                r3 = 2
                java.lang.String r4 = "NOT_ALLOWED"
                r0.<init>(r4, r3, r3)
                com.xiaomi.push.h.a.c = r0
                r4 = 3
                com.xiaomi.push.h$a[] r4 = new com.xiaomi.push.h.a[r4]
                com.xiaomi.push.h$a r5 = com.xiaomi.push.h.a.a
                r4[r1] = r5
                com.xiaomi.push.h$a r1 = com.xiaomi.push.h.a.b
                r4[r2] = r1
                r4[r3] = r0
                com.xiaomi.push.h.a.a = r4
                return
        }

        a(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.a = r3
                return
        }

        public static com.xiaomi.push.h.a valueOf(java.lang.String r1) {
                java.lang.Class<com.xiaomi.push.h$a> r0 = com.xiaomi.push.h.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.xiaomi.push.h$a r1 = (com.xiaomi.push.h.a) r1
                return r1
        }

        public static com.xiaomi.push.h.a[] values() {
                com.xiaomi.push.h$a[] r0 = com.xiaomi.push.h.a.a
                java.lang.Object r0 = r0.clone()
                com.xiaomi.push.h$a[] r0 = (com.xiaomi.push.h.a[]) r0
                return r0
        }

        public int a() {
                r1 = this;
                int r0 = r1.a
                return r0
        }
    }

    public static int a(android.content.Context r2) {
            if (r2 == 0) goto L1d
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            java.lang.String r0 = "com.android.systemui"
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo(r0, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            if (r2 == 0) goto L1d
            android.os.Bundle r0 = r2.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            if (r0 == 0) goto L1d
            android.os.Bundle r2 = r2.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            java.lang.String r0 = "SupportForPushVersionCode"
            int r2 = r2.getInt(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1d
            return r2
        L1d:
            r2 = 0
            return r2
    }

    public static int a(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Lb
            r0 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> Lb
            goto Lc
        Lb:
            r1 = 0
        Lc:
            if (r1 == 0) goto L11
            int r1 = r1.versionCode
            goto L12
        L11:
            r1 = 0
        L12:
            return r1
    }

    private static android.content.pm.ApplicationInfo a(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = r1.getPackageName()
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto Lf
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()
            goto L2e
        Lf:
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            r0 = 0
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L19
            goto L2e
        L19:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "not found app info "
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r1 = 0
        L2e:
            return r1
    }

    public static android.graphics.drawable.Drawable a(android.content.Context r2, java.lang.String r3) {
            android.content.pm.ApplicationInfo r3 = a(r2, r3)
            r0 = 0
            if (r3 == 0) goto L2f
            android.content.pm.PackageManager r1 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1a
            android.graphics.drawable.Drawable r0 = r3.loadIcon(r1)     // Catch: java.lang.Exception -> L1a
            if (r0 != 0) goto L2f
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1a
            android.graphics.drawable.Drawable r0 = r3.loadLogo(r2)     // Catch: java.lang.Exception -> L1a
            goto L2f
        L1a:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "get app icon drawable failed, "
            r3.append(r1)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L2f:
            if (r0 == 0) goto L32
            goto L38
        L32:
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r2 = 0
            r0.<init>(r2)
        L38:
            return r0
    }

    private static com.xiaomi.push.h.a a(android.content.Context r5, android.content.pm.ApplicationInfo r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r6 == 0) goto L81
            r1 = 24
            if (r0 >= r1) goto La
            goto L81
        La:
            r1 = 0
            java.lang.String r2 = r6.packageName     // Catch: java.lang.Exception -> L69
            java.lang.String r3 = r5.getPackageName()     // Catch: java.lang.Exception -> L69
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> L69
            java.lang.String r3 = "notification"
            if (r2 == 0) goto L28
            java.lang.Object r5 = r5.getSystemService(r3)     // Catch: java.lang.Exception -> L69
            android.app.NotificationManager r5 = (android.app.NotificationManager) r5     // Catch: java.lang.Exception -> L69
            boolean r5 = r5.areNotificationsEnabled()     // Catch: java.lang.Exception -> L69
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Exception -> L69
            goto L5b
        L28:
            r2 = 29
            r4 = 0
            if (r0 < r2) goto L3a
            java.lang.Object r5 = r5.getSystemService(r3)     // Catch: java.lang.Exception -> L69
            java.lang.String r0 = "getService"
            java.lang.Object[] r2 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L69
            java.lang.Object r5 = com.xiaomi.push.bk.a(r5, r0, r2)     // Catch: java.lang.Exception -> L69
            goto L40
        L3a:
            java.lang.String r0 = "security"
            java.lang.Object r5 = r5.getSystemService(r0)     // Catch: java.lang.Exception -> L69
        L40:
            if (r5 == 0) goto L5b
            java.lang.String r0 = "areNotificationsEnabledForPackage"
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L69
            java.lang.String r2 = r6.packageName     // Catch: java.lang.Exception -> L69
            r1[r4] = r2     // Catch: java.lang.Exception -> L69
            r2 = 1
            int r6 = r6.uid     // Catch: java.lang.Exception -> L69
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> L69
            r1[r2] = r6     // Catch: java.lang.Exception -> L69
            java.lang.Object r5 = com.xiaomi.push.bk.b(r5, r0, r1)     // Catch: java.lang.Exception -> L69
            r1 = r5
            java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Exception -> L69
        L5b:
            if (r1 == 0) goto L7e
            boolean r5 = r1.booleanValue()     // Catch: java.lang.Exception -> L69
            if (r5 == 0) goto L66
            com.xiaomi.push.h$a r5 = com.xiaomi.push.h.a.b     // Catch: java.lang.Exception -> L69
            goto L68
        L66:
            com.xiaomi.push.h$a r5 = com.xiaomi.push.h.a.c     // Catch: java.lang.Exception -> L69
        L68:
            return r5
        L69:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "are notifications enabled error "
            r6.append(r0)
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r5)
        L7e:
            com.xiaomi.push.h$a r5 = com.xiaomi.push.h.a.a
            return r5
        L81:
            com.xiaomi.push.h$a r5 = com.xiaomi.push.h.a.a
            return r5
    }

    public static com.xiaomi.push.h.a a(android.content.Context r6, java.lang.String r7, boolean r8) {
            if (r6 == 0) goto Lc0
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto La
            goto Lc0
        La:
            java.lang.String r0 = r6.getPackageName()     // Catch: java.lang.Throwable -> La8
            boolean r0 = r7.equals(r0)     // Catch: java.lang.Throwable -> La8
            r1 = 0
            if (r0 == 0) goto L1a
            android.content.pm.ApplicationInfo r0 = r6.getApplicationInfo()     // Catch: java.lang.Throwable -> La8
            goto L22
        L1a:
            android.content.pm.PackageManager r0 = r6.getPackageManager()     // Catch: java.lang.Throwable -> La8
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r7, r1)     // Catch: java.lang.Throwable -> La8
        L22:
            com.xiaomi.push.h$a r2 = a(r6, r0)     // Catch: java.lang.Throwable -> La8
            com.xiaomi.push.h$a r3 = com.xiaomi.push.h.a.a     // Catch: java.lang.Throwable -> La8
            if (r2 == r3) goto L2b
            return r2
        L2b:
            java.lang.Class<android.app.AppOpsManager> r2 = android.app.AppOpsManager.class
            java.lang.String r3 = "OP_POST_NOTIFICATION"
            java.lang.Object r2 = com.xiaomi.push.bk.a(r2, r3)     // Catch: java.lang.Throwable -> La8
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> La8
            if (r2 != 0) goto L3a
            com.xiaomi.push.h$a r6 = com.xiaomi.push.h.a.a     // Catch: java.lang.Throwable -> La8
            return r6
        L3a:
            java.lang.String r3 = "appops"
            java.lang.Object r6 = r6.getSystemService(r3)     // Catch: java.lang.Throwable -> La8
            android.app.AppOpsManager r6 = (android.app.AppOpsManager) r6     // Catch: java.lang.Throwable -> La8
            java.lang.String r3 = "checkOpNoThrow"
            r4 = 3
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> La8
            r5[r1] = r2     // Catch: java.lang.Throwable -> La8
            int r0 = r0.uid     // Catch: java.lang.Throwable -> La8
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> La8
            r2 = 1
            r5[r2] = r0     // Catch: java.lang.Throwable -> La8
            r0 = 2
            r5[r0] = r7     // Catch: java.lang.Throwable -> La8
            java.lang.Object r6 = com.xiaomi.push.bk.a(r6, r3, r5)     // Catch: java.lang.Throwable -> La8
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Throwable -> La8
            java.lang.Class<android.app.AppOpsManager> r7 = android.app.AppOpsManager.class
            java.lang.String r3 = "MODE_ALLOWED"
            java.lang.Object r7 = com.xiaomi.push.bk.a(r7, r3)     // Catch: java.lang.Throwable -> La8
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> La8
            java.lang.Class<android.app.AppOpsManager> r3 = android.app.AppOpsManager.class
            java.lang.String r5 = "MODE_IGNORED"
            java.lang.Object r3 = com.xiaomi.push.bk.a(r3, r5)     // Catch: java.lang.Throwable -> La8
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> La8
            java.lang.String r5 = "get app mode %s|%s|%s"
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> La8
            r4[r1] = r6     // Catch: java.lang.Throwable -> La8
            r4[r2] = r7     // Catch: java.lang.Throwable -> La8
            r4[r0] = r3     // Catch: java.lang.Throwable -> La8
            java.lang.String r0 = java.lang.String.format(r5, r4)     // Catch: java.lang.Throwable -> La8
            com.xiaomi.channel.commonutils.logger.b.b(r0)     // Catch: java.lang.Throwable -> La8
            if (r7 != 0) goto L86
            java.lang.Integer r7 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> La8
        L86:
            if (r3 != 0) goto L8c
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> La8
        L8c:
            if (r6 == 0) goto Lbd
            if (r8 == 0) goto L9c
            boolean r6 = r6.equals(r3)     // Catch: java.lang.Throwable -> La8
            if (r6 != 0) goto L99
            com.xiaomi.push.h$a r6 = com.xiaomi.push.h.a.b     // Catch: java.lang.Throwable -> La8
            goto L9b
        L99:
            com.xiaomi.push.h$a r6 = com.xiaomi.push.h.a.c     // Catch: java.lang.Throwable -> La8
        L9b:
            return r6
        L9c:
            boolean r6 = r6.equals(r7)     // Catch: java.lang.Throwable -> La8
            if (r6 == 0) goto La5
            com.xiaomi.push.h$a r6 = com.xiaomi.push.h.a.b     // Catch: java.lang.Throwable -> La8
            goto La7
        La5:
            com.xiaomi.push.h$a r6 = com.xiaomi.push.h.a.c     // Catch: java.lang.Throwable -> La8
        La7:
            return r6
        La8:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "get app op error "
            r7.append(r8)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r6)
        Lbd:
            com.xiaomi.push.h$a r6 = com.xiaomi.push.h.a.a
            return r6
        Lc0:
            com.xiaomi.push.h$a r6 = com.xiaomi.push.h.a.a
            return r6
    }

    public static java.lang.String a(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Lb
            r0 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> Lb
            goto Lc
        Lb:
            r1 = 0
        Lc:
            if (r1 == 0) goto L11
            java.lang.String r1 = r1.versionName
            goto L13
        L11:
            java.lang.String r1 = "1.0"
        L13:
            return r1
    }

    public static boolean a(android.content.Context r4) {
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "android.app.ActivityThread"
            java.lang.String r3 = "currentProcessName"
            java.lang.Object r1 = com.xiaomi.push.bk.a(r2, r3, r1)
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L1e
            if (r4 == 0) goto L1e
            java.lang.String r4 = r4.getPackageName()
            boolean r4 = r1.equals(r4)
            return r4
        L1e:
            return r0
    }

    public static boolean a(android.content.Context r2, java.lang.String r3) {
            boolean r0 = com.xiaomi.push.m.a()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "activity"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.ActivityManager r2 = (android.app.ActivityManager) r2
            java.util.List r2 = r2.getRunningAppProcesses()
            if (r2 == 0) goto L33
            java.util.Iterator r2 = r2.iterator()
        L1a:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L33
            java.lang.Object r0 = r2.next()
            android.app.ActivityManager$RunningAppProcessInfo r0 = (android.app.ActivityManager.RunningAppProcessInfo) r0
            java.lang.String[] r0 = r0.pkgList
            java.util.List r0 = java.util.Arrays.asList(r0)
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L1a
            return r1
        L33:
            r2 = 0
            return r2
    }

    public static int b(android.content.Context r0, java.lang.String r1) {
            android.content.pm.ApplicationInfo r0 = a(r0, r1)
            if (r0 == 0) goto Ld
            int r1 = r0.icon
            if (r1 != 0) goto Le
            int r1 = r0.logo
            goto Le
        Ld:
            r1 = 0
        Le:
            return r1
    }

    public static java.lang.String b(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            r0 = 0
            android.content.pm.PackageInfo r0 = r1.getPackageInfo(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            if (r0 == 0) goto L18
            android.content.pm.ApplicationInfo r0 = r0.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            if (r0 == 0) goto L18
            java.lang.CharSequence r1 = r1.getApplicationLabel(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            java.lang.String r1 = r1.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L18
            r2 = r1
        L18:
            return r2
    }

    public static boolean b(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> La
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> La
            goto Lb
        La:
            r1 = 0
        Lb:
            if (r1 != 0) goto Le
            return r0
        Le:
            r1 = 1
            return r1
    }

    public static boolean c(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r0 = r1.getPackageManager()
            java.lang.String r1 = r1.getPackageName()
            int r1 = r0.checkPermission(r2, r1)
            if (r1 != 0) goto L10
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }

    public static boolean d(android.content.Context r3, java.lang.String r4) {
            if (r3 == 0) goto L24
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L24
            android.content.ContentResolver r0 = r3.getContentResolver()     // Catch: java.lang.Exception -> L24
            java.lang.String r1 = "freeform_window_state"
            r2 = -1
            int r0 = android.provider.Settings.Secure.getInt(r0, r1, r2)     // Catch: java.lang.Exception -> L24
            if (r0 < 0) goto L24
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Exception -> L24
            java.lang.String r0 = "freeform_package_name"
            java.lang.String r3 = android.provider.Settings.Secure.getString(r3, r0)     // Catch: java.lang.Exception -> L24
            boolean r3 = r4.equals(r3)     // Catch: java.lang.Exception -> L24
            return r3
        L24:
            r3 = 0
            return r3
    }
}
