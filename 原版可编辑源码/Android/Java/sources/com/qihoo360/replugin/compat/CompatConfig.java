package com.qihoo360.replugin.compat;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class CompatConfig {
    public static final boolean DEPENDENCY_ANDROIDX = findClassByClassName("androidx.localbroadcastmanager.content.LocalBroadcastManager");
    public static final boolean DEPENDENCY_SUPPORT = findClassByClassName("android.support.v4.content.LocalBroadcastManager");
    private static volatile CompatConfig sInstance;

    private CompatConfig() {
    }

    public static CompatConfig getInstance() {
        if (sInstance == null) {
            synchronized (CompatConfig.class) {
                if (sInstance == null) {
                    sInstance = new CompatConfig();
                }
            }
        }
        return sInstance;
    }

    private static boolean findClassByClassName(String str) {
        try {
            Class.forName(str);
            return true;
        } catch (ClassNotFoundException unused) {
            return false;
        }
    }
}
