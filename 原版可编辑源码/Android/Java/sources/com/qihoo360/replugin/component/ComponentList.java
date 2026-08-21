package com.qihoo360.replugin.component;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.ProviderInfo;
import android.content.pm.ServiceInfo;
import android.os.Environment;
import android.text.TextUtils;
import android.util.Pair;
import com.qihoo360.i.Factory;
import com.qihoo360.mobilesafe.parser.manifest.ManifestParser;
import com.qihoo360.replugin.component.utils.ApkCommentReader;
import com.qihoo360.replugin.component.utils.IntentMatcherHelper;
import com.qihoo360.replugin.ext.parser.ApkParser;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import java.io.File;
import java.io.IOException;
import java.util.HashMap;
import java.util.Set;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ComponentList {
    ApplicationInfo mApplication;
    final HashMap<String, ActivityInfo> mActivities = new HashMap<>();
    final HashMap<String, ProviderInfo> mProvidersByName = new HashMap<>();
    final HashMap<String, ProviderInfo> mProvidersByAuthority = new HashMap<>();
    final HashMap<String, ServiceInfo> mServices = new HashMap<>();
    final HashMap<String, ActivityInfo> mReceivers = new HashMap<>();

    public ComponentList(PackageInfo packageInfo, String str, PluginInfo pluginInfo) throws Throwable {
        this.mApplication = null;
        if (packageInfo.activities != null) {
            for (ActivityInfo activityInfo : packageInfo.activities) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "activity=" + activityInfo.name);
                }
                activityInfo.applicationInfo.sourceDir = str;
                if (activityInfo.processName == null) {
                    activityInfo.processName = activityInfo.applicationInfo.processName;
                }
                if (activityInfo.processName == null) {
                    activityInfo.processName = activityInfo.packageName;
                }
                this.mActivities.put(activityInfo.name, activityInfo);
            }
        }
        if (packageInfo.providers != null) {
            for (ProviderInfo providerInfo : packageInfo.providers) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "provider=" + providerInfo.name + "; auth=" + providerInfo.authority);
                }
                if (providerInfo.processName == null) {
                    providerInfo.processName = providerInfo.applicationInfo.processName;
                }
                if (providerInfo.processName == null) {
                    providerInfo.processName = providerInfo.packageName;
                }
                this.mProvidersByName.put(providerInfo.name, providerInfo);
                this.mProvidersByAuthority.put(providerInfo.authority, providerInfo);
            }
        }
        if (packageInfo.services != null) {
            for (ServiceInfo serviceInfo : packageInfo.services) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "service=" + serviceInfo.name);
                }
                if (serviceInfo.processName == null) {
                    serviceInfo.processName = serviceInfo.applicationInfo.processName;
                }
                if (serviceInfo.processName == null) {
                    serviceInfo.processName = serviceInfo.packageName;
                }
                this.mServices.put(serviceInfo.name, serviceInfo);
            }
        }
        if (packageInfo.receivers != null) {
            for (ActivityInfo activityInfo2 : packageInfo.receivers) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "receiver=" + activityInfo2.name);
                }
                if (activityInfo2.processName == null) {
                    activityInfo2.processName = activityInfo2.applicationInfo.processName;
                }
                if (activityInfo2.processName == null) {
                    activityInfo2.processName = activityInfo2.packageName;
                }
                this.mReceivers.put(activityInfo2.name, activityInfo2);
            }
        }
        String manifestFromApk = getManifestFromApk(str);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "\n解析插件 " + pluginInfo.getName() + " : " + str + "\nAndroidManifest: \n" + manifestFromApk);
        }
        ManifestParser.INS.parse(pluginInfo, manifestFromApk);
        ApplicationInfo applicationInfo = packageInfo.applicationInfo;
        this.mApplication = applicationInfo;
        if (applicationInfo.dataDir == null) {
            this.mApplication.dataDir = Environment.getDataDirectory() + File.separator + "data" + File.separator + this.mApplication.packageName;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "mApplication: " + this.mApplication);
        }
    }

    private static String getManifestFromApk(String str) throws Throwable {
        ApkParser apkParser;
        String manifestXml;
        String comment = ApkCommentReader.readComment(str);
        if (!TextUtils.isEmpty(comment)) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "从 apk comment 中解析 xml:\n " + comment);
            }
            return comment;
        }
        ApkParser apkParser2 = null;
        try {
            try {
                apkParser = new ApkParser(str);
            } catch (Throwable th) {
                th = th;
            }
        } catch (IOException e) {
            e = e;
        }
        try {
            if (LogDebug.LOG) {
                long jCurrentTimeMillis = System.currentTimeMillis();
                manifestXml = apkParser.getManifestXml();
                LogDebug.d(LogDebug.PLUGIN_TAG, "从 apk 中解析 xml 耗时 " + (System.currentTimeMillis() - jCurrentTimeMillis) + " 毫秒");
            } else {
                manifestXml = apkParser.getManifestXml();
            }
            try {
                apkParser.close();
            } catch (IOException e2) {
                e2.printStackTrace();
            }
            return manifestXml;
        } catch (IOException e3) {
            e = e3;
            apkParser2 = apkParser;
            e.printStackTrace();
            if (apkParser2 == null) {
                return "";
            }
            try {
                apkParser2.close();
                return "";
            } catch (IOException e4) {
                e4.printStackTrace();
                return "";
            }
        } catch (Throwable th2) {
            th = th2;
            apkParser2 = apkParser;
            if (apkParser2 != null) {
                try {
                    apkParser2.close();
                } catch (IOException e5) {
                    e5.printStackTrace();
                }
            }
            throw th;
        }
    }

    public ServiceInfo getService(String str) {
        return this.mServices.get(str);
    }

    public ServiceInfo[] getServices() {
        return (ServiceInfo[]) this.mServices.values().toArray(new ServiceInfo[0]);
    }

    public ActivityInfo getActivity(String str) {
        return this.mActivities.get(str);
    }

    public ActivityInfo[] getActivities() {
        return (ActivityInfo[]) this.mActivities.values().toArray(new ActivityInfo[0]);
    }

    public ActivityInfo getReveiver(String str) {
        return this.mReceivers.get(str);
    }

    public ActivityInfo[] getReceivers() {
        return (ActivityInfo[]) this.mReceivers.values().toArray(new ActivityInfo[0]);
    }

    public Pair<ServiceInfo, String> getServiceAndPluginByIntent(Context context, Intent intent) {
        Set<String> pluginsByActionWhenStartService;
        String action = intent.getAction();
        if (TextUtils.isEmpty(action) || (pluginsByActionWhenStartService = ManifestParser.INS.getPluginsByActionWhenStartService(action)) == null) {
            return null;
        }
        for (String str : pluginsByActionWhenStartService) {
            ServiceInfo serviceInfoQueryServiceInfo = Factory.queryServiceInfo(str, IntentMatcherHelper.doMatchIntent(context, intent, ManifestParser.INS.getServiceFilterMap(str)));
            if (serviceInfoQueryServiceInfo != null) {
                return new Pair<>(serviceInfoQueryServiceInfo, str);
            }
        }
        return null;
    }

    public ProviderInfo getProvider(String str) {
        return this.mProvidersByName.get(str);
    }

    public ProviderInfo getProviderByAuthority(String str) {
        return this.mProvidersByAuthority.get(str);
    }

    public ProviderInfo[] getProviders() {
        return (ProviderInfo[]) this.mProvidersByName.values().toArray(new ProviderInfo[0]);
    }

    public ApplicationInfo getApplication() {
        return this.mApplication;
    }

    public HashMap<String, ActivityInfo> getActivityMap() {
        return this.mActivities;
    }

    public HashMap<String, ServiceInfo> getServiceMap() {
        return this.mServices;
    }

    public HashMap<String, ActivityInfo> getReceiverMap() {
        return this.mReceivers;
    }

    public HashMap<String, ProviderInfo> getProviderMap() {
        return this.mProvidersByAuthority;
    }
}
