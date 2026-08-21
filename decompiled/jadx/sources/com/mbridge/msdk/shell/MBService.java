package com.mbridge.msdk.shell;

import android.content.Intent;
import android.os.IBinder;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbdownload.c;
import com.mbridge.msdk.pluginFramework.PluginService;
import com.mbridge.msdk.pluginFramework.a;

/* JADX INFO: loaded from: classes2.dex */
public class MBService extends PluginService {
    @Override // com.mbridge.msdk.pluginFramework.PluginService, android.app.Service
    public void onCreate() {
        super.onCreate();
        this.f3878a.f3879a.a();
    }

    @Override // com.mbridge.msdk.pluginFramework.PluginService
    public final a a() {
        try {
            return new a(new a.C0286a(new c()));
        } catch (Exception e) {
            z.c("Download", "Find Provider Error", e);
            return null;
        }
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return this.f3878a.f3879a.a(intent);
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        return this.f3878a.f3879a.a(intent, i, i2);
    }

    @Override // android.app.Service
    public void onDestroy() {
        this.f3878a.f3879a.b();
    }
}
