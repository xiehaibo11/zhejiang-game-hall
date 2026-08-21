package com.bianfeng.privategetui;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.APPLICATION, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class PrivateGetuiInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    public static final java.lang.String CLEAR_PUSH_DATA = "getui_clear_notify_info";
    public static final java.lang.String PUSH_FUCTION_READ_DATA = "gt_get_notify_info";
    public static final java.lang.String PUSH_FUNCTION_BIND_ALIAS = "push_bind_alias";
    public static final java.lang.String PUSH_FUNCTION_CANCEL_SHOW = "push_cancel_show_notification";
    public static final java.lang.String PUSH_FUNCTION_GET_CLIENTID = "push_get_clientid";
    public static final java.lang.String PUSH_FUNCTION_GET_CLIENTID_NEW = "push_get_clientid_new";
    public static final java.lang.String PUSH_FUNCTION_SHOW = "push_show_notification";
    public static final java.lang.String PUSH_FUNCTION_UNBIND_ALL_ALIAS = "push_unbind_all_alias";
    public static final java.lang.String PUSH_FUNCTION_UNBIND_CURRENT_ALIAS = "push_unbind_current_alias";
    public static final java.lang.String PUSH_IS_PUSH_TURNEDON = "getui_is_push_turnedon";
    public static final java.lang.String PUSH_MSG_ARRIVED = "getui_push_msg_arrived";
    public static final java.lang.String PUSH_MSG_CLICK = "getui_push_msg_click";
    public static final java.lang.String PUSH_SET_TAG = "getui_push_set_tag";
    public static final java.lang.String PUSH_TOKEN = "getui_push_token";
    public static final java.lang.String PUSH_TURN_OFF_PUSH = "getui_turn_off_push";
    public static final java.lang.String PUSH_TURN_ON_PUSH = "getui_turn_on_push";
    public static final java.lang.String SET_HWBADGE_NUM = "getui_set_hwbadge_num";
    private static volatile boolean isFirst = true;









    static {
            return
    }

    public PrivateGetuiInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_bind_alias")
    public void bindAlias(java.lang.String r3) {
            r2 = this;
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            android.content.Context r1 = r2.getContext()
            boolean r3 = r0.bindAlias(r1, r3)
            java.lang.String r0 = "push_bind_alias"
            if (r3 == 0) goto L18
            r3 = 1502(0x5de, float:2.105E-42)
            java.lang.String r1 = "bind_alias_success"
            r2.sendResult(r3, r1, r0)
            goto L1f
        L18:
            r3 = 1503(0x5df, float:2.106E-42)
            java.lang.String r1 = "bind_alias_fail"
            r2.sendResult(r3, r1, r0)
        L1f:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_bind_alias")
    public void bindAlias(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            android.content.Context r1 = r2.getContext()
            r0.bindAlias(r1, r3, r4)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_cancel_show_notification")
    public void cancelShowNotification(java.lang.String r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            com.bianfeng.privategetui.PushNotification.cancelRepeating(r0, r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "getui_clear_notify_info")
    public void clearPushData() {
            r2 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "key"
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r1, r0)
            java.lang.String r1 = "params"
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r1, r0)
            java.lang.String r1 = "click"
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r1, r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_get_clientid")
    public void getClientId() {
            r3 = this;
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            android.content.Context r1 = r3.getContext()
            java.lang.String r0 = r0.getClientid(r1)
            r1 = 1501(0x5dd, float:2.103E-42)
            java.lang.String r2 = "push_get_clientid"
            r3.sendResult(r1, r0, r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_get_clientid_new")
    public void getClientIdNew() {
            r3 = this;
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.getCid()
            r1 = 1501(0x5dd, float:2.103E-42)
            java.lang.String r2 = "push_get_clientid_new"
            r3.sendResult(r1, r0, r2)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "131"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "privategetui"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 19
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "4.6.4.0"
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "getui_push_token")
    public void getToken() {
            r3 = this;
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.getToken()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "getui_push_msg_click"
            if (r1 == 0) goto L14
            r0 = 1521(0x5f1, float:2.131E-42)
            java.lang.String r1 = ""
            r3.sendResult(r0, r1, r2)
            goto L19
        L14:
            r1 = 1520(0x5f0, float:2.13E-42)
            r3.sendResult(r1, r0, r2)
        L19:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "getui_is_push_turnedon")
    public void isPushTurnedOn() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.privategetui.PrivateGetuiInterface$7 r1 = new com.bianfeng.privategetui.PrivateGetuiInterface$7
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "getui_push_msg_arrived")
    public void msgArrived() {
            r3 = this;
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.getMsgArrived()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "getui_push_msg_arrived"
            if (r1 == 0) goto L14
            r0 = 1519(0x5ef, float:2.129E-42)
            java.lang.String r1 = ""
            r3.sendResult(r0, r1, r2)
            goto L19
        L14:
            r1 = 1518(0x5ee, float:2.127E-42)
            r3.sendResult(r1, r0, r2)
        L19:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "getui_push_msg_click")
    public void msgClick() {
            r3 = this;
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.getMsgClick()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "getui_push_msg_click"
            if (r1 == 0) goto L14
            r0 = 1517(0x5ed, float:2.126E-42)
            java.lang.String r1 = ""
            r3.sendResult(r0, r1, r2)
            goto L19
        L14:
            r1 = 1516(0x5ec, float:2.124E-42)
            r3.sendResult(r1, r0, r2)
        L19:
            return
    }

    @Override
    public void onContextChanged(android.content.Context r3) {
            r2 = this;
            super.onContextChanged(r3)
            boolean r0 = r3 instanceof android.app.Activity
            if (r0 == 0) goto L25
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            com.bianfeng.privategetui.PrivateGetuiInterface$1 r1 = new com.bianfeng.privategetui.PrivateGetuiInterface$1
            r1.<init>(r2)
            r0.setDebugLogger(r3, r1)
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            java.lang.Class<com.bianfeng.privategetui.GetuiPushService> r1 = com.bianfeng.privategetui.GetuiPushService.class
            r0.initialize(r3, r1)
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            java.lang.Class<com.bianfeng.privategetui.YmnGetuiIntentService> r1 = com.bianfeng.privategetui.YmnGetuiIntentService.class
            r0.registerPushIntentService(r3, r1)
        L25:
            return
    }

    @Override
    public void onCreate(android.app.Activity r6) {
            r5 = this;
            java.lang.String r0 = "badgenumber"
            super.onCreate(r6)
            java.lang.String r1 = "11111111 "
            java.lang.String r2 = "oncreate"
            android.util.Log.e(r1, r2)
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Exception -> L41
            r1.<init>()     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = "PUSH_APP_PACKAGENAME"
            java.lang.String r2 = r5.getMetaData(r2)     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = "package"
            r1.putString(r3, r2)     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = "PUSH_APP_MAIN_ACTIVITY"
            java.lang.String r2 = r5.getMetaData(r2)     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = "class"
            r1.putString(r3, r2)     // Catch: java.lang.Exception -> L41
            r2 = 0
            r1.putInt(r0, r2)     // Catch: java.lang.Exception -> L41
            android.content.ContentResolver r6 = r6.getContentResolver()     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = "content://com.huawei.android.launcher.settings/badge/"
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L41
            java.lang.String r3 = "change_badge"
            r4 = 0
            r6.call(r2, r3, r4, r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r6 = "0"
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r0, r6)     // Catch: java.lang.Exception -> L41
            goto L45
        L41:
            r6 = move-exception
            r6.printStackTrace()
        L45:
            return
    }

    @Override
    public void onDestroy() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.privategetui.PrivateGetuiInterface$4 r1 = new com.bianfeng.privategetui.PrivateGetuiInterface$4
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            super.onDestroy()
            return
    }

    @Override
    public void onInit(android.content.Context r4) {
            r3 = this;
            super.onInit(r4)
            boolean r0 = com.bianfeng.privategetui.PrivateGetuiInterface.isFirst
            if (r0 == 0) goto Ld
            com.bianfeng.privategetui.ResourceHelper.initResourceR(r4)
            r0 = 0
            com.bianfeng.privategetui.PrivateGetuiInterface.isFirst = r0
        Ld:
            android.content.Context r0 = r4.getApplicationContext()     // Catch: java.lang.Exception -> L17
            android.app.Application r0 = (android.app.Application) r0     // Catch: java.lang.Exception -> L17
            com.huawei.hms.api.HuaweiMobileServicesUtil.setApplication(r0)     // Catch: java.lang.Exception -> L17
            goto L30
        L17:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PrivateGetuiInterface is "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
        L30:
            com.bianfeng.privategetui.YmnGetuiHandler.init(r3)
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.init(r4)
            return
    }

    @Override
    public void onPause() {
            r2 = this;
            super.onPause()
            java.lang.String r0 = "onResume"
            java.lang.String r1 = "false"
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r0, r1)
            return
    }

    @Override
    public void onResume() {
            r6 = this;
            java.lang.String r0 = "badgenumber"
            super.onResume()
            java.lang.String r1 = "onResume"
            java.lang.String r2 = "11111111 "
            android.util.Log.e(r2, r1)
            java.lang.String r2 = "true"
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r1, r2)
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Exception -> L4a
            r1.<init>()     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "PUSH_APP_PACKAGENAME"
            java.lang.String r2 = r6.getMetaData(r2)     // Catch: java.lang.Exception -> L4a
            java.lang.String r3 = "package"
            r1.putString(r3, r2)     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "PUSH_APP_MAIN_ACTIVITY"
            java.lang.String r2 = r6.getMetaData(r2)     // Catch: java.lang.Exception -> L4a
            java.lang.String r3 = "class"
            r1.putString(r3, r2)     // Catch: java.lang.Exception -> L4a
            r2 = 0
            r1.putInt(r0, r2)     // Catch: java.lang.Exception -> L4a
            android.app.Activity r2 = r6.getActivity()     // Catch: java.lang.Exception -> L4a
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L4a
            java.lang.String r3 = "content://com.huawei.android.launcher.settings/badge/"
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Exception -> L4a
            java.lang.String r4 = "change_badge"
            r5 = 0
            r2.call(r3, r4, r5, r1)     // Catch: java.lang.Exception -> L4a
            java.lang.String r1 = "0"
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L4a
            goto L4e
        L4a:
            r0 = move-exception
            r0.printStackTrace()
        L4e:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "gt_get_notify_info")
    public void readLocalData() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.privategetui.PrivateGetuiInterface$2 r1 = new com.bianfeng.privategetui.PrivateGetuiInterface$2
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "gt_get_notify_info")
    public void readLocalData(java.lang.String r3) {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.privategetui.PrivateGetuiInterface$3 r1 = new com.bianfeng.privategetui.PrivateGetuiInterface$3
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "getui_set_hwbadge_num")
    public void setHubadgeNum() {
            r3 = this;
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            android.app.Activity r1 = r3.getActivity()
            r2 = 0
            r0.setHwBadgeNum(r1, r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "getui_push_set_tag")
    public void setTag(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lc
            java.lang.String r3 = "GETUI TAGS IS NULL"
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            return
        Lc:
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.privategetui.PrivateGetuiInterface$8 r1 = new com.bianfeng.privategetui.PrivateGetuiInterface$8
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_show_notification")
    public void showNotification(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            com.bianfeng.privategetui.PushNotification.showLoacl(r0, r2, r3, r4)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_show_notification")
    public void showNotification(java.lang.String r7, java.lang.String r8, java.lang.String r9, long r10) {
            r6 = this;
            android.content.Context r0 = r6.getContext()
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            com.bianfeng.privategetui.PushNotification.show(r0, r1, r2, r3, r4)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_show_notification")
    public void showNotificationRepeating(java.lang.String r9, java.lang.String r10, java.lang.String r11, long r12, long r14) {
            r8 = this;
            android.content.Context r0 = r8.getContext()
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r6 = r14
            com.bianfeng.privategetui.PushNotification.repeating(r0, r1, r2, r3, r4, r6)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "getui_turn_off_push")
    public void turnOffPush() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.privategetui.PrivateGetuiInterface$6 r1 = new com.bianfeng.privategetui.PrivateGetuiInterface$6
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "getui_turn_on_push")
    public void turnOnPush() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.privategetui.PrivateGetuiInterface$5 r1 = new com.bianfeng.privategetui.PrivateGetuiInterface$5
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_unbind_all_alias")
    public void unBindAllAlias(java.lang.String r4) {
            r3 = this;
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            android.content.Context r1 = r3.getContext()
            r2 = 0
            boolean r4 = r0.unBindAlias(r1, r4, r2)
            java.lang.String r0 = "push_unbind_all_alias"
            if (r4 == 0) goto L19
            r4 = 1504(0x5e0, float:2.108E-42)
            java.lang.String r1 = "unbind_alias_success"
            r3.sendResult(r4, r1, r0)
            goto L20
        L19:
            r4 = 1505(0x5e1, float:2.109E-42)
            java.lang.String r1 = "unbind_alias_fail"
            r3.sendResult(r4, r1, r0)
        L20:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_unbind_all_alias")
    public void unBindAllAlias(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            android.content.Context r1 = r3.getContext()
            r2 = 0
            r0.unBindAlias(r1, r4, r2, r5)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_unbind_current_alias")
    public void unBindCurrentAlias(java.lang.String r4) {
            r3 = this;
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            android.content.Context r1 = r3.getContext()
            r2 = 1
            boolean r4 = r0.unBindAlias(r1, r4, r2)
            java.lang.String r0 = "push_unbind_current_alias"
            if (r4 == 0) goto L19
            r4 = 1504(0x5e0, float:2.108E-42)
            java.lang.String r1 = "unbind_alias_success"
            r3.sendResult(r4, r1, r0)
            goto L20
        L19:
            r4 = 1505(0x5e1, float:2.109E-42)
            java.lang.String r1 = "unbind_alias_fail"
            r3.sendResult(r4, r1, r0)
        L20:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "push_unbind_current_alias")
    public void unBindCurrentAlias(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            android.content.Context r1 = r3.getContext()
            r2 = 1
            r0.unBindAlias(r1, r4, r2, r5)
            return
    }
}
