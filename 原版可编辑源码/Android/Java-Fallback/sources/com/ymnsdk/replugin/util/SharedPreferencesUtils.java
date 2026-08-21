package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class SharedPreferencesUtils {
    private static final java.lang.String ANDROID_ID = "replugin_android_id";
    private static final java.lang.String CP_SID = "replugin_cp_sid";
    private static final java.lang.String DOWNLOADED_PLUGIN_LIST = "replugin_downloaded_plugin_list";
    private static final java.lang.String DOWNLOAD_FILEDATA = "replugin_download_file_data";
    private static final java.lang.String HOST_APP_ID = "replugin_host_app_id";
    private static final java.lang.String HOST_APP_INFO = "replugin_host_app_info";
    private static final java.lang.String IS_LOG = "replugin_is_log";
    private static final java.lang.String LOCAL_PLUGIN = "local_plugin";
    private static final java.lang.String MERGE_PATCH_DATA = "replugin_merge_patch_data";
    private static final java.lang.String PLUGIN_GRAY = "replugin_plugin_gray";
    private static final java.lang.String PLUGIN_ID = "replugin_plugin_id";
    private static final java.lang.String PLUGIN_INFO_DETAIL = "plugin_info_detail";
    private static final java.lang.String PLUGIN_LIST = "plugin_list";
    private static final java.lang.String REPLUGIN_TRACE = "replugin_trace";
    private static final java.lang.String SLIENT_DOWNLOADING_PLUGIN_LIST = "replugin_slient_downloading_plugin_list";
    private static final java.lang.String UPDATE_SERVER_ADDRESS = "update_server_address";
    private static final java.lang.String USER_DOWNLOADING_PLUGIN_LIST = "replugin_user_downloading_plugin_list";
    private static final java.lang.String USER_ID = "replugin_user_id";
    private static volatile com.ymnsdk.replugin.util.SharedPreferencesUtils preferencesUtils;

    public SharedPreferencesUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getAndroidId() {
            java.lang.String r0 = "replugin_android_id"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getAppId() {
            java.lang.String r0 = "replugin_host_app_id"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getAppInfo() {
            java.lang.String r0 = "replugin_host_app_info"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getCpSid() {
            java.lang.String r0 = "replugin_cp_sid"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getDownloadFiledata() {
            java.lang.String r0 = "replugin_download_file_data"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getDownloadedPluginInfoList() {
            java.lang.String r0 = "replugin_downloaded_plugin_list"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static com.ymnsdk.replugin.util.SharedPreferencesUtils getInstance() {
            com.ymnsdk.replugin.util.SharedPreferencesUtils r0 = com.ymnsdk.replugin.util.SharedPreferencesUtils.preferencesUtils
            if (r0 != 0) goto L17
            java.lang.Class<com.ymnsdk.replugin.util.SharedPreferencesUtils> r0 = com.ymnsdk.replugin.util.SharedPreferencesUtils.class
            monitor-enter(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.preferencesUtils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ymnsdk.replugin.util.SharedPreferencesUtils r1 = new com.ymnsdk.replugin.util.SharedPreferencesUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ymnsdk.replugin.util.SharedPreferencesUtils.preferencesUtils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ymnsdk.replugin.util.SharedPreferencesUtils r0 = com.ymnsdk.replugin.util.SharedPreferencesUtils.preferencesUtils
            return r0
    }

    public static int getIsLog() {
            java.lang.String r0 = "replugin_is_log"
            int r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getInt(r0)
            return r0
    }

    public static java.lang.String getLocalPlugin() {
            java.lang.String r0 = "local_plugin"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getLocalPluginInfoDetail() {
            java.lang.String r0 = "plugin_info_detail"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getMergePatchData() {
            java.lang.String r0 = "replugin_merge_patch_data"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getPluginData() {
            java.lang.String r0 = "replugin_plugin_gray"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getPluginId() {
            java.lang.String r0 = "replugin_plugin_id"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getPluginList() {
            java.lang.String r0 = "plugin_list"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getRepluginTrace() {
            java.lang.String r0 = "replugin_trace"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getSilentDownloadingPluginInfoList() {
            java.lang.String r0 = "replugin_slient_downloading_plugin_list"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getUpdateServerAddress() {
            java.lang.String r0 = "update_server_address"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getUserDownloadingPluginInfoList() {
            java.lang.String r0 = "replugin_user_downloading_plugin_list"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static java.lang.String getUserId() {
            java.lang.String r0 = "replugin_user_id"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static void setAndroidId(java.lang.String r1) {
            java.lang.String r0 = "replugin_android_id"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setAppId(java.lang.String r1) {
            java.lang.String r0 = "replugin_host_app_id"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setAppInfo(java.lang.String r1) {
            java.lang.String r0 = "replugin_host_app_info"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setCpSid(java.lang.String r1) {
            java.lang.String r0 = "replugin_cp_sid"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setDownloadFiledata(java.lang.String r1) {
            java.lang.String r0 = "replugin_download_file_data"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setDownloadedPluginInfoList(java.lang.String r1) {
            java.lang.String r0 = "replugin_downloaded_plugin_list"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setIsLog(int r1) {
            java.lang.String r0 = "replugin_is_log"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setLocalPlugin(java.lang.String r1) {
            java.lang.String r0 = "local_plugin"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setLocalPluginInfoDetail(java.lang.String r1) {
            java.lang.String r0 = "plugin_info_detail"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setMergePatchData(java.lang.String r1) {
            java.lang.String r0 = "replugin_merge_patch_data"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setPluginData(java.lang.String r1) {
            java.lang.String r0 = "replugin_plugin_gray"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setPluginId(java.lang.String r1) {
            java.lang.String r0 = "replugin_plugin_id"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setPluginList(java.lang.String r1) {
            java.lang.String r0 = "plugin_list"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setRepluginTrace(java.lang.String r1) {
            java.lang.String r0 = "replugin_trace"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setSilentDownloadingPluginInfoList(java.lang.String r1) {
            java.lang.String r0 = "replugin_slient_downloading_plugin_list"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setUpdateServerAddress(java.lang.String r1) {
            java.lang.String r0 = "update_server_address"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setUserDownloadingPluginInfoList(java.lang.String r1) {
            java.lang.String r0 = "replugin_user_downloading_plugin_list"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }

    public static void setUserId(java.lang.String r1) {
            java.lang.String r0 = "replugin_user_id"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r1 = move-exception
            r1.printStackTrace()
        La:
            return
    }
}
