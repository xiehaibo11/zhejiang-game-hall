package com.ymnsdk.replugin.mode;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class AfterDownloadUtils {
    private static com.ymnsdk.replugin.mode.AfterDownloadUtils utils;


    static {
            com.ymnsdk.replugin.mode.AfterDownloadUtils r0 = new com.ymnsdk.replugin.mode.AfterDownloadUtils
            r0.<init>()
            com.ymnsdk.replugin.mode.AfterDownloadUtils.utils = r0
            return
    }

    public AfterDownloadUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ymnsdk.replugin.mode.AfterDownloadUtils getInstance() {
            com.ymnsdk.replugin.mode.AfterDownloadUtils r0 = com.ymnsdk.replugin.mode.AfterDownloadUtils.utils
            return r0
    }

    public void clearModeData() {
            r1 = this;
            java.lang.String r0 = ""
            com.ymnsdk.replugin.mode.ModeTwoDownloadData.pluginId = r0
            r0 = 0
            com.ymnsdk.replugin.mode.ModeTwoDownloadData.activity = r0
            com.ymnsdk.replugin.mode.ModeTwoDownloadData.listener = r0
            return
    }

    @java.lang.Deprecated
    public void dealWithModeTwo() {
            r5 = this;
            java.lang.String r0 = com.ymnsdk.replugin.mode.ModeTwoDownloadData.pluginId
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L1a
            com.ymnsdk.replugin.mode.PluginModeTwo r0 = new com.ymnsdk.replugin.mode.PluginModeTwo
            r0.<init>()
            android.app.Activity r1 = com.ymnsdk.replugin.mode.ModeTwoDownloadData.activity
            java.lang.String r2 = com.ymnsdk.replugin.mode.ModeTwoDownloadData.pluginId
            r3 = 1
            com.ymnsdk.replugin.mode.AfterDownloadUtils$1 r4 = new com.ymnsdk.replugin.mode.AfterDownloadUtils$1
            r4.<init>(r5)
            r0.installPlugin(r1, r2, r3, r4)
        L1a:
            return
    }
}
