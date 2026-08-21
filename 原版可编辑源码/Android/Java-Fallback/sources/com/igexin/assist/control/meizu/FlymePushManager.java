package com.igexin.assist.control.meizu;

public class FlymePushManager implements com.igexin.assist.control.AbstractPushManager {
    public static final java.lang.String MEIZU_VERSION = "4.1.4";
    public static final java.lang.String PLUGIN_VERSION = "1.1.4";
    public static final java.lang.String TAG = "Assist_MZ";
    private java.lang.String a;
    private java.lang.String b;

    public FlymePushManager(android.content.Context r5) {
            r4 = this;
            java.lang.String r0 = "MZ_"
            r4.<init>()
            java.lang.String r1 = ""
            r4.a = r1
            r4.b = r1
            java.lang.String r2 = "Assist_MZ"
            java.lang.String r3 = "meizu plugin version = 1.1.4, meizu sdk version = 4.1.4"
            android.util.Log.d(r2, r3)     // Catch: java.lang.Throwable -> L44
            android.content.pm.PackageManager r2 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L44
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Throwable -> L44
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r5 = r2.getApplicationInfo(r5, r3)     // Catch: java.lang.Throwable -> L44
            android.os.Bundle r2 = r5.metaData     // Catch: java.lang.Throwable -> L44
            java.lang.String r3 = "MEIZUPUSH_APPID"
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L44
            r4.a = r2     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = r2.replace(r0, r1)     // Catch: java.lang.Throwable -> L44
            r4.a = r2     // Catch: java.lang.Throwable -> L44
            android.os.Bundle r5 = r5.metaData     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = "MEIZUPUSH_APPKEY"
            java.lang.Object r5 = r5.get(r2)     // Catch: java.lang.Throwable -> L44
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L44
            r4.b = r5     // Catch: java.lang.Throwable -> L44
            java.lang.String r5 = r5.replace(r0, r1)     // Catch: java.lang.Throwable -> L44
            r4.b = r5     // Catch: java.lang.Throwable -> L44
        L44:
            return
    }

    private static boolean a() {
            r0 = 0
            java.lang.String r1 = "meizu"
            java.lang.String r2 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> L3e
            boolean r1 = r1.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> L3e
            r2 = 1
            if (r1 != 0) goto L3d
            java.lang.String r1 = "22c4185e"
            java.lang.String r3 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> L3e
            boolean r1 = r1.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto L17
            goto L3d
        L17:
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r3 = "get"
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L3e
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r0] = r5     // Catch: java.lang.Throwable -> L3e
            java.lang.reflect.Method r3 = r1.getMethod(r3, r4)     // Catch: java.lang.Throwable -> L3e
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L3e
            java.lang.String r5 = "ro.meizu.product.model"
            r4[r0] = r5     // Catch: java.lang.Throwable -> L3e
            java.lang.Object r1 = r3.invoke(r1, r4)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L3e
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3e
            r0 = r0 ^ r2
            return r0
        L3d:
            return r2
        L3e:
            return r0
    }

    public static boolean checkMZDevice(android.content.Context r6) {
            java.lang.String r6 = ""
            java.lang.String r0 = "Flyme OS"
            r1 = 0
            boolean r2 = a()     // Catch: java.lang.Throwable -> L44
            if (r2 == 0) goto L44
            java.lang.String r2 = android.os.Build.DISPLAY     // Catch: java.lang.Throwable -> L44
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L44
            r4 = 1
            if (r3 != 0) goto L43
            boolean r3 = r2.startsWith(r0)     // Catch: java.lang.Throwable -> L44
            java.lang.String r5 = "Flyme"
            if (r3 != 0) goto L22
            boolean r3 = r2.startsWith(r5)     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L43
        L22:
            java.lang.String r0 = r2.replaceAll(r0, r6)     // Catch: java.lang.Throwable -> L43
            java.lang.String r6 = r0.replaceAll(r5, r6)     // Catch: java.lang.Throwable -> L43
            java.lang.String r6 = r6.trim()     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = "\\."
            java.lang.String[] r6 = r6.split(r0)     // Catch: java.lang.Throwable -> L43
            r6 = r6[r1]     // Catch: java.lang.Throwable -> L43
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L43
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> L43
            r0 = 5
            if (r6 < r0) goto L42
            r1 = r4
        L42:
            return r1
        L43:
            return r4
        L44:
            return r1
    }

    @Override
    public java.lang.String getToken(android.content.Context r1) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r1 = com.meizu.cloud.pushsdk.PushManager.getPushId(r1)
            return r1
    }

    @Override
    public void register(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = r3.a     // Catch: java.lang.Throwable -> L38
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = "Assist_MZ"
            if (r0 != 0) goto L33
            java.lang.String r0 = r3.b     // Catch: java.lang.Throwable -> L38
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L13
            goto L33
        L13:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38
            r0.<init>()     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = "Register meizupush, pkg = "
            r0.append(r2)     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = r4.getPackageName()     // Catch: java.lang.Throwable -> L38
            r0.append(r2)     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L38
            android.util.Log.d(r1, r0)     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r3.a     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = r3.b     // Catch: java.lang.Throwable -> L38
            com.meizu.cloud.pushsdk.PushManager.register(r4, r0, r1)     // Catch: java.lang.Throwable -> L38
            goto L38
        L33:
            java.lang.String r4 = "Register meizupush appId not find"
            android.util.Log.d(r1, r4)     // Catch: java.lang.Throwable -> L38
        L38:
            return
    }

    @Override
    public void setSilentTime(android.content.Context r1, int r2, int r3) {
            r0 = this;
            return
    }

    @Override
    public void turnOffPush(android.content.Context r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = com.meizu.cloud.pushsdk.PushManager.getPushId(r5)
            java.lang.String r1 = r4.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L26
            java.lang.String r1 = r4.b
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L26
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1e
            goto L26
        L1e:
            java.lang.String r1 = r4.a
            java.lang.String r2 = r4.b
            r3 = 0
            com.meizu.cloud.pushsdk.PushManager.switchPush(r5, r1, r2, r0, r3)
        L26:
            return
    }

    @Override
    public void turnOnPush(android.content.Context r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = com.meizu.cloud.pushsdk.PushManager.getPushId(r5)
            java.lang.String r1 = r4.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L26
            java.lang.String r1 = r4.b
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L26
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1e
            goto L26
        L1e:
            java.lang.String r1 = r4.a
            java.lang.String r2 = r4.b
            r3 = 1
            com.meizu.cloud.pushsdk.PushManager.switchPush(r5, r1, r2, r0, r3)
        L26:
            return
    }

    @Override
    public void unregister(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = r2.a     // Catch: java.lang.Throwable -> L25
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = "Assist_MZ"
            if (r0 != 0) goto L20
            java.lang.String r0 = r2.b     // Catch: java.lang.Throwable -> L25
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L13
            goto L20
        L13:
            java.lang.String r0 = "|Unregister meizupush"
            android.util.Log.d(r1, r0)     // Catch: java.lang.Throwable -> L25
            java.lang.String r0 = r2.a     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = r2.b     // Catch: java.lang.Throwable -> L25
            com.meizu.cloud.pushsdk.PushManager.unRegister(r3, r0, r1)     // Catch: java.lang.Throwable -> L25
            goto L25
        L20:
            java.lang.String r3 = "|Unregister meizupush appId not find"
            android.util.Log.d(r1, r3)     // Catch: java.lang.Throwable -> L25
        L25:
            return
    }
}
