package com.ymnsdk.replugin;

import android.content.Context;
import android.content.Intent;
import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import com.ymnsdk.replugin.listener.AllowStartPluginListener;
import com.ymnsdk.replugin.listener.ClearDownloadCacheListener;
import com.ymnsdk.replugin.listener.GetPluginsStatusInfoListener;
import com.ymnsdk.replugin.listener.InstallPluginStatusListener;
import com.ymnsdk.replugin.listener.IsInstallPluginStatusListener;
import com.ymnsdk.replugin.listener.OpenListener;
import com.ymnsdk.replugin.listener.PluginExitListener;
import com.ymnsdk.replugin.listener.PreloadListener;
import com.ymnsdk.replugin.listener.QueryPluginStatusListener;
import com.ymnsdk.replugin.listener.StartPluginStatusListener;
import com.ymnsdk.replugin.listener.UnInstallPluginStatusListener;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class RePluginSdk {
    private static PluginInterface pluginInterface = new PluginInterface();

    public void setPluginInterface(PluginInterface pluginInterface2) {
        pluginInterface = pluginInterface2;
    }

    public PluginInterface getPluginInterface() {
        return pluginInterface;
    }

    public static void onCreate(Context context) {
        pluginInterface.onCreate(context);
        UtilsSdk.initContext(context);
    }

    public static void onNewIntent(Intent intent) {
        pluginInterface.onNewIntent(intent);
    }

    public static void getPluginsInfo(String str, String str2, GetPluginsStatusInfoListener getPluginsStatusInfoListener) {
        pluginInterface.getPluginsInfo(str, str2, getPluginsStatusInfoListener);
    }

    public static void queryPluginStatus(String str, QueryPluginStatusListener queryPluginStatusListener) {
        pluginInterface.queryPluginStatus(str, queryPluginStatusListener);
    }

    public static void isInstallPlugin(String str, IsInstallPluginStatusListener isInstallPluginStatusListener) {
        pluginInterface.isInstallPlugin(str, isInstallPluginStatusListener);
    }

    public static void installPlugin(String str, InstallPluginStatusListener installPluginStatusListener) {
        pluginInterface.installPlugin(str, 5, 15, installPluginStatusListener);
    }

    public static void installPlugin(String str, String str2, String str3, InstallPluginStatusListener installPluginStatusListener) {
        try {
            pluginInterface.installPlugin(str, Integer.valueOf(str2).intValue(), Integer.valueOf(str3).intValue(), installPluginStatusListener);
        } catch (Exception e) {
            e.printStackTrace();
            installPluginStatusListener.onFailure("传参类型不合规");
        }
    }

    public static void startApk(String str, String str2, StartPluginStatusListener startPluginStatusListener) {
        pluginInterface.startApk(str, str2, startPluginStatusListener);
    }

    public static void unInstallPlugin(String str, UnInstallPluginStatusListener unInstallPluginStatusListener) {
        pluginInterface.unInstallPlugin(str, unInstallPluginStatusListener);
    }

    public static void preloadPlugin(String str, PreloadListener preloadListener) {
        pluginInterface.preLoadPlugin(str, preloadListener);
    }

    public static String getFrameworkVersion() {
        return pluginInterface.get_framework_version();
    }

    public static void setPluginExitListener(PluginExitListener pluginExitListener) {
        pluginInterface.setPluginExitListener(pluginExitListener);
    }

    public static void clearDownloadCache(String str, ClearDownloadCacheListener clearDownloadCacheListener) {
        pluginInterface.clearDownloadCache(str, clearDownloadCacheListener);
    }

    public static void openPlugin(String str, String str2, OpenListener openListener) {
        pluginInterface.openPlugin(str, str2, openListener);
    }

    public static void allowStartPlugin(String str, String str2, boolean z, AllowStartPluginListener allowStartPluginListener) {
        pluginInterface.allowStartPlugin(str, str2, z, allowStartPluginListener);
    }

    public static void postToSepperllita(String str) {
        pluginInterface.postToSepperllita(str);
    }

    public static void allowUserPrivacy() {
        pluginInterface.allowUserPrivacy();
    }

    public static void onDestory() {
        pluginInterface.onDestory();
    }

    public static boolean is64Bit() {
        Log.e("ymnrelugin", "is64Bit" + String.valueOf(pluginInterface.is64Bit()));
        return pluginInterface.is64Bit();
    }
}
