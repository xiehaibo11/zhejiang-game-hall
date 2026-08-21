package com.ymnsdk.replugin;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.carlt.networklibs.NetType;
import com.carlt.networklibs.NetworkManager;
import com.carlt.networklibs.annotation.NetWork;
import com.qihoo360.replugin.model.PluginInfo;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.event.base.BaseEvent;
import com.ymnsdk.replugin.event.base.EventCode;
import com.ymnsdk.replugin.event.custom.RepluginCustomEvent;
import com.ymnsdk.replugin.event.other.KillApplicationEvent;
import com.ymnsdk.replugin.event.silentdownload.UserStopSilentDownloadEvent;
import com.ymnsdk.replugin.feature.PluginInstallWapper;
import com.ymnsdk.replugin.feature.PluginManager;
import com.ymnsdk.replugin.feature.PluginStatusWapper;
import com.ymnsdk.replugin.feature.PluginsInfoWapper;
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
import com.ymnsdk.replugin.patch.download.DownloadFileInfo;
import com.ymnsdk.replugin.patch.download.DownloadFileState;
import com.ymnsdk.replugin.patch.download.DownloadState;
import com.ymnsdk.replugin.patch.download.PatchDownloadApi;
import com.ymnsdk.replugin.patch.download.SilentDownloadApi;
import com.ymnsdk.replugin.service.HostService;
import com.ymnsdk.replugin.util.DownloadUtils;
import com.ymnsdk.replugin.util.LogUtils;
import com.ymnsdk.replugin.util.PrivacyUtils;
import com.ymnsdk.replugin.util.RecentlyReceiver;
import com.ymnsdk.replugin.util.SilentDownloadUtils;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginInterface {
    public static String FRAMEWORK_VERSION = "2.2.6";
    private Activity activity;
    private Context context;
    private RecentlyReceiver mReceiver;
    PluginInfo info = null;
    private PluginExitListener pluginExitListener = null;

    static {
        System.loadLibrary("apkpatch");
    }

    protected void onCreate(Context context) {
        this.context = context;
        Activity activity = (Activity) context;
        this.activity = activity;
        initReplugin(activity);
    }

    private void initReplugin(Activity activity) {
        SharedPreferencesUtils.init(activity);
        NetworkManager.getInstance().init(activity.getApplication());
        NetworkManager.getInstance().registerObserver(this);
        DownloadUtils.getInstance().setWriteablePath(activity.getFilesDir().getAbsolutePath());
        com.qihoo360.replugin.utils.SharedPreferencesUtils.init(activity);
        RecentlyReceiver recentlyReceiver = new RecentlyReceiver();
        this.mReceiver = recentlyReceiver;
        activity.registerReceiver(recentlyReceiver, new IntentFilter("android.intent.action.CLOSE_SYSTEM_DIALOGS"));
        if (PrivacyUtils.getUserPrivacyAlone(activity)) {
            return;
        }
        PostdataLib.getInstance().init(activity);
        LogUtils.postInterruptEvent(activity);
    }

    protected void onNewIntent(Intent intent) {
        if (intent == null || intent.getExtras() == null || !intent.getExtras().containsKey("pluginId")) {
            return;
        }
        this.activity.stopService(new Intent(this.activity, (Class<?>) HostService.class));
        String string = intent.getExtras().getString("pluginId");
        String string2 = intent.getExtras().containsKey("data") ? intent.getExtras().getString("data") : "";
        Log.d(HostConstant.ymn, "pluginId is " + string);
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("pluginId", string);
            jSONObject.put("data", string2);
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (this.pluginExitListener != null) {
            PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.plugin_exit_event, "", string, ""));
            this.pluginExitListener.onPluginExit(jSONObject.toString());
        }
    }

    public String get_framework_version() {
        return FRAMEWORK_VERSION;
    }

    public void setPluginExitListener(PluginExitListener pluginExitListener) {
        this.pluginExitListener = pluginExitListener;
    }

    protected void getPluginsInfo(String str, String str2, GetPluginsStatusInfoListener getPluginsStatusInfoListener) {
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setAppId(str);
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setAppInfo(str2);
        new PluginsInfoWapper(this.activity).getPluginsInfo(str, str2, getPluginsStatusInfoListener);
    }

    protected void queryPluginStatus(String str, QueryPluginStatusListener queryPluginStatusListener) {
        if (DownloadState.getInstance().isOpenSilentDownload()) {
            SilentDownloadApi.getInstance().endSilentDownload();
            PostdataLib.getInstance().postToSeperllita(new UserStopSilentDownloadEvent(this.activity, SilentDownloadApi.downloadType));
        }
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(str);
        new PluginStatusWapper(this.activity).queryPluginStatus(str, queryPluginStatusListener);
    }

    protected void isInstallPlugin(String str, IsInstallPluginStatusListener isInstallPluginStatusListener) {
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(str);
        new PluginManager(this.activity).isInstallPlugin(str, isInstallPluginStatusListener);
    }

    protected void installPlugin(String str, int i, int i2, InstallPluginStatusListener installPluginStatusListener) {
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(str);
        PluginInstallWapper.getInstance().installPlugin(this.activity, str, i, i2, false, false, installPluginStatusListener);
    }

    public void startApk(String str, String str2, StartPluginStatusListener startPluginStatusListener) {
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(str);
        new PluginManager(this.activity).startApk(str, str2, startPluginStatusListener);
    }

    public void unInstallPlugin(String str, UnInstallPluginStatusListener unInstallPluginStatusListener) {
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(str);
        new PluginManager(this.activity).unInstallPlugin(str, unInstallPluginStatusListener);
    }

    public boolean is64Bit() {
        return new PluginManager(this.activity).is64Bit();
    }

    public void preLoadPlugin(String str, PreloadListener preloadListener) {
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(str);
        new PluginManager(this.activity).preLoadPlugin(str, preloadListener);
    }

    public void clearDownloadCache(String str, ClearDownloadCacheListener clearDownloadCacheListener) {
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(str);
        PatchDownloadApi.clearCache(this.activity, str, clearDownloadCacheListener);
    }

    public void openPlugin(String str, String str2, OpenListener openListener) {
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(str);
        new PluginManager(this.activity).openPlugin(str, str2, openListener);
    }

    public void allowStartPlugin(String str, String str2, boolean z, AllowStartPluginListener allowStartPluginListener) {
        com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance();
        com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(str);
        new PluginManager(this.activity).allowStartPlugin(str, str2, z, allowStartPluginListener);
    }

    public void postToSepperllita(String str) {
        try {
            PostdataLib.getInstance().postToSeperllita(new RepluginCustomEvent(this.activity, new JSONObject(str)));
        } catch (Exception e) {
            e.printStackTrace();
            Log.e(HostConstant.ymn, "自定义埋点上抛，传参格式不是json");
        }
    }

    public void allowUserPrivacy() {
        PostdataLib.getInstance().init(this.activity);
        LogUtils.postInterruptEvent(this.activity);
    }

    public void onDestory() {
        NetworkManager.getInstance().unRegisterObserver(this.activity);
        PostdataLib.getInstance().postToSeperllita(new KillApplicationEvent(this.activity));
        DownloadFileInfo downloadFileInfo = DownloadFileState.getInstance().getDownloadFileInfo(DownloadState.getInstance().getDownloadEntity().getMd5());
        if (downloadFileInfo != null) {
            DownloadUtils.getInstance().postDownloadErrorEvent(this.activity, downloadFileInfo);
        }
        this.context.unregisterReceiver(this.mReceiver);
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    /* JADX INFO: renamed from: com.ymnsdk.replugin.PluginInterface$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$carlt$networklibs$NetType;

        static {
            int[] iArr = new int[NetType.values().length];
            $SwitchMap$com$carlt$networklibs$NetType = iArr;
            try {
                iArr[NetType.WIFI.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$carlt$networklibs$NetType[NetType.CMNET.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$carlt$networklibs$NetType[NetType.CMWAP.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$carlt$networklibs$NetType[NetType.AUTO.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                $SwitchMap$com$carlt$networklibs$NetType[NetType.NONE.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    @NetWork(netType = NetType.AUTO)
    public void network(NetType netType) {
        int i = AnonymousClass1.$SwitchMap$com$carlt$networklibs$NetType[netType.ordinal()];
        if (i == 1) {
            Log.e(HostConstant.ymn, "是wifi");
            DownloadState.getInstance().setNetWorkAvailable(true);
            if (DownloadState.getInstance().isOpenSilentDownload()) {
                if (DownloadState.getInstance().getDownloadEntity().getActivity() != null) {
                    PatchDownloadApi.downloadRecovery(DownloadState.getInstance().getDownloadEntity(), 1);
                    return;
                } else {
                    SilentDownloadApi.getInstance().startSilentDownload(this.activity);
                    return;
                }
            }
            return;
        }
        if (i == 2 || i == 3) {
            Log.e(HostConstant.ymn, "是CMWAP");
            DownloadState.getInstance().setNetWorkAvailable(true);
            if (DownloadState.getInstance().isOpenSilentDownload() && SilentDownloadUtils.isNoWifiDownload == 0) {
                PatchDownloadApi.downloadStop();
                return;
            }
            return;
        }
        if (i == 4) {
            Log.e(HostConstant.ymn, "是AUTO");
        } else {
            if (i == 5) {
                Log.e(HostConstant.ymn, "是无网络");
                DownloadState.getInstance().setNetWorkAvailable(false);
                DownloadState.getInstance().setIsDownloadRecovery(false);
                return;
            }
            DownloadState.getInstance().setNetWorkAvailable(true);
        }
    }
}
