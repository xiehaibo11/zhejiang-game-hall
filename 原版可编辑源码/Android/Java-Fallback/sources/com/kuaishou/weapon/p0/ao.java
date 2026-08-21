package com.kuaishou.weapon.p0;

public class ao {
    public ao() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean a(java.lang.String r3) {
            r2 = this;
            java.lang.ClassLoader r0 = java.lang.ClassLoader.getSystemClassLoader()
            r1 = 1
            if (r0 == 0) goto L11
            java.lang.Class r3 = r0.loadClass(r3)     // Catch: java.lang.ClassNotFoundException -> Lf java.lang.Throwable -> L11
            r3.newInstance()     // Catch: java.lang.ClassNotFoundException -> Lf java.lang.Throwable -> L11
            goto L11
        Lf:
            r3 = 0
            return r3
        L11:
            return r1
    }

    public boolean a() {
            r4 = this;
            java.lang.ClassLoader r0 = java.lang.ClassLoader.getSystemClassLoader()     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "de.robv.android.xposed.XposedBridge"
            java.lang.Class r0 = r0.loadClass(r1)     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "disableHooks"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.Exception -> L1b
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Exception -> L1b
            r2 = 0
            java.lang.Boolean r3 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> L1b
            r0.set(r2, r3)     // Catch: java.lang.Exception -> L1b
            return r1
        L1b:
            r0 = 0
            return r0
    }

    public boolean b() {
            r6 = this;
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L8
            java.lang.String r1 = ""
            r0.<init>(r1)     // Catch: java.lang.Exception -> L8
            throw r0     // Catch: java.lang.Exception -> L8
        L8:
            r0 = move-exception
            java.lang.StackTraceElement[] r0 = r0.getStackTrace()
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L10:
            if (r3 >= r1) goto L25
            r4 = r0[r3]
            java.lang.String r4 = r4.getClassName()
            java.lang.String r5 = "de.robv.android.xposed.XposedBridge"
            boolean r4 = r4.contains(r5)
            if (r4 == 0) goto L22
            r0 = 1
            return r0
        L22:
            int r3 = r3 + 1
            goto L10
        L25:
            return r2
    }

    public boolean c() {
            r1 = this;
            java.lang.String r0 = "com.elderdrivers.riru.edxp.config.EdXpConfigGlobal"
            boolean r0 = r1.a(r0)
            return r0
    }

    public boolean d() {
            r4 = this;
            java.lang.ClassLoader r0 = java.lang.ClassLoader.getSystemClassLoader()
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L14
            java.lang.String r3 = "de.robv.android.xposed.XposedHelpers"
            java.lang.Class r3 = r0.loadClass(r3)     // Catch: java.lang.ClassNotFoundException -> L12 java.lang.Throwable -> L13
            r3.newInstance()     // Catch: java.lang.ClassNotFoundException -> L12 java.lang.Throwable -> L13
            goto L14
        L12:
            return r1
        L13:
            return r2
        L14:
            if (r0 == 0) goto L21
            java.lang.String r3 = "de.robv.android.xposed.XposedBridge"
            java.lang.Class r0 = r0.loadClass(r3)     // Catch: java.lang.ClassNotFoundException -> L20 java.lang.Throwable -> L21
            r0.newInstance()     // Catch: java.lang.ClassNotFoundException -> L20 java.lang.Throwable -> L21
            goto L21
        L20:
            return r1
        L21:
            return r2
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = "vxp"
            java.lang.String r0 = java.lang.System.getProperty(r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public boolean f() {
            r2 = this;
            java.lang.String r0 = "CLASSPATH"
            java.lang.String r0 = java.lang.System.getenv(r0)     // Catch: java.lang.Exception -> L16
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L16
            if (r1 != 0) goto L16
            java.lang.String r1 = "XposedBridge"
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    public boolean g() {
            r4 = this;
            r0 = 0
            java.lang.Class<java.lang.Throwable> r1 = java.lang.Throwable.class
            java.lang.String r2 = "getStackTrace"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L13
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L13
            int r1 = r1.getModifiers()     // Catch: java.lang.NoSuchMethodException -> L13
            boolean r0 = java.lang.reflect.Modifier.isNative(r1)     // Catch: java.lang.NoSuchMethodException -> L13
        L13:
            return r0
    }
}
