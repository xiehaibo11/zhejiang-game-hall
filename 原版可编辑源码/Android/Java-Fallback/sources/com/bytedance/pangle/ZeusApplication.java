package com.bytedance.pangle;

public class ZeusApplication extends com.bytedance.pangle.PluginContext {
    android.app.Application mHostApplication;

    public ZeusApplication() {
            r0 = this;
            r0.<init>()
            return
    }

    public void attach(com.bytedance.pangle.plugin.Plugin r1, android.app.Application r2) {
            r0 = this;
            r0.mPlugin = r1
            r0.mHostApplication = r2
            r0.attachBaseContext(r2)
            r0.onCreate()
            return
    }

    @Override
    public void attachBaseContext(android.content.Context r1) {
            r0 = this;
            super.attachBaseContext(r1)
            return
    }

    public void onCreate() {
            r0 = this;
            return
    }
}
