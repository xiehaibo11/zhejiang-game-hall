package com.qihoo360.replugin;

import android.app.Application;
import android.content.Context;
import com.qihoo360.mobilesafe.core.BuildConfig;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePluginInternal {
    public static final boolean FOR_DEV = BuildConfig.DEBUG;
    static Context sAppContext;

    static void init(Application application) {
        sAppContext = application;
    }

    public static Context getAppContext() {
        return sAppContext;
    }

    public static ClassLoader getAppClassLoader() {
        return getAppContext().getClassLoader();
    }
}
