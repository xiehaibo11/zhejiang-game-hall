package com.ymnsdk.replugin.mode;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginModeTwo {
    static volatile boolean isDownloading;



    static {
            return
    }

    public PluginModeTwo() {
            r0 = this;
            r0.<init>()
            return
    }

    public boolean allowOldStart(java.lang.String r3, int r4) {
            r2 = this;
            r0 = 0
            r1 = 1
            if (r4 != r1) goto L5
            return r0
        L5:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r4 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r4 = r4.getLocalInstallPlugin()
            boolean r3 = r4.containsKey(r3)
            if (r3 == 0) goto L14
            return r1
        L14:
            return r0
    }

    public void installPlugin(android.app.Activity r3, java.lang.String r4, java.lang.String r5, int r6, com.ymnsdk.replugin.listener.OpenListener r7) {
            r2 = this;
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.other.PluginModeTwoEvent r1 = new com.ymnsdk.replugin.event.other.PluginModeTwoEvent
            r1.<init>(r3, r4)
            r0.postToSeperllita(r1)
            boolean r0 = r2.isNeedDownloaded(r4)
            r1 = 0
            if (r0 == 0) goto L3b
            boolean r6 = r2.allowOldStart(r4, r6)
            if (r6 == 0) goto L37
            com.ymnsdk.replugin.mode.ModeTwoDownloadData.activity = r3
            com.ymnsdk.replugin.mode.ModeTwoDownloadData.listener = r7
            com.ymnsdk.replugin.mode.ModeTwoDownloadData.pluginId = r4
            com.ymnsdk.replugin.feature.PluginManager r6 = new com.ymnsdk.replugin.feature.PluginManager
            r6.<init>(r3)
            com.ymnsdk.replugin.mode.PluginModeTwo$1 r0 = new com.ymnsdk.replugin.mode.PluginModeTwo$1
            r0.<init>(r2, r3, r4, r7)
            r6.startApk(r4, r5, r0)
            boolean r5 = com.ymnsdk.replugin.mode.PluginModeTwo.isDownloading
            if (r5 != 0) goto L3e
            r5 = 1
            com.ymnsdk.replugin.mode.PluginModeTwo.isDownloading = r5
            r2.installPlugin(r3, r4, r5, r7)
            goto L3e
        L37:
            r2.installPlugin(r3, r4, r1, r7)
            goto L3e
        L3b:
            r2.installPlugin(r3, r4, r1, r7)
        L3e:
            return
    }

    public void installPlugin(android.app.Activity r9, java.lang.String r10, boolean r11, com.ymnsdk.replugin.listener.OpenListener r12) {
            r8 = this;
            com.ymnsdk.replugin.feature.PluginInstallWapper r0 = com.ymnsdk.replugin.feature.PluginInstallWapper.getInstance()
            com.ymnsdk.replugin.mode.PluginModeTwo$2 r7 = new com.ymnsdk.replugin.mode.PluginModeTwo$2
            r7.<init>(r8, r11, r12, r10)
            r3 = 5
            r4 = 15
            r6 = 0
            r1 = r9
            r2 = r10
            r5 = r11
            r0.installPlugin(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public boolean isNeedDownloaded(java.lang.String r4) {
            r3 = this;
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r2 = "old.apk"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = r0.joinPluginPath(r1)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r1 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r1 = r1.getLocalGetPlugin()
            boolean r2 = r1.containsKey(r4)
            if (r2 == 0) goto L32
            java.lang.Object r4 = r1.get(r4)
            com.ymnsdk.replugin.entity.PluginInfo r4 = (com.ymnsdk.replugin.entity.PluginInfo) r4
            java.lang.String r4 = r4.getFile_md5()
            goto L34
        L32:
            java.lang.String r4 = ""
        L34:
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            boolean r4 = r1.checkMd5(r0, r4)
            if (r4 == 0) goto L40
            r4 = 0
            return r4
        L40:
            r4 = 1
            return r4
    }
}
