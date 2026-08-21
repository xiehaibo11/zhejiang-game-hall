package com.huawei.hms.push;

public abstract class s {
    public static final java.lang.Object a = null;
    public static int b;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.push.s.a = r0
            r0 = -1
            com.huawei.hms.push.s.b = r0
            return
    }

    public static boolean a() {
            java.lang.String r0 = "CommFun"
            java.lang.String r1 = "huawei.cust.HwCfgFilePolicy"
            r2 = 0
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.String r3 = "CUST_TYPE_CONFIG"
            java.lang.reflect.Field r3 = r1.getDeclaredField(r3)     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.Object r3 = r3.get(r1)     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            int r3 = r3.intValue()     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.String r4 = "getCfgFile"
            r5 = 2
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r2] = r7     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.Class r7 = java.lang.Integer.TYPE     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            r8 = 1
            r6[r8] = r7     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.reflect.Method r4 = r1.getDeclaredMethod(r4, r6)     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.String r6 = "jars/hwpush.jar"
            r5[r2] = r6     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            r5[r8] = r3     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.Object r1 = r4.invoke(r1, r5)     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.io.File r1 = (java.io.File) r1     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            if (r1 == 0) goto L8d
            boolean r3 = r1.exists()     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            if (r3 == 0) goto L8d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            r3.<init>()     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.String r4 = "get push cust File path is "
            r3.append(r4)     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.String r1 = r1.getCanonicalPath()     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            r3.append(r1)     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            java.lang.String r1 = r3.toString()     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            com.huawei.hms.support.log.HMSLog.d(r0, r1)     // Catch: java.io.IOException -> L5e java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalAccessException -> L6a java.lang.IllegalArgumentException -> L70 java.lang.NoSuchMethodException -> L76 java.lang.NoSuchFieldException -> L7c java.lang.SecurityException -> L82 java.lang.ClassNotFoundException -> L88
            return r8
        L5e:
            java.lang.String r1 = "check jarFile exist but get not path"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            goto L8d
        L64:
            java.lang.String r1 = "check cust exist push InvocationTargetException."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            goto L8d
        L6a:
            java.lang.String r1 = "check cust exist push IllegalAccessException."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            goto L8d
        L70:
            java.lang.String r1 = "check cust exist push IllegalArgumentException."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            goto L8d
        L76:
            java.lang.String r1 = "check cust exist push NoSuchMethodException."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            goto L8d
        L7c:
            java.lang.String r1 = "check cust exist push NoSuchFieldException."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            goto L8d
        L82:
            java.lang.String r1 = "check cust exist push SecurityException."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            goto L8d
        L88:
            java.lang.String r1 = "HwCfgFilePolicy ClassNotFoundException"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
        L8d:
            return r2
    }

    public static boolean a(android.content.Context r5) {
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "existFrameworkPush:"
            r5.append(r0)
            int r0 = com.huawei.hms.push.s.b
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.String r0 = "CommFun"
            com.huawei.hms.support.log.HMSLog.d(r0, r5)
            java.lang.String r5 = "/system/framework/"
            java.lang.String r1 = "hwpush.jar"
            r2 = 0
            java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> L49
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L49
            r4.<init>()     // Catch: java.lang.Exception -> L49
            r4.append(r5)     // Catch: java.lang.Exception -> L49
            r4.append(r1)     // Catch: java.lang.Exception -> L49
            java.lang.String r5 = r4.toString()     // Catch: java.lang.Exception -> L49
            r3.<init>(r5)     // Catch: java.lang.Exception -> L49
            boolean r5 = a()     // Catch: java.lang.Exception -> L49
            java.lang.String r1 = "push jarFile is exist"
            if (r5 == 0) goto L3d
            com.huawei.hms.support.log.HMSLog.d(r0, r1)     // Catch: java.lang.Exception -> L49
            goto L46
        L3d:
            boolean r5 = r3.isFile()     // Catch: java.lang.Exception -> L49
            if (r5 == 0) goto L48
            com.huawei.hms.support.log.HMSLog.d(r0, r1)     // Catch: java.lang.Exception -> L49
        L46:
            r5 = 1
            return r5
        L48:
            return r2
        L49:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "get Apk version faild ,Exception e= "
            r1.append(r3)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            return r2
    }

    public static boolean a(org.json.JSONObject r0, org.json.JSONObject r1, java.lang.String r2) {
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lb
            if (r1 != 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    public static long b(android.content.Context r2) {
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L10
            java.lang.String r0 = "com.huawei.android.pushagent"
            r1 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r0, r1)     // Catch: java.lang.Exception -> L10
            int r2 = r2.versionCode     // Catch: java.lang.Exception -> L10
            long r0 = (long) r2
            goto L19
        L10:
            java.lang.String r2 = "CommFun"
            java.lang.String r0 = "get nc versionCode error"
            com.huawei.hms.support.log.HMSLog.e(r2, r0)
            r0 = -1
        L19:
            return r0
    }

    public static boolean b() {
            int r0 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT
            r1 = 21
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static java.lang.String c(android.content.Context r1) {
            com.huawei.agconnect.config.AGConnectServicesConfig r1 = com.huawei.agconnect.config.AGConnectServicesConfig.fromContext(r1)
            java.lang.String r0 = "client/project_id"
            java.lang.String r1 = r1.getString(r0)
            return r1
    }

    public static boolean c() {
            int r0 = com.huawei.hms.android.HwBuildEx.VERSION.EMUI_SDK_INT
            r1 = 19
            if (r0 >= r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean d(android.content.Context r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "existFrameworkPush:"
            r0.append(r1)
            int r1 = com.huawei.hms.push.s.b
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "CommFun"
            com.huawei.hms.support.log.HMSLog.d(r1, r0)
            java.lang.Object r0 = com.huawei.hms.push.s.a
            monitor-enter(r0)
            int r1 = com.huawei.hms.push.s.b     // Catch: java.lang.Throwable -> L3b
            r2 = 0
            r3 = 1
            r4 = -1
            if (r4 == r1) goto L29
            int r5 = com.huawei.hms.push.s.b     // Catch: java.lang.Throwable -> L3b
            if (r3 != r5) goto L27
            r2 = r3
        L27:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            return r2
        L29:
            boolean r5 = a(r5)     // Catch: java.lang.Throwable -> L3b
            if (r5 == 0) goto L32
            com.huawei.hms.push.s.b = r3     // Catch: java.lang.Throwable -> L3b
            goto L34
        L32:
            com.huawei.hms.push.s.b = r2     // Catch: java.lang.Throwable -> L3b
        L34:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            int r5 = com.huawei.hms.push.s.b
            if (r3 != r5) goto L3a
            r2 = r3
        L3a:
            return r2
        L3b:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            throw r5
    }
}
