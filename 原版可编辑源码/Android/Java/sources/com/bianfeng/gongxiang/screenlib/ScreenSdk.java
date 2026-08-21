package com.bianfeng.gongxiang.screenlib;

import android.app.Activity;

public class ScreenSdk {
    public static String getVersion() {
        return "1.0.1";
    }

    public static void setFullScreen(Activity activity) {
        FullScreenUtils.getInstance().setFullScreen(activity);
    }

    public static void onResume(Activity activity) {
        FullScreenUtils.getInstance().hideBar(activity);
    }

    public static int getHeight() {
        return FullScreenUtils.getInstance().getBarSize();
    }

    public static void showSplashView(Activity activity, String str) {
        SplashViewUtils.getInstance().showSplashView(activity, str);
    }

    public static void hideSplashView(Activity activity) {
        SplashViewUtils.getInstance().removeView(activity);
    }
}
