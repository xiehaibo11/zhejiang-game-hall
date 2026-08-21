package com.qihoo360.replugin;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.pkg.PackageFilesUtil;
import java.io.InputStream;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class RePluginCallbacks {
    protected final Context mContext;

    public ContextInjector createContextInjector() {
        return null;
    }

    public void initPnPluginOverride() {
    }

    public boolean isPluginBlocked(PluginInfo pluginInfo) {
        return false;
    }

    public boolean onLoadLargePluginForActivity(Context context, String str, Intent intent, int i) {
        return false;
    }

    public boolean onPluginNotExistsForActivity(Context context, String str, Intent intent, int i) {
        return false;
    }

    public RePluginCallbacks(Context context) {
        this.mContext = context;
    }

    public RePluginClassLoader createClassLoader(ClassLoader classLoader, ClassLoader classLoader2) {
        return new RePluginClassLoader(classLoader, classLoader2);
    }

    public PluginDexClassLoader createPluginClassLoader(PluginInfo pluginInfo, String str, String str2, String str3, ClassLoader classLoader) {
        return new PluginDexClassLoader(pluginInfo, str, str2, str3, classLoader);
    }

    public SharedPreferences getSharedPreferences(Context context, String str, int i) {
        return context.getSharedPreferences(str, i);
    }

    public InputStream openLatestFile(Context context, String str) {
        return PackageFilesUtil.openLatestInputFile(context, str);
    }
}
