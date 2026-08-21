package com.qihoo360.replugin.component.process;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ProcessPitProviderBase extends android.content.ContentProvider {
    public static final java.lang.String AUTHORITY_PREFIX = null;
    private static final java.lang.String TAG = "ProviderBase";

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getPackageName()
            r0.append(r1)
            java.lang.String r1 = ".loader.p.main"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.component.process.ProcessPitProviderBase.AUTHORITY_PREFIX = r0
            return
    }

    public ProcessPitProviderBase() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final android.net.Uri buildUri(int r2) {
            if (r2 >= 0) goto L7
            int r2 = r2 * (-1)
            java.lang.String r0 = "N"
            goto L9
        L7:
            java.lang.String r0 = ""
        L9:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "content://"
            r0.append(r1)
            java.lang.String r1 = com.qihoo360.replugin.component.process.ProcessPitProviderBase.AUTHORITY_PREFIX
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "/main"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.net.Uri r2 = android.net.Uri.parse(r2)
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L51
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buildUri: uri="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ProviderBase"
            android.util.Log.d(r1, r0)
        L51:
            return r2
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void dump(java.io.FileDescriptor r1, java.io.PrintWriter r2, java.lang.String[] r3) {
            r0 = this;
            return
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
            android.net.Uri r1 = com.qihoo360.loader2.PluginProviderStub.stubPlugin(r1, r2)
            return r1
    }

    @Override
    public boolean onCreate() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public android.database.Cursor query(android.net.Uri r1, java.lang.String[] r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public int update(android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4) {
            r0 = this;
            r1 = 0
            return r1
    }
}
