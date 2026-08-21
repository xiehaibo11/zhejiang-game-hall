package com.xiaomi.push;

public class v {
    private static android.content.Context a;
    private static java.lang.String a;

    static {
            return
    }

    public static int a() {
            java.lang.String r0 = "miui.os.Build"
            r1 = 0
            java.lang.Class r0 = a(r1, r0)     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = "IS_STABLE_VERSION"
            java.lang.reflect.Field r2 = r0.getField(r2)     // Catch: java.lang.Exception -> L25
            boolean r2 = r2.getBoolean(r1)     // Catch: java.lang.Exception -> L25
            if (r2 == 0) goto L15
            r0 = 3
            return r0
        L15:
            java.lang.String r2 = "IS_DEVELOPMENT_VERSION"
            java.lang.reflect.Field r0 = r0.getField(r2)     // Catch: java.lang.Exception -> L25
            boolean r0 = r0.getBoolean(r1)     // Catch: java.lang.Exception -> L25
            if (r0 == 0) goto L23
            r0 = 2
            return r0
        L23:
            r0 = 1
            return r0
        L25:
            r0 = 0
            return r0
    }

    public static android.content.Context a() {
            android.content.Context r0 = com.xiaomi.push.v.a
            return r0
    }

    public static java.lang.Class<?> a(android.content.Context r5, java.lang.String r6) {
            if (r6 == 0) goto L4a
            java.lang.String r0 = r6.trim()
            int r0 = r0.length()
            if (r0 == 0) goto L4a
            r0 = 1
            r1 = 0
            if (r5 == 0) goto L12
            r2 = r0
            goto L13
        L12:
            r2 = r1
        L13:
            if (r2 == 0) goto L24
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 29
            if (r3 < r4) goto L24
            java.lang.ClassLoader r5 = r5.getClassLoader()     // Catch: java.lang.Throwable -> L24
            java.lang.Class r5 = r5.loadClass(r6)     // Catch: java.lang.Throwable -> L24
            return r5
        L24:
            java.lang.Class r5 = java.lang.Class.forName(r6)     // Catch: java.lang.Throwable -> L29
            return r5
        L29:
            r5 = move-exception
            r6 = 2
            java.lang.Object[] r6 = new java.lang.Object[r6]
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r6[r1] = r2
            java.lang.String r1 = r5.getLocalizedMessage()
            r6[r0] = r1
            java.lang.String r0 = "loadClass fail hasContext= %s, errMsg = %s"
            java.lang.String r6 = java.lang.String.format(r0, r6)
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            java.lang.ClassNotFoundException r6 = new java.lang.ClassNotFoundException
            java.lang.String r0 = "loadClass fail "
            r6.<init>(r0, r5)
            throw r6
        L4a:
            java.lang.ClassNotFoundException r5 = new java.lang.ClassNotFoundException
            java.lang.String r6 = "class is empty"
            r5.<init>(r6)
            throw r5
    }

    public static synchronized java.lang.String a() {
            java.lang.Class<com.xiaomi.push.v> r0 = com.xiaomi.push.v.class
            monitor-enter(r0)
            java.lang.String r1 = com.xiaomi.push.v.a     // Catch: java.lang.Throwable -> L59
            if (r1 == 0) goto Lb
            java.lang.String r1 = com.xiaomi.push.v.a     // Catch: java.lang.Throwable -> L59
            monitor-exit(r0)
            return r1
        Lb:
            java.lang.String r1 = android.os.Build.VERSION.INCREMENTAL     // Catch: java.lang.Throwable -> L59
            int r2 = a()     // Catch: java.lang.Throwable -> L59
            if (r2 > 0) goto L55
            java.lang.String r2 = b()     // Catch: java.lang.Throwable -> L59
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L59
            if (r3 != 0) goto L1f
        L1d:
            r1 = r2
            goto L55
        L1f:
            java.lang.String r2 = c()     // Catch: java.lang.Throwable -> L59
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L59
            if (r3 != 0) goto L2a
            goto L1d
        L2a:
            java.lang.String r2 = d()     // Catch: java.lang.Throwable -> L59
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L59
            if (r3 != 0) goto L35
            goto L1d
        L35:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L59
            r2.<init>()     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = "ro.product.brand"
            java.lang.String r4 = "Android"
            java.lang.String r3 = com.xiaomi.push.u.a(r3, r4)     // Catch: java.lang.Throwable -> L59
            r2.append(r3)     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = "_"
            r2.append(r3)     // Catch: java.lang.Throwable -> L59
            r2.append(r1)     // Catch: java.lang.Throwable -> L59
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L59
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L59
        L55:
            com.xiaomi.push.v.a = r1     // Catch: java.lang.Throwable -> L59
            monitor-exit(r0)
            return r1
        L59:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void a(android.content.Context r0) {
            android.content.Context r0 = r0.getApplicationContext()
            com.xiaomi.push.v.a = r0
            return
    }

    public static boolean a() {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = "sys.boot_completed"
            r0[r1] = r2
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.String r2 = "get"
            java.lang.Object r0 = com.xiaomi.push.bk.a(r1, r2, r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = "1"
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            return r0
    }

    public static boolean a(android.content.Context r1) {
            r0 = 0
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Exception -> Ld
            int r1 = r1.flags     // Catch: java.lang.Exception -> Ld
            r1 = r1 & 2
            if (r1 == 0) goto Lc
            r0 = 1
        Lc:
            return r0
        Ld:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            return r0
    }

    private static java.lang.String b() {
            java.lang.String r0 = "ro.build.version.emui"
            java.lang.String r1 = ""
            java.lang.String r0 = com.xiaomi.push.u.a(r0, r1)
            com.xiaomi.push.v.a = r0
            return r0
    }

    public static boolean b() {
            r0 = 0
            r1 = 0
            java.lang.String r2 = "miui.os.Build"
            java.lang.Class r0 = a(r0, r2)     // Catch: java.lang.Exception -> L17 java.lang.ClassNotFoundException -> L1c
            java.lang.String r2 = "IS_GLOBAL_BUILD"
            java.lang.reflect.Field r0 = r0.getField(r2)     // Catch: java.lang.Exception -> L17 java.lang.ClassNotFoundException -> L1c
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Exception -> L17 java.lang.ClassNotFoundException -> L1c
            boolean r0 = r0.getBoolean(r2)     // Catch: java.lang.Exception -> L17 java.lang.ClassNotFoundException -> L1c
            return r0
        L17:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            return r1
        L1c:
            java.lang.String r0 = "miui.os.Build ClassNotFound"
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            return r1
    }

    private static java.lang.String c() {
            java.lang.String r0 = "ro.build.version.opporom"
            java.lang.String r1 = ""
            java.lang.String r0 = com.xiaomi.push.u.a(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L27
            java.lang.String r1 = "ColorOS_"
            boolean r2 = r0.startsWith(r1)
            if (r2 != 0) goto L27
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.xiaomi.push.v.a = r0
        L27:
            java.lang.String r0 = com.xiaomi.push.v.a
            return r0
    }

    private static java.lang.String d() {
            java.lang.String r0 = "ro.vivo.os.version"
            java.lang.String r1 = ""
            java.lang.String r0 = com.xiaomi.push.u.a(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L27
            java.lang.String r1 = "FuntouchOS_"
            boolean r2 = r0.startsWith(r1)
            if (r2 != 0) goto L27
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.xiaomi.push.v.a = r0
        L27:
            java.lang.String r0 = com.xiaomi.push.v.a
            return r0
    }
}
