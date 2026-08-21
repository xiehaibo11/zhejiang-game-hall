package com.bianfeng.ymnsdk.utilslib.cache;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import com.qihoo360.i.IPluginManager;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.expressad.foundation.g.a;
import cz.msebera.android.httpclient.protocol.HTTP;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public final class SharedPreferencesUtils {
    private static final String BFDATA_NAME_PREFERENCES = "resource_cfg";
    private static final String SP_NAME = "ymnsdk_sp";
    private static final String YMNAGREEPRIVACY = "ymn_agree_privacy";
    private static Context mContext;
    private static SharedPreferences preferences;
    public static String pl_imei = "imei";
    public static String pl_imsi = "imsi";
    public static String pl_ip = "user_ip";
    public static String pl_androidid = "android_id";
    public static String pl_oaid = "oaid";
    public static String pl_network = PointCategory.NETWORK;
    public static String pl_model = "model";
    public static String pl_os_version = a.bd;
    public static String pl_soft_list = "soft_list";
    public static String pl_isp = "isp";

    public static void init(Context context) {
        mContext = context;
        if (preferences == null) {
            synchronized (SharedPreferencesUtils.class) {
                if (preferences == null) {
                    preferences = context.getSharedPreferences(SP_NAME, 0);
                }
            }
        }
    }

    public static void put(String key, String value) throws YmnException {
        try {
            SharedPreferences.Editor editor = preferences.edit();
            editor.putString(key, value);
            editor.apply();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public static void put(String key, boolean value) throws YmnException {
        try {
            SharedPreferences.Editor editor = preferences.edit();
            editor.putBoolean(key, value);
            editor.apply();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public static void put(String key, int value) throws YmnException {
        try {
            SharedPreferences.Editor editor = preferences.edit();
            editor.putInt(key, value);
            editor.apply();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public static void put(String key, long value) throws YmnException {
        try {
            SharedPreferences.Editor editor = preferences.edit();
            editor.putLong(key, value);
            editor.apply();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public static String getString(String key) {
        if (preferences == null) {
            return "";
        }
        UtilsLogger.i("");
        return preferences.getString(key, "");
    }

    public static boolean getBoolean(String key) {
        SharedPreferences sharedPreferences = preferences;
        if (sharedPreferences != null) {
            return sharedPreferences.getBoolean(key, false);
        }
        return false;
    }

    public static int getInt(String key) {
        SharedPreferences sharedPreferences = preferences;
        if (sharedPreferences != null) {
            return sharedPreferences.getInt(key, 0);
        }
        return 0;
    }

    public static long getLong(String key) {
        SharedPreferences sharedPreferences = preferences;
        if (sharedPreferences != null) {
            return sharedPreferences.getLong(key, 0L);
        }
        return 0L;
    }

    public static void remove(String key) {
        SharedPreferences sharedPreferences = preferences;
        if (sharedPreferences != null) {
            SharedPreferences.Editor editor = sharedPreferences.edit();
            editor.remove(key);
        }
    }

    public static String getStringFromBfData(Context context, String key) {
        SharedPreferences bfdata_preferences = context.getSharedPreferences(BFDATA_NAME_PREFERENCES, 0);
        return bfdata_preferences.getString(key, "");
    }

    public static void setStringFromBfData(String key, String value) {
    }

    public static void setYmnagreeprivacy() {
        try {
            boolean isAgree = getBoolean(YMNAGREEPRIVACY);
            if (!isAgree) {
                Log.i("ymnsdk", "setYmnagreeprivacy: " + isAgree);
                put(YMNAGREEPRIVACY, true);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static boolean isAgreeprivacy() {
        return getBoolean(YMNAGREEPRIVACY);
    }

    public static String getPLSPName() {
        if (getPLUid().isEmpty()) {
            return "ymnsdk_pl_info";
        }
        return "ymnsdk_pl_info_" + getPLUid();
    }

    public static LinkedHashMap getAllPLinfo(String fileName) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        try {
            if (!getPLStringFormSP(fileName, pl_imei).isEmpty()) {
                linkedHashMap.put(pl_imei, getPLStringFormSP(fileName, pl_imei));
            }
            if (!getPLStringFormSP(fileName, pl_imsi).isEmpty()) {
                linkedHashMap.put(pl_imsi, getPLStringFormSP(fileName, pl_imsi));
            }
            if (!getPLStringFormSP(fileName, pl_ip).isEmpty()) {
                linkedHashMap.put(pl_ip, getPLStringFormSP(fileName, pl_ip));
            }
            if (!getPLStringFormSP(fileName, pl_androidid).isEmpty()) {
                linkedHashMap.put(pl_androidid, getPLStringFormSP(fileName, pl_androidid));
            }
            if (!getPLStringFormSP(fileName, pl_oaid).isEmpty()) {
                linkedHashMap.put(pl_oaid, getPLStringFormSP(fileName, pl_oaid));
            }
            if (!getPLStringFormSP(fileName, pl_network).isEmpty()) {
                linkedHashMap.put(pl_network, getPLStringFormSP(fileName, pl_network));
            }
            if (!getPLStringFormSP(fileName, pl_model).isEmpty()) {
                linkedHashMap.put(pl_model, getPLStringFormSP(fileName, pl_model));
            }
            if (!getPLStringFormSP(fileName, pl_os_version).isEmpty()) {
                linkedHashMap.put(pl_os_version, getPLStringFormSP(fileName, pl_os_version));
            }
            if (!getPLStringFormSP(fileName, pl_soft_list).isEmpty()) {
                linkedHashMap.put(pl_soft_list, getPLStringFormSP(fileName, pl_soft_list));
            }
            if (!getPLStringFormSP(fileName, pl_isp).isEmpty()) {
                linkedHashMap.put(pl_isp, getPLStringFormSP(fileName, pl_isp));
            }
        } catch (YmnException e) {
            e.printStackTrace();
        }
        return linkedHashMap;
    }

    public static void mergePlInfoToUser() {
        if (mContext == null) {
            Log.e("Ymnsdk", "未初始化utils");
            return;
        }
        LinkedHashMap noLoginInfo = getAllPLinfo("ymnsdk_pl_info");
        SharedPreferences privacyPreferences = mContext.getSharedPreferences(getPLSPName(), 0);
        SharedPreferences.Editor editor = privacyPreferences.edit();
        if (noLoginInfo != null && noLoginInfo.keySet().size() != 0) {
            for (Map.Entry<String, String> entry : noLoginInfo.entrySet()) {
                editor.putString(entry.getKey(), entry.getValue());
            }
        }
        editor.apply();
        removeAllBeforePlInfo();
    }

    public static void removeAllBeforePlInfo() {
        Context context = mContext;
        if (context == null) {
            Log.e("Ymnsdk", "未初始化utils");
            return;
        }
        SharedPreferences privacyPreferences = context.getSharedPreferences("ymnsdk_pl_info", 0);
        SharedPreferences.Editor editor = privacyPreferences.edit();
        editor.remove(pl_imei);
        editor.remove(pl_imsi);
        editor.remove(pl_ip);
        editor.remove(pl_androidid);
        editor.remove(pl_network);
        editor.remove(pl_model);
        editor.remove(pl_os_version);
        editor.remove(pl_soft_list);
        editor.remove(pl_isp);
        editor.remove(pl_imei);
        editor.remove(pl_imei);
        editor.remove(pl_imei);
        editor.remove(pl_imei);
        editor.apply();
    }

    public static String getPLUid() {
        Context context = mContext;
        if (context == null) {
            Log.e("Ymnsdk", "未初始化utils");
            return "";
        }
        SharedPreferences privacyPreferences = context.getSharedPreferences("ymnsdk_pl_info", 0);
        return privacyPreferences.getString("pl_uid", "");
    }

    public static void setPLUid(String uid) {
        Context context = mContext;
        if (context == null || uid == null) {
            Log.e("Ymnsdk", "未初始化utils");
            return;
        }
        SharedPreferences privacyPreferences = context.getSharedPreferences("ymnsdk_pl_info", 0);
        SharedPreferences.Editor editor = privacyPreferences.edit();
        editor.putString("pl_uid", uid);
        editor.apply();
        mergePlInfoToUser();
    }

    public static String getPLReportStatus(String uid) {
        Context context = mContext;
        if (context == null) {
            Log.e("Ymnsdk", "未初始化utils");
            return "";
        }
        SharedPreferences privacyPreferences = context.getSharedPreferences("ymnsdk_pl_info", 0);
        return privacyPreferences.getString(uid, "0");
    }

    public static void setPLReportStatus(String uid) {
        Context context = mContext;
        if (context == null || uid == null) {
            Log.e("Ymnsdk", "未初始化utils");
            return;
        }
        SharedPreferences privacyPreferences = context.getSharedPreferences("ymnsdk_pl_info", 0);
        SharedPreferences.Editor editor = privacyPreferences.edit();
        editor.putString(uid, "1");
        editor.apply();
    }

    public static void setPLStringToSP(String name, String key, String value) {
        if (mContext == null || value == null || value.isEmpty()) {
            Log.e("Ymnsdk", "未初始化utils");
            return;
        }
        SharedPreferences privacyPreferences = mContext.getSharedPreferences(name, 0);
        SharedPreferences.Editor editor = privacyPreferences.edit();
        String modeID = getPlTypeID(key);
        try {
            ArrayList localArr = getPLArrayFormSP(name, modeID);
            if (!localArr.contains(value)) {
                localArr.add(value);
                editor.putString(modeID, GsonUtils.getInstance().toJson(localArr));
            }
            editor.putString(key, value);
            editor.apply();
        } catch (YmnException e) {
            throw new RuntimeException(e);
        }
    }

    private static String getPlTypeID(String labelString) {
        ArrayList<String> arrayList = new ArrayList<>(Arrays.asList("base", HTTP.IDENTITY_CODING, IPluginManager.KEY_PROCESS, "device", PointCategory.NETWORK, "use", "derivative", "child", "name", "moblie_num", "id_num", "gps", "pic_info", "imei", "imsi", a.bj, "user_ip", "android_id", "oaid", PointCategory.NETWORK, "model", a.bd, "mac", "soft_list", "isp", "user_info", "third_account", "clipboard", "pay_info", "game_dur", "comm_info", "derivative_info", "child_name", "child_id_num"));
        return String.valueOf(arrayList.indexOf(labelString) + 1);
    }

    public static ArrayList getPLArrayFormSP(String name, String key) throws YmnException {
        ArrayList localInfoArr = new ArrayList();
        Context context = mContext;
        if (context == null) {
            Log.e("Ymnsdk", "未初始化utils");
            return localInfoArr;
        }
        SharedPreferences privacyPreferences = context.getSharedPreferences(name, 0);
        ArrayList localInfoArr2 = (ArrayList) GsonUtils.getInstance().fromJson(privacyPreferences.getString(key, ""), ArrayList.class);
        if (localInfoArr2 == null) {
            ArrayList localInfoArr3 = new ArrayList();
            return localInfoArr3;
        }
        return localInfoArr2;
    }

    public static String getPLStringFormSP(String name, String key) throws YmnException {
        Context context = mContext;
        if (context == null) {
            Log.e("Ymnsdk", "未初始化utils");
            return "";
        }
        SharedPreferences privacyPreferences = context.getSharedPreferences(name, 0);
        return privacyPreferences.getString(key, "");
    }
}
