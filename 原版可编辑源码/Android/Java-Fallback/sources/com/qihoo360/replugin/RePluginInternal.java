package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePluginInternal {
    public static final boolean FOR_DEV = false;
    static android.content.Context sAppContext;

    static {
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            com.qihoo360.replugin.RePluginInternal.FOR_DEV = r0
            return
    }

    public RePluginInternal() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.ClassLoader getAppClassLoader() {
            android.content.Context r0 = getAppContext()
            java.lang.ClassLoader r0 = r0.getClassLoader()
            return r0
    }

    public static android.content.Context getAppContext() {
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.sAppContext
            return r0
    }

    static void init(android.app.Application r0) {
            com.qihoo360.replugin.RePluginInternal.sAppContext = r0
            return
    }
}
