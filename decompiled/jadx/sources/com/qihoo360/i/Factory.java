package com.qihoo360.i;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageInfo;
import android.content.pm.ServiceInfo;
import android.content.res.Resources;
import android.net.Uri;
import android.os.Bundle;
import android.os.IBinder;
import android.text.TextUtils;
import com.qihoo360.loader2.PluginCommImpl;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.component.ComponentList;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public final class Factory {
    public static final String PLUGIN_ENTRY_CLASS_NAME = "Entry";
    public static final String PLUGIN_ENTRY_EXPORT_METHOD_NAME = "create";
    public static final String PLUGIN_ENTRY_PACKAGE_PREFIX = "com.qihoo360.plugin";
    public static final String REPLUGIN_LIBRARY_ENTRY_PACKAGE_PREFIX = "com.qihoo360.replugin";
    public static PluginCommImpl sPluginManager;
    public static final Class<?>[] PLUGIN_ENTRY_EXPORT_METHOD_PARAMS = {Context.class, IPluginManager.class};
    public static final Class<?>[] PLUGIN_ENTRY_EXPORT_METHOD2_PARAMS = {Context.class, ClassLoader.class, IBinder.class};

    @Deprecated
    public static final IModule query(String str, Class<? extends IModule> cls) {
        return sPluginManager.query(str, cls);
    }

    public static final boolean isPluginLoaded(String str) {
        return sPluginManager.isPluginLoaded(str);
    }

    public static final IBinder query(String str, String str2) {
        return sPluginManager.query(str, str2);
    }

    public static final IBinder query(String str, String str2, int i) {
        return sPluginManager.query(str, str2, i);
    }

    public static final Context queryPluginContext(String str) {
        return sPluginManager.queryPluginContext(str);
    }

    public static final Resources queryPluginResouces(String str) {
        return sPluginManager.queryPluginResouces(str);
    }

    public static final PackageInfo queryPluginPackageInfo(String str) {
        return sPluginManager.queryPluginPackageInfo(str);
    }

    public static final PackageInfo queryPluginPackageInfo(String str, int i) {
        return sPluginManager.queryPluginPackageInfo(str, i);
    }

    public static final ComponentList queryPluginComponentList(String str) {
        return sPluginManager.queryPluginComponentList(str);
    }

    public static final ClassLoader queryPluginClassLoader(String str) {
        return sPluginManager.queryPluginClassLoader(str);
    }

    public static final ActivityInfo queryActivityInfo(String str, String str2) {
        ComponentList componentListQueryPluginComponentList = sPluginManager.queryPluginComponentList(str);
        if (componentListQueryPluginComponentList != null) {
            return componentListQueryPluginComponentList.getActivity(str2);
        }
        return null;
    }

    public static final ServiceInfo queryServiceInfo(String str, String str2) {
        ComponentList componentListQueryPluginComponentList = sPluginManager.queryPluginComponentList(str);
        if (componentListQueryPluginComponentList != null) {
            return componentListQueryPluginComponentList.getService(str2);
        }
        return null;
    }

    public static ActivityInfo getActivityInfo(String str, String str2, Intent intent) {
        return sPluginManager.getActivityInfo(str, str2, intent);
    }

    public static List<ActivityInfo> queryPluginsReceiverList(Intent intent) {
        return sPluginManager.queryPluginsReceiverList(intent);
    }

    public static final boolean startActivity(Context context, Intent intent, String str, String str2, int i) {
        if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
            intent.setComponent(RePlugin.createComponentName(str, str2));
        }
        return startActivityWithNoInjectCN(context, intent, str, str2, i);
    }

    public static final boolean startActivityWithNoInjectCN(Context context, Intent intent, String str, String str2, int i) {
        boolean zStartActivity = sPluginManager.startActivity(context, intent, str, str2, i);
        RePlugin.getConfig().getEventCallbacks().onStartActivityCompleted(str, str2, zStartActivity);
        return zStartActivity;
    }

    public static final ComponentName loadPluginActivity(Intent intent, String str, String str2, int i) {
        return sPluginManager.loadPluginActivity(intent, str, str2, i);
    }

    public static final ComponentName loadPluginService(String str, String str2, int i) {
        return sPluginManager.loadPluginService(str, str2, i);
    }

    @Deprecated
    public static final Uri loadPluginProvider(String str, String str2, int i) {
        return sPluginManager.loadPluginProvider(str, str2, i);
    }

    public static final Uri makePluginProviderUri(String str, Uri uri, int i) {
        if (BuildConfig.DEBUG) {
            throw new IllegalStateException();
        }
        return uri;
    }

    public static final String fetchPluginName(ClassLoader classLoader) {
        return sPluginManager.fetchPluginName(classLoader);
    }

    public static boolean startActivityForResult(Activity activity, Intent intent, int i, Bundle bundle) {
        return sPluginManager.startActivityForResult(activity, intent, i, bundle);
    }
}
