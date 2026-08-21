package com.bianfeng.gongxiang.screenlib;

import a.a.a.a.b;
import a.a.a.a.f;
import android.app.Activity;

public class ScreenSdk {
    public ScreenSdk() {
    }

    public static int getHeight() {
        return b.b().a();
    }

    public static String getVersion() {
        return "1.0.0";
    }

    public static void hideSplashView(Activity r1) {
        f.a().a(r1);
    }

    public static void onResume(Activity r1) {
        b.b().a(r1);
    }

    public static void setFullScreen(Activity r1) {
        b.b().b(r1);
    }

    public static void showSplashView(Activity r1, String r2) {
        f.a().a(r1, r2);
    }
}
