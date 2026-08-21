package com.bianfeng.ymnsdk.sysfunc.screenshot;

public class ScreenShotActivity extends android.app.Activity {
    public ScreenShotActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void start(android.content.Context r2) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotActivity> r1 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotActivity.class
            r0.<init>(r2, r1)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            r2.startActivity(r0)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            r0.finish()
            return
    }
}
