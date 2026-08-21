package com.bianfeng.gongxiang.screenlib;

import a.a.a.a.b;
import a.a.a.a.f;
import android.app.Activity;

public class ScreenSdk {
    public static int getHeight() {
        return b.b().a();
    }

    public static String getVersion() {
        return "1.0.0";
    }

    public static void hideSplashView(Activity activity) {
        f.a().a(activity);
    }

    public static void onResume(Activity activity) {
        b.b().a(activity);
    }

    public static void setFullScreen(Activity activity) {
        b.b().b(activity);
    }

    public static void showSplashView(Activity activity, String str) {
        f.a().a(activity, str);
    }
}
