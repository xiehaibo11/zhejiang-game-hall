package com.ymnsdk.replugin.mode;

import android.app.Activity;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.PluginFailInfo;
import com.ymnsdk.replugin.event.other.PluginModeOneEvent;
import com.ymnsdk.replugin.feature.PluginInstallWapper;
import com.ymnsdk.replugin.listener.InstallPluginStatusListener;
import com.ymnsdk.replugin.listener.OpenListener;
import com.ymnsdk.replugin.patch.download.DownloadCode;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginModeOne {
    public void installPlugin(Activity activity, final String str, final OpenListener openListener) {
        PostdataLib.getInstance().postToSeperllita(new PluginModeOneEvent(activity, str));
        PluginInstallWapper.getInstance().installPlugin(activity, str, 5, 15, false, false, new InstallPluginStatusListener() { // from class: com.ymnsdk.replugin.mode.PluginModeOne.1
            @Override // com.ymnsdk.replugin.listener.InstallPluginStatusListener
            public void onSuccess() {
                openListener.installSuccess();
            }

            @Override // com.ymnsdk.replugin.listener.InstallPluginStatusListener
            public void onFailure(String str2) {
                PluginFailInfo.getInstance().savePluginFailInfo(str, str2);
                openListener.installFail(str2);
            }

            @Override // com.ymnsdk.replugin.listener.InstallPluginStatusListener
            public void onDownloading(long j) {
                openListener.onDownloading(j);
            }

            @Override // com.ymnsdk.replugin.listener.InstallPluginStatusListener
            public void onDownloadFailure(DownloadCode.Code code) {
                openListener.onDownloadFailure(code);
                PluginFailInfo.getInstance().savePluginFailInfo(str, DownloadCode.translate(code));
            }
        });
    }
}
