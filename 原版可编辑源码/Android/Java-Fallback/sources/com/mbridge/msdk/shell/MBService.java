package com.mbridge.msdk.shell;

public class MBService extends com.mbridge.msdk.pluginFramework.PluginService {
    public MBService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final com.mbridge.msdk.pluginFramework.a a() {
            r3 = this;
            com.mbridge.msdk.mbdownload.c r0 = new com.mbridge.msdk.mbdownload.c     // Catch: java.lang.Exception -> L10
            r0.<init>()     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.pluginFramework.a r1 = new com.mbridge.msdk.pluginFramework.a     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.pluginFramework.a$a r2 = new com.mbridge.msdk.pluginFramework.a$a     // Catch: java.lang.Exception -> L10
            r2.<init>(r0)     // Catch: java.lang.Exception -> L10
            r1.<init>(r2)     // Catch: java.lang.Exception -> L10
            return r1
        L10:
            r0 = move-exception
            java.lang.String r1 = "Download"
            java.lang.String r2 = "Find Provider Error"
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
            r0 = 0
            return r0
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r2) {
            r1 = this;
            com.mbridge.msdk.pluginFramework.a r0 = r1.a
            com.mbridge.msdk.pluginFramework.a$a r0 = r0.a
            android.os.IBinder r2 = r0.a(r2)
            return r2
    }

    @Override
    public void onCreate() {
            r1 = this;
            super.onCreate()
            com.mbridge.msdk.pluginFramework.a r0 = r1.a
            com.mbridge.msdk.pluginFramework.a$a r0 = r0.a
            r0.a()
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            com.mbridge.msdk.pluginFramework.a r0 = r1.a
            com.mbridge.msdk.pluginFramework.a$a r0 = r0.a
            r0.b()
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r2, int r3, int r4) {
            r1 = this;
            com.mbridge.msdk.pluginFramework.a r0 = r1.a
            com.mbridge.msdk.pluginFramework.a$a r0 = r0.a
            int r2 = r0.a(r2, r3, r4)
            return r2
    }
}
