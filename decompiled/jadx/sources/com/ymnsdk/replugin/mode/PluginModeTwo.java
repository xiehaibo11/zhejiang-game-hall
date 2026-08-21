package com.ymnsdk.replugin.mode;

import android.app.Activity;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.PluginFailInfo;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.event.openplugin.OpenPluginResponseEvent;
import com.ymnsdk.replugin.event.other.PluginModeTwoEvent;
import com.ymnsdk.replugin.feature.PluginInstallWapper;
import com.ymnsdk.replugin.feature.PluginManager;
import com.ymnsdk.replugin.listener.InstallPluginStatusListener;
import com.ymnsdk.replugin.listener.OpenListener;
import com.ymnsdk.replugin.listener.StartPluginStatusListener;
import com.ymnsdk.replugin.patch.download.DownloadCode;
import com.ymnsdk.replugin.util.DownloadUtils;
import com.ymnsdk.replugin.util.SharedPerferencesDataUtils;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginModeTwo {
    static volatile boolean isDownloading;

    public void installPlugin(final Activity activity, final String str, String str2, int i, final OpenListener openListener) {
        PostdataLib.getInstance().postToSeperllita(new PluginModeTwoEvent(activity, str));
        if (isNeedDownloaded(str)) {
            if (allowOldStart(str, i)) {
                ModeTwoDownloadData.activity = activity;
                ModeTwoDownloadData.listener = openListener;
                ModeTwoDownloadData.pluginId = str;
                new PluginManager(activity).startApk(str, str2, new StartPluginStatusListener() { // from class: com.ymnsdk.replugin.mode.PluginModeTwo.1
                    @Override // com.ymnsdk.replugin.listener.StartPluginStatusListener
                    public void onSuccess() {
                        PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(activity, str, 1044, "打开成功"));
                        openListener.openSuccess();
                    }

                    @Override // com.ymnsdk.replugin.listener.StartPluginStatusListener
                    public void onFailure(String str3) {
                        PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(activity, str, 1045, str3));
                        openListener.openFail(str3);
                    }
                });
                if (isDownloading) {
                    return;
                }
                isDownloading = true;
                installPlugin(activity, str, true, openListener);
                return;
            }
            installPlugin(activity, str, false, openListener);
            return;
        }
        installPlugin(activity, str, false, openListener);
    }

    public boolean isNeedDownloaded(String str) {
        String strJoinPluginPath = DownloadUtils.getInstance().joinPluginPath(str + "old.apk");
        Map<String, PluginInfo> localGetPlugin = SharedPerferencesDataUtils.getInstance().getLocalGetPlugin();
        return !DownloadUtils.getInstance().checkMd5(strJoinPluginPath, localGetPlugin.containsKey(str) ? localGetPlugin.get(str).getFile_md5() : "");
    }

    public boolean allowOldStart(String str, int i) {
        return i != 1 && SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin().containsKey(str);
    }

    public void installPlugin(Activity activity, final String str, final boolean z, final OpenListener openListener) {
        PluginInstallWapper.getInstance().installPlugin(activity, str, 5, 15, z, false, new InstallPluginStatusListener() { // from class: com.ymnsdk.replugin.mode.PluginModeTwo.2
            @Override // com.ymnsdk.replugin.listener.InstallPluginStatusListener
            public void onSuccess() {
                PluginModeTwo.isDownloading = false;
                if (z) {
                    return;
                }
                openListener.installSuccess();
            }

            @Override // com.ymnsdk.replugin.listener.InstallPluginStatusListener
            public void onFailure(String str2) {
                PluginModeTwo.isDownloading = false;
                if (z) {
                    return;
                }
                openListener.installFail(str2);
                PluginFailInfo.getInstance().savePluginFailInfo(str, str2);
            }

            @Override // com.ymnsdk.replugin.listener.InstallPluginStatusListener
            public void onDownloading(long j) {
                if (z) {
                    openListener.onDownloadingInStart(j);
                } else {
                    openListener.onDownloading(j);
                }
            }

            @Override // com.ymnsdk.replugin.listener.InstallPluginStatusListener
            public void onDownloadFailure(DownloadCode.Code code) {
                PluginModeTwo.isDownloading = false;
                if (z) {
                    return;
                }
                openListener.onDownloadFailure(code);
                PluginFailInfo.getInstance().savePluginFailInfo(str, DownloadCode.translate(code));
            }
        });
    }
}
