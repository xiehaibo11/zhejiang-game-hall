package com.mbridge.msdk.pluginFramework;

import android.app.Service;
import android.content.res.AssetManager;
import android.content.res.Resources;
import com.mbridge.msdk.foundation.tools.z;

public abstract class PluginService extends Service {
    protected a a = null;

    public abstract a a();

    @Override
    public ClassLoader getClassLoader() {
        return null;
    }

    @Override
    public void onCreate() {
        try {
            a aVarA = a();
            this.a = aVarA;
            try {
                aVarA.a.a.a(this);
            } catch (Exception e) {
                z.c("PluginServiceContext", "invoke onDestroy error", e);
            }
            super.onCreate();
        } catch (Exception e2) {
            z.c("Download", "", e2);
        }
    }

    @Override
    public AssetManager getAssets() {
        if (this.a != null) {
            return null;
        }
        return super.getAssets();
    }

    @Override
    public Resources getResources() {
        if (this.a != null) {
            try {
                return super.getResources();
            } catch (Exception unused) {
                return super.getResources();
            }
        }
        return super.getResources();
    }

    @Override
    public Resources.Theme getTheme() {
        return super.getTheme();
    }
}
