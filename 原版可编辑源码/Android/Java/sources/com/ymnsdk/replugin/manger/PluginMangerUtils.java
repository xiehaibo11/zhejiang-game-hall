package com.ymnsdk.replugin.manger;

import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.google.gson.Gson;
import com.ymnsdk.replugin.entity.AppPluginInfo;
import com.ymnsdk.replugin.entity.GrayscaleCondition;
import com.ymnsdk.replugin.entity.Patch;
import com.ymnsdk.replugin.entity.Plugin;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.util.SharedPerferencesDataUtils;
import com.ymnsdk.replugin.util.SharedPreferencesUtils;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginMangerUtils {
    private static volatile PluginMangerUtils manger;

    public static PluginMangerUtils getInstance() {
        if (manger == null) {
            synchronized (PluginMangerUtils.class) {
                if (manger == null) {
                    manger = new PluginMangerUtils();
                }
            }
        }
        return manger;
    }

    public static int getUpdateType(List<String> list, String str, int i) {
        boolean z;
        int i2 = 0;
        while (true) {
            if (i2 >= list.size()) {
                z = true;
                break;
            }
            if (str.equals(list.get(i2))) {
                z = false;
                break;
            }
            i2++;
        }
        return (z || i == 1) ? 1 : 0;
    }

    public static long getPluginSize(PluginInfo pluginInfo, String str) {
        if (pluginInfo.getPlugin_version().equals(str)) {
            return pluginInfo.getFile_size();
        }
        if (pluginInfo.getPatch() == null) {
            return 0L;
        }
        for (int i = 0; i < pluginInfo.getPatch().size(); i++) {
            Patch patch = pluginInfo.getPatch().get(i);
            if (patch.getFrom_version().equals(str)) {
                return patch.getPatch_size();
            }
        }
        return 0L;
    }

    public static Plugin findPluginById(String str) {
        try {
            GsonUtils gsonUtils = GsonUtils.getInstance();
            SharedPreferencesUtils.getInstance();
            List listFrom = gsonUtils.getListFrom(SharedPreferencesUtils.getPluginList());
            if (listFrom != null) {
                for (int i = 0; i < listFrom.size(); i++) {
                    Plugin plugin = (Plugin) new Gson().fromJson(new JSONObject((Map<String, Object>) listFrom.get(i)).toString(), Plugin.class);
                    if (plugin.getId().equals(str)) {
                        return plugin;
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return new Plugin();
    }

    public static List<Plugin> getAllPlugin() {
        ArrayList arrayList = new ArrayList();
        try {
            GsonUtils gsonUtils = GsonUtils.getInstance();
            SharedPreferencesUtils.getInstance();
            List listFrom = gsonUtils.getListFrom(SharedPreferencesUtils.getPluginList());
            if (listFrom != null) {
                for (int i = 0; i < listFrom.size(); i++) {
                    arrayList.add((Plugin) new Gson().fromJson(new JSONObject((Map<String, Object>) listFrom.get(i)).toString(), Plugin.class));
                }
            }
            return arrayList;
        } catch (Exception e) {
            e.printStackTrace();
            return arrayList;
        }
    }

    public static Patch findPatch(String str, PluginInfo pluginInfo, String str2) {
        Map<String, PluginInfo> localDownedPlugin = SharedPerferencesDataUtils.getInstance().getLocalDownedPlugin();
        if (localDownedPlugin.containsKey(str)) {
            if (localDownedPlugin.get(str) == null) {
                return null;
            }
            str2 = localDownedPlugin.get(str).getPlugin_version();
        }
        List<Patch> patch = pluginInfo.getPatch();
        if (patch != null) {
            for (int i = 0; i < patch.size(); i++) {
                if (patch.get(i).getFrom_version().equals(str2)) {
                    return patch.get(i);
                }
            }
        }
        return null;
    }

    public static String getDescription(Plugin plugin, String str) {
        return (plugin.getDescription() == null || plugin.getDescription().isEmpty()) ? str : plugin.getDescription();
    }

    public static void filterPlugin(AppPluginInfo appPluginInfo, String str) {
        String[] strArr = {"ip", "user_id", "device_id"};
        for (int i = 0; i < 3; i++) {
            filterStr(appPluginInfo, str, strArr[i]);
        }
    }

    private static void filterStr(AppPluginInfo appPluginInfo, String str, String str2) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has(str2)) {
                String string = jSONObject.getString(str2);
                List<Plugin> plugins = appPluginInfo.getPlugins();
                for (int i = 0; i < plugins.size(); i++) {
                    GrayscaleCondition grayscale_condition = plugins.get(i).getGrayscale_condition();
                    List<String> arrayList = new ArrayList<>();
                    byte b = -1;
                    int iHashCode = str2.hashCode();
                    if (iHashCode != -147132913) {
                        if (iHashCode != 3367) {
                            if (iHashCode == 25209764 && str2.equals("device_id")) {
                                b = 2;
                            }
                        } else if (str2.equals("ip")) {
                            b = 0;
                        }
                    } else if (str2.equals("user_id")) {
                        b = 1;
                    }
                    if (b == 0) {
                        arrayList = grayscale_condition.getIp();
                    } else if (b == 1) {
                        arrayList = grayscale_condition.getUser_id();
                    } else if (b == 2) {
                        arrayList = grayscale_condition.getDevice_id();
                    }
                    if (checkGrayscaleCondition(arrayList, string)) {
                        plugins.get(i).setVersion(plugins.get(i).getGray_version());
                        plugins.get(i).setManifest_path(plugins.get(i).getGray_manifest_path());
                        plugins.get(i).setUpdate_type(plugins.get(i).getGray_update_type());
                        plugins.get(i).setUpdate_type_v22(plugins.get(i).getGray_update_type_v22());
                        Map<String, Boolean> pluginGrayData = SharedPerferencesDataUtils.getInstance().getPluginGrayData();
                        pluginGrayData.put(plugins.get(i).getId(), true);
                        SharedPerferencesDataUtils.getInstance().putPluginGrayData(pluginGrayData);
                    }
                }
                appPluginInfo.setPlugins(plugins);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static boolean checkGrayscaleCondition(List<String> list, String str) {
        if (list == null) {
            return false;
        }
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).equals(str)) {
                return true;
            }
        }
        return false;
    }

    public static int getPluginMode(String str) {
        Plugin pluginFindPluginById = findPluginById(str);
        if (pluginFindPluginById == null) {
            return 0;
        }
        return pluginFindPluginById.getCommon_mode();
    }

    public static boolean getIsShowUpdateDialog(String str) {
        Plugin pluginFindPluginById = findPluginById(str);
        return (pluginFindPluginById == null || pluginFindPluginById.getNotify_before_update_enabled() == 0) ? false : true;
    }

    public static boolean getIsShowStartDialog(String str) {
        Plugin pluginFindPluginById = findPluginById(str);
        return (pluginFindPluginById == null || pluginFindPluginById.getNotify_after_update_enabled() == 0) ? false : true;
    }

    public static boolean getIsShowErrorDialog(String str) {
        Plugin pluginFindPluginById = findPluginById(str);
        return (pluginFindPluginById == null || pluginFindPluginById.getNotify_launch_failure_enabled() == 0) ? false : true;
    }
}
