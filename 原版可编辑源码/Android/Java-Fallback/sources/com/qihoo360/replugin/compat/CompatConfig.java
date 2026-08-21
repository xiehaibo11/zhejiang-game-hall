package com.qihoo360.replugin.compat;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class CompatConfig {
    public static final boolean DEPENDENCY_ANDROIDX = false;
    public static final boolean DEPENDENCY_SUPPORT = false;
    private static volatile com.qihoo360.replugin.compat.CompatConfig sInstance;

    static {
            java.lang.String r0 = "androidx.localbroadcastmanager.content.LocalBroadcastManager"
            boolean r0 = findClassByClassName(r0)
            com.qihoo360.replugin.compat.CompatConfig.DEPENDENCY_ANDROIDX = r0
            java.lang.String r0 = "android.support.v4.content.LocalBroadcastManager"
            boolean r0 = findClassByClassName(r0)
            com.qihoo360.replugin.compat.CompatConfig.DEPENDENCY_SUPPORT = r0
            return
    }

    private CompatConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean findClassByClassName(java.lang.String r0) {
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L5
            r0 = 1
            goto L6
        L5:
            r0 = 0
        L6:
            return r0
    }

    public static com.qihoo360.replugin.compat.CompatConfig getInstance() {
            com.qihoo360.replugin.compat.CompatConfig r0 = com.qihoo360.replugin.compat.CompatConfig.sInstance
            if (r0 != 0) goto L17
            java.lang.Class<com.qihoo360.replugin.compat.CompatConfig> r0 = com.qihoo360.replugin.compat.CompatConfig.class
            monitor-enter(r0)
            com.qihoo360.replugin.compat.CompatConfig r1 = com.qihoo360.replugin.compat.CompatConfig.sInstance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.qihoo360.replugin.compat.CompatConfig r1 = new com.qihoo360.replugin.compat.CompatConfig     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.qihoo360.replugin.compat.CompatConfig.sInstance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.qihoo360.replugin.compat.CompatConfig r0 = com.qihoo360.replugin.compat.CompatConfig.sInstance
            return r0
    }
}
