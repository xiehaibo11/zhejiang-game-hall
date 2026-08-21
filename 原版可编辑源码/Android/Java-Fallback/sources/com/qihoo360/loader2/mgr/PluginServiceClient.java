package com.qihoo360.loader2.mgr;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginServiceClient {
    public PluginServiceClient() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean bindService(android.content.Context r0, android.content.Intent r1, android.content.ServiceConnection r2, int r3) {
            boolean r0 = com.qihoo360.replugin.component.service.PluginServiceClient.bindService(r0, r1, r2, r3)
            return r0
    }

    public static android.content.ComponentName startService(android.content.Context r0, android.content.Intent r1) {
            android.content.ComponentName r0 = com.qihoo360.replugin.component.service.PluginServiceClient.startService(r0, r1)
            return r0
    }

    public static void stopSelf(android.app.Service r0) {
            com.qihoo360.replugin.component.service.PluginServiceClient.stopSelf(r0)
            return
    }

    public static boolean stopService(android.content.Context r0, android.content.Intent r1) {
            boolean r0 = com.qihoo360.replugin.component.service.PluginServiceClient.stopService(r0, r1)
            return r0
    }

    public static boolean unbindService(android.content.Context r0, android.content.ServiceConnection r1) {
            boolean r0 = com.qihoo360.replugin.component.service.PluginServiceClient.unbindService(r0, r1)
            return r0
    }
}
