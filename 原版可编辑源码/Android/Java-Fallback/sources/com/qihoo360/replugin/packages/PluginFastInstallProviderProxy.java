package com.qihoo360.replugin.packages;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginFastInstallProviderProxy {
    private static final byte[] LOCK = null;
    private static final java.lang.String TAG = "PluginFastInstallPr";
    private static android.content.ContentProviderClient sProvider;

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.qihoo360.replugin.packages.PluginFastInstallProviderProxy.LOCK = r0
            return
    }

    public PluginFastInstallProviderProxy() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.content.ContentProviderClient getProvider(android.content.Context r3) {
            android.content.ContentProviderClient r0 = com.qihoo360.replugin.packages.PluginFastInstallProviderProxy.sProvider
            if (r0 == 0) goto L5
            return r0
        L5:
            byte[] r0 = com.qihoo360.replugin.packages.PluginFastInstallProviderProxy.LOCK
            monitor-enter(r0)
            android.content.ContentProviderClient r1 = com.qihoo360.replugin.packages.PluginFastInstallProviderProxy.sProvider     // Catch: java.lang.Throwable -> L35
            if (r1 == 0) goto L10
            android.content.ContentProviderClient r3 = com.qihoo360.replugin.packages.PluginFastInstallProviderProxy.sProvider     // Catch: java.lang.Throwable -> L35
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            return r3
        L10:
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L35
            r1 = 0
            if (r3 != 0) goto L20
            java.lang.String r3 = "ws001"
            java.lang.String r2 = "pipp.gp: cr n"
            com.qihoo360.replugin.helper.LogRelease.e(r3, r2)     // Catch: java.lang.Throwable -> L35
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            return r1
        L20:
            android.net.Uri r2 = com.qihoo360.replugin.packages.PluginFastInstallProvider.CONTENT_URI     // Catch: java.lang.Throwable -> L35
            android.content.ContentProviderClient r3 = r3.acquireContentProviderClient(r2)     // Catch: java.lang.Throwable -> L35
            if (r3 != 0) goto L31
            java.lang.String r3 = "ws001"
            java.lang.String r2 = "pipp.gp: cpc n"
            com.qihoo360.replugin.helper.LogRelease.e(r3, r2)     // Catch: java.lang.Throwable -> L35
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            return r1
        L31:
            com.qihoo360.replugin.packages.PluginFastInstallProviderProxy.sProvider = r3     // Catch: java.lang.Throwable -> L35
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            return r3
        L35:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            throw r3
    }

    public static boolean install(android.content.Context r7, com.qihoo360.replugin.model.PluginInfo r8) {
            boolean r0 = r8.isDexExtracted()
            java.lang.String r1 = "PluginFastInstallPr"
            r2 = 1
            if (r0 == 0) goto L22
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L21
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "install: Already loaded, no need to install. pi="
            r7.append(r0)
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.qihoo360.replugin.helper.LogDebug.w(r1, r7)
        L21:
            return r2
        L22:
            android.content.ContentProviderClient r7 = getProvider(r7)
            r0 = 0
            if (r7 != 0) goto L2a
            return r0
        L2a:
            android.net.Uri r3 = com.qihoo360.replugin.packages.PluginFastInstallProvider.CONTENT_URI     // Catch: android.os.RemoteException -> L5c
            android.content.ContentValues r4 = com.qihoo360.replugin.packages.PluginFastInstallProvider.makeInstallValues(r8)     // Catch: android.os.RemoteException -> L5c
            java.lang.String r5 = "inst"
            r6 = 0
            int r7 = r7.update(r3, r4, r5, r6)     // Catch: android.os.RemoteException -> L5c
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: android.os.RemoteException -> L5c
            if (r3 == 0) goto L57
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: android.os.RemoteException -> L5c
            r3.<init>()     // Catch: android.os.RemoteException -> L5c
            java.lang.String r4 = "install: Install. pi="
            r3.append(r4)     // Catch: android.os.RemoteException -> L5c
            r3.append(r8)     // Catch: android.os.RemoteException -> L5c
            java.lang.String r8 = "; result="
            r3.append(r8)     // Catch: android.os.RemoteException -> L5c
            r3.append(r7)     // Catch: android.os.RemoteException -> L5c
            java.lang.String r8 = r3.toString()     // Catch: android.os.RemoteException -> L5c
            com.qihoo360.replugin.helper.LogDebug.i(r1, r8)     // Catch: android.os.RemoteException -> L5c
        L57:
            if (r7 <= 0) goto L5a
            goto L5b
        L5a:
            r2 = r0
        L5b:
            return r2
        L5c:
            r7 = move-exception
            r7.printStackTrace()
            return r0
    }
}
