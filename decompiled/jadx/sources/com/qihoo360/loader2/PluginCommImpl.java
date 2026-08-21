package com.qihoo360.loader2;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageInfo;
import android.content.res.Resources;
import android.net.Uri;
import android.os.Bundle;
import android.os.IBinder;
import android.text.TextUtils;
import com.qihoo360.i.IModule;
import com.qihoo360.mobilesafe.svcmanager.QihooServiceManager;
import com.qihoo360.replugin.IHostBinderFetcher;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.component.process.PluginProcessHost;
import com.qihoo360.replugin.component.utils.IntentMatcherHelper;
import com.qihoo360.replugin.component.utils.PluginClientHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import java.util.HashMap;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginCommImpl {
    private static final String CONTAINER_PROVIDER_AUTHORITY_PART = ".loader.p.pr";
    static final String INTENT_KEY_THEME_ID = "__themeId";
    Context mContext;
    PmBase mPluginMgr;

    PluginCommImpl(Context context, PmBase pmBase) {
        this.mContext = context;
        this.mPluginMgr = pmBase;
    }

    public boolean isPluginLoaded(String str) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "isPluginLoaded: name=" + str);
        }
        Plugin plugin = this.mPluginMgr.getPlugin(str);
        if (plugin == null) {
            return false;
        }
        return plugin.isLoaded();
    }

    public IModule query(String str, Class<? extends IModule> cls) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "query: name=" + str + " class=" + cls.getName());
        }
        HashMap<String, IModule> builtinModules = this.mPluginMgr.getBuiltinModules(str);
        if (builtinModules != null) {
            return builtinModules.get(cls.getName());
        }
        Plugin pluginLoadAppPlugin = this.mPluginMgr.loadAppPlugin(str);
        if (pluginLoadAppPlugin == null) {
            if (!LogDebug.LOG) {
                return null;
            }
            LogDebug.d(LogDebug.PLUGIN_TAG, "query: not found plugin,  name=" + str + " class=" + cls.getName());
            return null;
        }
        return pluginLoadAppPlugin.query(cls);
    }

    public IBinder query(String str, String str2) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "query: name=" + str + " binder=" + str2);
        }
        IHostBinderFetcher builtinPlugin = this.mPluginMgr.getBuiltinPlugin(str);
        if (builtinPlugin != null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "use buildin plugin");
            }
            return builtinPlugin.query(str2);
        }
        Plugin pluginLoadAppPlugin = this.mPluginMgr.loadAppPlugin(str);
        if (pluginLoadAppPlugin == null) {
            if (!LogDebug.LOG) {
                return null;
            }
            LogDebug.d(LogDebug.PLUGIN_TAG, "query: not found plugin,  name=" + str + " binder=" + str2);
            return null;
        }
        return pluginLoadAppPlugin.query(str2);
    }

    public IBinder query(String str, String str2, int i) {
        if (IPC.isPersistentProcess() && i == -2) {
            return query(str, str2);
        }
        if (IPC.isUIProcess() && i == -1) {
            return query(str, str2);
        }
        String strProcessTail = PluginProcessHost.processTail(IPC.getCurrentProcessName());
        if (PluginProcessHost.PROCESS_INT_MAP.containsKey(strProcessTail) && i == PluginProcessHost.PROCESS_INT_MAP.get(strProcessTail).intValue()) {
            return query(str, str2);
        }
        if (i == -2) {
            try {
                return PluginProcessMain.getPluginHost().queryPluginBinder(str, str2);
            } catch (Throwable th) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "q.p.b: " + th.getMessage(), th);
                return null;
            }
        }
        return QihooServiceManager.getPluginService(this.mContext, str, str2);
    }

    public Context queryPluginContext(String str) {
        Plugin pluginLoadAppPlugin = this.mPluginMgr.loadAppPlugin(str);
        if (pluginLoadAppPlugin != null) {
            return pluginLoadAppPlugin.mLoader.mPkgContext;
        }
        if (!LogDebug.LOG) {
            return null;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "not found plugin=" + str);
        return null;
    }

    public Resources queryPluginResouces(String str) {
        Resources resourcesQueryCachedResources = Plugin.queryCachedResources(Plugin.queryCachedFilename(str));
        if (resourcesQueryCachedResources != null) {
            return resourcesQueryCachedResources;
        }
        Plugin pluginLoadResourcePlugin = this.mPluginMgr.loadResourcePlugin(str, this);
        if (pluginLoadResourcePlugin != null) {
            return pluginLoadResourcePlugin.mLoader.mPkgResources;
        }
        if (!LogDebug.LOG) {
            return null;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "not found plugin=" + str);
        return null;
    }

    public PackageInfo queryPluginPackageInfo(String str) {
        PackageInfo packageInfoQueryCachedPackageInfo = Plugin.queryCachedPackageInfo(Plugin.queryCachedFilename(str));
        if (packageInfoQueryCachedPackageInfo != null) {
            return packageInfoQueryCachedPackageInfo;
        }
        Plugin pluginLoadPackageInfoPlugin = this.mPluginMgr.loadPackageInfoPlugin(str, this);
        if (pluginLoadPackageInfoPlugin != null) {
            return pluginLoadPackageInfoPlugin.mLoader.mPackageInfo;
        }
        if (!LogDebug.LOG) {
            return null;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "not found plugin=" + str);
        return null;
    }

    public PackageInfo queryPluginPackageInfo(String str, int i) {
        String strQueryPluginNameByPkgName = Plugin.queryPluginNameByPkgName(str);
        if (TextUtils.isEmpty(strQueryPluginNameByPkgName)) {
            return null;
        }
        return queryPluginPackageInfo(strQueryPluginNameByPkgName);
    }

    public ComponentList queryPluginComponentList(String str) {
        ComponentList componentListQueryCachedComponentList = Plugin.queryCachedComponentList(Plugin.queryCachedFilename(str));
        if (componentListQueryCachedComponentList != null) {
            return componentListQueryCachedComponentList;
        }
        Plugin pluginLoadPackageInfoPlugin = this.mPluginMgr.loadPackageInfoPlugin(str, this);
        if (pluginLoadPackageInfoPlugin != null) {
            return pluginLoadPackageInfoPlugin.mLoader.mComponents;
        }
        if (!LogDebug.LOG) {
            return null;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "not found plugin=" + str);
        return null;
    }

    public ClassLoader queryPluginClassLoader(String str) {
        ClassLoader classLoaderQueryCachedClassLoader = Plugin.queryCachedClassLoader(Plugin.queryCachedFilename(str));
        if (classLoaderQueryCachedClassLoader != null) {
            return classLoaderQueryCachedClassLoader;
        }
        Plugin pluginLoadDexPlugin = this.mPluginMgr.loadDexPlugin(str, this);
        if (pluginLoadDexPlugin != null) {
            return pluginLoadDexPlugin.mLoader.mClassLoader;
        }
        if (!LogDebug.LOG) {
            return null;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "not found plugin=" + str);
        return null;
    }

    public ClassLoader loadPluginClassLoader(PluginInfo pluginInfo) {
        Plugin pluginLoadPlugin = this.mPluginMgr.loadPlugin(pluginInfo, this, 2, false);
        if (pluginLoadPlugin != null) {
            return pluginLoadPlugin.mLoader.mClassLoader;
        }
        if (!LogDebug.LOG) {
            return null;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "not found plugin=" + pluginInfo.getName());
        return null;
    }

    public List<ActivityInfo> queryPluginsReceiverList(Intent intent) {
        IPluginHost pluginHost = PluginProcessMain.getPluginHost();
        if (pluginHost == null) {
            return null;
        }
        try {
            return pluginHost.queryPluginsReceiverList(intent);
        } catch (Throwable th) {
            if (!LogDebug.LOG) {
                return null;
            }
            LogDebug.e(LogDebug.PLUGIN_TAG, "Query PluginsReceiverList fail:" + th.toString());
            return null;
        }
    }

    public boolean startActivity(Context context, Intent intent, String str, String str2, int i) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "start activity: intent=" + intent + " plugin=" + str + " activity=" + str2 + " process=" + i);
        }
        return this.mPluginMgr.mInternal.startActivity(context, intent, str, str2, i, true);
    }

    public boolean startActivityForResult(Activity activity, Intent intent, int i, Bundle bundle) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "startActivityForResult: intent=" + intent + " requestCode=" + i + " options=" + bundle);
        }
        return this.mPluginMgr.mInternal.startActivityForResult(activity, intent, i, bundle);
    }

    public ComponentName loadPluginActivity(Intent intent, String str, String str2, int i) {
        String strAllocActivityContainer;
        ActivityInfo activityInfo;
        PluginBinderInfo pluginBinderInfo = new PluginBinderInfo(1);
        try {
            activityInfo = getActivityInfo(str, str2, intent);
            try {
            } catch (Throwable th) {
                th = th;
                strAllocActivityContainer = null;
            }
        } catch (Throwable th2) {
            th = th2;
            strAllocActivityContainer = null;
            activityInfo = null;
        }
        if (activityInfo == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: bindActivity: activity not found");
            }
            return null;
        }
        intent.putExtra(INTENT_KEY_THEME_ID, activityInfo.theme);
        if (LogDebug.LOG) {
            LogDebug.d("theme", String.format("intent.putExtra(%s, %s);", activityInfo.name, Integer.valueOf(activityInfo.theme)));
        }
        if (activityInfo.processName != null) {
            i = PluginClientHelper.getProcessInt(activityInfo.processName).intValue();
        }
        IPluginClient iPluginClientStartPluginProcess = MP.startPluginProcess(str, i, pluginBinderInfo);
        if (iPluginClientStartPluginProcess == null) {
            return null;
        }
        strAllocActivityContainer = iPluginClientStartPluginProcess.allocActivityContainer(str, i, activityInfo.name, intent);
        try {
            if (LogDebug.LOG) {
                LogDebug.i(LogDebug.PLUGIN_TAG, "alloc success: container=" + strAllocActivityContainer + " plugin=" + str + " activity=" + str2);
            }
        } catch (Throwable th3) {
            th = th3;
            LogRelease.e(LogDebug.PLUGIN_TAG, "l.p.a spp|aac: " + th.getMessage(), th);
        }
        if (TextUtils.isEmpty(strAllocActivityContainer)) {
            return null;
        }
        PmBase.cleanIntentPluginParams(intent);
        PluginIntent pluginIntent = new PluginIntent(intent);
        pluginIntent.setPlugin(str);
        pluginIntent.setActivity(activityInfo.name);
        pluginIntent.setProcess(Integer.MIN_VALUE);
        pluginIntent.setContainer(strAllocActivityContainer);
        pluginIntent.setCounter(0);
        return new ComponentName(IPC.getPackageName(), strAllocActivityContainer);
    }

    public ComponentName loadPluginService(String str, String str2, int i) {
        PluginBinderInfo pluginBinderInfo = new PluginBinderInfo(2);
        try {
            if (MP.startPluginProcess(str, i, pluginBinderInfo) == null) {
                return null;
            }
            return new ComponentName(IPC.getPackageName(), IPC.getPackageName() + ".loader.s.Service" + pluginBinderInfo.index);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "l.p.p spp: " + th.getMessage(), th);
            return null;
        }
    }

    public Uri loadPluginProvider(String str, String str2, int i) {
        PluginBinderInfo pluginBinderInfo = new PluginBinderInfo(3);
        try {
            if (MP.startPluginProcess(str, i, pluginBinderInfo) == null) {
                return null;
            }
            return new Uri.Builder().scheme("content").encodedAuthority(IPC.getPackageName() + CONTAINER_PROVIDER_AUTHORITY_PART + pluginBinderInfo.index).encodedPath(RePlugin.PLUGIN_NAME_MAIN).build();
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "l.p.p spp: " + th.getMessage(), th);
            return null;
        }
    }

    public String fetchPluginName(ClassLoader classLoader) {
        if (classLoader == this.mContext.getClassLoader()) {
            return RePlugin.PLUGIN_NAME_MAIN;
        }
        Plugin pluginLookupPlugin = this.mPluginMgr.lookupPlugin(classLoader);
        if (pluginLookupPlugin == null) {
            return null;
        }
        return pluginLookupPlugin.mInfo.getName();
    }

    public ActivityInfo getActivityInfo(String str, String str2, Intent intent) {
        Plugin pluginLoadAppPlugin = this.mPluginMgr.loadAppPlugin(str);
        if (pluginLoadAppPlugin == null) {
            if (!LogDebug.LOG) {
                return null;
            }
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: bindActivity: may be invalid plugin name or load plugin failed: plugin=" + pluginLoadAppPlugin);
            return null;
        }
        if (!TextUtils.isEmpty(str2)) {
            return pluginLoadAppPlugin.mLoader.mComponents.getActivity(str2);
        }
        return IntentMatcherHelper.getActivityInfo(this.mContext, str, intent);
    }
}
