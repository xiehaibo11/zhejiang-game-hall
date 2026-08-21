package com.ymnsdk.replugin.feature;

import android.app.Activity;
import android.content.Intent;
import android.os.Build;
import android.os.Process;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import com.qihoo360.loader2.VMRuntimeCompat;
import com.qihoo360.replugin.RePlugin;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.PluginFailInfo;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.event.allowstartplugin.AllowStartPluginRequestEvent;
import com.ymnsdk.replugin.event.allowstartplugin.AllowStartPluginResponseEvent;
import com.ymnsdk.replugin.event.base.BaseEvent;
import com.ymnsdk.replugin.event.base.EventCode;
import com.ymnsdk.replugin.event.isinstall.IsInstallPluginRequestEvent;
import com.ymnsdk.replugin.event.isinstall.IsInstallPluginResponseEvent;
import com.ymnsdk.replugin.event.openplugin.OpenPluginRequestEvent;
import com.ymnsdk.replugin.event.openplugin.OpenPluginResponseEvent;
import com.ymnsdk.replugin.event.preplugin.PrePluginRequestEvent;
import com.ymnsdk.replugin.event.preplugin.PrePluginResponseEvent;
import com.ymnsdk.replugin.event.startplugin.StartPluginRequestEvent;
import com.ymnsdk.replugin.event.startplugin.StartPluginResponseEvent;
import com.ymnsdk.replugin.event.uninstallplugin.UnInstallPluginRequestEvent;
import com.ymnsdk.replugin.event.uninstallplugin.UnInstallPluginResponseEvent;
import com.ymnsdk.replugin.listener.AllowStartPluginListener;
import com.ymnsdk.replugin.listener.IsInstallPluginStatusListener;
import com.ymnsdk.replugin.listener.OpenListener;
import com.ymnsdk.replugin.listener.PreloadListener;
import com.ymnsdk.replugin.listener.QueryPluginStatusListener;
import com.ymnsdk.replugin.listener.StartPluginStatusListener;
import com.ymnsdk.replugin.listener.UnInstallPluginStatusListener;
import com.ymnsdk.replugin.manger.PluginMangerUtils;
import com.ymnsdk.replugin.mode.PluginModeOne;
import com.ymnsdk.replugin.mode.PluginModeTwo;
import com.ymnsdk.replugin.patch.download.DownloadState;
import com.ymnsdk.replugin.patch.download.SilentDownloadApi;
import com.ymnsdk.replugin.service.HostService;
import com.ymnsdk.replugin.util.DialogUtils;
import com.ymnsdk.replugin.util.DownloadUtils;
import com.ymnsdk.replugin.util.SharedPerferencesDataUtils;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginManager {
    Activity activity;

    public PluginManager(Activity activity) {
        this.activity = activity;
    }

    public void isInstallPlugin(String str, IsInstallPluginStatusListener isInstallPluginStatusListener) {
        PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.is_install_plugin_request_event, "", str, ""));
        PostdataLib.getInstance().postToSeperllita(new IsInstallPluginRequestEvent(this.activity, str));
        long jCurrentTimeMillis = System.currentTimeMillis();
        Map<String, PluginInfo> localInstallPlugin = SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin();
        if (localInstallPlugin.containsKey(str)) {
            PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.is_install_plugin_response_event, 0, "已安装", ""));
            PostdataLib.getInstance().postToSeperllita(new IsInstallPluginResponseEvent(this.activity, 1044, str, localInstallPlugin.get(str).getPlugin_version(), 0, "已安装", System.currentTimeMillis() - jCurrentTimeMillis));
            isInstallPluginStatusListener.onInstalled();
        } else {
            PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.is_install_plugin_response_event, -1, "未安装", ""));
            PostdataLib.getInstance().postToSeperllita(new IsInstallPluginResponseEvent(this.activity, 1045, str, "", -1, "未安装", System.currentTimeMillis() - jCurrentTimeMillis));
            isInstallPluginStatusListener.onNotInstall();
        }
    }

    public void startApk(String str, String str2, StartPluginStatusListener startPluginStatusListener) {
        String string;
        PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.start_apk_request_event, "", str, "", str2));
        try {
            JSONObject jSONObject = new JSONObject(str2);
            string = jSONObject.has("numID") ? jSONObject.getString("numID") : "";
        } catch (Exception e) {
            e.printStackTrace();
            string = "";
        }
        PostdataLib.getInstance().postToSeperllita(new StartPluginRequestEvent(this.activity, str, string, str2));
        long jCurrentTimeMillis = System.currentTimeMillis();
        Map<String, PluginInfo> localInstallPlugin = SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin();
        if (localInstallPlugin.containsKey(str)) {
            PluginInfo pluginInfo = localInstallPlugin.get(str);
            if (pluginInfo == null) {
                startPluginStatusListener.onFailure("启动插件：pluginInfo is null");
                return;
            }
            Intent intentCreateIntent = RePlugin.createIntent(pluginInfo.getPackage_name(), pluginInfo.getEntrance_activity());
            String string2 = SharedPreferencesUtils.getString("ymn_login_data");
            Map<String, Boolean> pluginGrayData = SharedPerferencesDataUtils.getInstance().getPluginGrayData();
            boolean zStartActivity = false;
            boolean zBooleanValue = pluginGrayData.containsKey(str) ? pluginGrayData.get(str).booleanValue() : false;
            try {
                JSONObject jSONObject2 = new JSONObject(str2);
                jSONObject2.put("ymnLoginData", string2);
                jSONObject2.put("isGray", zBooleanValue);
                jSONObject2.put("isReplugin", true);
                intentCreateIntent.putExtra("unity", jSONObject2.toString());
                intentCreateIntent.putExtra("data", jSONObject2.toString());
                intentCreateIntent.putExtra("hostPackageName", this.activity.getPackageName());
                intentCreateIntent.putExtra("hostActivity", jSONObject2.getString("hostActivity"));
                intentCreateIntent.putExtra("hostPid", "" + Process.myPid());
                if (jSONObject2.has("hostProcessActivity")) {
                    intentCreateIntent.putExtra("hostProcessActivity", jSONObject2.getString("hostProcessActivity"));
                } else {
                    intentCreateIntent.putExtra("hostProcessActivity", "com.bianfeng.replugin.HostProcessActivity");
                }
                intentCreateIntent.putExtra("pluginId", str);
            } catch (JSONException e2) {
                e2.printStackTrace();
            }
            intentCreateIntent.addFlags(131072);
            for (int i = 0; !zStartActivity && i < 3; i++) {
                zStartActivity = RePlugin.startActivity(this.activity, intentCreateIntent);
            }
            if (zStartActivity) {
                PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.start_apk_response_event, 0, "启动成功", pluginInfo.getPlugin_version()));
                PostdataLib.getInstance().postToSeperllita(new StartPluginResponseEvent(this.activity, 1044, str, pluginInfo.getPlugin_version(), 0, "启动成功", string, str2, System.currentTimeMillis() - jCurrentTimeMillis));
                startPluginStatusListener.onSuccess();
                Intent intent = new Intent(this.activity, (Class<?>) HostService.class);
                if (Build.VERSION.SDK_INT >= 26) {
                    this.activity.startForegroundService(intent);
                    return;
                } else {
                    this.activity.startService(intent);
                    return;
                }
            }
            PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.start_apk_response_event, -1, "启动插件失败", pluginInfo.getPlugin_version()));
            PostdataLib.getInstance().postToSeperllita(new StartPluginResponseEvent(this.activity, 1045, str, pluginInfo.getPlugin_version(), -1, "启动插件失败", string, str2, System.currentTimeMillis() - jCurrentTimeMillis));
            startPluginStatusListener.onFailure("启动插件失败");
            return;
        }
        PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.start_apk_response_event, -1, "还未获取插件信息", ""));
        PostdataLib.getInstance().postToSeperllita(new StartPluginResponseEvent(this.activity, 1045, str, "", -1, "还未获取插件信息", string, str2, System.currentTimeMillis() - jCurrentTimeMillis));
        startPluginStatusListener.onFailure("还未获取插件信息");
    }

    public boolean is64Bit() {
        return VMRuntimeCompat.is64Bit();
    }

    public void unInstallPlugin(String str, UnInstallPluginStatusListener unInstallPluginStatusListener) {
        PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.uninstall_plugin_request_event, "", str, ""));
        PostdataLib.getInstance().postToSeperllita(new UnInstallPluginRequestEvent(this.activity, str));
        long jCurrentTimeMillis = System.currentTimeMillis();
        Map<String, PluginInfo> localInstallPlugin = SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin();
        if (localInstallPlugin.containsKey(str)) {
            if (RePlugin.uninstall(localInstallPlugin.get(str).getPackage_name())) {
                localInstallPlugin.remove(str);
                SharedPerferencesDataUtils.getInstance().putLocalInstallPlugin(localInstallPlugin);
                PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.uninstall_plugin_response_event, 0, "卸载插件成功", ""));
                PostdataLib.getInstance().postToSeperllita(new UnInstallPluginResponseEvent(this.activity, 1044, str, 0, "卸载插件成功", System.currentTimeMillis() - jCurrentTimeMillis));
                unInstallPluginStatusListener.onSuccess();
                return;
            }
            PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.uninstall_plugin_response_event, -1, "卸载插件失败", ""));
            PostdataLib.getInstance().postToSeperllita(new UnInstallPluginResponseEvent(this.activity, 1045, str, -1, "卸载插件失败", System.currentTimeMillis() - jCurrentTimeMillis));
            unInstallPluginStatusListener.onFailure("卸载插件失败");
            return;
        }
        PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.uninstall_plugin_response_event, -1, "未找到该插件", ""));
        PostdataLib.getInstance().postToSeperllita(new UnInstallPluginResponseEvent(this.activity, 1045, str, -1, "未找到该插件", System.currentTimeMillis() - jCurrentTimeMillis));
        unInstallPluginStatusListener.onFailure("未找到该插件");
    }

    public void preLoadPlugin(final String str, final PreloadListener preloadListener) {
        Log.d(HostConstant.ymn, "调用到了预加载接口");
        PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.preload_plugin_request_event, "", str, ""));
        PostdataLib.getInstance().postToSeperllita(new PrePluginRequestEvent(this.activity, str));
        final long jCurrentTimeMillis = System.currentTimeMillis();
        Map<String, PluginInfo> localInstallPlugin = SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin();
        if (localInstallPlugin.containsKey(str)) {
            final String package_name = localInstallPlugin.get(str).getPackage_name();
            new Thread(new Runnable() {
                @Override
                public void run() {
                    if (RePlugin.preload(package_name)) {
                        Log.d(HostConstant.ymn, "预加载成功了");
                        PostdataLib.getInstance().postEvent(new BaseEvent(PluginManager.this.activity, EventCode.preload_plugin_response_event, 0, "预加载成功", ""));
                        PostdataLib.getInstance().postToSeperllita(new PrePluginResponseEvent(PluginManager.this.activity, 1044, str, 0, "预加载成功", System.currentTimeMillis() - jCurrentTimeMillis));
                        preloadListener.preloadSuccess();
                        return;
                    }
                    Log.d(HostConstant.ymn, "预加载失败了");
                    PostdataLib.getInstance().postEvent(new BaseEvent(PluginManager.this.activity, EventCode.preload_plugin_response_event, -1, "预加载插件失败", ""));
                    PostdataLib.getInstance().postToSeperllita(new PrePluginResponseEvent(PluginManager.this.activity, 1045, str, -1, "预加载插件失败", System.currentTimeMillis() - jCurrentTimeMillis));
                    preloadListener.preloadFail("预加载插件失败");
                }
            }).start();
        } else {
            Log.d(HostConstant.ymn, "未找到该插件");
            PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.preload_plugin_response_event, -1, "未找到该插件", ""));
            PostdataLib.getInstance().postToSeperllita(new PrePluginResponseEvent(this.activity, 1045, str, -1, "未找到该插件", System.currentTimeMillis() - jCurrentTimeMillis));
            preloadListener.preloadFail("未找到该插件");
        }
    }

    public void openPlugin(final String str, final String str2, final OpenListener openListener) {
        PostdataLib.getInstance().postToSeperllita(new OpenPluginRequestEvent(this.activity, str));
        if (DownloadState.getInstance().isOpenSilentDownload()) {
            SilentDownloadApi.getInstance().endSilentDownload();
        }
        new PluginStatusWapper(this.activity).queryPluginStatus(str, new QueryPluginStatusListener() {
            @Override
            public void onSuccessUnAvailable(String str3) {
                DialogUtils.getInstance().showMaintainDialog(PluginManager.this.activity, str, str3, openListener);
                PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(PluginManager.this.activity, str, 1045, "插件维护中"));
            }

            @Override
            public void onSuccessAvailable(String str3) {
                try {
                    JSONObject jSONObject = new JSONObject(str3);
                    String string = jSONObject.getString("plugin_current_version");
                    String string2 = jSONObject.getString("plugin_current_download_version");
                    String string3 = jSONObject.getString("plugin_last_version");
                    int i = jSONObject.getInt(HiAnalyticsConstant.BI_KEY_UPDATE_TYPE);
                    Log.e(HostConstant.ymn, "当前版本---" + string + "最新版本----" + string3);
                    if (string.equals(string3)) {
                        PluginManager.this.startApk(str, str2, new StartPluginStatusListener() {
                            @Override
                            public void onSuccess() {
                                PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(PluginManager.this.activity, str, 1044, "打开成功"));
                                openListener.openSuccess();
                            }

                            @Override
                            public void onFailure(String str4) {
                                PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(PluginManager.this.activity, str, 1045, str4));
                                openListener.openFail("插件打开失败:" + str4);
                            }
                        });
                    } else if (PluginMangerUtils.getIsShowUpdateDialog(str)) {
                        DialogUtils.getInstance().showUpdateDialog(PluginManager.this.activity, str, str2, i, string2, openListener);
                    } else {
                        int pluginMode = PluginMangerUtils.getPluginMode(str);
                        if (pluginMode == 1) {
                            new PluginModeOne().installPlugin(PluginManager.this.activity, str, openListener);
                        } else if (pluginMode == 2) {
                            new PluginModeTwo().installPlugin(PluginManager.this.activity, str, str2, i, openListener);
                        }
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }

            @Override
            public void onFailure(int i, String str3) {
                PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(PluginManager.this.activity, str, 1045, "获取插件状态失败:" + i + "|" + str3));
                openListener.openFail("获取插件状态失败:" + i + "|" + str3);
            }
        });
    }

    public void allowStartPlugin(final String str, final String str2, boolean z, final AllowStartPluginListener allowStartPluginListener) {
        PostdataLib.getInstance().postToSeperllita(new AllowStartPluginRequestEvent(this.activity, str, z));
        if (!z) {
            PostdataLib.getInstance().postToSeperllita(new AllowStartPluginResponseEvent(this.activity, str, 1045, "插件打开失败:用户不允许打开"));
            allowStartPluginListener.openFail("插件打开失败:宿主不允许打开");
        } else {
            new PluginManager(this.activity).isInstallPlugin(str, new IsInstallPluginStatusListener() {
                @Override
                public void onInstalled() {
                    if (DownloadUtils.getInstance().isExperiencedDownload(str) && PluginMangerUtils.getIsShowStartDialog(str)) {
                        DialogUtils.getInstance().showStartDialog(PluginManager.this.activity, str, str2, allowStartPluginListener);
                    } else {
                        PluginManager.this.startApk(str, str2, new StartPluginStatusListener() {
                            @Override
                            public void onSuccess() {
                                PostdataLib.getInstance().postToSeperllita(new AllowStartPluginResponseEvent(PluginManager.this.activity, str, 1044, "插件打开成功"));
                                allowStartPluginListener.openSuccess();
                            }

                            @Override
                            public void onFailure(String str3) {
                                PostdataLib.getInstance().postToSeperllita(new AllowStartPluginResponseEvent(PluginManager.this.activity, str, 1045, "插件打开失败:" + str3));
                                allowStartPluginListener.openFail("插件打开失败:" + str3);
                            }
                        });
                    }
                }

                @Override
                public void onNotInstall() {
                    DialogUtils.getInstance().showErrorDialog(PluginManager.this.activity, str);
                    PostdataLib.getInstance().postToSeperllita(new AllowStartPluginResponseEvent(PluginManager.this.activity, str, 1045, "游戏安装插件失败,原因是:" + PluginFailInfo.getInstance().getPluginFailInfo(str)));
                    allowStartPluginListener.openFail("游戏安装插件失败,原因是:" + PluginFailInfo.getInstance().getPluginFailInfo(str));
                }
            });
        }
    }
}
