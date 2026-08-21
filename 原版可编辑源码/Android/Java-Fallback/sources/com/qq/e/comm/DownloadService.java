package com.qq.e.comm;

public class DownloadService extends android.app.Service {
    private com.qq.e.comm.pi.SVSD a;

    public DownloadService() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean a() {
            r2 = this;
            com.qq.e.comm.pi.SVSD r0 = r2.a
            if (r0 != 0) goto L2a
            com.qq.e.comm.managers.b r0 = com.qq.e.comm.managers.b.b()     // Catch: java.lang.Throwable -> L24
            boolean r0 = r0.d()     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L2a
            com.qq.e.comm.managers.b r0 = com.qq.e.comm.managers.b.b()     // Catch: java.lang.Throwable -> L24
            com.qq.e.comm.managers.plugin.PM r0 = r0.c()     // Catch: java.lang.Throwable -> L24
            com.qq.e.comm.pi.POFactory r0 = r0.getPOFactory()     // Catch: java.lang.Throwable -> L24
            com.qq.e.comm.pi.SVSD r0 = r0.getAPKDownloadServiceDelegate(r2)     // Catch: java.lang.Throwable -> L24
            r2.a = r0     // Catch: java.lang.Throwable -> L24
            r0.onCreate()     // Catch: java.lang.Throwable -> L24
            goto L2a
        L24:
            r0 = move-exception
            java.lang.String r1 = "初始化Service发生异常"
            com.qq.e.comm.util.GDTLogger.e(r1, r0)
        L2a:
            com.qq.e.comm.pi.SVSD r0 = r2.a
            if (r0 == 0) goto L30
            r0 = 1
            goto L31
        L30:
            r0 = 0
        L31:
            return r0
    }

    public static void enterAPPDownloadListPage(android.content.Context r3) {
            if (r3 != 0) goto L8
            java.lang.String r3 = "enterAPPDownloadListPage 调用异常，context为空"
            com.qq.e.comm.util.GDTLogger.e(r3)
            return
        L8:
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.qq.e.comm.DownloadService> r1 = com.qq.e.comm.DownloadService.class
            r0.<init>(r3, r1)
            com.qq.e.comm.managers.b r1 = com.qq.e.comm.managers.b.b()
            java.lang.String r1 = r1.a()
            java.lang.String r2 = "GDT_APPID"
            r0.putExtra(r2, r1)
            java.lang.String r1 = "com.qq.e.comm.ACTION_DOWNLOAD_LIST"
            r0.setAction(r1)
            r3.startService(r0)
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r4) {
            r3 = this;
            java.lang.String r0 = "DownloadService.onBind"
            com.qq.e.comm.util.GDTLogger.d(r0)
            com.qq.e.comm.pi.SVSD r0 = r3.a
            if (r0 == 0) goto Le
            android.os.IBinder r4 = r0.onBind(r4)
            return r4
        Le:
            java.lang.String r0 = "GDT_APPID"
            java.lang.String r0 = r4.getStringExtra(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "DownloadService.onBind,appID="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.qq.e.comm.util.GDTLogger.d(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3b
            boolean r0 = r3.a()
            if (r0 == 0) goto L3b
            com.qq.e.comm.pi.SVSD r0 = r3.a
            android.os.IBinder r4 = r0.onBind(r4)
            return r4
        L3b:
            r4 = 0
            return r4
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            com.qq.e.comm.pi.SVSD r0 = r1.a
            if (r0 == 0) goto L7
            r0.onConfigurationChanged(r2)
        L7:
            return
    }

    @Override
    public void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            com.qq.e.comm.pi.SVSD r0 = r1.a
            if (r0 == 0) goto L7
            r0.onDestroy()
        L7:
            return
    }

    @Override
    public void onLowMemory() {
            r1 = this;
            com.qq.e.comm.pi.SVSD r0 = r1.a
            if (r0 == 0) goto L7
            r0.onLowMemory()
        L7:
            return
    }

    @Override
    public void onRebind(android.content.Intent r2) {
            r1 = this;
            com.qq.e.comm.pi.SVSD r0 = r1.a
            if (r0 == 0) goto L7
            r0.onRebind(r2)
        L7:
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r3, int r4, int r5) {
            r2 = this;
            r0 = 2
            if (r3 != 0) goto L7
            r2.stopSelf(r5)
            return r0
        L7:
            java.lang.String r1 = "GDT_APPID"
            java.lang.String r1 = r3.getStringExtra(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L20
            boolean r1 = r2.a()
            if (r1 == 0) goto L20
            com.qq.e.comm.pi.SVSD r0 = r2.a
            int r3 = r0.onStartCommand(r3, r4, r5)
            return r3
        L20:
            java.lang.String r3 = "Service onStartCommand 出现异常"
            com.qq.e.comm.util.GDTLogger.w(r3)
            return r0
    }

    @Override
    public void onTaskRemoved(android.content.Intent r2) {
            r1 = this;
            com.qq.e.comm.pi.SVSD r0 = r1.a
            if (r0 == 0) goto L7
            r0.onTaskRemoved(r2)
        L7:
            return
    }

    @Override
    public void onTrimMemory(int r2) {
            r1 = this;
            com.qq.e.comm.pi.SVSD r0 = r1.a
            if (r0 == 0) goto L7
            r0.onTrimMemory(r2)
        L7:
            return
    }

    @Override
    public boolean onUnbind(android.content.Intent r2) {
            r1 = this;
            com.qq.e.comm.pi.SVSD r0 = r1.a
            if (r0 == 0) goto L9
            boolean r2 = r0.onUnbind(r2)
            return r2
        L9:
            boolean r2 = super.onUnbind(r2)
            return r2
    }
}
