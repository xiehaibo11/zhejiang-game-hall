package com.tencent.bugly.proguard;

public final class z {
    public static final java.lang.String[] a = null;
    public static final java.lang.String[] b = null;

    static {
            java.lang.String r0 = ","
            java.lang.String r1 = "@buglyAllChannel@"
            java.lang.String[] r1 = r1.split(r0)
            com.tencent.bugly.proguard.z.a = r1
            java.lang.String r1 = "@buglyAllChannelPriority@"
            java.lang.String[] r0 = r1.split(r0)
            com.tencent.bugly.proguard.z.b = r0
            return
    }

    public static java.lang.String a(int r7) {
            r0 = 0
            java.io.FileReader r1 = new java.io.FileReader     // Catch: java.lang.Throwable -> L40 java.lang.Throwable -> L42
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L40 java.lang.Throwable -> L42
            java.lang.String r3 = "/proc/"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L40 java.lang.Throwable -> L42
            r2.append(r7)     // Catch: java.lang.Throwable -> L40 java.lang.Throwable -> L42
            java.lang.String r3 = "/cmdline"
            r2.append(r3)     // Catch: java.lang.Throwable -> L40 java.lang.Throwable -> L42
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L40 java.lang.Throwable -> L42
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L40 java.lang.Throwable -> L42
            r0 = 512(0x200, float:7.17E-43)
            char[] r2 = new char[r0]     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L3b
            r1.read(r2)     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L3b
            r3 = 0
            r4 = 0
        L22:
            if (r4 >= r0) goto L2b
            char r5 = r2[r4]     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L3b
            if (r5 == 0) goto L2b
            int r4 = r4 + 1
            goto L22
        L2b:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L3b
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L3b
            java.lang.String r7 = r0.substring(r3, r4)     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L3b
            r1.close()     // Catch: java.lang.Throwable -> L37
        L37:
            return r7
        L38:
            r7 = move-exception
            r0 = r1
            goto L56
        L3b:
            r0 = move-exception
            r6 = r1
            r1 = r0
            r0 = r6
            goto L43
        L40:
            r7 = move-exception
            goto L56
        L42:
            r1 = move-exception
        L43:
            boolean r2 = com.tencent.bugly.proguard.al.a(r1)     // Catch: java.lang.Throwable -> L40
            if (r2 != 0) goto L4c
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L40
        L4c:
            java.lang.String r7 = java.lang.String.valueOf(r7)     // Catch: java.lang.Throwable -> L40
            if (r0 == 0) goto L55
            r0.close()     // Catch: java.lang.Throwable -> L55
        L55:
            return r7
        L56:
            if (r0 == 0) goto L5b
            r0.close()     // Catch: java.lang.Throwable -> L5b
        L5b:
            throw r7
    }

    public static java.lang.String a(android.content.Context r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Throwable -> L9
            return r1
        L9:
            r1 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r1)
            if (r0 != 0) goto L13
            r1.printStackTrace()
        L13:
            java.lang.String r1 = "fail"
            return r1
    }

    public static java.util.List<java.lang.String> a(java.util.Map<java.lang.String, java.lang.String> r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "BUGLY_DISABLE"
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L30
            if (r3 == 0) goto L2f
            int r1 = r3.length()     // Catch: java.lang.Throwable -> L30
            if (r1 != 0) goto L15
            goto L2f
        L15:
            java.lang.String r1 = ","
            java.lang.String[] r3 = r3.split(r1)     // Catch: java.lang.Throwable -> L30
            r1 = 0
        L1c:
            int r2 = r3.length     // Catch: java.lang.Throwable -> L30
            if (r1 >= r2) goto L2a
            r2 = r3[r1]     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = r2.trim()     // Catch: java.lang.Throwable -> L30
            r3[r1] = r2     // Catch: java.lang.Throwable -> L30
            int r1 = r1 + 1
            goto L1c
        L2a:
            java.util.List r3 = java.util.Arrays.asList(r3)     // Catch: java.lang.Throwable -> L30
            return r3
        L2f:
            return r0
        L30:
            r3 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r3)
            if (r1 != 0) goto L3a
            r3.printStackTrace()
        L3a:
            return r0
    }

    public static boolean a() {
            r0 = 1
            java.lang.String r1 = "android.app.ActivityThread"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r2 = "sCurrentActivityThread"
            java.lang.reflect.Field r2 = r1.getDeclaredField(r2)     // Catch: java.lang.Throwable -> L6a
            r2.setAccessible(r0)     // Catch: java.lang.Throwable -> L6a
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r3 = "mActivities"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r3)     // Catch: java.lang.Throwable -> L6a
            r1.setAccessible(r0)     // Catch: java.lang.Throwable -> L6a
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L6a
            java.util.Map r1 = (java.util.Map) r1     // Catch: java.lang.Throwable -> L6a
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L6a
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L6a
        L2b:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L6a
            if (r2 == 0) goto L68
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L6a
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L6a
            java.lang.String r3 = "android.app.ActivityThread$ActivityClientRecord"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "activity"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.Throwable -> L6a
            r3.setAccessible(r0)     // Catch: java.lang.Throwable -> L6a
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L6a
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Throwable -> L6a
            android.app.Activity r2 = (android.app.Activity) r2     // Catch: java.lang.Throwable -> L6a
            java.lang.Class<android.app.Activity> r3 = android.app.Activity.class
            java.lang.String r4 = "mResumed"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.Throwable -> L6a
            r3.setAccessible(r0)     // Catch: java.lang.Throwable -> L6a
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Throwable -> L6a
            java.lang.Boolean r2 = (java.lang.Boolean) r2     // Catch: java.lang.Throwable -> L6a
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Throwable -> L6a
            if (r2 == 0) goto L2b
            return r0
        L68:
            r0 = 0
            return r0
        L6a:
            r1 = move-exception
            com.tencent.bugly.proguard.al.b(r1)
            return r0
    }

    public static boolean a(android.app.ActivityManager r4) {
            r0 = 1
            r1 = 0
            if (r4 != 0) goto Lc
            java.lang.Object[] r4 = new java.lang.Object[r1]
            java.lang.String r1 = "is proc running, ActivityManager is null"
            com.tencent.bugly.proguard.al.c(r1, r4)
            return r0
        Lc:
            java.util.List r4 = r4.getRunningAppProcesses()
            if (r4 != 0) goto L1a
            java.lang.Object[] r4 = new java.lang.Object[r1]
            java.lang.String r0 = "running proc info list is empty, my proc not running."
            com.tencent.bugly.proguard.al.c(r0, r4)
            return r1
        L1a:
            int r2 = android.os.Process.myPid()
            java.util.Iterator r4 = r4.iterator()
        L22:
            boolean r3 = r4.hasNext()
            if (r3 == 0) goto L3a
            java.lang.Object r3 = r4.next()
            android.app.ActivityManager$RunningAppProcessInfo r3 = (android.app.ActivityManager.RunningAppProcessInfo) r3
            int r3 = r3.pid
            if (r3 != r2) goto L22
            java.lang.Object[] r4 = new java.lang.Object[r1]
            java.lang.String r1 = "my proc is running."
            com.tencent.bugly.proguard.al.c(r1, r4)
            return r0
        L3a:
            java.lang.Object[] r4 = new java.lang.Object[r1]
            java.lang.String r0 = "proc not in running proc info list, my proc not running."
            com.tencent.bugly.proguard.al.c(r0, r4)
            return r1
    }

    public static android.content.pm.PackageInfo b(android.content.Context r2) {
            java.lang.String r0 = a(r2)     // Catch: java.lang.Throwable -> Le
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> Le
            r1 = 0
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r0, r1)     // Catch: java.lang.Throwable -> Le
            return r2
        Le:
            r2 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r2)
            if (r0 != 0) goto L18
            r2.printStackTrace()
        L18:
            r2 = 0
            return r2
    }

    public static java.lang.String c(android.content.Context r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            android.content.pm.PackageManager r1 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L1b
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()     // Catch: java.lang.Throwable -> L1b
            if (r1 == 0) goto L25
            if (r2 == 0) goto L25
            java.lang.CharSequence r2 = r1.getApplicationLabel(r2)     // Catch: java.lang.Throwable -> L1b
            if (r2 == 0) goto L25
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1b
            return r2
        L1b:
            r2 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r2)
            if (r1 != 0) goto L25
            r2.printStackTrace()
        L25:
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> d(android.content.Context r11) {
            java.lang.String r0 = "BUGLY_AREA"
            java.lang.String r1 = "BUGLY_APP_BUILD_NO"
            java.lang.String r2 = "com.tencent.rdm.uuid"
            java.lang.String r3 = "BUGLY_ENABLE_DEBUG"
            java.lang.String r4 = "BUGLY_APP_VERSION"
            java.lang.String r5 = "BUGLY_APP_CHANNEL"
            java.lang.String r6 = "BUGLY_APPID"
            java.lang.String r7 = "BUGLY_DISABLE"
            r8 = 0
            if (r11 != 0) goto L14
            return r8
        L14:
            android.content.pm.PackageManager r9 = r11.getPackageManager()     // Catch: java.lang.Throwable -> La5
            java.lang.String r11 = r11.getPackageName()     // Catch: java.lang.Throwable -> La5
            r10 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r11 = r9.getApplicationInfo(r11, r10)     // Catch: java.lang.Throwable -> La5
            android.os.Bundle r9 = r11.metaData     // Catch: java.lang.Throwable -> La5
            if (r9 == 0) goto La4
            java.util.HashMap r9 = new java.util.HashMap     // Catch: java.lang.Throwable -> La5
            r9.<init>()     // Catch: java.lang.Throwable -> La5
            android.os.Bundle r10 = r11.metaData     // Catch: java.lang.Throwable -> La5
            java.lang.Object r10 = r10.get(r7)     // Catch: java.lang.Throwable -> La5
            if (r10 == 0) goto L3a
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> La5
            r9.put(r7, r10)     // Catch: java.lang.Throwable -> La5
        L3a:
            android.os.Bundle r7 = r11.metaData     // Catch: java.lang.Throwable -> La5
            java.lang.Object r7 = r7.get(r6)     // Catch: java.lang.Throwable -> La5
            if (r7 == 0) goto L49
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> La5
            r9.put(r6, r7)     // Catch: java.lang.Throwable -> La5
        L49:
            android.os.Bundle r6 = r11.metaData     // Catch: java.lang.Throwable -> La5
            java.lang.Object r6 = r6.get(r5)     // Catch: java.lang.Throwable -> La5
            if (r6 == 0) goto L58
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> La5
            r9.put(r5, r6)     // Catch: java.lang.Throwable -> La5
        L58:
            android.os.Bundle r5 = r11.metaData     // Catch: java.lang.Throwable -> La5
            java.lang.Object r5 = r5.get(r4)     // Catch: java.lang.Throwable -> La5
            if (r5 == 0) goto L67
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> La5
            r9.put(r4, r5)     // Catch: java.lang.Throwable -> La5
        L67:
            android.os.Bundle r4 = r11.metaData     // Catch: java.lang.Throwable -> La5
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> La5
            if (r4 == 0) goto L76
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> La5
            r9.put(r3, r4)     // Catch: java.lang.Throwable -> La5
        L76:
            android.os.Bundle r3 = r11.metaData     // Catch: java.lang.Throwable -> La5
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Throwable -> La5
            if (r3 == 0) goto L85
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> La5
            r9.put(r2, r3)     // Catch: java.lang.Throwable -> La5
        L85:
            android.os.Bundle r2 = r11.metaData     // Catch: java.lang.Throwable -> La5
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> La5
            if (r2 == 0) goto L94
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> La5
            r9.put(r1, r2)     // Catch: java.lang.Throwable -> La5
        L94:
            android.os.Bundle r11 = r11.metaData     // Catch: java.lang.Throwable -> La5
            java.lang.Object r11 = r11.get(r0)     // Catch: java.lang.Throwable -> La5
            if (r11 == 0) goto La3
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> La5
            r9.put(r0, r11)     // Catch: java.lang.Throwable -> La5
        La3:
            r8 = r9
        La4:
            return r8
        La5:
            r11 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r11)
            if (r0 != 0) goto Laf
            r11.printStackTrace()
        Laf:
            return r8
    }
}
