package com.mbridge.msdk.pluginFramework;

public abstract class PluginService extends android.app.Service {
    protected com.mbridge.msdk.pluginFramework.a a;

    public PluginService() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    public abstract com.mbridge.msdk.pluginFramework.a a();

    @Override
    public android.content.res.AssetManager getAssets() {
            r1 = this;
            com.mbridge.msdk.pluginFramework.a r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 0
            return r0
        L6:
            android.content.res.AssetManager r0 = super.getAssets()
            return r0
    }

    @Override
    public java.lang.ClassLoader getClassLoader() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.content.res.Resources getResources() {
            r1 = this;
            com.mbridge.msdk.pluginFramework.a r0 = r1.a
            if (r0 == 0) goto Le
            android.content.res.Resources r0 = super.getResources()     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            android.content.res.Resources r0 = super.getResources()
            return r0
        Le:
            android.content.res.Resources r0 = super.getResources()
            return r0
    }

    @Override
    public android.content.res.Resources.Theme getTheme() {
            r1 = this;
            android.content.res.Resources$Theme r0 = super.getTheme()
            return r0
    }

    @Override
    public void onCreate() {
            r3 = this;
            com.mbridge.msdk.pluginFramework.a r0 = r3.a()     // Catch: java.lang.Exception -> L1a
            r3.a = r0     // Catch: java.lang.Exception -> L1a
            com.mbridge.msdk.pluginFramework.a$a r0 = r0.a     // Catch: java.lang.Exception -> L1a
            com.mbridge.msdk.mbdownload.c r0 = r0.a     // Catch: java.lang.Exception -> Le
            r0.a(r3)     // Catch: java.lang.Exception -> Le
            goto L16
        Le:
            r0 = move-exception
            java.lang.String r1 = "PluginServiceContext"
            java.lang.String r2 = "invoke onDestroy error"
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)     // Catch: java.lang.Exception -> L1a
        L16:
            super.onCreate()     // Catch: java.lang.Exception -> L1a
            goto L22
        L1a:
            r0 = move-exception
            java.lang.String r1 = "Download"
            java.lang.String r2 = ""
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L22:
            return
    }
}
