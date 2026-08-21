package com.bianfeng.privategetui;

import android.content.Context;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;

/* JADX INFO: loaded from: classes.dex */
public class YmnGetuiSharedPreferencesUtils {
    private static String key_cid = "ymn_getui_cid";
    private static String key_cid_state = "ymn_getui_cid_state";
    private static String key_msg_arrived = "ymn_getui_msg_arrived";
    private static String key_msg_click = "ymn_getui_msg_click";
    private static String key_pid = "ymn_getui_pid";
    private static String key_token = "ymn_getui_token";

    public static void init(Context context) {
        SharedPreferencesUtils.init(context);
    }

    public static void put(String str, String str2) {
        try {
            SharedPreferencesUtils.put(str, str2);
        } catch (Exception unused) {
            Logger.i("misdk", "存储数据的报异常了");
        }
    }

    public static void put(String str, boolean z) {
        try {
            SharedPreferencesUtils.put(str, z);
        } catch (Exception unused) {
            Logger.i("misdk", "存储数据的报异常了");
        }
    }

    public static String read(String str) {
        return SharedPreferencesUtils.getString(str);
    }

    public static boolean readBool(String str) {
        return SharedPreferencesUtils.getBoolean(str);
    }

    public static void putPid(int i) {
        put(key_pid, i + "");
    }

    public static String getPid() {
        return read(key_pid);
    }

    public static void putCid(String str) {
        put(key_cid, str);
    }

    public static String getCid() {
        return read(key_cid);
    }

    public static void putCidState(boolean z) {
        put(key_cid_state, z);
    }

    public static boolean getKeyCidState() {
        return readBool(key_cid_state);
    }

    public static void putToken(String str) {
        put(key_token, str);
    }

    public static String getToken() {
        return read(key_token);
    }

    public static void putMsgClick(String str) {
        put(key_msg_click, str);
    }

    public static String getMsgClick() {
        return read(key_msg_click);
    }

    public static void putMsgArrived(String str) {
        put(key_msg_arrived, str);
    }

    public static String getMsgArrived() {
        return read(key_msg_arrived);
    }
}
