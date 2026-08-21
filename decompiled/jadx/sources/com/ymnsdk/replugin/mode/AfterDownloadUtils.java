package com.ymnsdk.replugin.mode;

import com.ymnsdk.replugin.listener.OpenListener;
import com.ymnsdk.replugin.patch.download.DownloadCode;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class AfterDownloadUtils {
    private static AfterDownloadUtils utils = new AfterDownloadUtils();

    public static AfterDownloadUtils getInstance() {
        return utils;
    }

    @Deprecated
    public void dealWithModeTwo() {
        if (ModeTwoDownloadData.pluginId.isEmpty()) {
            return;
        }
        new PluginModeTwo().installPlugin(ModeTwoDownloadData.activity, ModeTwoDownloadData.pluginId, true, new OpenListener() { // from class: com.ymnsdk.replugin.mode.AfterDownloadUtils.1
            @Override // com.ymnsdk.replugin.listener.OpenListener
            public void openSuccess() {
                ModeTwoDownloadData.listener.openSuccess();
            }

            @Override // com.ymnsdk.replugin.listener.OpenListener
            public void openFail(String str) {
                ModeTwoDownloadData.listener.openFail(str);
            }

            @Override // com.ymnsdk.replugin.listener.OpenListener
            public void installSuccess() {
                AfterDownloadUtils.this.clearModeData();
                ModeTwoDownloadData.listener.installSuccess();
            }

            @Override // com.ymnsdk.replugin.listener.OpenListener
            public void installFail(String str) {
                AfterDownloadUtils.this.clearModeData();
                ModeTwoDownloadData.listener.installFail(str);
            }

            @Override // com.ymnsdk.replugin.listener.OpenListener
            public void onDownloading(long j) {
                AfterDownloadUtils.this.clearModeData();
                ModeTwoDownloadData.listener.onDownloading(j);
            }

            @Override // com.ymnsdk.replugin.listener.OpenListener
            public void onDownloadFailure(DownloadCode.Code code) {
                AfterDownloadUtils.this.clearModeData();
                ModeTwoDownloadData.listener.onDownloadFailure(code);
            }

            @Override // com.ymnsdk.replugin.listener.OpenListener
            public void onDownloadingInStart(long j) {
                AfterDownloadUtils.this.clearModeData();
                ModeTwoDownloadData.listener.onDownloadingInStart(j);
            }
        });
    }

    public void clearModeData() {
        ModeTwoDownloadData.pluginId = "";
        ModeTwoDownloadData.activity = null;
        ModeTwoDownloadData.listener = null;
    }
}
