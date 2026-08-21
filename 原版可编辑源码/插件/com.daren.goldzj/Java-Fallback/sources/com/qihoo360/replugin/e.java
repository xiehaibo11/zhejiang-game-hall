package com.qihoo360.replugin;

import android.util.Log;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.f;
import com.qihoo360.replugin.loader.b.PluginLocalBroadcastManager;
import com.qihoo360.replugin.loader.p.PluginProviderClient;
import com.qihoo360.replugin.loader.s.PluginServiceClient;

public class e {
    public static volatile boolean a;
    private static final byte[] b = null;
    private static volatile boolean c;

    static {
        b = new byte[0];
    }

    public static boolean a() {
        return a;
    }

    static boolean a(ClassLoader r1) {
        byte[] r0 = b;
        monitor-enter(r0);
        boolean r12 = b(r1);     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return r12;
    L7:
        th = move-exception;
        throw th;
    }

    private static boolean b(ClassLoader r2) {
        if (c == true) goto L5;
        c = true;
        f.a.a(r2);     // Catch: Throwable -> L9
        RePlugin.a.a(r2);     // Catch: Throwable -> L9
        PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.initLocked(r2);     // Catch: Throwable -> L9
        PluginProviderClient.ProxyRePluginProviderClientVar.initLocked(r2);     // Catch: Throwable -> L9
        PluginServiceClient.ProxyRePluginServiceClientVar.initLocked(r2);     // Catch: Throwable -> L9
        IPC.a.a(r2);     // Catch: Throwable -> L9
        a = true;     // Catch: Throwable -> L9
    L12:
        return a;
    L9:
        th = move-exception;
        Log.e("RePluginFramework", th.getMessage(), th);
        goto L12
    L5:
        return a;
    }
}
