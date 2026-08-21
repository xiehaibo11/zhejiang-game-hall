package com.qihoo360.replugin;

import android.content.Context;
import android.content.res.Configuration;
import com.bianfeng.ymnsdk.YmnApplication;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.utils.RepluginLogUtils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class RePluginApplication extends YmnApplication {
    private static final String TAG = "RePluginApplication: ";

    protected RePluginCallbacks createCallbacks() {
        return null;
    }

    protected RePluginConfig createConfig() {
        return new RePluginConfig();
    }

    @Override // com.bianfeng.ymnsdk.YmnApplication, android.content.ContextWrapper
    protected void attachBaseContext(Context context) {
        RepluginLogUtils.getInstance().setWriteablePath(context.getFilesDir().getAbsolutePath());
        super.attachBaseContext(context);
        LogDebug.d(TAG, "invoke createConfig");
        RePluginConfig rePluginConfigCreateConfig = createConfig();
        if (rePluginConfigCreateConfig == null) {
            rePluginConfigCreateConfig = new RePluginConfig();
        }
        RePluginCallbacks rePluginCallbacksCreateCallbacks = createCallbacks();
        if (rePluginCallbacksCreateCallbacks != null) {
            rePluginConfigCreateConfig.setCallbacks(rePluginCallbacksCreateCallbacks);
        }
        RePlugin.App.attachBaseContext(this, rePluginConfigCreateConfig);
    }

    @Override // com.bianfeng.ymnsdk.YmnApplication, android.app.Application
    public void onCreate() {
        super.onCreate();
        RePlugin.App.onCreate();
    }

    @Override // android.app.Application, android.content.ComponentCallbacks
    public void onLowMemory() {
        super.onLowMemory();
        RePlugin.App.onLowMemory();
    }

    @Override // android.app.Application, android.content.ComponentCallbacks2
    public void onTrimMemory(int i) {
        super.onTrimMemory(i);
        RePlugin.App.onTrimMemory(i);
    }

    @Override // android.app.Application, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        RePlugin.App.onConfigurationChanged(configuration);
    }
}
