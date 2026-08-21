package com.bykv.vk.openvk.stub.server;

public class MainServerManager extends com.bytedance.pangle.servermanager.AbsServerManager {
    public MainServerManager() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean onCreate() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            android.content.Context r0 = r0.getApplicationContext()
            com.bykv.vk.openvk.TTAppContextHolder.setContext(r0)
            com.bykv.vk.openvk.api.plugin.c.rg(r0)
            boolean r1 = r0 instanceof android.app.Application
            if (r1 == 0) goto L1f
            android.app.Application r0 = (android.app.Application) r0
            com.bykv.vk.openvk.rg.df r1 = com.bykv.vk.openvk.rg.df.rg()
            android.app.Application$ActivityLifecycleCallbacks r1 = r1.df()
            r0.registerActivityLifecycleCallbacks(r1)
        L1f:
            boolean r0 = super.onCreate()
            return r0
    }
}
