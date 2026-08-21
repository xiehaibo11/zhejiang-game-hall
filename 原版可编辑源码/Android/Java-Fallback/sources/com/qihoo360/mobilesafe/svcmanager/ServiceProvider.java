package com.qihoo360.mobilesafe.svcmanager;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ServiceProvider extends android.content.ContentProvider {
    public static final java.lang.String AUTHORITY = null;
    private static final boolean DEBUG = false;
    public static final java.lang.String PATH_SERVER_CHANNEL = "severchannel";
    private static final java.lang.String TAG = "ServerProvider";

    static {
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            com.qihoo360.mobilesafe.svcmanager.ServiceProvider.DEBUG = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getPackageName()
            r0.append(r1)
            java.lang.String r1 = ".svcmanager"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.mobilesafe.svcmanager.ServiceProvider.AUTHORITY = r0
            return
    }

    public ServiceProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public android.net.Uri insert(android.net.Uri r1, android.content.ContentValues r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean onCreate() {
            r2 = this;
            boolean r0 = com.qihoo360.mobilesafe.svcmanager.ServiceProvider.DEBUG
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[onCreate] App = "
            r0.append(r1)
            android.content.Context r1 = r2.getContext()
            android.content.Context r1 = r1.getApplicationContext()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ServerProvider"
            android.util.Log.d(r1, r0)
        L22:
            r0 = 1
            return r0
    }

    @Override
    public android.database.Cursor query(android.net.Uri r1, java.lang.String[] r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5) {
            r0 = this;
            boolean r2 = com.qihoo360.mobilesafe.svcmanager.ServiceProvider.DEBUG
            if (r2 == 0) goto L23
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[query] uri = "
            r2.append(r3)
            if (r1 != 0) goto L13
            java.lang.String r1 = "null"
            goto L17
        L13:
            java.lang.String r1 = r1.toString()
        L17:
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "ServerProvider"
            android.util.Log.d(r2, r1)
        L23:
            android.database.MatrixCursor r1 = com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.sServiceChannelCursor
            return r1
    }

    @Override
    public int update(android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4) {
            r0 = this;
            r1 = 0
            return r1
    }
}
