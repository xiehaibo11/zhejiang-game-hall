package com.igexin.assist.sdk;

public class a {
    private static int a;
    private static int b;
    private static int c;
    private static int d;
    private static int e;
    private static int f;
    private static int g;
    private static int h;

    static com.igexin.assist.control.AbstractPushManager a(android.content.Context r3) {
            r0 = 0
            boolean r1 = b(r3)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r2 = "Assist_PM"
            if (r1 == 0) goto L1c
            java.lang.String r1 = "support xm device"
            android.util.Log.d(r2, r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "Assist_PM|MiuiPushManager checkDevice flag = true"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lc1
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "com.igexin.assist.control.xiaomi.MiuiPushManager"
            com.igexin.assist.control.AbstractPushManager r3 = a(r1, r3)     // Catch: java.lang.Throwable -> Lc1
            return r3
        L1c:
            boolean r1 = c(r3)     // Catch: java.lang.Throwable -> Lc1
            if (r1 == 0) goto L35
            java.lang.String r1 = "support mz device"
            android.util.Log.d(r2, r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "Assist_PM|FlymePushManager checkDevice flag = true"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lc1
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "com.igexin.assist.control.meizu.FlymePushManager"
            com.igexin.assist.control.AbstractPushManager r3 = a(r1, r3)     // Catch: java.lang.Throwable -> Lc1
            return r3
        L35:
            boolean r1 = d(r3)     // Catch: java.lang.Throwable -> Lc1
            if (r1 == 0) goto L4e
            java.lang.String r1 = "support hw device"
            android.util.Log.d(r2, r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "Assist_PM|HmsPushManager checkDevice flag = true"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lc1
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "com.igexin.assist.control.huawei.HmsPushManager"
            com.igexin.assist.control.AbstractPushManager r3 = a(r1, r3)     // Catch: java.lang.Throwable -> Lc1
            return r3
        L4e:
            boolean r1 = e(r3)     // Catch: java.lang.Throwable -> Lc1
            if (r1 == 0) goto L67
            java.lang.String r1 = "support oppo device"
            android.util.Log.d(r2, r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "Assist_PM|OppoPushManager checkDevice flag = true"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lc1
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "com.igexin.assist.control.oppo.OppoPushManager"
            com.igexin.assist.control.AbstractPushManager r3 = a(r1, r3)     // Catch: java.lang.Throwable -> Lc1
            return r3
        L67:
            boolean r1 = f(r3)     // Catch: java.lang.Throwable -> Lc1
            if (r1 == 0) goto L80
            java.lang.String r1 = "support vivo device"
            android.util.Log.d(r2, r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "Assist_PM|VivoPushManager checkDevice flag = true"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lc1
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "com.igexin.assist.control.vivo.VivoPushManager"
            com.igexin.assist.control.AbstractPushManager r3 = a(r1, r3)     // Catch: java.lang.Throwable -> Lc1
            return r3
        L80:
            boolean r1 = g(r3)     // Catch: java.lang.Throwable -> Lc1
            if (r1 == 0) goto L99
            java.lang.String r1 = "support smartisan device"
            android.util.Log.d(r2, r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "Assist_PM|SmartisanPushManager checkDevice flag = true"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lc1
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "com.igexin.assist.control.st.SmartisanPushManager"
            com.igexin.assist.control.AbstractPushManager r3 = a(r1, r3)     // Catch: java.lang.Throwable -> Lc1
            return r3
        L99:
            boolean r1 = h(r3)     // Catch: java.lang.Throwable -> Lc1
            if (r1 == 0) goto Lb1
            boolean r1 = com.igexin.push.config.j.u     // Catch: java.lang.Throwable -> Lc1
            if (r1 == 0) goto Lb1
            java.lang.String r1 = "Assist_PM|FcmPushManager checkDevice flag = true"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lc1
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "com.igexin.assist.control.fcm.FcmPushManager"
            com.igexin.assist.control.AbstractPushManager r3 = a(r1, r3)     // Catch: java.lang.Throwable -> Lc1
            return r3
        Lb1:
            java.lang.String r3 = "Assist_PM|getPushManager = null, setToken = false"
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lc1
            com.igexin.b.a.c.b.a(r3, r1)     // Catch: java.lang.Throwable -> Lc1
            com.igexin.push.core.b.i r3 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "false"
            r3.c(r1)     // Catch: java.lang.Throwable -> Lc1
        Lc1:
            java.lang.Object[] r3 = new java.lang.Object[r0]
            java.lang.String r0 = "Assist_PM|OtherPushManager = null"
            com.igexin.b.a.c.b.a(r0, r3)
            r3 = 0
            return r3
    }

    private static com.igexin.assist.control.AbstractPushManager a(java.lang.String r4, android.content.Context r5) {
            java.lang.Class r4 = java.lang.Class.forName(r4)     // Catch: java.lang.Exception -> L1b
            r0 = 1
            java.lang.Class[] r1 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L1b
            java.lang.Class<android.content.Context> r2 = android.content.Context.class
            r3 = 0
            r1[r3] = r2     // Catch: java.lang.Exception -> L1b
            java.lang.reflect.Constructor r4 = r4.getConstructor(r1)     // Catch: java.lang.Exception -> L1b
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L1b
            r0[r3] = r5     // Catch: java.lang.Exception -> L1b
            java.lang.Object r4 = r4.newInstance(r0)     // Catch: java.lang.Exception -> L1b
            com.igexin.assist.control.AbstractPushManager r4 = (com.igexin.assist.control.AbstractPushManager) r4     // Catch: java.lang.Exception -> L1b
            return r4
        L1b:
            r4 = 0
            return r4
    }

    public static boolean b(android.content.Context r6) {
            int r0 = com.igexin.assist.sdk.a.d
            r1 = r0 & 1
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r6 = r0 & 2
            if (r6 == 0) goto Ld
            r2 = r3
        Ld:
            return r2
        Le:
            java.lang.String r0 = "com.igexin.assist.control.xiaomi.MiuiPushManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "checkXMDevice"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L37
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L37
            java.lang.reflect.Method r0 = r0.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L37
            r1 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L37
            r4[r2] = r6     // Catch: java.lang.Throwable -> L37
            java.lang.Object r6 = r0.invoke(r1, r4)     // Catch: java.lang.Throwable -> L37
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L37
            boolean r2 = r6.booleanValue()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L37
            int r6 = com.igexin.assist.sdk.a.d     // Catch: java.lang.Throwable -> L37
            r6 = r6 | 2
            com.igexin.assist.sdk.a.d = r6     // Catch: java.lang.Throwable -> L37
        L37:
            int r6 = com.igexin.assist.sdk.a.d
            r6 = r6 | r3
            com.igexin.assist.sdk.a.d = r6
            return r2
    }

    public static boolean c(android.content.Context r6) {
            int r0 = com.igexin.assist.sdk.a.c
            r1 = r0 & 1
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r6 = r0 & 2
            if (r6 == 0) goto Ld
            r2 = r3
        Ld:
            return r2
        Le:
            java.lang.String r0 = "com.igexin.assist.control.meizu.FlymePushManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "checkMZDevice"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L37
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L37
            java.lang.reflect.Method r0 = r0.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L37
            r1 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L37
            r4[r2] = r6     // Catch: java.lang.Throwable -> L37
            java.lang.Object r6 = r0.invoke(r1, r4)     // Catch: java.lang.Throwable -> L37
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L37
            boolean r2 = r6.booleanValue()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L37
            int r6 = com.igexin.assist.sdk.a.c     // Catch: java.lang.Throwable -> L37
            r6 = r6 | 2
            com.igexin.assist.sdk.a.c = r6     // Catch: java.lang.Throwable -> L37
        L37:
            int r6 = com.igexin.assist.sdk.a.c
            r6 = r6 | r3
            com.igexin.assist.sdk.a.c = r6
            return r2
    }

    public static boolean d(android.content.Context r6) {
            int r0 = com.igexin.assist.sdk.a.a
            r1 = r0 & 1
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r6 = r0 & 2
            if (r6 == 0) goto Ld
            r2 = r3
        Ld:
            return r2
        Le:
            java.lang.String r0 = "com.igexin.assist.control.huawei.HmsPushManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "checkHWDevice"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L37
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L37
            java.lang.reflect.Method r0 = r0.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L37
            r1 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L37
            r4[r2] = r6     // Catch: java.lang.Throwable -> L37
            java.lang.Object r6 = r0.invoke(r1, r4)     // Catch: java.lang.Throwable -> L37
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L37
            boolean r2 = r6.booleanValue()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L37
            int r6 = com.igexin.assist.sdk.a.a     // Catch: java.lang.Throwable -> L37
            r6 = r6 | 2
            com.igexin.assist.sdk.a.a = r6     // Catch: java.lang.Throwable -> L37
        L37:
            int r6 = com.igexin.assist.sdk.a.a
            r6 = r6 | r3
            com.igexin.assist.sdk.a.a = r6
            return r2
    }

    public static boolean e(android.content.Context r6) {
            int r0 = com.igexin.assist.sdk.a.b
            r1 = r0 & 1
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r6 = r0 & 2
            if (r6 == 0) goto Ld
            r2 = r3
        Ld:
            return r2
        Le:
            java.lang.String r0 = "com.igexin.assist.control.oppo.OppoPushManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "checkOppoDevice"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L37
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L37
            java.lang.reflect.Method r0 = r0.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L37
            r1 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L37
            r4[r2] = r6     // Catch: java.lang.Throwable -> L37
            java.lang.Object r6 = r0.invoke(r1, r4)     // Catch: java.lang.Throwable -> L37
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L37
            boolean r2 = r6.booleanValue()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L37
            int r6 = com.igexin.assist.sdk.a.b     // Catch: java.lang.Throwable -> L37
            r6 = r6 | 2
            com.igexin.assist.sdk.a.b = r6     // Catch: java.lang.Throwable -> L37
        L37:
            int r6 = com.igexin.assist.sdk.a.b
            r6 = r6 | r3
            com.igexin.assist.sdk.a.b = r6
            return r2
    }

    public static boolean f(android.content.Context r6) {
            int r0 = com.igexin.assist.sdk.a.e
            r1 = r0 & 1
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r6 = r0 & 2
            if (r6 == 0) goto Ld
            r2 = r3
        Ld:
            return r2
        Le:
            java.lang.String r0 = "com.igexin.assist.control.vivo.VivoPushManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "checkVivoDevice"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L37
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L37
            java.lang.reflect.Method r0 = r0.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L37
            r1 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L37
            r4[r2] = r6     // Catch: java.lang.Throwable -> L37
            java.lang.Object r6 = r0.invoke(r1, r4)     // Catch: java.lang.Throwable -> L37
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L37
            boolean r2 = r6.booleanValue()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L37
            int r6 = com.igexin.assist.sdk.a.e     // Catch: java.lang.Throwable -> L37
            r6 = r6 | 2
            com.igexin.assist.sdk.a.e = r6     // Catch: java.lang.Throwable -> L37
        L37:
            int r6 = com.igexin.assist.sdk.a.e
            r6 = r6 | r3
            com.igexin.assist.sdk.a.e = r6
            return r2
    }

    public static boolean g(android.content.Context r6) {
            int r0 = com.igexin.assist.sdk.a.f
            r1 = r0 & 1
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r6 = r0 & 2
            if (r6 == 0) goto Ld
            r2 = r3
        Ld:
            return r2
        Le:
            java.lang.String r0 = "com.igexin.assist.control.st.SmartisanPushManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "checkSTDevice"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L37
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L37
            java.lang.reflect.Method r0 = r0.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L37
            r1 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L37
            r4[r2] = r6     // Catch: java.lang.Throwable -> L37
            java.lang.Object r6 = r0.invoke(r1, r4)     // Catch: java.lang.Throwable -> L37
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L37
            boolean r2 = r6.booleanValue()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L37
            int r6 = com.igexin.assist.sdk.a.f     // Catch: java.lang.Throwable -> L37
            r6 = r6 | 2
            com.igexin.assist.sdk.a.f = r6     // Catch: java.lang.Throwable -> L37
        L37:
            int r6 = com.igexin.assist.sdk.a.f
            r6 = r6 | r3
            com.igexin.assist.sdk.a.f = r6
            return r2
    }

    public static boolean h(android.content.Context r6) {
            int r0 = com.igexin.assist.sdk.a.g
            r1 = r0 & 1
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r6 = r0 & 2
            if (r6 == 0) goto Ld
            r2 = r3
        Ld:
            return r2
        Le:
            java.lang.String r0 = "com.igexin.assist.control.fcm.FcmPushManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "checkFcmDevice"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L3a
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L3a
            java.lang.reflect.Method r0 = r0.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L3a
            r1 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L3a
            r4[r2] = r6     // Catch: java.lang.Throwable -> L3a
            java.lang.Object r6 = r0.invoke(r1, r4)     // Catch: java.lang.Throwable -> L3a
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L3a
            boolean r2 = r6.booleanValue()     // Catch: java.lang.Throwable -> L3a
            int r6 = com.igexin.assist.sdk.a.g     // Catch: java.lang.Throwable -> L3a
            r6 = r6 | r3
            com.igexin.assist.sdk.a.g = r6     // Catch: java.lang.Throwable -> L3a
            if (r2 == 0) goto L3a
            r6 = r6 | 2
            com.igexin.assist.sdk.a.g = r6     // Catch: java.lang.Throwable -> L3a
        L3a:
            int r6 = com.igexin.assist.sdk.a.g
            r6 = r6 | r3
            com.igexin.assist.sdk.a.g = r6
            return r2
    }

    public static boolean i(android.content.Context r4) {
            int r0 = com.igexin.assist.sdk.a.h
            r1 = r0 & 1
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r4 = r0 & 2
            if (r4 == 0) goto Ld
            r2 = r3
        Ld:
            return r2
        Le:
            boolean r0 = c(r4)
            if (r0 != 0) goto L32
            boolean r0 = b(r4)
            if (r0 != 0) goto L32
            boolean r0 = d(r4)
            if (r0 != 0) goto L32
            boolean r0 = e(r4)
            if (r0 != 0) goto L32
            boolean r0 = f(r4)
            if (r0 != 0) goto L32
            boolean r4 = g(r4)
            if (r4 == 0) goto L33
        L32:
            r2 = r3
        L33:
            if (r2 == 0) goto L3b
            int r4 = com.igexin.assist.sdk.a.h
            r4 = r4 | 2
            com.igexin.assist.sdk.a.h = r4
        L3b:
            int r4 = com.igexin.assist.sdk.a.h
            r4 = r4 | r3
            com.igexin.assist.sdk.a.h = r4
            return r2
    }

    public static void j(android.content.Context r7) {
            r0 = 0
            boolean r1 = b(r7)     // Catch: java.lang.Throwable -> L4f
            r2 = 0
            java.lang.String r3 = "clearNotification"
            r4 = 1
            if (r1 == 0) goto L2a
            java.lang.String r1 = "com.xiaomi.mipush.sdk.MiPushClient"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L4f
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L4f
            java.lang.Class<android.content.Context> r6 = android.content.Context.class
            r5[r0] = r6     // Catch: java.lang.Throwable -> L4f
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r5)     // Catch: java.lang.Throwable -> L4f
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L4f
            r3[r0] = r7     // Catch: java.lang.Throwable -> L4f
            r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r7 = "Assist_PM | cancelAllAssistNotification() XM "
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L4f
            com.igexin.b.a.c.b.a(r7, r1)     // Catch: java.lang.Throwable -> L4f
            goto L6a
        L2a:
            boolean r1 = c(r7)     // Catch: java.lang.Throwable -> L4f
            if (r1 == 0) goto L6a
            java.lang.String r1 = "com.meizu.cloud.pushsdk.PushManager"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L4f
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L4f
            java.lang.Class<android.content.Context> r6 = android.content.Context.class
            r5[r0] = r6     // Catch: java.lang.Throwable -> L4f
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r5)     // Catch: java.lang.Throwable -> L4f
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L4f
            r3[r0] = r7     // Catch: java.lang.Throwable -> L4f
            r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r7 = "Assist_PM | cancelAllAssistNotification() MZ "
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L4f
            com.igexin.b.a.c.b.a(r7, r1)     // Catch: java.lang.Throwable -> L4f
            goto L6a
        L4f:
            r7 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Assist_PM | cancelAllAssistNotification() err "
            r1.append(r2)
            java.lang.String r7 = r7.toString()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r7, r0)
        L6a:
            return
    }
}
