package com.qihoo360.replugin;

public class e {
    public static volatile boolean a;
    private static final byte[] b = null;
    private static volatile boolean c;

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.qihoo360.replugin.e.b = r0
            return
    }

    public static boolean a() {
            boolean r0 = com.qihoo360.replugin.e.a
            return r0
    }

    static boolean a(java.lang.ClassLoader r1) {
            byte[] r0 = com.qihoo360.replugin.e.b
            monitor-enter(r0)
            boolean r1 = b(r1)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            return r1
        L9:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            throw r1
    }

    private static boolean b(java.lang.ClassLoader r2) {
            boolean r0 = com.qihoo360.replugin.e.c
            if (r0 == 0) goto L7
            boolean r2 = com.qihoo360.replugin.e.a
            return r2
        L7:
            r0 = 1
            com.qihoo360.replugin.e.c = r0
            com.qihoo360.replugin.f.a.a(r2)     // Catch: java.lang.Throwable -> L1f
            com.qihoo360.replugin.RePlugin.a.a(r2)     // Catch: java.lang.Throwable -> L1f
            com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.initLocked(r2)     // Catch: java.lang.Throwable -> L1f
            com.qihoo360.replugin.loader.p.PluginProviderClient.ProxyRePluginProviderClientVar.initLocked(r2)     // Catch: java.lang.Throwable -> L1f
            com.qihoo360.replugin.loader.s.PluginServiceClient.ProxyRePluginServiceClientVar.initLocked(r2)     // Catch: java.lang.Throwable -> L1f
            com.qihoo360.replugin.base.IPC.a.a(r2)     // Catch: java.lang.Throwable -> L1f
            com.qihoo360.replugin.e.a = r0     // Catch: java.lang.Throwable -> L1f
            goto L29
        L1f:
            r2 = move-exception
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "RePluginFramework"
            android.util.Log.e(r1, r0, r2)
        L29:
            boolean r2 = com.qihoo360.replugin.e.a
            return r2
    }
}
