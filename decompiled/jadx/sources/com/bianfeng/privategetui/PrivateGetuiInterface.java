package com.bianfeng.privategetui;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.huawei.hms.api.HuaweiMobileServicesUtil;
import com.igexin.sdk.IUserLoggerInterface;
import com.igexin.sdk.PushBuildConfig;
import com.igexin.sdk.PushManager;

/* JADX INFO: loaded from: classes.dex */
@YPlugin(entrance = YPlugin.Entrance.APPLICATION, strategy = YPlugin.Policy.FORCE)
public class PrivateGetuiInterface extends YmnPluginWrapper {
    public static final String CLEAR_PUSH_DATA = "getui_clear_notify_info";
    public static final String PUSH_FUCTION_READ_DATA = "gt_get_notify_info";
    public static final String PUSH_FUNCTION_BIND_ALIAS = "push_bind_alias";
    public static final String PUSH_FUNCTION_CANCEL_SHOW = "push_cancel_show_notification";
    public static final String PUSH_FUNCTION_GET_CLIENTID = "push_get_clientid";
    public static final String PUSH_FUNCTION_GET_CLIENTID_NEW = "push_get_clientid_new";
    public static final String PUSH_FUNCTION_SHOW = "push_show_notification";
    public static final String PUSH_FUNCTION_UNBIND_ALL_ALIAS = "push_unbind_all_alias";
    public static final String PUSH_FUNCTION_UNBIND_CURRENT_ALIAS = "push_unbind_current_alias";
    public static final String PUSH_IS_PUSH_TURNEDON = "getui_is_push_turnedon";
    public static final String PUSH_MSG_ARRIVED = "getui_push_msg_arrived";
    public static final String PUSH_MSG_CLICK = "getui_push_msg_click";
    public static final String PUSH_SET_TAG = "getui_push_set_tag";
    public static final String PUSH_TOKEN = "getui_push_token";
    public static final String PUSH_TURN_OFF_PUSH = "getui_turn_off_push";
    public static final String PUSH_TURN_ON_PUSH = "getui_turn_on_push";
    public static final String SET_HWBADGE_NUM = "getui_set_hwbadge_num";
    private static volatile boolean isFirst = true;

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginId() {
        return "131";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getPluginName() {
        return "privategetui";
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public int getPluginVersion() {
        return 19;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String getSdkVersion() {
        return PushBuildConfig.sdk_conf_version;
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper
    public void onCreate(Activity activity) {
        super.onCreate(activity);
        Log.e("11111111 ", "oncreate");
        try {
            Bundle bundle = new Bundle();
            bundle.putString("package", getMetaData("PUSH_APP_PACKAGENAME"));
            bundle.putString("class", getMetaData("PUSH_APP_MAIN_ACTIVITY"));
            bundle.putInt("badgenumber", 0);
            activity.getContentResolver().call(Uri.parse("content://com.huawei.android.launcher.settings/badge/"), "change_badge", (String) null, bundle);
            YmnGetuiSharedPreferencesUtils.put("badgenumber", "0");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onInit(Context context) {
        super.onInit(context);
        if (isFirst) {
            ResourceHelper.initResourceR(context);
            isFirst = false;
        }
        try {
            HuaweiMobileServicesUtil.setApplication((Application) context.getApplicationContext());
        } catch (Exception e) {
            Logger.i("PrivateGetuiInterface is " + e.getMessage());
        }
        YmnGetuiHandler.init(this);
        YmnGetuiSharedPreferencesUtils.init(context);
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper
    public void onContextChanged(Context context) {
        super.onContextChanged(context);
        if (context instanceof Activity) {
            PushManager.getInstance().setDebugLogger(context, new IUserLoggerInterface() { // from class: com.bianfeng.privategetui.PrivateGetuiInterface.1
                @Override // com.igexin.sdk.IUserLoggerInterface
                public void log(String str) {
                    Logger.e("PrivateGetuiInterface onInit---->" + str);
                }
            });
            PushManager.getInstance().initialize(context, GetuiPushService.class);
            PushManager.getInstance().registerPushIntentService(context, YmnGetuiIntentService.class);
        }
    }

    @YFunction(name = PUSH_FUNCTION_SHOW)
    public void showNotification(String str, String str2, String str3) {
        PushNotification.showLoacl(getContext(), str, str2, str3);
    }

    @YFunction(name = PUSH_FUNCTION_SHOW)
    public void showNotification(String str, String str2, String str3, long j) {
        PushNotification.show(getContext(), str, str2, str3, j);
    }

    @YFunction(name = PUSH_FUNCTION_SHOW)
    public void showNotificationRepeating(String str, String str2, String str3, long j, long j2) {
        PushNotification.repeating(getContext(), str, str2, str3, j, j2);
    }

    @YFunction(name = PUSH_FUNCTION_CANCEL_SHOW)
    public void cancelShowNotification(String str) {
        PushNotification.cancelRepeating(getContext(), str);
    }

    @YFunction(name = PUSH_FUNCTION_GET_CLIENTID)
    public void getClientId() {
        sendResult(GetuiWrapper.GETUI_GET_CLIENT_SUCCESS, PushManager.getInstance().getClientid(getContext()), PUSH_FUNCTION_GET_CLIENTID);
    }

    @YFunction(name = PUSH_FUNCTION_GET_CLIENTID_NEW)
    public void getClientIdNew() {
        sendResult(GetuiWrapper.GETUI_GET_CLIENT_SUCCESS, YmnGetuiSharedPreferencesUtils.getCid(), PUSH_FUNCTION_GET_CLIENTID_NEW);
    }

    @YFunction(name = PUSH_FUNCTION_BIND_ALIAS)
    public void bindAlias(String str) {
        if (PushManager.getInstance().bindAlias(getContext(), str)) {
            sendResult(GetuiWrapper.GETUI_BIND_ALIAS_SUCCESS, "bind_alias_success", PUSH_FUNCTION_BIND_ALIAS);
        } else {
            sendResult(GetuiWrapper.GETUI_BIND_ALIAS_FAIL, "bind_alias_fail", PUSH_FUNCTION_BIND_ALIAS);
        }
    }

    @YFunction(name = PUSH_FUNCTION_BIND_ALIAS)
    public void bindAlias(String str, String str2) {
        PushManager.getInstance().bindAlias(getContext(), str, str2);
    }

    @YFunction(name = PUSH_FUNCTION_UNBIND_ALL_ALIAS)
    public void unBindAllAlias(String str) {
        if (PushManager.getInstance().unBindAlias(getContext(), str, false)) {
            sendResult(GetuiWrapper.GETUI_UNBIND_ALIAS_SUCCESS, "unbind_alias_success", PUSH_FUNCTION_UNBIND_ALL_ALIAS);
        } else {
            sendResult(GetuiWrapper.GETUI_UNBIND_ALIAS_FAIL, "unbind_alias_fail", PUSH_FUNCTION_UNBIND_ALL_ALIAS);
        }
    }

    @YFunction(name = PUSH_FUNCTION_UNBIND_CURRENT_ALIAS)
    public void unBindCurrentAlias(String str) {
        if (PushManager.getInstance().unBindAlias(getContext(), str, true)) {
            sendResult(GetuiWrapper.GETUI_UNBIND_ALIAS_SUCCESS, "unbind_alias_success", PUSH_FUNCTION_UNBIND_CURRENT_ALIAS);
        } else {
            sendResult(GetuiWrapper.GETUI_UNBIND_ALIAS_FAIL, "unbind_alias_fail", PUSH_FUNCTION_UNBIND_CURRENT_ALIAS);
        }
    }

    @YFunction(name = PUSH_FUNCTION_UNBIND_ALL_ALIAS)
    public void unBindAllAlias(String str, String str2) {
        PushManager.getInstance().unBindAlias(getContext(), str, false, str2);
    }

    @YFunction(name = PUSH_FUNCTION_UNBIND_CURRENT_ALIAS)
    public void unBindCurrentAlias(String str, String str2) {
        PushManager.getInstance().unBindAlias(getContext(), str, true, str2);
    }

    @YFunction(name = PUSH_FUCTION_READ_DATA)
    public void readLocalData() {
        getActivity().runOnUiThread(new Runnable() { // from class: com.bianfeng.privategetui.PrivateGetuiInterface.2
            @Override // java.lang.Runnable
            public void run() {
                String str = YmnGetuiSharedPreferencesUtils.read("key");
                if (TextUtils.isEmpty(str)) {
                    PrivateGetuiInterface.this.sendResult(GetuiWrapper.GETUI_GET_DATA_FAIL, "获取数据失败", PrivateGetuiInterface.PUSH_FUCTION_READ_DATA);
                } else {
                    PrivateGetuiInterface.this.sendResult(GetuiWrapper.GETUI_GET_DATA_SUCCESS, str, PrivateGetuiInterface.PUSH_FUCTION_READ_DATA);
                }
            }
        });
    }

    @YFunction(name = PUSH_FUCTION_READ_DATA)
    public void readLocalData(final String str) {
        getActivity().runOnUiThread(new Runnable() { // from class: com.bianfeng.privategetui.PrivateGetuiInterface.3
            @Override // java.lang.Runnable
            public void run() {
                String str2 = YmnGetuiSharedPreferencesUtils.read(str);
                if (TextUtils.isEmpty(str2)) {
                    PrivateGetuiInterface.this.sendResult(GetuiWrapper.GETUI_GET_DATA_FAIL, "获取数据失败", PrivateGetuiInterface.PUSH_FUCTION_READ_DATA);
                } else {
                    PrivateGetuiInterface.this.sendResult(GetuiWrapper.GETUI_GET_DATA_SUCCESS, str2, PrivateGetuiInterface.PUSH_FUCTION_READ_DATA);
                }
            }
        });
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onDestroy() {
        getActivity().runOnUiThread(new Runnable() { // from class: com.bianfeng.privategetui.PrivateGetuiInterface.4
            @Override // java.lang.Runnable
            public void run() {
                YmnGetuiSharedPreferencesUtils.put("offline", "false");
            }
        });
        super.onDestroy();
    }

    @YFunction(name = PUSH_TURN_ON_PUSH)
    public void turnOnPush() {
        getActivity().runOnUiThread(new Runnable() { // from class: com.bianfeng.privategetui.PrivateGetuiInterface.5
            @Override // java.lang.Runnable
            public void run() {
                PushManager.getInstance().turnOnPush(PrivateGetuiInterface.this.getContext());
            }
        });
    }

    @YFunction(name = PUSH_TURN_OFF_PUSH)
    public void turnOffPush() {
        getActivity().runOnUiThread(new Runnable() { // from class: com.bianfeng.privategetui.PrivateGetuiInterface.6
            @Override // java.lang.Runnable
            public void run() {
                PushManager.getInstance().turnOffPush(PrivateGetuiInterface.this.getContext());
            }
        });
    }

    @YFunction(name = PUSH_IS_PUSH_TURNEDON)
    public void isPushTurnedOn() {
        getActivity().runOnUiThread(new Runnable() { // from class: com.bianfeng.privategetui.PrivateGetuiInterface.7
            @Override // java.lang.Runnable
            public void run() {
                if (PushManager.getInstance().isPushTurnedOn(PrivateGetuiInterface.this.getContext())) {
                    PrivateGetuiInterface.this.sendResult(GetuiWrapper.GETUI_TURN_ON, "开启状态", PrivateGetuiInterface.PUSH_IS_PUSH_TURNEDON);
                } else {
                    PrivateGetuiInterface.this.sendResult(GetuiWrapper.GETUI_TURN_OFF, "关闭状态", PrivateGetuiInterface.PUSH_IS_PUSH_TURNEDON);
                }
            }
        });
    }

    @YFunction(name = PUSH_SET_TAG)
    public void setTag(final String str) {
        if (TextUtils.isEmpty(str)) {
            Logger.i("GETUI TAGS IS NULL");
        } else {
            getActivity().runOnUiThread(new Runnable() { // from class: com.bianfeng.privategetui.PrivateGetuiInterface.8
                @Override // java.lang.Runnable
                public void run() {
                    PushManager.getInstance().setTag(PrivateGetuiInterface.this.getContext(), YmnGetuiUtils.getTags(str), String.valueOf(System.currentTimeMillis()));
                }
            });
        }
    }

    @YFunction(name = PUSH_MSG_ARRIVED)
    public void msgArrived() {
        String msgArrived = YmnGetuiSharedPreferencesUtils.getMsgArrived();
        if (TextUtils.isEmpty(msgArrived)) {
            sendResult(GetuiWrapper.GETUI_MESSAGE_ARRIVED_FAIL, "", PUSH_MSG_ARRIVED);
        } else {
            sendResult(GetuiWrapper.GETUI_MESSAGE_ARRIVED_SUC, msgArrived, PUSH_MSG_ARRIVED);
        }
    }

    @YFunction(name = PUSH_MSG_CLICK)
    public void msgClick() {
        String msgClick = YmnGetuiSharedPreferencesUtils.getMsgClick();
        if (TextUtils.isEmpty(msgClick)) {
            sendResult(GetuiWrapper.GETUI_MESSAGE_CLICK_FAIL, "", PUSH_MSG_CLICK);
        } else {
            sendResult(GetuiWrapper.GETUI_MESSAGE_CLICK_SUC, msgClick, PUSH_MSG_CLICK);
        }
    }

    @YFunction(name = PUSH_TOKEN)
    public void getToken() {
        String token = YmnGetuiSharedPreferencesUtils.getToken();
        if (TextUtils.isEmpty(token)) {
            sendResult(GetuiWrapper.GETUI_TOKEN_FAIL, "", PUSH_MSG_CLICK);
        } else {
            sendResult(GetuiWrapper.GETUI_TOKEN_SUC, token, PUSH_MSG_CLICK);
        }
    }

    @YFunction(name = CLEAR_PUSH_DATA)
    public void clearPushData() {
        YmnGetuiSharedPreferencesUtils.put("key", "");
        YmnGetuiSharedPreferencesUtils.put("params", "");
        YmnGetuiSharedPreferencesUtils.put("click", "");
    }

    @YFunction(name = SET_HWBADGE_NUM)
    public void setHubadgeNum() {
        PushManager.getInstance().setHwBadgeNum(getActivity(), 0);
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onResume() {
        super.onResume();
        Log.e("11111111 ", "onResume");
        YmnGetuiSharedPreferencesUtils.put("onResume", "true");
        try {
            Bundle bundle = new Bundle();
            bundle.putString("package", getMetaData("PUSH_APP_PACKAGENAME"));
            bundle.putString("class", getMetaData("PUSH_APP_MAIN_ACTIVITY"));
            bundle.putInt("badgenumber", 0);
            getActivity().getContentResolver().call(Uri.parse("content://com.huawei.android.launcher.settings/badge/"), "change_badge", (String) null, bundle);
            YmnGetuiSharedPreferencesUtils.put("badgenumber", "0");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onPause() {
        super.onPause();
        YmnGetuiSharedPreferencesUtils.put("onResume", "false");
    }
}
