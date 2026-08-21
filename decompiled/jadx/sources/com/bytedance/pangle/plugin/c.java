package com.bytedance.pangle.plugin;

import android.content.ComponentCallbacks;
import android.content.pm.ActivityInfo;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.ProviderInfo;
import android.content.pm.ServiceInfo;
import android.content.res.Configuration;
import android.text.TextUtils;
import com.bytedance.pangle.ComponentManager;
import com.bytedance.pangle.PluginClassLoader;
import com.bytedance.pangle.Zeus;
import com.bytedance.pangle.ZeusApplication;
import com.bytedance.pangle.ZeusPluginStateListener;
import com.bytedance.pangle.a.a;
import com.bytedance.pangle.c.b;
import com.bytedance.pangle.d.e;
import com.bytedance.pangle.e.g;
import com.bytedance.pangle.h;
import com.bytedance.pangle.log.ZeusLogger;
import com.bytedance.pangle.provider.ContentProviderManager;
import com.bytedance.pangle.res.PluginResources;
import com.bytedance.pangle.transform.ZeusTransformUtils;
import com.bytedance.pangle.util.FieldUtils;
import com.bytedance.pangle.util.MethodUtils;
import com.bytedance.pangle.util.i;
import com.bytedance.pangle.wrapper.PluginApplicationWrapper;
import com.qihoo360.loader2.PluginIntent;
import com.qihoo360.replugin.RePlugin;
import com.tkay.expressad.foundation.d.r;
import com.xiaomi.mipush.sdk.Constants;
import dalvik.system.BaseDexClassLoader;
import java.io.File;
import java.io.IOException;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final h f1566a = h.a();

    c() {
    }

    final boolean a(String str) {
        Plugin plugin = PluginManager.getInstance().getPlugin(str);
        if (plugin == null) {
            ZeusLogger.w(ZeusLogger.TAG_LOAD, "PluginLoader loadPlugin, plugin == null, pkg = ".concat(String.valueOf(str)));
            return false;
        }
        synchronized (plugin) {
            if (!plugin.isInstalled()) {
                ZeusLogger.w(ZeusLogger.TAG_LOAD, "PluginLoader loadPlugin, UN_INSTALLED, ".concat(String.valueOf(str)));
                return false;
            }
            if (plugin.isLoaded()) {
                return true;
            }
            f1566a.a(2000, 0, plugin.mPkgName, plugin.getVersion(), null);
            com.bytedance.pangle.log.a aVarA = com.bytedance.pangle.log.a.a(ZeusLogger.TAG_LOAD, "PluginLoader", "loadPlugin:".concat(String.valueOf(str)));
            a(com.bytedance.pangle.c.b.g, b.a.z, plugin.mPkgName, plugin.getVersion(), -1L, (String) null);
            ZeusPluginStateListener.postStateChange(str, 8, new Object[0]);
            StringBuilder sb = new StringBuilder();
            boolean zA = a(str, plugin, sb);
            aVarA.a("loadPluginInternal:".concat(String.valueOf(zA)));
            if (zA) {
                plugin.setLifeCycle(3);
                a(com.bytedance.pangle.c.b.h, b.a.A, plugin.mPkgName, plugin.getVersion(), aVarA.a(), sb.toString());
                ZeusPluginStateListener.postStateChange(str, 9, new Object[0]);
                f1566a.a(2100, 0, plugin.mPkgName, plugin.getVersion(), null);
            } else {
                sb.append(PluginIntent.EXTRA_PLUGIN);
                sb.append(plugin.mPkgName);
                sb.append(" versionCode:");
                sb.append(plugin.getVersion());
                sb.append("load failed;");
                a(com.bytedance.pangle.c.b.h, b.a.B, plugin.mPkgName, plugin.getVersion(), -1L, sb.toString());
                ZeusPluginStateListener.postStateChange(str, 10, new Object[0]);
                f1566a.a(2100, -1, plugin.mPkgName, plugin.getVersion(), null);
            }
            ZeusLogger.i(ZeusLogger.TAG_LOAD, "PluginLoader loadFinished, ".concat(String.valueOf(plugin)));
            if (!plugin.isLoaded()) {
                return false;
            }
            ZeusLogger.d(ZeusLogger.TAG_LOAD, "PluginLoader postResult, LOADED " + plugin.mPkgName);
            return true;
        }
    }

    private boolean a(final String str, final Plugin plugin, final StringBuilder sb) {
        final PackageInfo[] packageInfoArr;
        try {
            if (plugin == null) {
                sb.append("loadPluginInternal, plugin == null;");
                ZeusLogger.w(ZeusLogger.TAG_LOAD, "PluginLoader loadPluginInternal, plugin[" + str + "] not exist !!!");
                return false;
            }
            if (!plugin.isInstalled()) {
                sb.append("loadPluginInternal, !plugin.isInstalled();");
                ZeusLogger.w(ZeusLogger.TAG_LOAD, "PluginLoader loadPluginInternal, plugin[" + str + "] not installed !!!");
                return false;
            }
            final String strB = com.bytedance.pangle.d.c.b(plugin.mPkgName, plugin.getVersion());
            if (!new File(strB).exists()) {
                sb.append("loadPluginInternal, sourceApk not exist;");
                ZeusLogger.w(ZeusLogger.TAG_LOAD, "PluginLoader loadPluginInternal, plugin[" + str + "] file not exist !!!");
                return false;
            }
            final File file = new File(com.bytedance.pangle.d.c.d(plugin.mPkgName, plugin.getVersion()));
            File file2 = new File(com.bytedance.pangle.d.c.c(plugin.mPkgName, plugin.getVersion()));
            if (i.d()) {
                if (!com.bytedance.pangle.e.b.a(file2 + File.separator + com.bytedance.pangle.e.b.a(strB))) {
                    file2 = null;
                }
            }
            final File file3 = file2;
            if (file3 != null && !file3.exists()) {
                file3.mkdirs();
            }
            PackageInfo[] packageInfoArr2 = new PackageInfo[1];
            if (i.j()) {
                packageInfoArr = packageInfoArr2;
                com.bytedance.pangle.a.a.a(new a.InterfaceC0052a() { // from class: com.bytedance.pangle.plugin.c.1
                    @Override // com.bytedance.pangle.a.a.InterfaceC0052a
                    public final void a() throws IllegalAccessException, IOException {
                        c.this.a(plugin, strB, file, file3, sb);
                    }
                }, new a.InterfaceC0052a() { // from class: com.bytedance.pangle.plugin.c.2
                    @Override // com.bytedance.pangle.a.a.InterfaceC0052a
                    public final void a() {
                        packageInfoArr[0] = c.this.a(str, plugin, sb, strB, file);
                    }
                });
            } else {
                packageInfoArr = packageInfoArr2;
                a(plugin, strB, file, file3, sb);
                packageInfoArr[0] = a(str, plugin, sb, strB, file);
            }
            a(plugin, sb, packageInfoArr[0]);
            return true;
        } catch (Throwable th) {
            sb.append("loadPluginInternal ");
            sb.append(th.getMessage());
            sb.append(";");
            ZeusLogger.w(ZeusLogger.TAG_LOAD, "PluginLoader loadPluginInternal, plugin[" + str + "] ", th);
            return false;
        }
    }

    private static void a(Plugin plugin, StringBuilder sb, PackageInfo packageInfo) {
        ActivityInfo[] activityInfoArr = packageInfo.activities;
        if (activityInfoArr != null) {
            for (ActivityInfo activityInfo : activityInfoArr) {
                if (TextUtils.isEmpty(activityInfo.processName) || !activityInfo.processName.contains(Constants.COLON_SEPARATOR)) {
                    activityInfo.processName = RePlugin.PLUGIN_NAME_MAIN;
                } else {
                    activityInfo.processName = activityInfo.processName.split(Constants.COLON_SEPARATOR)[1];
                }
                plugin.pluginActivities.put(activityInfo.name, activityInfo);
            }
        }
        ServiceInfo[] serviceInfoArr = packageInfo.services;
        if (serviceInfoArr != null) {
            for (ServiceInfo serviceInfo : serviceInfoArr) {
                if (TextUtils.isEmpty(serviceInfo.processName) || !serviceInfo.processName.contains(Constants.COLON_SEPARATOR)) {
                    serviceInfo.processName = RePlugin.PLUGIN_NAME_MAIN;
                } else {
                    serviceInfo.processName = serviceInfo.processName.split(Constants.COLON_SEPARATOR)[1];
                }
                plugin.pluginServices.put(serviceInfo.name, serviceInfo);
            }
        }
        ActivityInfo[] activityInfoArr2 = packageInfo.receivers;
        if (activityInfoArr2 != null) {
            for (ActivityInfo activityInfo2 : activityInfoArr2) {
                if (TextUtils.isEmpty(activityInfo2.processName) || !activityInfo2.processName.contains(Constants.COLON_SEPARATOR)) {
                    activityInfo2.processName = RePlugin.PLUGIN_NAME_MAIN;
                } else {
                    activityInfo2.processName = activityInfo2.processName.split(Constants.COLON_SEPARATOR)[1];
                }
                plugin.pluginReceiver.put(activityInfo2.name, activityInfo2);
            }
        }
        ProviderInfo[] providerInfoArr = packageInfo.providers;
        if (providerInfoArr != null) {
            for (ProviderInfo providerInfo : providerInfoArr) {
                if (TextUtils.isEmpty(providerInfo.processName) || !providerInfo.processName.contains(Constants.COLON_SEPARATOR)) {
                    providerInfo.processName = RePlugin.PLUGIN_NAME_MAIN;
                } else {
                    providerInfo.processName = providerInfo.processName.split(Constants.COLON_SEPARATOR)[1];
                }
                plugin.pluginProvider.put(providerInfo.name, providerInfo);
            }
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (plugin.pluginProvider != null && plugin.pluginProvider.size() > 0) {
            ContentProviderManager.getInstance().installContentProviders(plugin.pluginProvider.values(), plugin);
        }
        sb.append("installProvider cost:");
        sb.append(System.currentTimeMillis() - jCurrentTimeMillis);
        sb.append(";");
        long jCurrentTimeMillis2 = System.currentTimeMillis();
        if (!TextUtils.isEmpty(packageInfo.applicationInfo.className)) {
            plugin.mApplication = (ZeusApplication) plugin.mClassLoader.loadClass(packageInfo.applicationInfo.className).newInstance();
            plugin.mApplication.attach(plugin, Zeus.getAppApplication());
        }
        sb.append("makeApplication cost:");
        sb.append(System.currentTimeMillis() - jCurrentTimeMillis2);
        sb.append(";");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public PackageInfo a(String str, final Plugin plugin, StringBuilder sb, String str2, File file) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        PackageInfo packageArchiveInfo = Zeus.getAppApplication().getPackageManager().getPackageArchiveInfo(str2, 143);
        plugin.mHostApplication = (PluginApplicationWrapper) ZeusTransformUtils.wrapperContext2Application(Zeus.getAppApplication(), plugin.mPkgName);
        plugin.mHostApplicationInfoHookSomeField = new ApplicationInfo(Zeus.getAppApplication().getApplicationInfo());
        plugin.mHostApplicationInfoHookSomeField.nativeLibraryDir = file.getAbsolutePath();
        plugin.mHostApplicationInfoHookSomeField.dataDir = plugin.mHostApplication.getDataDir().getAbsolutePath();
        plugin.mHostApplicationInfoHookSomeField.sourceDir = str2;
        if (TextUtils.isEmpty(packageArchiveInfo.applicationInfo.sourceDir)) {
            packageArchiveInfo.applicationInfo.sourceDir = str2;
        }
        if (TextUtils.isEmpty(packageArchiveInfo.applicationInfo.publicSourceDir)) {
            packageArchiveInfo.applicationInfo.publicSourceDir = str2;
        }
        plugin.mResources = new PluginResources(Zeus.getAppApplication().getPackageManager().getResourcesForApplication(packageArchiveInfo.applicationInfo), str);
        Zeus.getAppApplication().registerComponentCallbacks(new ComponentCallbacks() { // from class: com.bytedance.pangle.plugin.c.3
            @Override // android.content.ComponentCallbacks
            public final void onLowMemory() {
            }

            @Override // android.content.ComponentCallbacks
            public final void onConfigurationChanged(Configuration configuration) {
                plugin.mResources.updateConfiguration(configuration, Zeus.getAppApplication().getResources().getDisplayMetrics());
            }
        });
        sb.append("makeResources cost:");
        sb.append(System.currentTimeMillis() - jCurrentTimeMillis);
        sb.append(";");
        return packageArchiveInfo;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(final Plugin plugin, String str, File file, File file2, StringBuilder sb) throws IllegalAccessException, IOException {
        long jCurrentTimeMillis = System.currentTimeMillis();
        a(plugin, str, file, file2);
        sb.append("classLoader cost:");
        sb.append(System.currentTimeMillis() - jCurrentTimeMillis);
        sb.append(" ;");
        if (plugin.mOpenLoadClassOpt) {
            e.a(new Runnable() { // from class: com.bytedance.pangle.plugin.c.4
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        plugin.mClassLoader.setAllPluginClasses((HashSet) MethodUtils.invokeStaticMethod(plugin.mClassLoader.loadClass("com.volcengine.PluginClassHolder"), "getPluginClasses", new Object[0]));
                    } catch (Throwable unused) {
                    }
                }
            });
        }
        long jCurrentTimeMillis2 = System.currentTimeMillis();
        try {
            String str2 = (String) FieldUtils.readStaticField(plugin.mClassLoader.loadClass("com.volcengine.StubConfig"), "actStubV1");
            if (str2 != null) {
                a(plugin, str2);
            }
        } catch (ClassNotFoundException unused) {
        } catch (Throwable th) {
            sb.append("actStubV1 cost:");
            sb.append(System.currentTimeMillis() - jCurrentTimeMillis2);
            sb.append(";");
            throw th;
        }
        sb.append("actStubV1 cost:");
        sb.append(System.currentTimeMillis() - jCurrentTimeMillis2);
        sb.append(";");
    }

    private static void a(Plugin plugin, String str) {
        JSONObject jSONObjectOptJSONObject;
        if (TextUtils.isEmpty(str)) {
            return;
        }
        JSONObject jSONObject = new JSONObject(str);
        JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject("mapping");
        HashMap map = new HashMap();
        if (jSONObjectOptJSONObject2 != null) {
            Iterator<String> itKeys = jSONObjectOptJSONObject2.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                map.put(next, jSONObjectOptJSONObject2.getString(next));
            }
        }
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("forceMappings");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                JSONObject jSONObject2 = jSONArrayOptJSONArray.getJSONObject(i);
                int iOptInt = jSONObject2.optInt("minApi", 0);
                int iOptInt2 = jSONObject2.optInt("maxApi", Integer.MAX_VALUE);
                int apiVersionCode = plugin.getApiVersionCode();
                if (apiVersionCode <= iOptInt2 && apiVersionCode >= iOptInt && (jSONObjectOptJSONObject = jSONObject2.optJSONObject("mapping")) != null) {
                    Iterator<String> itKeys2 = jSONObjectOptJSONObject.keys();
                    while (itKeys2.hasNext()) {
                        String next2 = itKeys2.next();
                        map.put(next2, jSONObjectOptJSONObject.getString(next2));
                    }
                }
            }
        }
        for (String str2 : map.keySet()) {
            String str3 = (String) map.get(str2);
            String str4 = plugin.mPkgName;
            StringBuilder sb = new StringBuilder();
            sb.append((str3 == null || !str3.contains(".")) ? plugin.mPkgName + "." : "");
            sb.append((String) map.get(str2));
            ComponentManager.registerActivity(str4, sb.toString(), str2);
        }
    }

    private static void a(String str, int i, String str2, int i2, long j, String str3) {
        JSONObject jSONObject = new JSONObject();
        JSONObject jSONObject2 = new JSONObject();
        JSONObject jSONObject3 = new JSONObject();
        try {
            jSONObject.putOpt("status_code", com.bytedance.pangle.log.b.a(Integer.valueOf(i)));
            jSONObject.putOpt("plugin_package_name", com.bytedance.pangle.log.b.a(str2));
            jSONObject.putOpt("version_code", com.bytedance.pangle.log.b.a(Integer.valueOf(i2)));
            jSONObject3.putOpt(r.ag, Integer.valueOf(com.bytedance.pangle.log.b.b(Long.valueOf(j))));
            jSONObject2.putOpt("message", com.bytedance.pangle.log.b.a(str3));
        } catch (JSONException e) {
            e.printStackTrace();
        }
        com.bytedance.pangle.c.b.a().a(str, jSONObject, jSONObject3, jSONObject2);
    }

    private static void a(Object obj, String str) {
        try {
            MethodUtils.getAccessibleMethod(BaseDexClassLoader.class, "addDexPath", String.class).invoke(obj, str);
            ZeusLogger.i(ZeusLogger.TAG_LOAD, "PluginLoader createPluginClassLoader#addDexPath success >>>".concat(String.valueOf(str)));
        } catch (Throwable th) {
            ZeusLogger.errReport(ZeusLogger.TAG_LOAD, "PluginLoader createPluginClassLoader#addDexPath fail >>>".concat(String.valueOf(str)), th);
        }
    }

    private static void a(Plugin plugin, String str, File file, File file2) throws IllegalAccessException, IOException {
        if (i.j()) {
            plugin.mClassLoader = new PluginClassLoader("", file2, file.getAbsolutePath(), null);
            a(plugin.mClassLoader, str);
            return;
        }
        if (i.b()) {
            String strA = g.a(plugin.mPkgName, plugin.getVersion());
            String[] strArrSplit = strA.split(Constants.COLON_SEPARATOR);
            long jCurrentTimeMillis = System.currentTimeMillis();
            boolean z = !com.bytedance.pangle.e.b.a(file2.getAbsolutePath(), strArrSplit);
            ZeusLogger.d(ZeusLogger.TAG_LOAD, "useDirect:" + (System.currentTimeMillis() - jCurrentTimeMillis) + " " + z);
            plugin.mClassLoader = new PluginClassLoader(z ? "" : strA, file2, file.getAbsolutePath(), null);
            if (z) {
                com.bytedance.pangle.dex.a.a(plugin.mClassLoader, plugin.mPkgName, plugin.getVersion());
                return;
            }
            return;
        }
        plugin.mClassLoader = new PluginClassLoader(str, file2, file.getAbsolutePath(), null);
    }
}
