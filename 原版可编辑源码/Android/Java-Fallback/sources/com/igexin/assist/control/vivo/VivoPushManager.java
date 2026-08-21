package com.igexin.assist.control.vivo;

public class VivoPushManager implements com.igexin.assist.control.AbstractPushManager {
    public static final java.lang.String PLUGIN_VERSION = "1.1.0";
    public static final java.lang.String TAG = "Assist_VV";
    public static final java.lang.String VIVO = null;
    private static final java.lang.String a = null;
    private java.lang.String b;

    static {
            java.lang.String r0 = "Vivo"
            java.lang.String r0 = r0.toLowerCase()
            com.igexin.assist.control.vivo.VivoPushManager.VIVO = r0
            java.lang.String r0 = android.os.Build.BRAND
            com.igexin.assist.control.vivo.VivoPushManager.a = r0
            return
    }

    public VivoPushManager(android.content.Context r5) {
            r4 = this;
            java.lang.String r0 = "Assist_VV"
            r4.<init>()
            android.content.pm.PackageManager r1 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = r5.getPackageName()     // Catch: java.lang.Throwable -> L5e
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo(r2, r3)     // Catch: java.lang.Throwable -> L5e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
            r2.<init>()     // Catch: java.lang.Throwable -> L5e
            java.lang.String r3 = "vivo plugin version = 1.1.0, vivo sdk version = "
            r2.append(r3)     // Catch: java.lang.Throwable -> L5e
            android.os.Bundle r1 = r1.metaData     // Catch: java.lang.Throwable -> L5e
            java.lang.String r3 = "sdk_version_vivo"
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L5e
            r2.append(r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L5e
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
            r1.<init>()     // Catch: java.lang.Throwable -> L5e
            java.io.File r2 = r5.getFilesDir()     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> L5e
            r1.append(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = "/"
            r1.append(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = "init.pid"
            r1.append(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L5e
            r4.b = r1     // Catch: java.lang.Throwable -> L5e
            com.vivo.push.PushClient r1 = com.vivo.push.PushClient.getInstance(r5)     // Catch: java.lang.Throwable -> L5e
            r1.initialize()     // Catch: java.lang.Throwable -> L5e
            com.vivo.push.PushClient r5 = com.vivo.push.PushClient.getInstance(r5)     // Catch: java.lang.Throwable -> L5e
            r5.checkManifest()     // Catch: java.lang.Throwable -> L5e
            goto L66
        L5e:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            android.util.Log.e(r0, r5)
        L66:
            return
    }

    private void a(com.igexin.assist.MessageBean r3) {
            r2 = this;
            java.lang.Class<com.igexin.assist.MessageBean> r0 = com.igexin.assist.MessageBean.class
            java.lang.String r1 = "extra"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.Throwable -> L17
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Throwable -> L17
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Throwable -> L17
            android.os.Bundle r3 = (android.os.Bundle) r3     // Catch: java.lang.Throwable -> L17
            java.lang.String r0 = "isForce"
            r3.putBoolean(r0, r1)     // Catch: java.lang.Throwable -> L17
        L17:
            return
    }

    static void a(com.igexin.assist.control.vivo.VivoPushManager r0, com.igexin.assist.MessageBean r1) {
            r0.a(r1)
            return
    }

    private boolean a() {
            r2 = this;
            java.lang.String r0 = r2.b
            if (r0 == 0) goto L10
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r2.b
            r0.<init>(r1)
            boolean r0 = r0.exists()
            return r0
        L10:
            r0 = 0
            return r0
    }

    public static boolean checkVivoDevice(android.content.Context r0) {
            com.vivo.push.PushClient r0 = com.vivo.push.PushClient.getInstance(r0)     // Catch: java.lang.Throwable -> L9
            boolean r0 = r0.isSupport()     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getToken(android.content.Context r1) {
            r0 = this;
            com.vivo.push.PushClient r1 = com.vivo.push.PushClient.getInstance(r1)
            java.lang.String r1 = r1.getRegId()
            return r1
    }

    @Override
    public void register(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "Assist_VV"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            r1.<init>()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "Register vivo push, pkg = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = r4.getPackageName()     // Catch: java.lang.Throwable -> L2d
            r1.append(r2)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L2d
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L2d
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()     // Catch: java.lang.Throwable -> L2d
            boolean r0 = r0.isPushTurnedOn(r4)     // Catch: java.lang.Throwable -> L2d
            if (r0 != 0) goto L2a
            boolean r0 = r3.a()     // Catch: java.lang.Throwable -> L2d
            if (r0 != 0) goto L2d
        L2a:
            r3.turnOnPush(r4)     // Catch: java.lang.Throwable -> L2d
        L2d:
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
            com.vivo.push.PushClient r0 = com.vivo.push.PushClient.getInstance(r3)     // Catch: java.lang.Throwable -> Lc
            com.igexin.assist.control.vivo.b r1 = new com.igexin.assist.control.vivo.b     // Catch: java.lang.Throwable -> Lc
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> Lc
            r0.turnOffPush(r1)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    @Override
    public void turnOnPush(android.content.Context r3) {
            r2 = this;
            com.vivo.push.PushClient r0 = com.vivo.push.PushClient.getInstance(r3)     // Catch: java.lang.Throwable -> Lc
            com.igexin.assist.control.vivo.a r1 = new com.igexin.assist.control.vivo.a     // Catch: java.lang.Throwable -> Lc
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> Lc
            r0.turnOnPush(r1)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    @Override
    public void unregister(android.content.Context r1) {
            r0 = this;
            r0.turnOffPush(r1)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }
}
