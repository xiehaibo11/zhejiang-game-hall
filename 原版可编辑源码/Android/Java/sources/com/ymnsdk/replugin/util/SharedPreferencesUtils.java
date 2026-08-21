package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class SharedPreferencesUtils {
    private static final String ANDROID_ID = "replugin_android_id";
    private static final String CP_SID = "replugin_cp_sid";
    private static final String DOWNLOADED_PLUGIN_LIST = "replugin_downloaded_plugin_list";
    private static final String DOWNLOAD_FILEDATA = "replugin_download_file_data";
    private static final String HOST_APP_ID = "replugin_host_app_id";
    private static final String HOST_APP_INFO = "replugin_host_app_info";
    private static final String IS_LOG = "replugin_is_log";
    private static final String LOCAL_PLUGIN = "local_plugin";
    private static final String MERGE_PATCH_DATA = "replugin_merge_patch_data";
    private static final String PLUGIN_GRAY = "replugin_plugin_gray";
    private static final String PLUGIN_ID = "replugin_plugin_id";
    private static final String PLUGIN_INFO_DETAIL = "plugin_info_detail";
    private static final String PLUGIN_LIST = "plugin_list";
    private static final String REPLUGIN_TRACE = "replugin_trace";
    private static final String SLIENT_DOWNLOADING_PLUGIN_LIST = "replugin_slient_downloading_plugin_list";
    private static final String UPDATE_SERVER_ADDRESS = "update_server_address";
    private static final String USER_DOWNLOADING_PLUGIN_LIST = "replugin_user_downloading_plugin_list";
    private static final String USER_ID = "replugin_user_id";
    private static volatile SharedPreferencesUtils preferencesUtils;

    public static SharedPreferencesUtils getInstance() {
        if (preferencesUtils == null) {
            synchronized (SharedPreferencesUtils.class) {
                if (preferencesUtils == null) {
                    preferencesUtils = new SharedPreferencesUtils();
                }
            }
        }
        return preferencesUtils;
    }

    public static void setPluginList(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(PLUGIN_LIST, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getPluginList() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(PLUGIN_LIST);
    }

    public static void setUpdateServerAddress(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(UPDATE_SERVER_ADDRESS, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getUpdateServerAddress() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(UPDATE_SERVER_ADDRESS);
    }

    public static void setLocalPlugin(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(LOCAL_PLUGIN, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getLocalPlugin() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(LOCAL_PLUGIN);
    }

    public static void setLocalPluginInfoDetail(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(PLUGIN_INFO_DETAIL, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getLocalPluginInfoDetail() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(PLUGIN_INFO_DETAIL);
    }

    public static void setRepluginTrace(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(REPLUGIN_TRACE, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getRepluginTrace() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(REPLUGIN_TRACE);
    }

    public static void setAndroidId(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(ANDROID_ID, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getAndroidId() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(ANDROID_ID);
    }

    public static void setAppId(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(HOST_APP_ID, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getAppId() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(HOST_APP_ID);
    }

    public static void setAppInfo(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(HOST_APP_INFO, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getAppInfo() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(HOST_APP_INFO);
    }

    public static void setUserDownloadingPluginInfoList(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(USER_DOWNLOADING_PLUGIN_LIST, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getUserDownloadingPluginInfoList() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(USER_DOWNLOADING_PLUGIN_LIST);
    }

    public static void setSilentDownloadingPluginInfoList(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(SLIENT_DOWNLOADING_PLUGIN_LIST, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getSilentDownloadingPluginInfoList() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(SLIENT_DOWNLOADING_PLUGIN_LIST);
    }

    public static void setDownloadedPluginInfoList(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(DOWNLOADED_PLUGIN_LIST, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getDownloadedPluginInfoList() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(DOWNLOADED_PLUGIN_LIST);
    }

    public static void setDownloadFiledata(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(DOWNLOAD_FILEDATA, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getDownloadFiledata() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(DOWNLOAD_FILEDATA);
    }

    public static void setMergePatchData(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(MERGE_PATCH_DATA, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getMergePatchData() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(MERGE_PATCH_DATA);
    }

    public static void setPluginData(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(PLUGIN_GRAY, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getPluginData() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(PLUGIN_GRAY);
    }

    public static void setUserId(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(USER_ID, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getUserId() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(USER_ID);
    }

    public static void setCpSid(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(CP_SID, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getCpSid() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(CP_SID);
    }

    public static void setPluginId(String str) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(PLUGIN_ID, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getPluginId() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(PLUGIN_ID);
    }

    public static void setIsLog(int i) {
        try {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(IS_LOG, i);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static int getIsLog() {
        return com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getInt(IS_LOG);
    }
}
