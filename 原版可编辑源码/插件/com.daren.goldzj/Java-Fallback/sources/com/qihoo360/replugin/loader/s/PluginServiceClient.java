package com.qihoo360.replugin.loader.s;

import android.app.Service;
import com.qihoo360.replugin.b;
import com.qihoo360.replugin.e;

public class PluginServiceClient {

    public static class ProxyRePluginServiceClientVar {
        private static b a;

        public ProxyRePluginServiceClientVar() {
        }

        static b a() {
            return a;
        }

        public static void initLocked(ClassLoader r4) {
            a = new b(r4, "com.qihoo360.loader2.mgr.PluginServiceClient", "stopSelf", new Class[]{Service.class});
        }
    }

    public PluginServiceClient() {
    }

    public static void stopSelf(Service r4) {
        if (e.a == true) goto L9;
        r4.stopSelf();
        return;
    L9:
        ProxyRePluginServiceClientVar.a().a(null, new Object[]{r4});     // Catch: Exception -> L8
        return;
    }
}
