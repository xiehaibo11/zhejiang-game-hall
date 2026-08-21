package com.huawei.updatesdk.b.c;

public class b {
    private static final java.util.Map<java.lang.Integer, java.lang.Class<? extends com.huawei.updatesdk.b.c.c>> a = null;
    private static com.huawei.updatesdk.b.c.c b;
    private static int c;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.updatesdk.b.c.b.a = r0
            r1 = -1
            com.huawei.updatesdk.b.c.b.c = r1
            r1 = 3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Class<com.huawei.updatesdk.b.c.a> r2 = com.huawei.updatesdk.b.c.a.class
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.Class<? extends com.huawei.updatesdk.b.c.c>> r0 = com.huawei.updatesdk.b.c.b.a
            r1 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Class<com.huawei.updatesdk.b.c.e> r2 = com.huawei.updatesdk.b.c.e.class
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.Class<? extends com.huawei.updatesdk.b.c.c>> r0 = com.huawei.updatesdk.b.c.b.a
            r1 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Class<com.huawei.updatesdk.b.c.f> r2 = com.huawei.updatesdk.b.c.f.class
            r0.put(r1, r2)
            java.util.Map<java.lang.Integer, java.lang.Class<? extends com.huawei.updatesdk.b.c.c>> r0 = com.huawei.updatesdk.b.c.b.a
            r1 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Class<com.huawei.updatesdk.b.c.d> r2 = com.huawei.updatesdk.b.c.d.class
            r0.put(r1, r2)
            return
    }

    private static int a(android.content.Context r1) {
            boolean r0 = c(r1)
            if (r0 == 0) goto L8
            r1 = 1
            return r1
        L8:
            boolean r0 = d(r1)
            if (r0 == 0) goto L10
            r1 = 2
            return r1
        L10:
            boolean r1 = b(r1)
            if (r1 == 0) goto L18
            r1 = 3
            return r1
        L18:
            r1 = 0
            return r1
    }

    public static com.huawei.updatesdk.b.c.c a() {
            com.huawei.updatesdk.b.c.c r0 = com.huawei.updatesdk.b.c.b.b
            if (r0 == 0) goto L5
            return r0
        L5:
            com.huawei.updatesdk.a.b.a.a r0 = com.huawei.updatesdk.a.b.a.a.c()
            android.content.Context r0 = r0.a()
            int r1 = com.huawei.updatesdk.b.c.b.c
            if (r1 >= 0) goto L17
            int r0 = a(r0)
            com.huawei.updatesdk.b.c.b.c = r0
        L17:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "deviceType: "
            r0.append(r1)
            int r1 = com.huawei.updatesdk.b.c.b.c
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DeviceImplFactory"
            com.huawei.updatesdk.a.a.a.b(r1, r0)
            java.util.Map<java.lang.Integer, java.lang.Class<? extends com.huawei.updatesdk.b.c.c>> r0 = com.huawei.updatesdk.b.c.b.a
            int r2 = com.huawei.updatesdk.b.c.b.c
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r0 = r0.get(r2)
            java.lang.Class r0 = (java.lang.Class) r0
            if (r0 != 0) goto L47
            com.huawei.updatesdk.b.c.d r0 = new com.huawei.updatesdk.b.c.d
            r0.<init>()
            com.huawei.updatesdk.b.c.b.b = r0
            return r0
        L47:
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Throwable -> L50
            com.huawei.updatesdk.b.c.c r0 = (com.huawei.updatesdk.b.c.c) r0     // Catch: java.lang.Throwable -> L50
            com.huawei.updatesdk.b.c.b.b = r0     // Catch: java.lang.Throwable -> L50
            goto L5c
        L50:
            com.huawei.updatesdk.b.c.d r0 = new com.huawei.updatesdk.b.c.d
            r0.<init>()
            com.huawei.updatesdk.b.c.b.b = r0
            java.lang.String r0 = "createDeviceInfo error and create default phone deviceinfo"
            com.huawei.updatesdk.a.a.a.a(r1, r0)
        L5c:
            com.huawei.updatesdk.b.c.c r0 = com.huawei.updatesdk.b.c.b.b
            return r0
    }

    private static boolean b(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L11
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            java.lang.String r0 = "android.hardware.type.automotive"
            boolean r2 = r2.hasSystemFeature(r0)
            return r2
        L11:
            r2 = 0
            return r2
    }

    private static boolean c(android.content.Context r2) {
            java.lang.String r0 = "uimode"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.UiModeManager r2 = (android.app.UiModeManager) r2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UI mode: "
            r0.append(r1)
            int r1 = r2.getCurrentModeType()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DeviceImplFactory"
            com.huawei.updatesdk.a.a.a.b(r1, r0)
            int r2 = r2.getCurrentModeType()
            r0 = 4
            if (r2 != r0) goto L2b
            r2 = 1
            goto L2c
        L2b:
            r2 = 0
        L2c:
            return r2
    }

    private static boolean d(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L11
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            java.lang.String r0 = "android.hardware.type.watch"
            boolean r2 = r2.hasSystemFeature(r0)
            return r2
        L11:
            r2 = 0
            return r2
    }
}
