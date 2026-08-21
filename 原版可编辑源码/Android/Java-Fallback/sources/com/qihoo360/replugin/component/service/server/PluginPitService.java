package com.qihoo360.replugin.component.service.server;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginPitService extends android.app.Service {
    private static java.lang.ref.WeakReference<com.qihoo360.replugin.component.service.server.PluginPitService> sService;

    public PluginPitService() {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r1)
            com.qihoo360.replugin.component.service.server.PluginPitService.sService = r0
            return
    }

    public static com.qihoo360.replugin.component.service.server.PluginPitService get() {
            java.lang.ref.WeakReference<com.qihoo360.replugin.component.service.server.PluginPitService> r0 = com.qihoo360.replugin.component.service.server.PluginPitService.sService
            java.lang.Object r0 = r0.get()
            com.qihoo360.replugin.component.service.server.PluginPitService r0 = (com.qihoo360.replugin.component.service.server.PluginPitService) r0
            return r0
    }

    public static android.content.ComponentName makeComponentName(android.content.Context r2, int r3) {
            java.lang.String r2 = r2.getPackageName()
            java.lang.Class<com.qihoo360.replugin.component.service.server.PluginPitService> r0 = com.qihoo360.replugin.component.service.server.PluginPitService.class
            java.lang.String r0 = r0.getName()
            r1 = -1
            if (r3 != r1) goto L1f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = "UI"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            goto L4a
        L1f:
            r1 = -2
            if (r3 != r1) goto L34
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = "Guard"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            goto L4a
        L34:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "P"
            r1.append(r0)
            int r3 = r3 + 100
            r1.append(r3)
            java.lang.String r3 = r1.toString()
        L4a:
            android.content.ComponentName r0 = new android.content.ComponentName
            r0.<init>(r2, r3)
            return r0
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }
}
