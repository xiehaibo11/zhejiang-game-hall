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
    private static final byte[] b = new byte[0];
    private static volatile boolean c;

    public static boolean a() {
        return a;
    }

    static boolean a(ClassLoader classLoader) {
        boolean zB;
        synchronized (b) {
            zB = b(classLoader);
        }
        return zB;
    }

    private static boolean b(ClassLoader classLoader) {
        if (c) {
            return a;
        }
        c = true;
        try {
            f.a.a(classLoader);
            RePlugin.a.a(classLoader);
            PluginLocalBroadcastManager.ProxyLocalBroadcastManagerVar.initLocked(classLoader);
            PluginProviderClient.ProxyRePluginProviderClientVar.initLocked(classLoader);
            PluginServiceClient.ProxyRePluginServiceClientVar.initLocked(classLoader);
            IPC.a.a(classLoader);
            a = true;
        } catch (Throwable th) {
            Log.e("RePluginFramework", th.getMessage(), th);
        }
        return a;
    }
}
