package com.mbridge.msdk.pluginFramework;

import android.content.Intent;
import android.os.IBinder;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbdownload.c;

public final class a {
    public a a;

    public a(a aVar) {
        this.a = aVar;
    }

    public static class a {
        c a;

        public a(c cVar) {
            this.a = cVar;
        }

        public final IBinder a(Intent intent) {
            try {
                return this.a.a(intent);
            } catch (Exception e) {
                z.c("PluginServiceContext", "invoke onBind error", e);
                return null;
            }
        }

        public final int a(Intent intent, int i, int i2) {
            try {
                return this.a.a(intent, i, i2);
            } catch (Exception e) {
                z.c("PluginServiceContext", "invoke onStartCommand error", e);
                return 0;
            }
        }

        public final void a() {
            try {
                this.a.a();
            } catch (Exception e) {
                z.c("PluginServiceContext", "invoke onCreate error", e);
            }
        }

        public final void b() {
            try {
                this.a.b();
            } catch (Exception e) {
                z.c("PluginServiceContext", "invoke onDestroy error", e);
            }
        }
    }
}
