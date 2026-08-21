package com.huawei.updatesdk.b.h;

public class b {
    private static java.lang.Integer a;
    private static boolean b;
    private static boolean c;
    private static java.lang.reflect.Field d;

    static class a implements java.lang.Thread.UncaughtExceptionHandler {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void uncaughtException(java.lang.Thread r2, java.lang.Throwable r3) {
                r1 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = r2.getName()
                r0.append(r2)
                java.lang.String r2 = " : "
                r0.append(r2)
                java.lang.String r2 = r3.getMessage()
                r0.append(r2)
                java.lang.String r2 = r0.toString()
                java.lang.String r3 = "PackageUtils"
                com.huawei.updatesdk.a.a.c.a.a.a.a(r3, r2)
                return
        }
    }

    public enum b extends java.lang.Enum<com.huawei.updatesdk.b.h.b.b> {
        public static final com.huawei.updatesdk.b.h.b.b a = null;
        public static final com.huawei.updatesdk.b.h.b.b b = null;
        public static final com.huawei.updatesdk.b.h.b.b c = null;
        private static final com.huawei.updatesdk.b.h.b.b[] d = null;

        static {
                com.huawei.updatesdk.b.h.b$b r0 = new com.huawei.updatesdk.b.h.b$b
                r1 = 0
                java.lang.String r2 = "NOT_INSTALLED"
                r0.<init>(r2, r1)
                com.huawei.updatesdk.b.h.b.b.a = r0
                com.huawei.updatesdk.b.h.b$b r0 = new com.huawei.updatesdk.b.h.b$b
                r2 = 1
                java.lang.String r3 = "INSTALLED"
                r0.<init>(r3, r2)
                com.huawei.updatesdk.b.h.b.b.b = r0
                com.huawei.updatesdk.b.h.b$b r0 = new com.huawei.updatesdk.b.h.b$b
                r3 = 2
                java.lang.String r4 = "INSTALLED_LOWCODE"
                r0.<init>(r4, r3)
                com.huawei.updatesdk.b.h.b.b.c = r0
                r4 = 3
                com.huawei.updatesdk.b.h.b$b[] r4 = new com.huawei.updatesdk.b.h.b.b[r4]
                com.huawei.updatesdk.b.h.b$b r5 = com.huawei.updatesdk.b.h.b.b.a
                r4[r1] = r5
                com.huawei.updatesdk.b.h.b$b r1 = com.huawei.updatesdk.b.h.b.b.b
                r4[r2] = r1
                r4[r3] = r0
                com.huawei.updatesdk.b.h.b.b.d = r4
                return
        }

        b(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.huawei.updatesdk.b.h.b.b valueOf(java.lang.String r1) {
                java.lang.Class<com.huawei.updatesdk.b.h.b$b> r0 = com.huawei.updatesdk.b.h.b.b.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.huawei.updatesdk.b.h.b$b r1 = (com.huawei.updatesdk.b.h.b.b) r1
                return r1
        }

        public static com.huawei.updatesdk.b.h.b.b[] values() {
                com.huawei.updatesdk.b.h.b$b[] r0 = com.huawei.updatesdk.b.h.b.b.d
                java.lang.Object r0 = r0.clone()
                com.huawei.updatesdk.b.h.b$b[] r0 = (com.huawei.updatesdk.b.h.b.b[]) r0
                return r0
        }
    }

    private static class c implements java.lang.Runnable {
        private c() {
                r0 = this;
                r0.<init>()
                return
        }

        c(com.huawei.updatesdk.b.h.b.a r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r2 = this;
                java.lang.String r0 = "PackageManagerRunnable"
                java.lang.String r1 = "PackageManagerRunnable run!!!!"
                com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r1)
                java.io.File r0 = new java.io.File
                java.lang.String r1 = com.huawei.updatesdk.b.d.d.b()
                r0.<init>(r1)
                com.huawei.updatesdk.a.a.d.d.a(r0)
                return
        }
    }

    public static int a(android.content.pm.PackageInfo r2) {
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo
            int r0 = r2.flags
            r1 = 1
            r0 = r0 & r1
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            boolean r2 = a(r2)
            if (r2 == 0) goto L11
            return r1
        L11:
            r2 = 2
            return r2
    }

    public static int a(java.lang.String r3) {
            com.huawei.updatesdk.a.b.a.a r0 = com.huawei.updatesdk.a.b.a.a.c()
            android.content.Context r0 = r0.a()
            r1 = 0
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L2c
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r2)     // Catch: java.lang.Exception -> L2c
            if (r3 == 0) goto L2b
            android.content.pm.ApplicationInfo r0 = r3.applicationInfo
            if (r0 == 0) goto L2b
            android.os.Bundle r0 = r0.metaData
            if (r0 == 0) goto L2b
            android.content.pm.ApplicationInfo r3 = r3.applicationInfo
            android.os.Bundle r3 = r3.metaData
            java.lang.String r0 = "com.huawei.maple.flag"
            boolean r3 = r3.containsKey(r0)
            if (r3 == 0) goto L2b
            r3 = 1
            return r3
        L2b:
            return r1
        L2c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "getMapleStatus not found: "
            r0.append(r2)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "PackageUtils"
            com.huawei.updatesdk.a.a.c.a.a.a.d(r0, r3)
            return r1
    }

    public static android.content.pm.PackageInfo a(java.lang.String r1, android.content.Context r2) {
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> Lb
            r0 = 64
            android.content.pm.PackageInfo r1 = r2.getPackageInfo(r1, r0)     // Catch: java.lang.Exception -> Lb
            return r1
        Lb:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "not found: "
            r2.append(r0)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "PackageUtils"
            com.huawei.updatesdk.a.a.c.a.a.a.d(r2, r1)
            r1 = 0
            return r1
    }

    public static com.huawei.updatesdk.b.h.b.b a(android.content.Context r4, java.lang.String r5) {
            java.lang.String r0 = "versioncode = "
            java.lang.String r1 = "PackageUtils"
            com.huawei.updatesdk.b.h.b$b r2 = com.huawei.updatesdk.b.h.b.b.a
            if (r4 != 0) goto L9
            return r2
        L9:
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Exception -> L43
            r3 = 0
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r5, r3)     // Catch: java.lang.Exception -> L43
            if (r4 == 0) goto L42
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L43
            r5.<init>()     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = "appmarket info,"
            r5.append(r3)     // Catch: java.lang.Exception -> L43
            r5.append(r0)     // Catch: java.lang.Exception -> L43
            int r3 = r4.versionCode     // Catch: java.lang.Exception -> L43
            r5.append(r3)     // Catch: java.lang.Exception -> L43
            r5.append(r0)     // Catch: java.lang.Exception -> L43
            java.lang.String r0 = r4.versionName     // Catch: java.lang.Exception -> L43
            r5.append(r0)     // Catch: java.lang.Exception -> L43
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L43
            com.huawei.updatesdk.a.a.a.b(r1, r5)     // Catch: java.lang.Exception -> L43
            int r4 = r4.versionCode     // Catch: java.lang.Exception -> L43
            r5 = 70203000(0x42f3678, float:2.0596162E-36)
            if (r4 >= r5) goto L3f
            com.huawei.updatesdk.b.h.b$b r4 = com.huawei.updatesdk.b.h.b.b.c     // Catch: java.lang.Exception -> L43
            return r4
        L3f:
            com.huawei.updatesdk.b.h.b$b r4 = com.huawei.updatesdk.b.h.b.b.b     // Catch: java.lang.Exception -> L43
            return r4
        L42:
            return r2
        L43:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "isInstallByPackage Exception:"
            r5.append(r0)
            java.lang.String r4 = r4.toString()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.d(r1, r4)
            return r2
    }

    public static void a() {
            java.lang.Thread r0 = new java.lang.Thread
            com.huawei.updatesdk.b.h.b$c r1 = new com.huawei.updatesdk.b.h.b$c
            r2 = 0
            r1.<init>(r2)
            r0.<init>(r1)
            java.lang.String r1 = "delete market file task"
            r0.setName(r1)
            com.huawei.updatesdk.b.h.b$a r1 = new com.huawei.updatesdk.b.h.b$a
            r1.<init>()
            r0.setUncaughtExceptionHandler(r1)
            r0.start()
            return
    }

    public static boolean a(android.content.Context r1, java.lang.String r2, boolean r3) {
            r0 = 1
            if (r3 == 0) goto L4
            return r0
        L4:
            int r1 = b(r1, r2)
            r2 = 90000000(0x55d4a80, float:1.04050536E-35)
            if (r1 <= r2) goto Le
            return r0
        Le:
            r1 = 0
            return r1
    }

    private static boolean a(android.content.pm.ApplicationInfo r5) {
            java.lang.String r0 = "PackageUtils"
            java.lang.String r1 = "can not get hwflags"
            int r2 = r5.flags
            java.lang.Integer r3 = c()
            r4 = 1
            if (r3 == 0) goto L15
            int r3 = r3.intValue()
            r2 = r2 & r3
            if (r2 == 0) goto L15
            return r4
        L15:
            java.lang.reflect.Field r2 = b()
            if (r2 == 0) goto L4a
            int r5 = r2.getInt(r5)     // Catch: java.lang.IllegalArgumentException -> L25 java.lang.IllegalAccessException -> L33
            r0 = 33554432(0x2000000, float:9.403955E-38)
            r5 = r5 & r0
            if (r5 == 0) goto L4a
            return r4
        L25:
            r5 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r5 = r5.toString()
            goto L40
        L33:
            r5 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r5 = r5.toString()
        L40:
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r5)
        L4a:
            r5 = 0
            return r5
    }

    private static int b(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> Lc
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r0)     // Catch: java.lang.Exception -> Lc
            int r2 = r2.versionCode     // Catch: java.lang.Exception -> Lc
            return r2
        Lc:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "isInstallByPackage:"
            r3.append(r1)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "PackageUtils"
            com.huawei.updatesdk.a.a.c.a.a.a.d(r3, r2)
            return r0
    }

    public static java.lang.reflect.Field b() {
            boolean r0 = com.huawei.updatesdk.b.h.b.c
            if (r0 == 0) goto L7
            java.lang.reflect.Field r0 = com.huawei.updatesdk.b.h.b.d
            return r0
        L7:
            java.lang.Class<android.content.pm.ApplicationInfo> r0 = android.content.pm.ApplicationInfo.class
            java.lang.String r1 = "hwFlags"
            java.lang.reflect.Field r0 = r0.getField(r1)     // Catch: java.lang.NoSuchFieldException -> L12
            com.huawei.updatesdk.b.h.b.d = r0     // Catch: java.lang.NoSuchFieldException -> L12
            goto L19
        L12:
            java.lang.String r0 = "PackageUtils"
            java.lang.String r1 = "can not find hwFlags"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r1)
        L19:
            r0 = 1
            com.huawei.updatesdk.b.h.b.c = r0
            java.lang.reflect.Field r0 = com.huawei.updatesdk.b.h.b.d
            return r0
    }

    public static boolean b(android.content.Context r1, java.lang.String r2, boolean r3) {
            r0 = 1
            if (r3 == 0) goto L4
            return r0
        L4:
            int r1 = b(r1, r2)
            r2 = 100200000(0x5f8ee40, float:2.3409327E-35)
            if (r1 <= r2) goto Le
            return r0
        Le:
            r1 = 0
            return r1
    }

    public static java.lang.Integer c() {
            java.lang.String r0 = "PackageUtils"
            boolean r1 = com.huawei.updatesdk.b.h.b.b
            if (r1 == 0) goto L9
            java.lang.Integer r0 = com.huawei.updatesdk.b.h.b.a
            return r0
        L9:
            java.lang.String r1 = "android.content.pm.PackageParser"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L20 java.lang.IllegalArgumentException -> L26 java.lang.IllegalAccessException -> L36 java.lang.ClassNotFoundException -> L46 java.lang.NoSuchFieldException -> L56
            java.lang.String r2 = "PARSE_IS_REMOVABLE_PREINSTALLED_APK"
            java.lang.reflect.Field r2 = r1.getDeclaredField(r2)     // Catch: java.lang.Exception -> L20 java.lang.IllegalArgumentException -> L26 java.lang.IllegalAccessException -> L36 java.lang.ClassNotFoundException -> L46 java.lang.NoSuchFieldException -> L56
            int r1 = r2.getInt(r1)     // Catch: java.lang.Exception -> L20 java.lang.IllegalArgumentException -> L26 java.lang.IllegalAccessException -> L36 java.lang.ClassNotFoundException -> L46 java.lang.NoSuchFieldException -> L56
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L20 java.lang.IllegalArgumentException -> L26 java.lang.IllegalAccessException -> L36 java.lang.ClassNotFoundException -> L46 java.lang.NoSuchFieldException -> L56
            com.huawei.updatesdk.b.h.b.a = r1     // Catch: java.lang.Exception -> L20 java.lang.IllegalArgumentException -> L26 java.lang.IllegalAccessException -> L36 java.lang.ClassNotFoundException -> L46 java.lang.NoSuchFieldException -> L56
            goto L6f
        L20:
            r1 = move-exception
            java.lang.String r1 = r1.toString()
            goto L6c
        L26:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "isDelApp error IllegalArgumentException:"
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            goto L65
        L36:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "isDelApp error IllegalAccessException:"
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            goto L65
        L46:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "isDelApp error ClassNotFoundException:"
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            goto L65
        L56:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "isDelApp error NoSuchFieldException:"
            r2.append(r3)
            java.lang.String r1 = r1.toString()
        L65:
            r2.append(r1)
            java.lang.String r1 = r2.toString()
        L6c:
            com.huawei.updatesdk.a.a.c.a.a.a.a(r0, r1)
        L6f:
            r0 = 1
            com.huawei.updatesdk.b.h.b.b = r0
            java.lang.Integer r0 = com.huawei.updatesdk.b.h.b.a
            return r0
    }

    public static java.lang.String c(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "PackageUtils"
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> Lb
            java.lang.String r2 = r2.getInstallerPackageName(r3)     // Catch: java.lang.Exception -> Lb
            goto L20
        Lb:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r1 = "can not find installer pkg."
            r2.append(r1)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.huawei.updatesdk.a.a.a.b(r0, r2)
            r2 = 0
        L20:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "installer pkg: "
            r3.append(r1)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.c(r0, r3)
            return r2
    }

    public static boolean d(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L31
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto La
            goto L31
        La:
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L16
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r0)     // Catch: java.lang.Exception -> L16
            if (r2 == 0) goto L15
            r0 = 1
        L15:
            return r0
        L16:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "isAppInstalled NameNotFoundException:"
            r3.append(r1)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "PackageUtils"
            com.huawei.updatesdk.a.a.c.a.a.a.d(r3, r2)
        L31:
            return r0
    }
}
