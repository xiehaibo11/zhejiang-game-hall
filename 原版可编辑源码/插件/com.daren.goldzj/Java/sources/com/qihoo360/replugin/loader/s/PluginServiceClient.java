package com.qihoo360.replugin.loader.s;

import android.app.Service;
import com.qihoo360.replugin.b;
import com.qihoo360.replugin.e;

public class PluginServiceClient {

    public static class ProxyRePluginServiceClientVar {
        private static b a;

        public static void initLocked(ClassLoader classLoader) {
            a = new b(classLoader, "com.qihoo360.loader2.mgr.PluginServiceClient", "stopSelf", new Class[]{Service.class});
        }
    }

    public static void stopSelf(Service service) {
        if (!e.a) {
            service.stopSelf();
        } else {
            try {
                ProxyRePluginServiceClientVar.a.a(null, service);
            } catch (Exception unused) {
            }
        }
    }
}
