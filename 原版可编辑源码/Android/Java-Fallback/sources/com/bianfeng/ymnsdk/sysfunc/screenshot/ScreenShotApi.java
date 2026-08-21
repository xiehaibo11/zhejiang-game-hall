package com.bianfeng.ymnsdk.sysfunc.screenshot;

public class ScreenShotApi {
    private static volatile com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi screenShotApi;
    private com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.ScreenShotCallback callback;

    public interface ScreenShotCallback {
        void onShot(java.lang.String r1);

        void onStart();
    }

    public ScreenShotApi() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi getInstance() {
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.screenShotApi
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi> r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi r1 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.screenShotApi     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi r1 = new com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.screenShotApi = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.screenShotApi
            return r0
    }

    public com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.ScreenShotCallback getCallback() {
            r1 = this;
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi$ScreenShotCallback r0 = r1.callback
            return r0
    }

    public void setCallback(com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotApi.ScreenShotCallback r1) {
            r0 = this;
            r0.callback = r1
            return
    }
}
