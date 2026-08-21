package com.qihoo360.replugin.component.provider;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public abstract class PluginPitProviderBase extends android.content.ContentProvider {
    public static final java.lang.String AUTHORITY_PREFIX = null;
    com.qihoo360.replugin.component.provider.PluginProviderHelper mHelper;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getPackageName()
            r0.append(r1)
            java.lang.String r1 = ".Plugin.NP."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.component.provider.PluginPitProviderBase.AUTHORITY_PREFIX = r0
            return
    }

    protected PluginPitProviderBase(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            com.qihoo360.replugin.component.provider.PluginProviderHelper r0 = new com.qihoo360.replugin.component.provider.PluginProviderHelper
            r0.<init>(r2)
            r1.mHelper = r0
            return
    }

    @Override
    public int bulkInsert(android.net.Uri r3, android.content.ContentValues[] r4) {
            r2 = this;
            com.qihoo360.replugin.component.provider.PluginProviderHelper r0 = r2.mHelper
            com.qihoo360.replugin.component.provider.PluginProviderHelper$PluginUri r3 = r0.toPluginUri(r3)
            r0 = -1
            if (r3 != 0) goto La
            return r0
        La:
            com.qihoo360.replugin.component.provider.PluginProviderHelper r1 = r2.mHelper
            android.content.ContentProvider r1 = r1.getProvider(r3)
            if (r1 != 0) goto L13
            return r0
        L13:
            android.net.Uri r3 = r3.transferredUri
            int r3 = r1.bulkInsert(r3, r4)
            return r3
    }

    @Override
    public int delete(android.net.Uri r3, java.lang.String r4, java.lang.String[] r5) {
            r2 = this;
            com.qihoo360.replugin.component.provider.PluginProviderHelper r0 = r2.mHelper
            com.qihoo360.replugin.component.provider.PluginProviderHelper$PluginUri r3 = r0.toPluginUri(r3)
            r0 = -1
            if (r3 != 0) goto La
            return r0
        La:
            com.qihoo360.replugin.component.provider.PluginProviderHelper r1 = r2.mHelper
            android.content.ContentProvider r1 = r1.getProvider(r3)
            if (r1 != 0) goto L13
            return r0
        L13:
            android.net.Uri r3 = r3.transferredUri
            int r3 = r1.delete(r3, r4, r5)
            return r3
    }

    @Override
    public java.lang.String getType(android.net.Uri r3) {
            r2 = this;
            com.qihoo360.replugin.component.provider.PluginProviderHelper r0 = r2.mHelper
            com.qihoo360.replugin.component.provider.PluginProviderHelper$PluginUri r3 = r0.toPluginUri(r3)
            r0 = 0
            if (r3 != 0) goto La
            return r0
        La:
            com.qihoo360.replugin.component.provider.PluginProviderHelper r1 = r2.mHelper
            android.content.ContentProvider r1 = r1.getProvider(r3)
            if (r1 != 0) goto L13
            return r0
        L13:
            android.net.Uri r3 = r3.transferredUri
            java.lang.String r3 = r1.getType(r3)
            return r3
    }

    @Override
    public android.net.Uri insert(android.net.Uri r3, android.content.ContentValues r4) {
            r2 = this;
            com.qihoo360.replugin.component.provider.PluginProviderHelper r0 = r2.mHelper
            com.qihoo360.replugin.component.provider.PluginProviderHelper$PluginUri r3 = r0.toPluginUri(r3)
            r0 = 0
            if (r3 != 0) goto La
            return r0
        La:
            com.qihoo360.replugin.component.provider.PluginProviderHelper r1 = r2.mHelper
            android.content.ContentProvider r1 = r1.getProvider(r3)
            if (r1 != 0) goto L13
            return r0
        L13:
            android.net.Uri r3 = r3.transferredUri
            android.net.Uri r3 = r1.insert(r3, r4)
            return r3
    }

    @Override
    public boolean onCreate() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void onLowMemory() {
            r2 = this;
            com.qihoo360.replugin.component.provider.PluginProviderHelper r0 = r2.mHelper
            java.util.Map<java.lang.String, android.content.ContentProvider> r0 = r0.mProviderAuthorityMap
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            android.content.ContentProvider r1 = (android.content.ContentProvider) r1
            r1.onLowMemory()
            goto Lc
        L1c:
            super.onLowMemory()
            return
    }

    @Override
    public void onTrimMemory(int r3) {
            r2 = this;
            com.qihoo360.replugin.component.provider.PluginProviderHelper r0 = r2.mHelper
            java.util.Map<java.lang.String, android.content.ContentProvider> r0 = r0.mProviderAuthorityMap
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            android.content.ContentProvider r1 = (android.content.ContentProvider) r1
            r1.onTrimMemory(r3)
            goto Lc
        L1c:
            super.onTrimMemory(r3)
            return
    }

    @Override
    public android.database.Cursor query(android.net.Uri r9, java.lang.String[] r10, java.lang.String r11, java.lang.String[] r12, java.lang.String r13) {
            r8 = this;
            com.qihoo360.replugin.component.provider.PluginProviderHelper r0 = r8.mHelper
            com.qihoo360.replugin.component.provider.PluginProviderHelper$PluginUri r9 = r0.toPluginUri(r9)
            r0 = 0
            if (r9 != 0) goto La
            return r0
        La:
            com.qihoo360.replugin.component.provider.PluginProviderHelper r1 = r8.mHelper
            android.content.ContentProvider r2 = r1.getProvider(r9)
            if (r2 != 0) goto L13
            return r0
        L13:
            android.net.Uri r3 = r9.transferredUri
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            android.database.Cursor r9 = r2.query(r3, r4, r5, r6, r7)
            return r9
    }

    @Override
    public android.database.Cursor query(android.net.Uri r10, java.lang.String[] r11, java.lang.String r12, java.lang.String[] r13, java.lang.String r14, android.os.CancellationSignal r15) {
            r9 = this;
            com.qihoo360.replugin.component.provider.PluginProviderHelper r0 = r9.mHelper
            com.qihoo360.replugin.component.provider.PluginProviderHelper$PluginUri r10 = r0.toPluginUri(r10)
            r0 = 0
            if (r10 != 0) goto La
            return r0
        La:
            com.qihoo360.replugin.component.provider.PluginProviderHelper r1 = r9.mHelper
            android.content.ContentProvider r2 = r1.getProvider(r10)
            if (r2 != 0) goto L13
            return r0
        L13:
            android.net.Uri r3 = r10.transferredUri
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r8 = r15
            android.database.Cursor r10 = r2.query(r3, r4, r5, r6, r7, r8)
            return r10
    }

    @Override
    public int update(android.net.Uri r3, android.content.ContentValues r4, java.lang.String r5, java.lang.String[] r6) {
            r2 = this;
            com.qihoo360.replugin.component.provider.PluginProviderHelper r0 = r2.mHelper
            com.qihoo360.replugin.component.provider.PluginProviderHelper$PluginUri r3 = r0.toPluginUri(r3)
            r0 = -1
            if (r3 != 0) goto La
            return r0
        La:
            com.qihoo360.replugin.component.provider.PluginProviderHelper r1 = r2.mHelper
            android.content.ContentProvider r1 = r1.getProvider(r3)
            if (r1 != 0) goto L13
            return r0
        L13:
            android.net.Uri r3 = r3.transferredUri
            int r3 = r1.update(r3, r4, r5, r6)
            return r3
    }
}
