package com.bianfeng.ymnsdk;

public class YmnApplication extends android.app.Application {
    public YmnApplication() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onCreate() {
            r4 = this;
            super.onCreate()
            net.grandcentrix.tray.AppPreferences r0 = new net.grandcentrix.tray.AppPreferences
            r0.<init>(r4)
            java.lang.String r1 = "false"
            java.lang.String r2 = "ymnInit"
            java.lang.String r3 = r0.getString(r2, r1)
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L25
            java.lang.String r1 = "YmnApplication"
            java.lang.String r3 = "onCreate"
            android.util.Log.e(r1, r3)
            com.bianfeng.ymnsdk.YmnSdkWrapper.innerInit(r4)
            java.lang.String r1 = "true"
            r0.put(r2, r1)
        L25:
            return
    }
}
