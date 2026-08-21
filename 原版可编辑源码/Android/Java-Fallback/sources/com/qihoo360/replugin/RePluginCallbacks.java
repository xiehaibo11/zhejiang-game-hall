package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePluginCallbacks {
    protected final android.content.Context mContext;

    public RePluginCallbacks(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    public com.qihoo360.replugin.RePluginClassLoader createClassLoader(java.lang.ClassLoader r2, java.lang.ClassLoader r3) {
            r1 = this;
            com.qihoo360.replugin.RePluginClassLoader r0 = new com.qihoo360.replugin.RePluginClassLoader
            r0.<init>(r2, r3)
            return r0
    }

    public com.qihoo360.replugin.ContextInjector createContextInjector() {
            r1 = this;
            r0 = 0
            return r0
    }

    public com.qihoo360.replugin.PluginDexClassLoader createPluginClassLoader(com.qihoo360.replugin.model.PluginInfo r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.ClassLoader r12) {
            r7 = this;
            com.qihoo360.replugin.PluginDexClassLoader r6 = new com.qihoo360.replugin.PluginDexClassLoader
            r0 = r6
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    public android.content.SharedPreferences getSharedPreferences(android.content.Context r1, java.lang.String r2, int r3) {
            r0 = this;
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)
            return r1
    }

    public void initPnPluginOverride() {
            r0 = this;
            return
    }

    public boolean isPluginBlocked(com.qihoo360.replugin.model.PluginInfo r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public boolean onLoadLargePluginForActivity(android.content.Context r1, java.lang.String r2, android.content.Intent r3, int r4) {
            r0 = this;
            r1 = 0
            return r1
    }

    public boolean onPluginNotExistsForActivity(android.content.Context r1, java.lang.String r2, android.content.Intent r3, int r4) {
            r0 = this;
            r1 = 0
            return r1
    }

    public java.io.InputStream openLatestFile(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            java.io.InputStream r1 = com.qihoo360.replugin.utils.pkg.PackageFilesUtil.openLatestInputFile(r1, r2)
            return r1
    }
}
