package com.igexin.assist.control.huawei;

public class HmsPushManager implements com.igexin.assist.control.AbstractPushManager {
    public static final java.lang.String PLUGIN_VERSION = "2.1.0";
    public static final java.lang.String TAG = "Assist_HW";
    private java.lang.String a;
    private java.lang.String b;
    private final java.lang.Object c;

    public HmsPushManager(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "Assist_HW"
            r3.<init>()
            java.lang.String r1 = ""
            r3.b = r1
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r3.c = r1
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: java.lang.Throwable -> L46
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L46
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r4 = r1.getApplicationInfo(r4, r2)     // Catch: java.lang.Throwable -> L46
            android.os.Bundle r4 = r4.metaData     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = "com.huawei.hms.client.service.name:push"
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Throwable -> L46
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L46
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46
            r1.<init>()     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = "huawei plugin version = 2.1.0, huawei sdk version = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L46
            java.lang.String r2 = ":"
            java.lang.String[] r4 = r4.split(r2)     // Catch: java.lang.Throwable -> L46
            r2 = 1
            r4 = r4[r2]     // Catch: java.lang.Throwable -> L46
            r1.append(r4)     // Catch: java.lang.Throwable -> L46
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L46
            android.util.Log.d(r0, r4)     // Catch: java.lang.Throwable -> L46
            goto L4b
        L46:
            java.lang.String r4 = "huawei plugin version = 2.1.0, not meta-data"
            android.util.Log.d(r0, r4)
        L4b:
            return
    }

    static java.lang.Object a(com.igexin.assist.control.huawei.HmsPushManager r0) {
            java.lang.Object r0 = r0.c
            return r0
    }

    static java.lang.String a(com.igexin.assist.control.huawei.HmsPushManager r0, java.lang.String r1) {
            r0.a = r1
            return r1
    }

    static java.lang.String b(com.igexin.assist.control.huawei.HmsPushManager r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    static java.lang.String b(com.igexin.assist.control.huawei.HmsPushManager r0, java.lang.String r1) {
            r0.b = r1
            return r1
    }

    static java.lang.String c(com.igexin.assist.control.huawei.HmsPushManager r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    public static boolean checkHWDevice(android.content.Context r6) {
            r0 = 0
            android.content.pm.PackageManager r6 = r6.getPackageManager()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = "com.huawei.hwid"
            android.content.pm.PackageInfo r6 = r6.getPackageInfo(r1, r0)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = "get"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L3c
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r0] = r5     // Catch: java.lang.Throwable -> L3c
            java.lang.reflect.Method r2 = r1.getDeclaredMethod(r2, r4)     // Catch: java.lang.Throwable -> L3c
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L3c
            java.lang.String r5 = "ro.build.hw_emui_api_level"
            r4[r0] = r5     // Catch: java.lang.Throwable -> L3c
            java.lang.Object r1 = r2.invoke(r1, r4)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L3c
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L3c
            if (r6 == 0) goto L3c
            int r6 = r6.versionCode     // Catch: java.lang.Throwable -> L3c
            r2 = 30000000(0x1c9c380, float:7.411627E-38)
            if (r6 < r2) goto L3c
            r6 = 9
            if (r1 <= r6) goto L3c
            r0 = r3
        L3c:
            return r0
    }

    @Override
    public java.lang.String getToken(android.content.Context r1) {
            r0 = this;
            java.lang.String r1 = r0.b
            return r1
    }

    @Override
    public void register(android.content.Context r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Register hmspush, pkg = "
            r0.append(r1)
            java.lang.String r1 = r3.getPackageName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Assist_HW"
            android.util.Log.d(r1, r0)
            com.igexin.assist.control.huawei.a r0 = new com.igexin.assist.control.huawei.a
            r0.<init>(r2, r3)
            r0.start()
            return
    }

    @Override
    public void setSilentTime(android.content.Context r1, int r2, int r3) {
            r0 = this;
            return
    }

    @Override
    public void turnOffPush(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "Assist_HW"
            java.lang.String r1 = "turnOffPush"
            android.util.Log.d(r0, r1)
            com.huawei.hms.push.HmsMessaging r3 = com.huawei.hms.push.HmsMessaging.getInstance(r3)
            com.huawei.hmf.tasks.Task r3 = r3.turnOffPush()
            com.igexin.assist.control.huawei.d r0 = new com.igexin.assist.control.huawei.d
            r0.<init>(r2)
            r3.addOnCompleteListener(r0)
            return
    }

    @Override
    public void turnOnPush(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = "Assist_HW"
            java.lang.String r1 = "turnOnPush"
            android.util.Log.d(r0, r1)
            com.huawei.hms.push.HmsMessaging r3 = com.huawei.hms.push.HmsMessaging.getInstance(r3)
            com.huawei.hmf.tasks.Task r3 = r3.turnOnPush()
            com.igexin.assist.control.huawei.c r0 = new com.igexin.assist.control.huawei.c
            r0.<init>(r2)
            r3.addOnCompleteListener(r0)
            return
    }

    @Override
    public void unregister(android.content.Context r2) {
            r1 = this;
            com.igexin.assist.control.huawei.b r0 = new com.igexin.assist.control.huawei.b
            r0.<init>(r1, r2)
            r0.start()
            return
    }
}
