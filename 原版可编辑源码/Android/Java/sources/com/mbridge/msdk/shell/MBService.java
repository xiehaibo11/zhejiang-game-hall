package com.mbridge.msdk.shell;

import android.content.Intent;
import android.os.IBinder;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbdownload.c;
import com.mbridge.msdk.pluginFramework.PluginService;
import com.mbridge.msdk.pluginFramework.a;

public class MBService extends PluginService {
    @Override
    public void onCreate() {
        super.onCreate();
        this.a.a.a();
    }

    @Override
    public final a a() {
        try {
            return new a(new a.a(new c()));
        } catch (Exception e) {
            z.c("Download", "Find Provider Error", e);
            return null;
        }
    }

    @Override
    public IBinder onBind(Intent intent) {
        return this.a.a.a(intent);
    }

    @Override
    public int onStartCommand(Intent intent, int i, int i2) {
        return this.a.a.a(intent, i, i2);
    }

    @Override
    public void onDestroy() {
        this.a.a.b();
    }
}
