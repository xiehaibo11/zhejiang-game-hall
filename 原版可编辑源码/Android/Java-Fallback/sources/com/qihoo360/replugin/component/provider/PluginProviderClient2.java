package com.qihoo360.replugin.component.provider;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProviderClient2 {
    private static final java.lang.String TAG = "PluginProviderClient2";

    public PluginProviderClient2() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.database.Cursor query(android.content.Context r7, android.net.Uri r8, java.lang.String[] r9, java.lang.String r10, java.lang.String[] r11, java.lang.String r12) {
            java.lang.String r0 = ""
            android.content.ContentProviderClient r1 = com.qihoo360.replugin.component.provider.PluginProviderClient.acquireContentProviderClient(r7, r0)
            java.lang.String r0 = "PluginProviderClient2"
            if (r1 == 0) goto L23
            android.net.Uri r2 = com.qihoo360.replugin.component.provider.PluginProviderClient.toCalledUri(r7, r8)     // Catch: android.os.RemoteException -> L17
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            android.database.Cursor r7 = r1.query(r2, r3, r4, r5, r6)     // Catch: android.os.RemoteException -> L17
            return r7
        L17:
            r7 = move-exception
            boolean r9 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r9 == 0) goto L23
            java.lang.String r7 = r7.toString()
            android.util.Log.d(r0, r7)
        L23:
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L3a
            r7 = 1
            java.lang.Object[] r7 = new java.lang.Object[r7]
            r9 = 0
            java.lang.String r8 = r8.toString()
            r7[r9] = r8
            java.lang.String r8 = "call query1 %s fail"
            java.lang.String r7 = java.lang.String.format(r8, r7)
            android.util.Log.d(r0, r7)
        L3a:
            r7 = 0
            return r7
    }

    public static android.database.Cursor query(android.content.Context r8, android.net.Uri r9, java.lang.String[] r10, java.lang.String r11, java.lang.String[] r12, java.lang.String r13, android.os.CancellationSignal r14) {
            java.lang.String r0 = ""
            android.content.ContentProviderClient r1 = com.qihoo360.replugin.component.provider.PluginProviderClient.acquireContentProviderClient(r8, r0)
            java.lang.String r0 = "PluginProviderClient2"
            if (r1 == 0) goto L24
            android.net.Uri r2 = com.qihoo360.replugin.component.provider.PluginProviderClient.toCalledUri(r8, r9)     // Catch: android.os.RemoteException -> L18
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            android.database.Cursor r8 = r1.query(r2, r3, r4, r5, r6, r7)     // Catch: android.os.RemoteException -> L18
            return r8
        L18:
            r8 = move-exception
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto L24
            java.lang.String r8 = r8.toString()
            android.util.Log.d(r0, r8)
        L24:
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto L3b
            r8 = 1
            java.lang.Object[] r8 = new java.lang.Object[r8]
            r10 = 0
            java.lang.String r9 = r9.toString()
            r8[r10] = r9
            java.lang.String r9 = "call query2 %s fail"
            java.lang.String r8 = java.lang.String.format(r9, r8)
            android.util.Log.d(r0, r8)
        L3b:
            r8 = 0
            return r8
    }

    public static int update(android.content.Context r2, android.net.Uri r3, android.content.ContentValues r4, java.lang.String r5, java.lang.String[] r6) {
            java.lang.String r0 = ""
            android.content.ContentProviderClient r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.acquireContentProviderClient(r2, r0)
            java.lang.String r1 = "PluginProviderClient2"
            if (r0 == 0) goto L1f
            android.net.Uri r2 = com.qihoo360.replugin.component.provider.PluginProviderClient.toCalledUri(r2, r3)     // Catch: android.os.RemoteException -> L13
            int r2 = r0.update(r2, r4, r5, r6)     // Catch: android.os.RemoteException -> L13
            return r2
        L13:
            r2 = move-exception
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L1f
            java.lang.String r2 = r2.toString()
            android.util.Log.d(r1, r2)
        L1f:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L36
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r4 = 0
            java.lang.String r3 = r3.toString()
            r2[r4] = r3
            java.lang.String r3 = "call update %s"
            java.lang.String r2 = java.lang.String.format(r3, r2)
            android.util.Log.d(r1, r2)
        L36:
            r2 = -1
            return r2
    }
}
