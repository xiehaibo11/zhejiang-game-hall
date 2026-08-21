package com.huawei.hms.hatool;

public abstract class f {

    public static class a extends java.lang.Exception {
        public a(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public static java.lang.Object a(java.lang.Class r3, java.lang.String r4, java.lang.Class[] r5, java.lang.Object[] r6) {
            java.lang.String r0 = "hmsSdk"
            if (r3 == 0) goto L5c
            if (r5 != 0) goto L11
            if (r6 != 0) goto L9
            goto L17
        L9:
            com.huawei.hms.hatool.f$a r3 = new com.huawei.hms.hatool.f$a
            java.lang.String r4 = "paramsType is null, but params is not null"
            r3.<init>(r4)
            throw r3
        L11:
            if (r6 == 0) goto L54
            int r1 = r5.length
            int r2 = r6.length
            if (r1 != r2) goto L33
        L17:
            r1 = 0
            java.lang.reflect.Method r3 = r3.getMethod(r4, r5)     // Catch: java.lang.NoSuchMethodException -> L2d
            java.lang.Object r3 = r3.invoke(r1, r6)     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalArgumentException -> L27 java.lang.IllegalAccessException -> L2a java.lang.NoSuchMethodException -> L2d
            return r3
        L21:
            java.lang.String r3 = "invokeStaticFun(): Invocation Target Exception!"
        L23:
            com.huawei.hms.hatool.y.f(r0, r3)     // Catch: java.lang.NoSuchMethodException -> L2d
            goto L32
        L27:
            java.lang.String r3 = "invokeStaticFun(): Illegal Argument!"
            goto L23
        L2a:
            java.lang.String r3 = "invokeStaticFun(): method invoke Exception!"
            goto L23
        L2d:
            java.lang.String r3 = "invokeStaticFun(): cls.getMethod(),No Such Method !"
            com.huawei.hms.hatool.y.f(r0, r3)
        L32:
            return r1
        L33:
            com.huawei.hms.hatool.f$a r3 = new com.huawei.hms.hatool.f$a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "paramsType len:"
            r4.append(r0)
            int r5 = r5.length
            r4.append(r5)
            java.lang.String r5 = " should equal params.len:"
            r4.append(r5)
            int r5 = r6.length
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L54:
            com.huawei.hms.hatool.f$a r3 = new com.huawei.hms.hatool.f$a
            java.lang.String r4 = "paramsType or params should be same"
            r3.<init>(r4)
            throw r3
        L5c:
            com.huawei.hms.hatool.f$a r3 = new com.huawei.hms.hatool.f$a
            java.lang.String r4 = "class is null in invokeStaticFun"
            r3.<init>(r4)
            throw r3
    }

    public static java.lang.Object a(java.lang.String r1, java.lang.String r2, java.lang.Class[] r3, java.lang.Object[] r4) {
            java.lang.String r0 = "hmsSdk"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: com.huawei.hms.hatool.f.a -> Lb java.lang.ClassNotFoundException -> Le
            java.lang.Object r1 = a(r1, r2, r3, r4)     // Catch: com.huawei.hms.hatool.f.a -> Lb java.lang.ClassNotFoundException -> Le
            return r1
        Lb:
            java.lang.String r1 = "invokeStaticFun(): Static function call Exception "
            goto L10
        Le:
            java.lang.String r1 = "invokeStaticFun() Not found class!"
        L10:
            com.huawei.hms.hatool.y.f(r0, r1)
            r1 = 0
            return r1
    }

    public static java.lang.String a() {
            java.lang.String r0 = "ro.build.version.emui"
            java.lang.String r1 = ""
            java.lang.String r0 = a(r0, r1)
            return r0
    }

    public static java.lang.String a(android.content.Context r1) {
            if (r1 != 0) goto L5
            java.lang.String r1 = ""
            return r1
        L5:
            android.content.ContentResolver r1 = r1.getContentResolver()
            java.lang.String r0 = "android_id"
            java.lang.String r1 = android.provider.Settings.Secure.getString(r1, r0)
            return r1
    }

    public static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return r3
        L7:
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.String r0 = a(r0, r2, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L19
            java.lang.String r0 = "com.huawei.android.os.SystemPropertiesEx"
            java.lang.String r0 = a(r0, r2, r3)
        L19:
            return r0
    }

    public static java.lang.String a(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r0 = 2
            java.lang.Class[] r1 = new java.lang.Class[r0]
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r3 = 0
            r1[r3] = r2
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r4 = 1
            r1[r4] = r2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r3] = r6
            r0[r4] = r7
            java.lang.String r6 = "get"
            java.lang.Object r5 = a(r5, r6, r1, r0)
            if (r5 == 0) goto L1e
            r7 = r5
            java.lang.String r7 = (java.lang.String) r7
        L1e:
            return r7
    }

    public static java.lang.String b() {
            java.lang.String r0 = "com.huawei.android.os.SystemPropertiesEx"
            java.lang.String r1 = "ro.huawei.build.display.id"
            java.lang.String r2 = ""
            java.lang.String r0 = a(r0, r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "SystemPropertiesEx: get rom_ver: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "hmsSdk"
            com.huawei.hms.hatool.y.c(r2, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L3c
            java.lang.String r0 = android.os.Build.DISPLAY
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "SystemProperties: get rom_ver: "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.hatool.y.c(r2, r1)
        L3c:
            return r0
    }

    public static java.lang.String b(android.content.Context r3) {
            java.lang.String r0 = "Unknown"
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            java.lang.String r3 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r3 = r1.getApplicationInfo(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            if (r3 == 0) goto L36
            android.os.Bundle r1 = r3.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            if (r1 == 0) goto L36
            android.os.Bundle r3 = r3.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            java.lang.String r1 = "CHANNEL"
            java.lang.Object r3 = r3.get(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            if (r3 == 0) goto L36
            java.lang.String r3 = r3.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            int r1 = r3.length()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
            r2 = 256(0x100, float:3.59E-43)
            if (r1 <= r2) goto L2d
            goto L36
        L2d:
            r0 = r3
            goto L36
        L2f:
            java.lang.String r3 = "hmsSdk"
            java.lang.String r1 = "getChannel(): The packageName is not correct!"
            com.huawei.hms.hatool.y.f(r3, r1)
        L36:
            return r0
    }

    public static java.lang.String c(android.content.Context r0) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            java.lang.String r0 = r0.getPackageName()
            return r0
    }

    public static java.lang.String d(android.content.Context r3) {
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            java.lang.String r3 = c(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            r2 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            java.lang.String r0 = r3.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L16
            goto L1d
        L16:
            java.lang.String r3 = "hmsSdk"
            java.lang.String r1 = "getVersion(): The package name is not correct!"
            com.huawei.hms.hatool.y.f(r3, r1)
        L1d:
            return r0
    }
}
