package com.bianfeng.ymnsdk.feature.plugin;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Build;
import android.provider.Settings;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.YmnSdkPaymentWrapper;
import com.bianfeng.ymnsdk.action.ActionObserver;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.actionv2.ActionObserverV2;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.entity.UrlLocalState;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.RequestRetryUtils;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.device.DeviceInfo;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
import com.bianfeng.ymnsdk.utilslib.security.AESGCM256;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.UUID;
import org.json.JSONArray;

@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class YmnBaseInterface extends YmnPluginWrapper {
    public static final int CODE_DATAFUN_GET_DEVICEID = 1001002;
    public static final int CODE_GET_AESGCM256_DECRYPT_STRING = 1001006;
    public static final int CODE_GET_AESGCM256_ENCRYPT_STRING = 1001005;
    public static final int CODE_GET_PRODUCTS_FAIL = 2207;
    public static final int CODE_GET_PRODUCTS_SUCCESS = 2206;
    public static final int CODE_ORDERID_FAIL = 1001004;
    public static final int CODE_ORDERID_SUC = 1001003;
    public static final int CODE_PERMISSION_DENIED = 2209;
    public static final int CODE_PERMISSION_ERROR = 2210;
    public static final int CODE_PERMISSION_GRANTED = 2208;
    public static final int CODE_PERMISSION_IN48 = 2211;
    public static final int CODE_YMN_GET_DEVICEID = 1001001;
    public static final String GET_IDENTITY_INFO = "verifier_get_identity";
    public static final String SET_CLIP_ALLOW = "set_clip_allow";
    public static final String SET_IDENTITY_INFO = "verifier_set_identity";
    public static final int USERVERIFIER_GET_IDENTITY_FAIL = 2203;
    public static final int USERVERIFIER_GET_IDENTITY_SUCCESS = 2202;
    public static final int USERVERIFIER_SET_IDENTITY_FAIL = 2205;
    public static final int USERVERIFIER_SET_IDENTITY_SUCCESS = 2204;
    public static UrlLocalState localState;

    @Override
    public String getPluginId() {
        return null;
    }

    @Override
    public String getPluginName() {
        return "ymnbase";
    }

    @Override
    public int getPluginVersion() {
        return 8;
    }

    @Override
    public String getSdkVersion() {
        return "2.1.7";
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        setInited(true);
    }

    @Override
    public void onContextChanged(Context context) {
        super.onContextChanged(context);
    }

    @YFunction(name = "set_host")
    public void change_host(String url) {
        try {
            localState = com.bianfeng.ymnsdk.feature.e.e(getContext());
            localState.setCurrentHost(url);
            com.bianfeng.ymnsdk.feature.e.a(getContext(), localState);
            YmnDataFunUtils.getInstance().pluginFinish("set_host", getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, "");
        } catch (Exception e2) {
        }
    }

    @YFunction(name = "get_channel_id")
    public String getChannelId() {
        return YmnAppContext.getChannelId();
    }

    @YFunction(name = "get_AESGCM256_encrypt_string")
    public String get_AESGCM256_encrypt_string(String plaintext, String key) {
        try {
            String encryptStr = "bfdata_" + AESGCM256.encrypt(plaintext, key);
            sendResult(CODE_GET_AESGCM256_ENCRYPT_STRING, encryptStr);
            return encryptStr;
        } catch (Exception e2) {
            throw new RuntimeException(e2);
        }
    }

    @YFunction(name = "get_AESGCM256_decrypt_string")
    public String get_AESGCM256_decrypt_string(String plaintext, String key) {
        if (plaintext.contains("bfdata_")) {
            plaintext = plaintext.replace("bfdata_", "");
        }
        try {
            String decryptStr = AESGCM256.decrypt(plaintext, key);
            sendResult(CODE_GET_AESGCM256_DECRYPT_STRING, decryptStr);
            return decryptStr;
        } catch (Exception e2) {
            throw new RuntimeException(e2);
        }
    }

    @YFunction(name = "get_metadata_value")
    public String getMetaDataValue(String key) {
        return YmnAppContext.getMetaDataValueString(key);
    }

    @YFunction(alias = GET_IDENTITY_INFO, name = "get_identity")
    public void getIdentity(String ymnPlatformId, String ymnUserId) {
        getIdentity("0", ymnPlatformId, ymnUserId);
    }

    @YFunction(alias = GET_IDENTITY_INFO, name = "get_identity")
    @Deprecated
    public void getIdentity(String type, String areaId, String userId) {
        RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.action.b action = new com.bianfeng.ymnsdk.action.b(getContext());
        action.putReqData(this, type, areaId, userId);
        action.addObserver(new a(action, retryUtils));
        action.onStartAttachment();
        action.actionStart();
    }

    class a extends ActionObserver {
        final com.bianfeng.ymnsdk.action.b a;
        final RequestRetryUtils b;

        a(com.bianfeng.ymnsdk.action.b bVar, RequestRetryUtils requestRetryUtils) {
            this.a = bVar;
            this.b = requestRetryUtils;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult result) {
            if (result.isOk()) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(2202, result.data.optString("status"), "get_identity;verifier_get_identity");
                return;
            }
            boolean isNotNeedRetry = this.b.retryRequest(this.a);
            if (isNotNeedRetry) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.USERVERIFIER_GET_IDENTITY_FAIL, result.messageFail(), "get_identity;verifier_get_identity");
            }
        }
    }

    @YFunction(name = "getLoginData")
    public void getLoginData() {
        Logger.i("获取登录数据");
        com.bianfeng.ymnsdk.feature.plugin.b.d();
        YmnDataFunUtils.getInstance().pluginFinish("getLoginData", getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, "");
    }

    @YFunction(alias = SET_IDENTITY_INFO, name = "set_identity")
    public void setIdentity(String ymnPlatformId, String ymnUserId, String realName, String identityNumber) {
        Logger.i("实名认证了");
        setIdentity("0", ymnPlatformId, ymnUserId, realName, identityNumber);
    }

    @YFunction(alias = SET_IDENTITY_INFO, name = "set_identity")
    @Deprecated
    public void setIdentity(String type, String areaId, String userId, String realName, String identityNumber) {
        RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.action.c action = new com.bianfeng.ymnsdk.action.c(getContext());
        action.putReqData(this, type, areaId, userId, realName, identityNumber);
        action.addObserver(new b(action, retryUtils));
        action.onStartAttachment();
        action.actionStart();
    }

    class b extends ActionObserver {
        final com.bianfeng.ymnsdk.action.c a;
        final RequestRetryUtils b;

        b(com.bianfeng.ymnsdk.action.c cVar, RequestRetryUtils requestRetryUtils) {
            this.a = cVar;
            this.b = requestRetryUtils;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult result) {
            if (result.isOk()) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.USERVERIFIER_SET_IDENTITY_SUCCESS, "实名认证成功", "set_identity;verifier_set_identity");
                return;
            }
            boolean isNotNeedRetry = this.b.retryRequest(this.a);
            if (isNotNeedRetry) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.USERVERIFIER_SET_IDENTITY_FAIL, result.messageFail(), "set_identity;verifier_set_identity");
            }
        }
    }

    @YFunction(alias = "base_get_products", name = "get_products")
    public void getProducts() {
        RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.action.g action = new com.bianfeng.ymnsdk.action.g(getContext());
        action.putReqData(this, new Object[0]);
        action.addObserver(new c(action, retryUtils));
        action.onStartAttachment();
        action.actionStart();
    }

    class c extends ActionObserver {
        final com.bianfeng.ymnsdk.action.g a;
        final RequestRetryUtils b;

        c(com.bianfeng.ymnsdk.action.g gVar, RequestRetryUtils requestRetryUtils) {
            this.a = gVar;
            this.b = requestRetryUtils;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult result) {
            if (result.isOk()) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_SUCCESS, result.dataAsString(), "get_products;base_get_products");
                return;
            }
            boolean isNotNeedRetry = this.b.retryRequest(this.a);
            if (isNotNeedRetry) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_FAIL, result.messageFail(), "get_products;base_get_products");
            }
        }
    }

    @YFunction(alias = "base_get_products", name = "get_products")
    public void getProducts(LinkedHashMap<String, String> data) {
        try {
            RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
            com.bianfeng.ymnsdk.actionv2.d action = new com.bianfeng.ymnsdk.actionv2.d(getContext());
            action.putReqData(this, data);
            action.addObserver(new d(action, retryUtils));
            Logger.i("getProducts");
            action.onStartAttachment();
            action.actionStart();
        } catch (Exception e2) {
            sendResult(CODE_GET_PRODUCTS_FAIL, e2.getMessage(), "get_products;base_get_products");
        }
    }

    class d extends ActionObserverV2 {
        final com.bianfeng.ymnsdk.actionv2.d a;
        final RequestRetryUtils b;

        d(com.bianfeng.ymnsdk.actionv2.d dVar, RequestRetryUtils requestRetryUtils) {
            this.a = dVar;
            this.b = requestRetryUtils;
        }

        @Override
        public void onActionResult(ActionSupportV2.ResponseResult result) {
            if (result.isOk()) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_SUCCESS, result.getSrcRes(), "get_products;base_get_products");
                return;
            }
            boolean isNotNeedRetry = this.b.retryRequest(this.a);
            if (isNotNeedRetry) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_FAIL, result.messageFail(), "get_products;base_get_products");
            }
        }
    }

    @YFunction(name = "check_order_statue")
    public void checkOrderStatue(String orderid) {
        try {
            RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
            com.bianfeng.ymnsdk.actionv2.c action = new com.bianfeng.ymnsdk.actionv2.c(getContext());
            action.putReqData(this, orderid);
            action.addObserver(new e(action, retryUtils));
            Logger.i("checkOrderStatue check_order_statue");
            action.onStartAttachment();
            action.actionStart();
        } catch (Exception e2) {
            sendResult(CODE_GET_PRODUCTS_FAIL, e2.getMessage(), "check_order_statue");
        }
    }

    class e extends ActionObserverV2 {
        final com.bianfeng.ymnsdk.actionv2.c a;
        final RequestRetryUtils b;

        e(com.bianfeng.ymnsdk.actionv2.c cVar, RequestRetryUtils requestRetryUtils) {
            this.a = cVar;
            this.b = requestRetryUtils;
        }

        @Override
        public void onActionResult(ActionSupportV2.ResponseResult result) {
            if (result.isOk()) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_SUCCESS, result.dataAsString(), "check_order_statue");
                return;
            }
            boolean isNotNeedRetry = this.b.retryRequest(this.a);
            if (isNotNeedRetry) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_FAIL, result.messageFail(), "check_order_statue");
            }
        }
    }

    @YFunction(name = "request_permission")
    public void request_permission(String permisstionStr) {
        int targetSdkVersion = getActivity().getApplicationInfo().targetSdkVersion;
        if (targetSdkVersion < 23 || Build.VERSION.SDK_INT < 23) {
            sendResult(CODE_PERMISSION_ERROR, "targetVersion或者系统版本小于23", "request_permission");
            return;
        }
        try {
            JSONArray arr = new JSONArray(permisstionStr);
            List list = new ArrayList();
            for (int i = 0; i < arr.length(); i++) {
                String name = (String) arr.get(i);
                list.add(name);
            }
            BfDataPermissionUtils.newInstance(getActivity()).setCallback(new f()).setPermissions((List<String>) list).requestPermissions(1);
        } catch (Exception e2) {
            Logger.e("参数不正确，应该传入字符串数组");
            e2.printStackTrace();
            sendResult(CODE_PERMISSION_DENIED, "拒绝的权限|参数不正确，应该传入字符串数组");
        }
    }

    class f implements BfDataPermissionUtils.PermissCallback {
        f() {
        }

        @Override
        public void onAllowAll(int i) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, "权限申请成功", "request_permission");
        }

        @Override
        public void onAllow(int i, String s) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "允许的权限|" + s, "request_permission");
        }

        @Override
        public void onDeny(int i, String s) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "拒绝的权限|" + s, "request_permission");
        }

        @Override
        public void onDenyIn48Hours(int i, String s) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "这些权限在48小时内申请过|" + s, "request_permission");
        }
    }

    @YFunction(name = "request_permission")
    public void request_permission(String permisstionStr, String code) {
        int targetSdkVersion = getActivity().getApplicationInfo().targetSdkVersion;
        if (targetSdkVersion < 23 || Build.VERSION.SDK_INT < 23) {
            sendResult(CODE_PERMISSION_ERROR, "targetVersion或者系统版本小于23", "request_permission");
            return;
        }
        try {
            JSONArray arr = new JSONArray(permisstionStr);
            List list = new ArrayList();
            for (int i = 0; i < arr.length(); i++) {
                String name = (String) arr.get(i);
                list.add(name);
            }
            BfDataPermissionUtils.newInstance(getActivity()).setCallback(new g()).setPermissions((List<String>) list).requestPermissions(Integer.parseInt(code));
        } catch (Exception e2) {
            Logger.e("参数不正确，应该传入字符串数组" + e2.getMessage());
            sendResult(CODE_PERMISSION_DENIED, "拒绝的权限|参数不正确，应该传入字符串数组");
            e2.printStackTrace();
        }
    }

    class g implements BfDataPermissionUtils.PermissCallback {
        g() {
        }

        @Override
        public void onAllowAll(int i) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, i + "|权限申请成功", "request_permission");
        }

        @Override
        public void onAllow(int i, String s) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, i + "|允许的权限|" + s, "request_permission");
        }

        @Override
        public void onDeny(int i, String s) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, i + "|拒绝的权限|" + s, "request_permission");
        }

        @Override
        public void onDenyIn48Hours(int i, String s) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, i + "|这些权限在48小时内申请过|" + s, "request_permission");
        }
    }

    @YFunction(name = "request_permission")
    public void request_permission() {
        Logger.e("该方法已经弃用");
    }

    @YFunction(name = "statr_test")
    public void startTest() {
        Intent toLaunch = new Intent();
        toLaunch.setClassName(getActivity(), "com.bianfeng.ymnsdk.TestActivity");
        getActivity().startActivity(toLaunch);
    }

    @YFunction(name = "query_permission")
    public void query_permission(String permisstionStr) {
        int targetSdkVersion = getActivity().getApplicationInfo().targetSdkVersion;
        if (targetSdkVersion < 23 || Build.VERSION.SDK_INT < 23) {
            sendResult(CODE_PERMISSION_ERROR, "targetVersion或者系统版本小于23", "query_permission");
            return;
        }
        int isGranted = getActivity().checkSelfPermission(permisstionStr);
        if (isGranted == 0) {
            sendResult(CODE_PERMISSION_GRANTED, "已授权_" + permisstionStr, "query_permission");
            return;
        }
        if (isGranted == -1) {
            sendResult(CODE_PERMISSION_DENIED, "已拒接_" + permisstionStr, "query_permission");
        }
    }

    @YFunction(alias = "base_login_finish", name = "ymndatafun_login_finish")
    public void loginFinishEvent(String rst_code, String rst_msg) {
        try {
            YmnDataFunUtils.getInstance().loginFinishEvent(Integer.parseInt(rst_code), rst_msg);
        } catch (Exception e2) {
            YmnDataFunUtils.getInstance().loginFinishEvent(-1, rst_code + "|" + rst_msg + "|" + e2.getMessage());
        }
    }

    @YFunction(name = "base_login_request_check")
    public void loginOldRequestCheckEvent(String server_name) {
        YmnDataFunUtils.getInstance().loginOldRequestCheckEvent(server_name);
    }

    @YFunction(name = "base_login_response_check")
    public void loginOldResponseCheckEvent(String rst_code, String rst_msg) {
        try {
            YmnDataFunUtils.getInstance().loginOldResponseCheckEvent(Integer.valueOf(Integer.parseInt(rst_code)), rst_msg);
        } catch (Exception e2) {
            YmnDataFunUtils.getInstance().loginOldResponseCheckEvent(-1, rst_code + "|" + rst_msg + "|" + e2.getMessage());
        }
    }

    @YFunction(name = "change_ymn_host")
    public void change_ymn_host(String url) {
        SharedPreferences preferences = getContext().getSharedPreferences("SP_YMN_CHANGE_HOST", 0);
        preferences.edit().putString("SP_YMN_CHANGE_HOST", url).apply();
    }

    @YFunction(name = "ymn_datafun_get_deviceid")
    public void ymn_datafun_get_deviceid() throws Exception {
        String tempDeviceid;
        String deviceid = DeviceInfo.getInstance().getAndroidId();
        if (deviceid.contains("bfdata_")) {
            deviceid = deviceid.replace("bfdata_", "");
        }
        try {
            tempDeviceid = AESGCM256.decrypt(deviceid, "");
        } catch (Exception e2) {
            tempDeviceid = deviceid;
        }
        sendResult(CODE_DATAFUN_GET_DEVICEID, tempDeviceid, "ymn_datafun_get_deviceid");
    }

    @YFunction(name = "ymn_get_deviceid")
    public void ymn_get_deviceid() {
        String deviceId;
        try {
            Settings.Secure.getString(getContext().getApplicationContext().getContentResolver(), "android_id");
            SharedPreferences preferences = getContext().getSharedPreferences("ymn_deviceid_jfq", 0);
            if (!preferences.getString("ymn_deviceid_jfq", "").isEmpty()) {
                sendResult(CODE_YMN_GET_DEVICEID, preferences.getString("ymn_deviceid_jfq", ""), "ymn_get_deviceid");
                return;
            }
            TelephonyManager tm = (TelephonyManager) getContext().getSystemService("phone");
            if (tm != null) {
                if (getActivity().checkSelfPermission("android.permission.READ_PHONE_STATE") == 0) {
                    if (tm.getDeviceId() != null) {
                        deviceId = tm.getDeviceId();
                        preferences.edit().putString("ymn_deviceid_jfq", deviceId).commit();
                    } else {
                        String deviceId2 = Settings.Secure.getString(getContext().getApplicationContext().getContentResolver(), "android_id");
                        if (deviceId2 == null || deviceId2.isEmpty()) {
                            deviceId = UUID.randomUUID().toString();
                        } else {
                            deviceId = "T" + System.currentTimeMillis();
                        }
                    }
                } else {
                    deviceId = Settings.Secure.getString(getContext().getApplicationContext().getContentResolver(), "android_id");
                    if (deviceId == null || deviceId.isEmpty()) {
                        deviceId = UUID.randomUUID().toString();
                        if (deviceId.isEmpty()) {
                            deviceId = "T" + System.currentTimeMillis();
                        }
                    }
                }
                sendResult(CODE_YMN_GET_DEVICEID, deviceId, "ymn_get_deviceid");
            }
        } catch (Exception e2) {
            e2.printStackTrace();
            sendResult(CODE_YMN_GET_DEVICEID, "T" + System.currentTimeMillis(), "ymn_get_deviceid");
        }
    }

    @YFunction(name = "ymn_get_orderid")
    public String getOrderId() {
        String orderid = YmnSdkPaymentWrapper.getOrderId();
        if (TextUtils.isEmpty(orderid)) {
            sendResult(CODE_ORDERID_FAIL, "");
        } else {
            sendResult(CODE_ORDERID_SUC, orderid);
        }
        return orderid;
    }

    @YFunction(name = "ymn_get_orderid")
    public String getOrderId(String functionName) {
        String orderid = YmnSdkPaymentWrapper.getOrderId(functionName);
        if (TextUtils.isEmpty(orderid)) {
            sendResult(CODE_ORDERID_FAIL, "");
        } else {
            sendResult(CODE_ORDERID_SUC, orderid);
        }
        return orderid;
    }

    @YFunction(name = "host_app_analysis")
    public void hostAppAnalysis() {
        Intent intent = new Intent();
        intent.setClassName(getActivity(), "com.bianfeng.ymnsdk.runner.activity.HostAppAnalysisActivity");
        getActivity().startActivity(intent);
    }

    @YFunction(name = SET_CLIP_ALLOW)
    public void setClipAllow(String isAllow) {
        if (isAllow.equals("allow")) {
            YmnSharedPreferencesUtils.setYmnClipAllow(true);
        } else {
            YmnSharedPreferencesUtils.setYmnClipAllow(false);
        }
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
    }
}
