package com.qihoo360.loader2.mgr;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProviderClient {
    public PluginProviderClient() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.ContentProviderClient acquireContentProviderClient(android.content.Context r0, java.lang.String r1) {
            android.content.ContentProviderClient r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.acquireContentProviderClient(r0, r1)
            return r0
    }

    public static int bulkInsert(android.content.Context r0, android.net.Uri r1, android.content.ContentValues[] r2) {
            int r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.bulkInsert(r0, r1, r2)
            return r0
    }

    public static int delete(android.content.Context r0, android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            int r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.delete(r0, r1, r2, r3)
            return r0
    }

    public static java.lang.String getType(android.content.Context r0, android.net.Uri r1) {
            java.lang.String r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.getType(r0, r1)
            return r0
    }

    public static android.net.Uri insert(android.content.Context r0, android.net.Uri r1, android.content.ContentValues r2) {
            android.net.Uri r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.insert(r0, r1, r2)
            return r0
    }

    public static void notifyChange(android.content.Context r0, android.net.Uri r1, android.database.ContentObserver r2) {
            com.qihoo360.replugin.component.provider.PluginProviderClient.notifyChange(r0, r1, r2)
            return
    }

    public static void notifyChange(android.content.Context r0, android.net.Uri r1, android.database.ContentObserver r2, boolean r3) {
            com.qihoo360.replugin.component.provider.PluginProviderClient.notifyChange(r0, r1, r2, r3)
            return
    }

    public static android.os.ParcelFileDescriptor openFileDescriptor(android.content.Context r0, android.net.Uri r1, java.lang.String r2) {
            android.os.ParcelFileDescriptor r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.openFileDescriptor(r0, r1, r2)
            return r0
    }

    public static android.os.ParcelFileDescriptor openFileDescriptor(android.content.Context r0, android.net.Uri r1, java.lang.String r2, android.os.CancellationSignal r3) {
            android.os.ParcelFileDescriptor r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.openFileDescriptor(r0, r1, r2, r3)
            return r0
    }

    public static java.io.InputStream openInputStream(android.content.Context r0, android.net.Uri r1) {
            java.io.InputStream r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.openInputStream(r0, r1)
            return r0
    }

    public static java.io.OutputStream openOutputStream(android.content.Context r0, android.net.Uri r1) {
            java.io.OutputStream r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.openOutputStream(r0, r1)
            return r0
    }

    public static java.io.OutputStream openOutputStream(android.content.Context r0, android.net.Uri r1, java.lang.String r2) {
            java.io.OutputStream r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.openOutputStream(r0, r1, r2)
            return r0
    }

    public static android.database.Cursor query(android.content.Context r0, android.net.Uri r1, java.lang.String[] r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5) {
            android.database.Cursor r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.query(r0, r1, r2, r3, r4, r5)
            return r0
    }

    public static android.database.Cursor query(android.content.Context r0, android.net.Uri r1, java.lang.String[] r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5, android.os.CancellationSignal r6) {
            android.database.Cursor r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.query(r0, r1, r2, r3, r4, r5, r6)
            return r0
    }

    public static void registerContentObserver(android.content.Context r0, android.net.Uri r1, boolean r2, android.database.ContentObserver r3) {
            com.qihoo360.replugin.component.provider.PluginProviderClient.registerContentObserver(r0, r1, r2, r3)
            return
    }

    public static android.net.Uri toCalledUri(android.content.Context r0, android.net.Uri r1) {
            android.net.Uri r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.toCalledUri(r0, r1)
            return r0
    }

    public static android.net.Uri toCalledUri(android.content.Context r0, java.lang.String r1, android.net.Uri r2, int r3) {
            android.net.Uri r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.toCalledUri(r0, r1, r2, r3)
            return r0
    }

    public static int update(android.content.Context r0, android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4) {
            int r0 = com.qihoo360.replugin.component.provider.PluginProviderClient.update(r0, r1, r2, r3, r4)
            return r0
    }
}
