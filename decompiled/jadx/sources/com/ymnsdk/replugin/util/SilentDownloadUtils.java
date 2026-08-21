package com.ymnsdk.replugin.util;

import android.app.Activity;
import android.os.Build;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.carlt.networklibs.NetType;
import com.carlt.networklibs.utils.NetworkUtils;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.Plugin;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.entity.silentfilter.CustFilterEntity;
import com.ymnsdk.replugin.entity.silentfilter.DeviceModelSetting;
import com.ymnsdk.replugin.entity.silentfilter.SilentUpdateFilterEnity;
import com.ymnsdk.replugin.entity.silentfilter.StorageLeftSetting;
import com.ymnsdk.replugin.event.silentdownload.ClearDownloadingEvent;
import com.ymnsdk.replugin.manger.PluginMangerUtils;
import com.ymnsdk.replugin.patch.download.DownloadFileInfo;
import com.ymnsdk.replugin.patch.download.DownloadFileState;
import com.ymnsdk.replugin.patch.download.DownloadState;
import java.io.File;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class SilentDownloadUtils {
    public static volatile int isNoWifiDownload = 0;
    static String mhostAppInfo = "";

    public static int isSatisfySclentDownload(String str, int i) {
        mhostAppInfo = str;
        if (NetworkUtils.getNetType() == NetType.WIFI && DownloadState.getInstance().isOpenSilentDownload()) {
            return 0;
        }
        if (NetworkUtils.getNetType() != NetType.WIFI) {
            return i == 1 ? 0 : 1;
        }
        return 2;
    }

    public static int checkSilentFilter(String str, long j, int i) {
        int when_patch;
        if (!DownloadUtils.getInstance().checkSilentMemory(j, 0.12d)) {
            return 1;
        }
        SilentUpdateFilterEnity silent_update_filter = PluginMangerUtils.findPluginById(str).getSilent_update_filter();
        if (silent_update_filter != null) {
            StorageLeftSetting storageLeftSetting = silent_update_filter.getStorageLeftSetting();
            if (storageLeftSetting != null) {
                if (i == 0) {
                    when_patch = storageLeftSetting.getWhen_apk();
                } else {
                    when_patch = storageLeftSetting.getWhen_patch();
                }
                if (!DownloadUtils.getInstance().checkSilentMemory(j, (((double) when_patch) * 1.0d) / 100.0d)) {
                    return 1;
                }
            }
            if (i == 1) {
                return 0;
            }
            DeviceModelSetting deviceModelSetting = silent_update_filter.getDeviceModelSetting();
            if (deviceModelSetting != null) {
                List<String> array = deviceModelSetting.getArray();
                String str2 = Build.MODEL;
                int is_white_list = deviceModelSetting.getIs_white_list();
                if (is_white_list == 0) {
                    if (checkInBlackList(array, str2)) {
                        return 3;
                    }
                } else if (is_white_list == 1 && !checkInWhilteList(array, str2)) {
                    return 3;
                }
            }
            String custom_setting = silent_update_filter.getCustom_setting();
            if (custom_setting != null || !custom_setting.isEmpty()) {
                try {
                    JSONObject jSONObject = new JSONObject(mhostAppInfo);
                    if (jSONObject.has("silent_filter")) {
                        JSONObject jSONObject2 = new JSONObject(jSONObject.getString("silent_filter"));
                        JSONObject jSONObject3 = new JSONObject(custom_setting);
                        Iterator<String> itKeys = jSONObject3.keys();
                        while (itKeys.hasNext()) {
                            String next = itKeys.next();
                            if (filterCustData(jSONObject2, next, (CustFilterEntity) GsonUtils.getInstance().fromJson(jSONObject3.getString(next), CustFilterEntity.class))) {
                                return 5;
                            }
                        }
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
        return 0;
    }

    public static void checkDowningPlugin(Activity activity, Plugin plugin) {
        Map<String, PluginInfo> localSilentDowningPlugin = SharedPerferencesDataUtils.getInstance().getLocalSilentDowningPlugin();
        if (localSilentDowningPlugin.containsKey(plugin.getId())) {
            PluginInfo pluginInfo = localSilentDowningPlugin.get(plugin.getId());
            if (!pluginInfo.getPlugin_version().equals(plugin.getVersion())) {
                PostdataLib.getInstance().postToSeperllita(new ClearDownloadingEvent(activity, pluginInfo.getPlugin_id(), pluginInfo.getPlugin_version()));
                List<String> md5List = pluginInfo.getMd5List();
                if (md5List == null) {
                    return;
                } else {
                    clearCache(md5List);
                }
            }
        }
        Map<String, PluginInfo> localUserDowningPlugin = SharedPerferencesDataUtils.getInstance().getLocalUserDowningPlugin();
        if (localUserDowningPlugin.containsKey(plugin.getId())) {
            PluginInfo pluginInfo2 = localUserDowningPlugin.get(plugin.getId());
            if (pluginInfo2.getPlugin_version().equals(plugin.getVersion())) {
                return;
            }
            PostdataLib.getInstance().postToSeperllita(new ClearDownloadingEvent(activity, pluginInfo2.getPlugin_id(), pluginInfo2.getPlugin_version()));
            List<String> md5List2 = pluginInfo2.getMd5List();
            if (md5List2 == null) {
                return;
            }
            clearCache(md5List2);
        }
    }

    public static void checkPatch(Activity activity, PluginInfo pluginInfo) {
        Map<String, PluginInfo> mapGutMergePatchData = SharedPerferencesDataUtils.getInstance().gutMergePatchData();
        if (mapGutMergePatchData.containsKey(pluginInfo.getPlugin_id())) {
            PluginInfo pluginInfo2 = mapGutMergePatchData.get(pluginInfo.getPlugin_id());
            if (pluginInfo2.getPlugin_version().equals(pluginInfo.getPlugin_version())) {
                return;
            }
            PostdataLib.getInstance().postToSeperllita(new ClearDownloadingEvent(activity, pluginInfo2.getPlugin_id(), pluginInfo2.getPlugin_version()));
            List<String> md5List = pluginInfo2.getMd5List();
            if (md5List == null) {
                return;
            }
            clearPatch(md5List);
            mapGutMergePatchData.remove(pluginInfo.getPlugin_id());
            SharedPerferencesDataUtils.getInstance().putMergePatchData(mapGutMergePatchData);
        }
    }

    private static void clearCache(List<String> list) {
        for (int i = 0; i < list.size(); i++) {
            File file = new File(DownloadUtils.getInstance().joinPluginPath(list.get(i)) + ".cache");
            if (file.exists()) {
                file.delete();
            }
            DownloadFileState.getInstance().syncFromFile();
            Map<String, DownloadFileInfo> downloadFileStatus = DownloadFileState.getInstance().getDownloadFileStatus();
            if (downloadFileStatus.containsKey(list.get(i))) {
                downloadFileStatus.remove(list.get(i));
            }
            DownloadFileState.getInstance().syncToFile();
        }
    }

    private static void clearPatch(List<String> list) {
        for (int i = 0; i < list.size(); i++) {
            File file = new File(DownloadUtils.getInstance().joinPluginPath(list.get(i)));
            if (file.exists()) {
                file.delete();
            }
        }
    }

    public static boolean checkInBlackList(List<String> list, String str) {
        return checkscaleCondition(list, str);
    }

    public static boolean checkInWhilteList(List<String> list, String str) {
        return checkscaleCondition(list, str);
    }

    private static boolean checkscaleCondition(List<String> list, String str) {
        String lowerCase = str.toLowerCase();
        if (list == null) {
            return false;
        }
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).equals(lowerCase)) {
                return true;
            }
        }
        return false;
    }

    private static boolean filterCustData(JSONObject jSONObject, String str, CustFilterEntity custFilterEntity) {
        try {
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                String string = jSONObject.getString(next);
                if (next.equals(str)) {
                    int is_white_list = custFilterEntity.getIs_white_list();
                    if (is_white_list == 0) {
                        if (checkInBlackList(custFilterEntity.getArray(), string)) {
                            return true;
                        }
                    } else if (is_white_list == 1 && !checkInWhilteList(custFilterEntity.getArray(), string)) {
                        return true;
                    }
                }
            }
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }
}
