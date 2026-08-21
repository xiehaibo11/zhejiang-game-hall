package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePluginApplication extends com.bianfeng.ymnsdk.YmnApplication {
    private static final java.lang.String TAG = "RePluginApplication: ";

    public RePluginApplication() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void attachBaseContext(android.content.Context r3) {
            r2 = this;
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            java.io.File r1 = r3.getFilesDir()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.setWriteablePath(r1)
            super.attachBaseContext(r3)
            java.lang.String r3 = "RePluginApplication: "
            java.lang.String r0 = "invoke createConfig"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r0)
            com.qihoo360.replugin.RePluginConfig r3 = r2.createConfig()
            if (r3 != 0) goto L24
            com.qihoo360.replugin.RePluginConfig r3 = new com.qihoo360.replugin.RePluginConfig
            r3.<init>()
        L24:
            com.qihoo360.replugin.RePluginCallbacks r0 = r2.createCallbacks()
            if (r0 == 0) goto L2d
            r3.setCallbacks(r0)
        L2d:
            com.qihoo360.replugin.RePlugin.App.attachBaseContext(r2, r3)
            return
    }

    protected com.qihoo360.replugin.RePluginCallbacks createCallbacks() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected com.qihoo360.replugin.RePluginConfig createConfig() {
            r1 = this;
            com.qihoo360.replugin.RePluginConfig r0 = new com.qihoo360.replugin.RePluginConfig
            r0.<init>()
            return r0
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            com.qihoo360.replugin.RePlugin.App.onConfigurationChanged(r1)
            return
    }

    @Override
    public void onCreate() {
            r0 = this;
            super.onCreate()
            com.qihoo360.replugin.RePlugin.App.onCreate()
            return
    }

    @Override
    public void onLowMemory() {
            r0 = this;
            super.onLowMemory()
            com.qihoo360.replugin.RePlugin.App.onLowMemory()
            return
    }

    @Override
    public void onTrimMemory(int r1) {
            r0 = this;
            super.onTrimMemory(r1)
            com.qihoo360.replugin.RePlugin.App.onTrimMemory(r1)
            return
    }
}
