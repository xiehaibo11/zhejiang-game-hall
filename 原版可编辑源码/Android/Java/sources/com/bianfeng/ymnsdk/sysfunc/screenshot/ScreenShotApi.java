package com.bianfeng.ymnsdk.sysfunc.screenshot;

public class ScreenShotApi {
    private static volatile ScreenShotApi screenShotApi;
    private ScreenShotCallback callback;

    public interface ScreenShotCallback {
        void onShot(String str);

        void onStart();
    }

    public static ScreenShotApi getInstance() {
        if (screenShotApi == null) {
            synchronized (ScreenShotApi.class) {
                if (screenShotApi == null) {
                    screenShotApi = new ScreenShotApi();
                }
            }
        }
        return screenShotApi;
    }

    public void setCallback(ScreenShotCallback screenShotCallback) {
        this.callback = screenShotCallback;
    }

    public ScreenShotCallback getCallback() {
        return this.callback;
    }
}
