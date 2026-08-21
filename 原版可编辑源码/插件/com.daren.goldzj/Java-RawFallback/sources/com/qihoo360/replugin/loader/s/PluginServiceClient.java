package com.qihoo360.replugin.loader.s;

public class PluginServiceClient {

    public static class ProxyRePluginServiceClientVar {
        private static com.qihoo360.replugin.b a;

        public ProxyRePluginServiceClientVar() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.qihoo360.replugin.b a() {
                com.qihoo360.replugin.b r0 = com.qihoo360.replugin.loader.s.PluginServiceClient.ProxyRePluginServiceClientVar.a
                return r0
        }

        public static void initLocked(java.lang.ClassLoader r4) {
                com.qihoo360.replugin.b r0 = new com.qihoo360.replugin.b
                r1 = 1
                java.lang.Class[] r1 = new java.lang.Class[r1]
                java.lang.Class<android.app.Service> r2 = android.app.Service.class
                r3 = 0
                r1[r3] = r2
                java.lang.String r2 = "com.qihoo360.loader2.mgr.PluginServiceClient"
                java.lang.String r3 = "stopSelf"
                r0.<init>(r4, r2, r3, r1)
                com.qihoo360.replugin.loader.s.PluginServiceClient.ProxyRePluginServiceClientVar.a = r0
                return
        }
    }

    public PluginServiceClient() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void stopSelf(android.app.Service r4) {
            boolean r0 = com.qihoo360.replugin.e.a
            if (r0 != 0) goto L8
            r4.stopSelf()
            return
        L8:
            com.qihoo360.replugin.b r0 = com.qihoo360.replugin.loader.s.PluginServiceClient.ProxyRePluginServiceClientVar.a()     // Catch: java.lang.Exception -> L16
            r1 = 0
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L16
            r3 = 0
            r2[r3] = r4     // Catch: java.lang.Exception -> L16
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L16
        L16:
            return
    }
}
