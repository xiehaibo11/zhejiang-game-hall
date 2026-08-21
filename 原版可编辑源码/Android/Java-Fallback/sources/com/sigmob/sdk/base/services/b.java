package com.sigmob.sdk.base.services;

public class b implements com.sigmob.sdk.base.services.j.a {
    com.sigmob.sdk.base.services.a a;
    com.sigmob.sdk.base.services.k b;


    public b() {
            r1 = this;
            r1.<init>()
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.b
            r1.b = r0
            com.sigmob.sdk.base.services.a r0 = r1.a
            if (r0 != 0) goto L12
            com.sigmob.sdk.base.services.a r0 = new com.sigmob.sdk.base.services.a
            r0.<init>()
            r1.a = r0
        L12:
            return
    }

    public static void a() {
            g()     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    static java.util.List c(android.content.Context r0) {
            java.util.List r0 = e(r0)
            return r0
    }

    private static boolean d(android.content.Context r3) {
            if (r3 != 0) goto L4
            r3 = 1
            return r3
        L4:
            java.util.Date r3 = new java.util.Date
            r3.<init>()
            java.text.SimpleDateFormat r0 = com.czhj.sdk.common.Constants.sdf
            java.lang.String r3 = r0.format(r3)
            java.lang.String r0 = "BuriedPointConfig"
            android.content.SharedPreferences r0 = com.sigmob.sdk.base.utils.c.a(r0)
            java.lang.String r1 = "last_day"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.getString(r1, r2)
            boolean r3 = r0.equals(r3)
            return r3
    }

    private static java.util.List<android.content.pm.PackageInfo> e(android.content.Context r1) {
            android.content.pm.PackageManager r1 = com.czhj.sdk.common.utils.AppPackageUtil.getPackageManager(r1)     // Catch: java.lang.Throwable -> La
            r0 = 0
            java.util.List r1 = r1.getInstalledPackages(r0)     // Catch: java.lang.Throwable -> La
            return r1
        La:
            r1 = 0
            return r1
    }

    private static void f() {
            android.content.Context r0 = com.sigmob.sdk.b.b()
            boolean r1 = d(r0)
            if (r1 == 0) goto Lb
            return
        Lb:
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r1 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.getInstance()
            com.sigmob.sdk.base.services.b$1 r2 = new com.sigmob.sdk.base.services.b$1
            r2.<init>(r0)
            r1.submit(r2)
            return
    }

    private static void g() {
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> L18
            boolean r0 = r0.i()     // Catch: java.lang.Throwable -> L18
            if (r0 == 0) goto L1e
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L18
            boolean r0 = r0.H()     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L1e
            f()     // Catch: java.lang.Throwable -> L18
            goto L1e
        L18:
            r0 = move-exception
            java.lang.String r1 = "BuriedPointManager getInstance"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L1e:
            return
    }

    public void a(android.content.Context r4) {
            r3 = this;
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "android.intent.action.INSTALL_PACKAGE"
            r0.addAction(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 27
            if (r1 < r2) goto L15
            java.lang.String r1 = "android.intent.action.INSTALL_FAILURE"
            r0.addAction(r1)
        L15:
            java.lang.String r1 = "android.intent.action.PACKAGE_ADDED"
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.PACKAGE_REMOVED"
            r0.addAction(r1)
            java.lang.String r1 = "android.intent.action.PACKAGE_REPLACED"
            r0.addAction(r1)
            java.lang.String r1 = "package"
            r0.addDataScheme(r1)
            android.content.IntentFilter r1 = new android.content.IntentFilter
            java.lang.String r2 = "android.intent.action.DOWNLOAD_COMPLETE"
            r1.<init>(r2)
            com.sigmob.sdk.base.services.a r1 = r3.a
            r4.registerReceiver(r1, r0)
            return
    }

    public void b(android.content.Context r2) {
            r1 = this;
            com.sigmob.sdk.base.services.a r0 = r1.a
            r2.unregisterReceiver(r0)
            return
    }

    @Override
    public boolean b() {
            r2 = this;
            com.sigmob.sdk.base.services.k r0 = r2.b
            com.sigmob.sdk.base.services.k r1 = com.sigmob.sdk.base.services.k.a
            if (r0 == r1) goto L13
            android.content.Context r0 = com.sigmob.sdk.b.b()
            r2.a(r0)
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.a
            r2.b = r0
            r0 = 1
            return r0
        L13:
            r0 = 0
            return r0
    }

    @Override
    public com.sigmob.sdk.base.services.k c() {
            r1 = this;
            com.sigmob.sdk.base.services.k r0 = r1.b
            return r0
    }

    @Override
    public void d() {
            r2 = this;
            com.sigmob.sdk.base.services.k r0 = r2.b
            com.sigmob.sdk.base.services.k r1 = com.sigmob.sdk.base.services.k.a
            if (r0 != r1) goto L11
            android.content.Context r0 = com.sigmob.sdk.b.b()
            r2.b(r0)
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.b
            r2.b = r0
        L11:
            return
    }

    @Override
    public java.lang.Error e() {
            r1 = this;
            r0 = 0
            return r0
    }
}
