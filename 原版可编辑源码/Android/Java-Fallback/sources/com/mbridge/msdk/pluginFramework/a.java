package com.mbridge.msdk.pluginFramework;

public final class a {
    public com.mbridge.msdk.pluginFramework.a.a a;

    public static class a {
        com.mbridge.msdk.mbdownload.c a;

        public a(com.mbridge.msdk.mbdownload.c r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public final int a(android.content.Intent r2, int r3, int r4) {
                r1 = this;
                com.mbridge.msdk.mbdownload.c r0 = r1.a     // Catch: java.lang.Exception -> L7
                int r2 = r0.a(r2, r3, r4)     // Catch: java.lang.Exception -> L7
                return r2
            L7:
                r2 = move-exception
                java.lang.String r3 = "PluginServiceContext"
                java.lang.String r4 = "invoke onStartCommand error"
                com.mbridge.msdk.foundation.tools.z.c(r3, r4, r2)
                r2 = 0
                return r2
        }

        public final android.os.IBinder a(android.content.Intent r3) {
                r2 = this;
                com.mbridge.msdk.mbdownload.c r0 = r2.a     // Catch: java.lang.Exception -> L7
                android.os.IBinder r3 = r0.a(r3)     // Catch: java.lang.Exception -> L7
                return r3
            L7:
                r3 = move-exception
                java.lang.String r0 = "PluginServiceContext"
                java.lang.String r1 = "invoke onBind error"
                com.mbridge.msdk.foundation.tools.z.c(r0, r1, r3)
                r3 = 0
                return r3
        }

        public final void a() {
                r3 = this;
                com.mbridge.msdk.mbdownload.c r0 = r3.a     // Catch: java.lang.Exception -> L6
                r0.a()     // Catch: java.lang.Exception -> L6
                goto Le
            L6:
                r0 = move-exception
                java.lang.String r1 = "PluginServiceContext"
                java.lang.String r2 = "invoke onCreate error"
                com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
            Le:
                return
        }

        public final void b() {
                r3 = this;
                com.mbridge.msdk.mbdownload.c r0 = r3.a     // Catch: java.lang.Exception -> L6
                r0.b()     // Catch: java.lang.Exception -> L6
                goto Le
            L6:
                r0 = move-exception
                java.lang.String r1 = "PluginServiceContext"
                java.lang.String r2 = "invoke onDestroy error"
                com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
            Le:
                return
        }
    }

    public a(com.mbridge.msdk.pluginFramework.a.a r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }
}
