package com.bykv.vk.openvk.stub.server;

import android.app.Application;
import android.content.Context;
import com.bykv.vk.openvk.TTAppContextHolder;
import com.bykv.vk.openvk.api.plugin.c;
import com.bykv.vk.openvk.rg.df;
import com.bytedance.pangle.servermanager.AbsServerManager;

public class MainServerManager extends AbsServerManager {
    @Override
    public boolean onCreate() {
        Context applicationContext = getContext().getApplicationContext();
        TTAppContextHolder.setContext(applicationContext);
        c.rg(applicationContext);
        if (applicationContext instanceof Application) {
            ((Application) applicationContext).registerActivityLifecycleCallbacks(df.rg().df());
        }
        return super.onCreate();
    }
}
