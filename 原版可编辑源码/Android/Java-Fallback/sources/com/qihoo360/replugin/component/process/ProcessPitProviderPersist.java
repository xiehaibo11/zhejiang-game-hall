package com.qihoo360.replugin.component.process;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ProcessPitProviderPersist extends android.content.ContentProvider {
    private static final java.lang.String AUTHORITY_PREFIX = null;
    private static final java.lang.String TAG = "ProcessPitProviderPersist";
    public static final android.net.Uri URI = null;
    public static boolean sInvoked;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getPackageName()
            r0.append(r1)
            java.lang.String r1 = ".loader.p.main"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.component.process.ProcessPitProviderPersist.AUTHORITY_PREFIX = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "content://"
            r0.append(r1)
            java.lang.String r1 = com.qihoo360.replugin.component.process.ProcessPitProviderPersist.AUTHORITY_PREFIX
            r0.append(r1)
            java.lang.String r1 = "/main"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            com.qihoo360.replugin.component.process.ProcessPitProviderPersist.URI = r0
            return
    }

    public ProcessPitProviderPersist() {
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
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public android.database.Cursor query(android.net.Uri r2, java.lang.String[] r3, java.lang.String r4, java.lang.String[] r5, java.lang.String r6) {
            r1 = this;
            r0 = 1
            com.qihoo360.replugin.component.process.ProcessPitProviderPersist.sInvoked = r0
            android.database.Cursor r2 = com.qihoo360.loader2.PluginProviderStub.stubMain(r2, r3, r4, r5, r6)
            return r2
    }

    @Override
    public int update(android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4) {
            r0 = this;
            r1 = 0
            return r1
    }
}
