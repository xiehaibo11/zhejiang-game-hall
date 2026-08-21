package com.qq.e.comm.managers;

public class b implements com.qq.e.comm.managers.IGDTAdManager {
    public static final java.util.concurrent.ExecutorService g = null;
    private volatile java.lang.Boolean a;
    private volatile boolean b;
    private volatile android.content.Context c;
    private volatile com.qq.e.comm.managers.plugin.PM d;
    private volatile com.qq.e.comm.managers.devtool.DevTools e;
    private volatile java.lang.String f;

    private static final class a {
        private static com.qq.e.comm.managers.b a;

        static {
                com.qq.e.comm.managers.b r0 = new com.qq.e.comm.managers.b
                r1 = 0
                r0.<init>(r1)
                com.qq.e.comm.managers.b.a.a = r0
                return
        }

        static com.qq.e.comm.managers.b a() {
                com.qq.e.comm.managers.b r0 = com.qq.e.comm.managers.b.a.a
                return r0
        }
    }

    static {
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            com.qq.e.comm.managers.b.g = r0
            return
    }

    private b() {
            r1 = this;
            r1.<init>()
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            r1.a = r0
            r0 = 0
            r1.b = r0
            return
    }

    b(com.qq.e.comm.managers.a r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static com.qq.e.comm.managers.plugin.PM a(com.qq.e.comm.managers.b r0) {
            com.qq.e.comm.managers.plugin.PM r0 = r0.d
            return r0
    }

    static boolean a(com.qq.e.comm.managers.b r0, boolean r1) {
            r0.b = r1
            return r1
    }

    public static com.qq.e.comm.managers.b b() {
            com.qq.e.comm.managers.b r0 = com.qq.e.comm.managers.b.a.a()
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    synchronized boolean a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L54
            r1 = 14
            r2 = 0
            if (r0 >= r1) goto Lf
            java.lang.String r4 = "GDTADManager初始化错误，SDK不支持Android 4.0以下版本"
            com.qq.e.comm.util.GDTLogger.e(r4)     // Catch: java.lang.Throwable -> L54
            monitor-exit(r3)
            return r2
        Lf:
            java.lang.Boolean r0 = r3.a     // Catch: java.lang.Throwable -> L54
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Throwable -> L54
            r1 = 1
            if (r0 == 0) goto L1a
            monitor-exit(r3)
            return r1
        L1a:
            if (r4 == 0) goto L4d
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L54
            if (r0 == 0) goto L23
            goto L4d
        L23:
            r3.f = r5     // Catch: java.lang.Throwable -> L45
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L45
            r3.c = r4     // Catch: java.lang.Throwable -> L45
            com.qq.e.comm.managers.plugin.PM r4 = new com.qq.e.comm.managers.plugin.PM     // Catch: java.lang.Throwable -> L45
            android.content.Context r5 = r3.c     // Catch: java.lang.Throwable -> L45
            r0 = 0
            r4.<init>(r5, r0)     // Catch: java.lang.Throwable -> L45
            r3.d = r4     // Catch: java.lang.Throwable -> L45
            java.util.concurrent.ExecutorService r4 = com.qq.e.comm.managers.b.g     // Catch: java.lang.Throwable -> L45
            com.qq.e.comm.managers.a r5 = new com.qq.e.comm.managers.a     // Catch: java.lang.Throwable -> L45
            r5.<init>(r3)     // Catch: java.lang.Throwable -> L45
            r4.submit(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.Boolean r4 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L45
            r3.a = r4     // Catch: java.lang.Throwable -> L45
            monitor-exit(r3)
            return r1
        L45:
            r4 = move-exception
            java.lang.String r5 = "GDTADManager初始化错误"
            com.qq.e.comm.util.GDTLogger.e(r5, r4)     // Catch: java.lang.Throwable -> L54
            monitor-exit(r3)
            return r2
        L4d:
            java.lang.String r4 = "GDTADManager初始化错误，context和appId不能为空"
            com.qq.e.comm.util.GDTLogger.e(r4)     // Catch: java.lang.Throwable -> L54
            monitor-exit(r3)
            return r2
        L54:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public com.qq.e.comm.managers.plugin.PM c() {
            r1 = this;
            com.qq.e.comm.managers.plugin.PM r0 = r1.d
            return r0
    }

    public boolean d() {
            r1 = this;
            java.lang.Boolean r0 = r1.a
            if (r0 == 0) goto Lf
            java.lang.Boolean r0 = r1.a
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto Ld
            goto Lf
        Ld:
            r0 = 1
            return r0
        Lf:
            java.lang.String r0 = "SDK 尚未初始化，请在 Application 中调用 GDTAdSdk.init() 初始化"
            com.qq.e.comm.util.GDTLogger.e(r0)
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getBuyerId(java.util.Map<java.lang.String, java.lang.Object> r3) {
            r2 = this;
            boolean r0 = r2.d()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            com.qq.e.comm.managers.plugin.PM r0 = r2.d     // Catch: java.lang.Exception -> L14
            com.qq.e.comm.pi.POFactory r0 = r0.getPOFactory()     // Catch: java.lang.Exception -> L14
            java.lang.String r3 = r0.getBuyerId(r3)     // Catch: java.lang.Exception -> L14
            return r3
        L14:
            r3 = move-exception
            java.lang.String r0 = "SDK 初始化异常"
            com.qq.e.comm.util.GDTLogger.e(r0, r3)
            return r1
    }

    @Override
    public com.qq.e.comm.managers.devtool.DevTools getDevTools() {
            r1 = this;
            com.qq.e.comm.managers.devtool.DevTools r0 = r1.e
            if (r0 != 0) goto Lb
            com.qq.e.comm.managers.devtool.DevTools r0 = new com.qq.e.comm.managers.devtool.DevTools
            r0.<init>()
            r1.e = r0
        Lb:
            com.qq.e.comm.managers.devtool.DevTools r0 = r1.e
            return r0
    }

    @Override
    public java.lang.String getSDKInfo(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.d()
            java.lang.String r1 = ""
            if (r0 != 0) goto L9
            return r1
        L9:
            com.qq.e.comm.managers.plugin.PM r0 = r2.d     // Catch: java.lang.Exception -> L14
            com.qq.e.comm.pi.POFactory r0 = r0.getPOFactory()     // Catch: java.lang.Exception -> L14
            java.lang.String r3 = r0.getSDKInfo(r3)     // Catch: java.lang.Exception -> L14
            return r3
        L14:
            r3 = move-exception
            java.lang.String r0 = "SDK 初始化异常"
            com.qq.e.comm.util.GDTLogger.e(r0, r3)
            return r1
    }

    @Override
    public int showOpenOrInstallAppDialog(com.qq.e.ads.dfa.GDTAppDialogClickListener r3) {
            r2 = this;
            boolean r0 = r2.b
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.qq.e.comm.managers.plugin.PM r0 = r2.d     // Catch: java.lang.Exception -> L11
            com.qq.e.comm.pi.POFactory r0 = r0.getPOFactory()     // Catch: java.lang.Exception -> L11
            int r1 = r0.showOpenOrInstallAppDialog(r3)     // Catch: java.lang.Exception -> L11
            goto L17
        L11:
            r3 = move-exception
            java.lang.String r0 = "SDK 初始化异常"
            com.qq.e.comm.util.GDTLogger.e(r0, r3)
        L17:
            return r1
    }
}
