package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class SilentDownloadUtils {
    public static volatile int isNoWifiDownload = 0;
    static java.lang.String mhostAppInfo = "";

    static {
            return
    }

    public SilentDownloadUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void checkDowningPlugin(android.app.Activity r5, com.ymnsdk.replugin.entity.Plugin r6) {
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalSilentDowningPlugin()
            java.lang.String r1 = r6.getId()
            boolean r1 = r0.containsKey(r1)
            if (r1 == 0) goto L48
            java.lang.String r1 = r6.getId()
            java.lang.Object r0 = r0.get(r1)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            java.lang.String r1 = r0.getPlugin_version()
            java.lang.String r2 = r6.getVersion()
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L48
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.ClearDownloadingEvent r2 = new com.ymnsdk.replugin.event.silentdownload.ClearDownloadingEvent
            java.lang.String r3 = r0.getPlugin_id()
            java.lang.String r4 = r0.getPlugin_version()
            r2.<init>(r5, r3, r4)
            r1.postToSeperllita(r2)
            java.util.List r0 = r0.getMd5List()
            if (r0 != 0) goto L45
            return
        L45:
            clearCache(r0)
        L48:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalUserDowningPlugin()
            java.lang.String r1 = r6.getId()
            boolean r1 = r0.containsKey(r1)
            if (r1 == 0) goto L90
            java.lang.String r1 = r6.getId()
            java.lang.Object r0 = r0.get(r1)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            java.lang.String r1 = r0.getPlugin_version()
            java.lang.String r6 = r6.getVersion()
            boolean r6 = r1.equals(r6)
            if (r6 != 0) goto L90
            com.ymnsdk.replugin.datafun.PostdataLib r6 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.ClearDownloadingEvent r1 = new com.ymnsdk.replugin.event.silentdownload.ClearDownloadingEvent
            java.lang.String r2 = r0.getPlugin_id()
            java.lang.String r3 = r0.getPlugin_version()
            r1.<init>(r5, r2, r3)
            r6.postToSeperllita(r1)
            java.util.List r5 = r0.getMd5List()
            if (r5 != 0) goto L8d
            return
        L8d:
            clearCache(r5)
        L90:
            return
    }

    public static boolean checkInBlackList(java.util.List<java.lang.String> r0, java.lang.String r1) {
            boolean r0 = checkscaleCondition(r0, r1)
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static boolean checkInWhilteList(java.util.List<java.lang.String> r0, java.lang.String r1) {
            boolean r0 = checkscaleCondition(r0, r1)
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static void checkPatch(android.app.Activity r6, com.ymnsdk.replugin.entity.PluginInfo r7) {
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.gutMergePatchData()
            java.lang.String r1 = r7.getPlugin_id()
            boolean r1 = r0.containsKey(r1)
            if (r1 == 0) goto L56
            java.lang.String r1 = r7.getPlugin_id()
            java.lang.Object r1 = r0.get(r1)
            com.ymnsdk.replugin.entity.PluginInfo r1 = (com.ymnsdk.replugin.entity.PluginInfo) r1
            java.lang.String r2 = r1.getPlugin_version()
            java.lang.String r3 = r7.getPlugin_version()
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L56
            com.ymnsdk.replugin.datafun.PostdataLib r2 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.ClearDownloadingEvent r3 = new com.ymnsdk.replugin.event.silentdownload.ClearDownloadingEvent
            java.lang.String r4 = r1.getPlugin_id()
            java.lang.String r5 = r1.getPlugin_version()
            r3.<init>(r6, r4, r5)
            r2.postToSeperllita(r3)
            java.util.List r6 = r1.getMd5List()
            if (r6 != 0) goto L45
            return
        L45:
            clearPatch(r6)
            java.lang.String r6 = r7.getPlugin_id()
            r0.remove(r6)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r6 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r6.putMergePatchData(r0)
        L56:
            return
    }

    public static int checkSilentFilter(java.lang.String r9, long r10, int r12) {
            java.lang.String r0 = "silent_filter"
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            r2 = 4593311331947716280(0x3fbeb851eb851eb8, double:0.12)
            boolean r1 = r1.checkSilentMemory(r10, r2)
            r2 = 1
            if (r1 != 0) goto L13
            return r2
        L13:
            com.ymnsdk.replugin.entity.Plugin r9 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPluginById(r9)
            com.ymnsdk.replugin.entity.silentfilter.SilentUpdateFilterEnity r9 = r9.getSilent_update_filter()
            r1 = 0
            if (r9 == 0) goto Lbb
            com.ymnsdk.replugin.entity.silentfilter.StorageLeftSetting r3 = r9.getStorageLeftSetting()
            if (r3 == 0) goto L41
            if (r12 != 0) goto L2b
            int r3 = r3.getWhen_apk()
            goto L2f
        L2b:
            int r3 = r3.getWhen_patch()
        L2f:
            com.ymnsdk.replugin.util.DownloadUtils r4 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            r5 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r7 = (double) r3
            double r7 = r7 * r5
            r5 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r7 = r7 / r5
            boolean r10 = r4.checkSilentMemory(r10, r7)
            if (r10 != 0) goto L41
            return r2
        L41:
            if (r12 != r2) goto L44
            return r1
        L44:
            com.ymnsdk.replugin.entity.silentfilter.DeviceModelSetting r10 = r9.getDeviceModelSetting()
            if (r10 == 0) goto L68
            java.util.List r11 = r10.getArray()
            java.lang.String r12 = android.os.Build.MODEL
            int r10 = r10.getIs_white_list()
            r3 = 3
            if (r10 == 0) goto L61
            if (r10 == r2) goto L5a
            goto L68
        L5a:
            boolean r10 = checkInWhilteList(r11, r12)
            if (r10 != 0) goto L68
            return r3
        L61:
            boolean r10 = checkInBlackList(r11, r12)
            if (r10 == 0) goto L68
            return r3
        L68:
            java.lang.String r9 = r9.getCustom_setting()
            if (r9 != 0) goto L74
            boolean r10 = r9.isEmpty()
            if (r10 != 0) goto Lbb
        L74:
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lb7
            java.lang.String r11 = com.ymnsdk.replugin.util.SilentDownloadUtils.mhostAppInfo     // Catch: java.lang.Exception -> Lb7
            r10.<init>(r11)     // Catch: java.lang.Exception -> Lb7
            boolean r11 = r10.has(r0)     // Catch: java.lang.Exception -> Lb7
            if (r11 == 0) goto Lbb
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lb7
            java.lang.String r10 = r10.getString(r0)     // Catch: java.lang.Exception -> Lb7
            r11.<init>(r10)     // Catch: java.lang.Exception -> Lb7
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lb7
            r10.<init>(r9)     // Catch: java.lang.Exception -> Lb7
            java.util.Iterator r9 = r10.keys()     // Catch: java.lang.Exception -> Lb7
        L93:
            boolean r12 = r9.hasNext()     // Catch: java.lang.Exception -> Lb7
            if (r12 == 0) goto Lbb
            java.lang.Object r12 = r9.next()     // Catch: java.lang.Exception -> Lb7
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Exception -> Lb7
            java.lang.String r0 = r10.getString(r12)     // Catch: java.lang.Exception -> Lb7
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: java.lang.Exception -> Lb7
            java.lang.Class<com.ymnsdk.replugin.entity.silentfilter.CustFilterEntity> r3 = com.ymnsdk.replugin.entity.silentfilter.CustFilterEntity.class
            java.lang.Object r0 = r2.fromJson(r0, r3)     // Catch: java.lang.Exception -> Lb7
            com.ymnsdk.replugin.entity.silentfilter.CustFilterEntity r0 = (com.ymnsdk.replugin.entity.silentfilter.CustFilterEntity) r0     // Catch: java.lang.Exception -> Lb7
            boolean r12 = filterCustData(r11, r12, r0)     // Catch: java.lang.Exception -> Lb7
            if (r12 == 0) goto L93
            r9 = 5
            return r9
        Lb7:
            r9 = move-exception
            r9.printStackTrace()
        Lbb:
            return r1
    }

    private static boolean checkscaleCondition(java.util.List<java.lang.String> r3, java.lang.String r4) {
            java.lang.String r4 = r4.toLowerCase()
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            r1 = r0
        L9:
            int r2 = r3.size()
            if (r1 >= r2) goto L20
            java.lang.Object r2 = r3.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L1d
            r3 = 1
            return r3
        L1d:
            int r1 = r1 + 1
            goto L9
        L20:
            return r0
    }

    private static void clearCache(java.util.List<java.lang.String> r4) {
            r0 = 0
        L1:
            int r1 = r4.size()
            if (r0 >= r1) goto L5e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.ymnsdk.replugin.util.DownloadUtils r2 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.Object r3 = r4.get(r0)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r2 = r2.joinPluginPath(r3)
            r1.append(r2)
            java.lang.String r2 = ".cache"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r1)
            boolean r1 = r2.exists()
            if (r1 == 0) goto L34
            r2.delete()
        L34:
            com.ymnsdk.replugin.patch.download.DownloadFileState r1 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r1.syncFromFile()
            com.ymnsdk.replugin.patch.download.DownloadFileState r1 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            java.util.Map r1 = r1.getDownloadFileStatus()
            java.lang.Object r2 = r4.get(r0)
            boolean r2 = r1.containsKey(r2)
            if (r2 == 0) goto L54
            java.lang.Object r2 = r4.get(r0)
            r1.remove(r2)
        L54:
            com.ymnsdk.replugin.patch.download.DownloadFileState r1 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r1.syncToFile()
            int r0 = r0 + 1
            goto L1
        L5e:
            return
    }

    private static void clearPatch(java.util.List<java.lang.String> r3) {
            r0 = 0
        L1:
            int r1 = r3.size()
            if (r0 >= r1) goto L26
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.Object r2 = r3.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r1 = r1.joinPluginPath(r2)
            java.io.File r2 = new java.io.File
            r2.<init>(r1)
            boolean r1 = r2.exists()
            if (r1 == 0) goto L23
            r2.delete()
        L23:
            int r0 = r0 + 1
            goto L1
        L26:
            return
    }

    private static boolean filterCustData(org.json.JSONObject r4, java.lang.String r5, com.ymnsdk.replugin.entity.silentfilter.CustFilterEntity r6) {
            java.util.Iterator r0 = r4.keys()     // Catch: java.lang.Exception -> L3a
        L4:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L3a
            if (r1 == 0) goto L3e
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = r4.getString(r1)     // Catch: java.lang.Exception -> L3a
            boolean r1 = r1.equals(r5)     // Catch: java.lang.Exception -> L3a
            if (r1 == 0) goto L4
            int r1 = r6.getIs_white_list()     // Catch: java.lang.Exception -> L3a
            r3 = 1
            if (r1 == 0) goto L2f
            if (r1 == r3) goto L24
            goto L4
        L24:
            java.util.List r1 = r6.getArray()     // Catch: java.lang.Exception -> L3a
            boolean r1 = checkInWhilteList(r1, r2)     // Catch: java.lang.Exception -> L3a
            if (r1 != 0) goto L4
            return r3
        L2f:
            java.util.List r1 = r6.getArray()     // Catch: java.lang.Exception -> L3a
            boolean r1 = checkInBlackList(r1, r2)     // Catch: java.lang.Exception -> L3a
            if (r1 == 0) goto L4
            return r3
        L3a:
            r4 = move-exception
            r4.printStackTrace()
        L3e:
            r4 = 0
            return r4
    }

    public static int isSatisfySclentDownload(java.lang.String r2, int r3) {
            com.ymnsdk.replugin.util.SilentDownloadUtils.mhostAppInfo = r2
            com.carlt.networklibs.NetType r2 = com.carlt.networklibs.utils.NetworkUtils.getNetType()
            com.carlt.networklibs.NetType r0 = com.carlt.networklibs.NetType.WIFI
            r1 = 0
            if (r2 != r0) goto L16
            com.ymnsdk.replugin.patch.download.DownloadState r2 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r2 = r2.isOpenSilentDownload()
            if (r2 == 0) goto L16
            return r1
        L16:
            com.carlt.networklibs.NetType r2 = com.carlt.networklibs.utils.NetworkUtils.getNetType()
            com.carlt.networklibs.NetType r0 = com.carlt.networklibs.NetType.WIFI
            if (r2 == r0) goto L23
            r2 = 1
            if (r3 != r2) goto L22
            return r1
        L22:
            return r2
        L23:
            r2 = 2
            return r2
    }
}
