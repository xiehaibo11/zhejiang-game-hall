package com.bianfeng.privategetui;

public class YmnGetuiSharedPreferencesUtils {
    private static java.lang.String key_cid = "ymn_getui_cid";
    private static java.lang.String key_cid_state = "ymn_getui_cid_state";
    private static java.lang.String key_msg_arrived = "ymn_getui_msg_arrived";
    private static java.lang.String key_msg_click = "ymn_getui_msg_click";
    private static java.lang.String key_pid = "ymn_getui_pid";
    private static java.lang.String key_token = "ymn_getui_token";

    static {
            return
    }

    public YmnGetuiSharedPreferencesUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getCid() {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_cid
            java.lang.String r0 = read(r0)
            return r0
    }

    public static boolean getKeyCidState() {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_cid_state
            boolean r0 = readBool(r0)
            return r0
    }

    public static java.lang.String getMsgArrived() {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_msg_arrived
            java.lang.String r0 = read(r0)
            return r0
    }

    public static java.lang.String getMsgClick() {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_msg_click
            java.lang.String r0 = read(r0)
            return r0
    }

    public static java.lang.String getPid() {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_pid
            java.lang.String r0 = read(r0)
            return r0
    }

    public static java.lang.String getToken() {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_token
            java.lang.String r0 = read(r0)
            return r0
    }

    public static void init(android.content.Context r0) {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.init(r0)
            return
    }

    public static void put(java.lang.String r0, java.lang.String r1) {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L4
            goto Lb
        L4:
            java.lang.String r0 = "misdk"
            java.lang.String r1 = "存储数据的报异常了"
            com.bianfeng.ymnsdk.util.Logger.i(r0, r1)
        Lb:
            return
    }

    public static void put(java.lang.String r0, boolean r1) {
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L4
            goto Lb
        L4:
            java.lang.String r0 = "misdk"
            java.lang.String r1 = "存储数据的报异常了"
            com.bianfeng.ymnsdk.util.Logger.i(r0, r1)
        Lb:
            return
    }

    public static void putCid(java.lang.String r1) {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_cid
            put(r0, r1)
            return
    }

    public static void putCidState(boolean r1) {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_cid_state
            put(r0, r1)
            return
    }

    public static void putMsgArrived(java.lang.String r1) {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_msg_arrived
            put(r0, r1)
            return
    }

    public static void putMsgClick(java.lang.String r1) {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_msg_click
            put(r0, r1)
            return
    }

    public static void putPid(int r2) {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_pid
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            put(r0, r2)
            return
    }

    public static void putToken(java.lang.String r1) {
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.key_token
            put(r0, r1)
            return
    }

    public static java.lang.String read(java.lang.String r0) {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public static boolean readBool(java.lang.String r0) {
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            return r0
    }
}
