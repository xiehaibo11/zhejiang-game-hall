package com.bianfeng.gongxiang.screenlib;

public class ScreenSdk {
    public ScreenSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getHeight() {
            com.bianfeng.gongxiang.screenlib.FullScreenUtils r0 = com.bianfeng.gongxiang.screenlib.FullScreenUtils.getInstance()
            int r0 = r0.getBarSize()
            return r0
    }

    public static java.lang.String getVersion() {
            java.lang.String r0 = "1.0.1"
            return r0
    }

    public static void hideSplashView(android.app.Activity r1) {
            com.bianfeng.gongxiang.screenlib.SplashViewUtils r0 = com.bianfeng.gongxiang.screenlib.SplashViewUtils.getInstance()
            r0.removeView(r1)
            return
    }

    public static void onResume(android.app.Activity r1) {
            com.bianfeng.gongxiang.screenlib.FullScreenUtils r0 = com.bianfeng.gongxiang.screenlib.FullScreenUtils.getInstance()
            r0.hideBar(r1)
            return
    }

    public static void setFullScreen(android.app.Activity r1) {
            com.bianfeng.gongxiang.screenlib.FullScreenUtils r0 = com.bianfeng.gongxiang.screenlib.FullScreenUtils.getInstance()
            r0.setFullScreen(r1)
            return
    }

    public static void showSplashView(android.app.Activity r1, java.lang.String r2) {
            com.bianfeng.gongxiang.screenlib.SplashViewUtils r0 = com.bianfeng.gongxiang.screenlib.SplashViewUtils.getInstance()
            r0.showSplashView(r1, r2)
            return
    }
}
