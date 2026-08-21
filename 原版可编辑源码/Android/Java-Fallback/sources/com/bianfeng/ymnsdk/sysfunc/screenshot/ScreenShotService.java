package com.bianfeng.ymnsdk.sysfunc.screenshot;

public class ScreenShotService extends android.app.Service {
    private com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.ScreenShotCallback callback;
    private com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager manager;


    public ScreenShotService() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.ScreenShotCallback access$000(com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService r0) {
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi$ScreenShotCallback r0 = r0.callback
            return r0
    }

    public static void start(android.content.Context r2) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService> r1 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService.class
            r0.<init>(r2, r1)
            r2.startService(r0)
            return
    }

    public static void stop(android.content.Context r2) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService> r1 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService.class
            r0.<init>(r2, r1)
            r2.stopService(r0)
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onCreate() {
            r2 = this;
            super.onCreate()
            java.lang.String r0 = "开启了服务"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.getInstance()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi$ScreenShotCallback r0 = r0.getCallback()
            r2.callback = r0
            if (r0 == 0) goto L2a
            r0.onStart()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.getInstance(r2)
            r2.manager = r0
            r0.startListen()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager r0 = r2.manager
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService$1 r1 = new com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotService$1
            r1.<init>(r2)
            r0.setListener(r1)
        L2a:
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            java.lang.String r0 = "onDestroy: "
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager r0 = r1.manager
            if (r0 == 0) goto Lf
            r0.stopListen()
        Lf:
            return
    }
}
