package com.mbridge.msdk.pluginFramework;

import android.app.Service;
import android.content.res.AssetManager;
import android.content.res.Resources;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: loaded from: classes2.dex */
public abstract class PluginService extends Service {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected a f3878a = null;

    public abstract a a();

    @Override // android.content.ContextWrapper, android.content.Context
    public ClassLoader getClassLoader() {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        try {
            a aVarA = a();
            this.f3878a = aVarA;
            try {
                aVarA.f3879a.f3880a.a(this);
            } catch (Exception e) {
                z.c("PluginServiceContext", "invoke onDestroy error", e);
            }
            super.onCreate();
        } catch (Exception e2) {
            z.c("Download", "", e2);
        }
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public AssetManager getAssets() {
        if (this.f3878a != null) {
            return null;
        }
        return super.getAssets();
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public Resources getResources() {
        if (this.f3878a != null) {
            try {
                return super.getResources();
            } catch (Exception unused) {
                return super.getResources();
            }
        }
        return super.getResources();
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public Resources.Theme getTheme() {
        return super.getTheme();
    }
}
