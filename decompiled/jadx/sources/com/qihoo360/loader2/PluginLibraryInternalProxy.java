package com.qihoo360.loader2;

import android.R;
import android.app.Activity;
import android.app.Service;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import com.qihoo360.i.Factory;
import com.qihoo360.i.Factory2;
import com.qihoo360.i.IPluginManager;
import com.qihoo360.loader2.PluginContainers;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.compat.CompatConfig;
import com.qihoo360.replugin.component.activity.ActivityInjector;
import com.qihoo360.replugin.helper.HostConfigHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.ReflectUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import org.json.JSONArray;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginLibraryInternalProxy {
    PmBase mPluginMgr;

    PluginLibraryInternalProxy(PmBase pmBase) {
        this.mPluginMgr = pmBase;
    }

    public boolean startActivity(Context context, Intent intent) {
        ComponentName component;
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "start context: intent=" + intent);
        }
        if (intent.getBooleanExtra(IPluginManager.KEY_COMPATIBLE, false)) {
            PmBase.cleanIntentPluginParams(intent);
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "start context: COMPATIBLE is true, direct start");
            }
            return false;
        }
        String stringExtra = intent.getStringExtra("activity");
        if (TextUtils.isEmpty(stringExtra) && (component = intent.getComponent()) != null) {
            stringExtra = component.getClassName();
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "start context: custom context=" + context);
            }
        }
        if (this.mPluginMgr.isActivity(stringExtra)) {
            PmBase.cleanIntentPluginParams(intent);
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "start context: context is container, direct start");
            }
            return false;
        }
        String stringExtra2 = intent.getStringExtra(IPluginManager.KEY_PLUGIN);
        ComponentName component2 = intent.getComponent();
        if (component2 != null) {
            if (LogDebug.LOG) {
                LogDebug.d("loadClass", "isHookingClass(" + stringExtra2 + Constants.ACCEPT_TIME_SEPARATOR_SP + component2.getClassName() + ") = " + isDynamicClass(stringExtra2, component2.getClassName()));
            }
            if (isDynamicClass(stringExtra2, component2.getClassName())) {
                intent.putExtra(IPluginManager.KEY_COMPATIBLE, true);
                intent.setComponent(new ComponentName(IPC.getPackageName(), component2.getClassName()));
                context.startActivity(intent);
                return false;
            }
        }
        if (TextUtils.isEmpty(stringExtra2)) {
            if (context instanceof Activity) {
                stringExtra2 = fetchPluginByPitActivity((Activity) context);
            }
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "start context: custom plugin is empty, query plugin=" + stringExtra2);
            }
        }
        if (TextUtils.isEmpty(stringExtra2)) {
            stringExtra2 = RePlugin.fetchPluginNameByClassLoader(context.getClassLoader());
        }
        if (TextUtils.isEmpty(stringExtra2)) {
            PmBase.cleanIntentPluginParams(intent);
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "start context: plugin and context is empty, direct start");
            }
            return false;
        }
        int intExtra = intent.getIntExtra(IPluginManager.KEY_PROCESS, Integer.MIN_VALUE);
        PmBase.cleanIntentPluginParams(intent);
        return Factory.startActivityWithNoInjectCN(context, intent, stringExtra2, stringExtra, intExtra);
    }

    private String fetchPluginByPitActivity(Activity activity) {
        PluginContainers.ActivityState activityStateLookupByContainer = activity.getComponentName() != null ? this.mPluginMgr.mClient.mACM.lookupByContainer(activity.getComponentName().getClassName()) : null;
        if (activityStateLookupByContainer != null) {
            return activityStateLookupByContainer.plugin;
        }
        return null;
    }

    public boolean startActivity(Context context, Intent intent, String str, String str2, int i, boolean z) {
        PluginDesc pluginDesc;
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "start activity: intent=" + intent + " plugin=" + str + " activity=" + str2 + " process=" + i + " download=" + z);
        }
        if (z && PluginTable.getPluginInfo(str) == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "plugin=" + str + " not found, start download ...");
            }
            if (isNeedToDownload(context, str, false)) {
                return RePlugin.getConfig().getCallbacks().onPluginNotExistsForActivity(context, str, intent, i);
            }
        }
        if (LogDebug.LOG) {
            LogDebug.d("loadClass", "isHookingClass(" + str + " , " + str2 + ") = " + Factory2.isDynamicClass(str, str2));
        }
        if (Factory2.isDynamicClass(str, str2)) {
            intent.putExtra(IPluginManager.KEY_COMPATIBLE, true);
            intent.setComponent(new ComponentName(IPC.getPackageName(), str2));
            context.startActivity(intent);
            return true;
        }
        if (PluginStatusController.getStatus(str) < 0) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PluginLibraryInternalProxy.startActivity(): Plugin Disabled. pn=" + str);
            }
            return RePlugin.getConfig().getCallbacks().onPluginNotExistsForActivity(context, str, intent, i);
        }
        if (!RePlugin.isPluginDexExtracted(str) && (pluginDesc = PluginDesc.get(str)) != null && pluginDesc.isLarge()) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PM.startActivity(): Large Plugin! p=" + str);
            }
            return RePlugin.getConfig().getCallbacks().onLoadLargePluginForActivity(context, str, intent, i);
        }
        Intent intent2 = new Intent(intent);
        if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
            intent2.setComponent(new ComponentName(str, str2));
        }
        ComponentName componentNameLoadPluginActivity = this.mPluginMgr.mLocal.loadPluginActivity(intent, str, str2, i);
        if (componentNameLoadPluginActivity == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "plugin cn not found: intent=" + intent + " plugin=" + str + " activity=" + str2 + " process=" + i);
            }
            return false;
        }
        intent.setComponent(componentNameLoadPluginActivity);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "start activity: real intent=" + intent);
        }
        context.startActivity(intent);
        RePlugin.getConfig().getEventCallbacks().onPrepareStartPitActivity(context, intent2, intent);
        return true;
    }

    public boolean startActivityForResult(Activity activity, Intent intent, int i, Bundle bundle) {
        ComponentName component;
        ComponentName componentNameLoadPluginActivity;
        String pluginName = getPluginName(activity, intent);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "start activity with startActivityForResult: intent=" + intent);
        }
        if (TextUtils.isEmpty(pluginName) || (component = intent.getComponent()) == null || (componentNameLoadPluginActivity = Factory.loadPluginActivity(intent, pluginName, component.getClassName(), Integer.MIN_VALUE)) == null) {
            return false;
        }
        intent.setComponent(componentNameLoadPluginActivity);
        if (Build.VERSION.SDK_INT >= 16) {
            activity.startActivityForResult(intent, i, bundle);
            return true;
        }
        activity.startActivityForResult(intent, i);
        return true;
    }

    private static String getPluginName(Activity activity, Intent intent) {
        String packageName = intent.getComponent() != null ? intent.getComponent().getPackageName() : "";
        return (TextUtils.isEmpty(packageName) || packageName.contains(".")) ? RePlugin.fetchPluginNameByClassLoader(activity.getClassLoader()) : packageName;
    }

    private boolean isNeedToDownload(Context context, String str, boolean z) {
        File file = new File(RePlugin.getConfig().getPnInstallDir(), V5FileInfo.getFileName(str));
        if (!file.exists()) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "isNeedToDownload(): V5 file not exists. Plugin = " + str);
            }
            return true;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "isNeedToDownload(): V5 file exists. Extracting... Plugin = " + str);
        }
        if (MP.pluginDownloaded(file.getAbsolutePath(), z) == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "isNeedToDownload(): V5 file is invalid. Plugin = " + str);
            }
            return true;
        }
        if (!LogDebug.LOG) {
            return false;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "isNeedToDownload(): V5 file is Okay. Loading... Plugin = " + str);
        return false;
    }

    public Context createActivityContext(Activity activity, Context context) {
        Plugin pluginLookupPlugin = this.mPluginMgr.lookupPlugin(activity.getClass().getClassLoader());
        if (pluginLookupPlugin == null) {
            if (!LogDebug.LOG) {
                return null;
            }
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: createActivityContext: can't found plugin object for activity=" + activity.getClass().getName());
            return null;
        }
        return pluginLookupPlugin.mLoader.createBaseContext(context);
    }

    public void handleActivityCreateBefore(Activity activity, Bundle bundle) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "activity create before: " + activity.getClass().getName() + " this=" + activity.hashCode() + " taskid=" + activity.getTaskId());
        }
        if (bundle != null) {
            bundle.setClassLoader(activity.getClassLoader());
            try {
                bundle.remove("android:support:fragments");
            } catch (Throwable th) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "a.c.b1: " + th.getMessage(), th);
            }
        }
        Intent intent = activity.getIntent();
        if (intent != null) {
            intent.setExtrasClassLoader(activity.getClassLoader());
            activity.setTheme(getThemeId(activity, intent));
        }
    }

    public void handleActivityCreate(Activity activity, Bundle bundle) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "activity create: " + activity.getClass().getName() + " this=" + activity.hashCode() + " taskid=" + activity.getTaskId());
        }
        if (activity.getIntent() != null) {
            try {
                Intent intent = new Intent(activity.getIntent());
                PluginIntent pluginIntent = new PluginIntent(intent);
                String plugin = pluginIntent.getPlugin();
                String activity2 = pluginIntent.getActivity();
                int process = pluginIntent.getProcess();
                String container = pluginIntent.getContainer();
                int counter = pluginIntent.getCounter();
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "activity create: name=" + plugin + " activity=" + activity2 + " process=" + process + " container=" + container + " counter=" + counter);
                }
                if (!TextUtils.equals(activity2, activity.getClass().getName())) {
                    LogRelease.w(LogDebug.PLUGIN_TAG, "a.c.1: a=" + activity2 + " l=" + activity.getClass().getName());
                    PMF.forward(activity, intent);
                    return;
                }
                if (LogDebug.LOG) {
                    LogDebug.i(LogDebug.PLUGIN_TAG, "perfect: container=" + container + " plugin=" + plugin + " activity=" + activity2);
                }
            } catch (Throwable th) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "a.c.2: exception: " + th.getMessage(), th);
            }
        }
        PluginContainers.ActivityState activityStateLookupByContainer = activity.getComponentName() != null ? this.mPluginMgr.mClient.mACM.lookupByContainer(activity.getComponentName().getClassName()) : null;
        if (activityStateLookupByContainer == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "a.c1: l=" + activity.getClass().getName());
            return;
        }
        this.mPluginMgr.mClient.mACM.handleCreate(activityStateLookupByContainer.plugin, activity, activityStateLookupByContainer.container);
        try {
            PluginProcessMain.getPluginHost().regActivity(PluginManager.sPluginProcessIndex, activityStateLookupByContainer.plugin, activityStateLookupByContainer.container, activity.getClass().getName());
        } catch (Throwable th2) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "a.c2: " + th2.getMessage(), th2);
        }
        if (bundle != null) {
            bundle.setClassLoader(activity.getClassLoader());
        }
        Intent intent2 = activity.getIntent();
        if (intent2 != null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "set activity intent cl=" + activity.getClassLoader());
            }
            intent2.setExtrasClassLoader(activity.getClassLoader());
        }
        ActivityInjector.inject(activity, activityStateLookupByContainer.plugin, activityStateLookupByContainer.activity);
    }

    public void handleRestoreInstanceState(Activity activity, Bundle bundle) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "activity restore instance state: " + activity.getClass().getName());
        }
        if (bundle != null) {
            bundle.setClassLoader(activity.getClassLoader());
            Set<String> setKeySet = bundle.keySet();
            if (setKeySet != null) {
                Iterator<String> it = setKeySet.iterator();
                while (it.hasNext()) {
                    Object obj = bundle.get(it.next());
                    if (obj instanceof Bundle) {
                        ((Bundle) obj).setClassLoader(activity.getClassLoader());
                    }
                }
            }
        }
    }

    public void handleActivityDestroy(Activity activity) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "activity destroy: " + activity.getClass().getName() + " this=" + activity.hashCode() + " taskid=" + activity.getTaskId());
        }
        this.mPluginMgr.mClient.mACM.handleDestroy(activity);
        PluginContainers.ActivityState activityStateLookupByContainer = activity.getComponentName() != null ? this.mPluginMgr.mClient.mACM.lookupByContainer(activity.getComponentName().getClassName()) : null;
        if (activityStateLookupByContainer == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "p a h a d c f p a " + activity.getClass().getName());
            return;
        }
        try {
            PluginProcessMain.getPluginHost().unregActivity(PluginManager.sPluginProcessIndex, activityStateLookupByContainer.plugin, activityStateLookupByContainer.container, activity.getClass().getName());
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "ur.a: " + th.getMessage(), th);
        }
        RePlugin.getConfig().getEventCallbacks().onActivityDestroyed(activity);
    }

    public void handleServiceCreate(Service service) {
        this.mPluginMgr.handleServiceCreated(service);
    }

    public void handleServiceDestroy(Service service) {
        this.mPluginMgr.handleServiceDestroyed(service);
    }

    public JSONArray fetchPlugins(String str) {
        List<PluginInfo> plugins = MP.getPlugins(false);
        JSONArray jSONArray = new JSONArray();
        synchronized (PluginTable.PLUGINS) {
            for (PluginInfo pluginInfo : plugins) {
                if (TextUtils.isEmpty(str) || TextUtils.equals(pluginInfo.getName(), str)) {
                    jSONArray.put(pluginInfo.getJSON());
                }
            }
        }
        return jSONArray;
    }

    public boolean registerDynamicClass(String str, String str2, String str3, String str4) {
        return this.mPluginMgr.addDynamicClass(str, str2, str3, str4, null);
    }

    public boolean registerDynamicClass(String str, String str2, String str3, Class cls) {
        return this.mPluginMgr.addDynamicClass(str, str2, "", str3, cls);
    }

    public boolean isDynamicClass(String str, String str2) {
        return this.mPluginMgr.isDynamicClass(str, str2);
    }

    public void unregisterDynamicClass(String str) {
        this.mPluginMgr.removeDynamicClass(str);
    }

    public String getPluginByDynamicClass(String str) {
        return this.mPluginMgr.getPluginByDynamicClass(str);
    }

    private int getDynamicThemeId(Activity activity) {
        try {
            return ((Integer) ReflectUtils.invokeMethod(activity.getClassLoader(), "android.view.ContextThemeWrapper", "getThemeResId", activity, null, new Object[0])).intValue();
        } catch (Exception e) {
            e.printStackTrace();
            return -1;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x006c  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x006e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private int getThemeId(android.app.Activity r5, android.content.Intent r6) {
        /*
            r4 = this;
            int r0 = r4.getDynamicThemeId(r5)
            java.lang.String r1 = "__themeId"
            r2 = 0
            int r6 = r6.getIntExtra(r1, r2)
            if (r6 != 0) goto L13
            android.content.pm.ApplicationInfo r5 = r5.getApplicationInfo()
            int r6 = r5.theme
        L13:
            int r5 = getDefaultThemeId()
            boolean r1 = com.qihoo360.loader2.LaunchModeStates.isTranslucentTheme(r6)
            if (r1 == 0) goto L20
            r5 = 16973840(0x1030010, float:2.4060945E-38)
        L20:
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r2 = "theme"
            if (r1 == 0) goto L62
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "defaultThemeId = "
            r1.append(r3)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "dynamicThemeId = "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "manifestThemeId = "
            r1.append(r3)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L62:
            r1 = -1
            if (r0 == r1) goto L6a
            if (r0 != r5) goto L6f
            if (r6 == 0) goto L6e
            goto L6c
        L6a:
            if (r6 == 0) goto L6e
        L6c:
            r0 = r6
            goto L6f
        L6e:
            r0 = r5
        L6f:
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L87
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "themeId = "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L87:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.loader2.PluginLibraryInternalProxy.getThemeId(android.app.Activity, android.content.Intent):int");
    }

    private static int getDefaultThemeId() {
        if (!HostConfigHelper.ACTIVITY_PIT_USE_APPCOMPAT) {
            return R.style.Theme.NoTitleBar;
        }
        try {
            return ((Integer) ReflectUtils.readStaticField(ReflectUtils.getClass(CompatConfig.DEPENDENCY_ANDROIDX ? "androidx.appcompat.R$style" : "android.support.v7.appcompat.R$style"), "Theme_AppCompat")).intValue();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
            return R.style.Theme.NoTitleBar;
        } catch (IllegalAccessException e2) {
            e2.printStackTrace();
            return R.style.Theme.NoTitleBar;
        } catch (NoSuchFieldException e3) {
            e3.printStackTrace();
            return R.style.Theme.NoTitleBar;
        }
    }
}
