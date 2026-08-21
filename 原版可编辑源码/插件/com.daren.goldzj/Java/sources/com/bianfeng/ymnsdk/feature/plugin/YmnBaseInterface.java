package com.bianfeng.ymnsdk.feature.plugin;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Build;
import android.provider.Settings;
import android.support.v4.app.NotificationCompat;
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
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.UUID;
import org.json.JSONArray;

@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class YmnBaseInterface extends YmnPluginWrapper {
    public static final int CODE_DATAFUN_GET_DEVICEID = 1001002;
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
    public static final String SET_IDENTITY_INFO = "verifier_set_identity";
    public static final int USERVERIFIER_GET_IDENTITY_FAIL = 2203;
    public static final int USERVERIFIER_GET_IDENTITY_SUCCESS = 2202;
    public static final int USERVERIFIER_SET_IDENTITY_FAIL = 2205;
    public static final int USERVERIFIER_SET_IDENTITY_SUCCESS = 2204;
    public static UrlLocalState localState;

    class a extends ActionObserver {
        final com.bianfeng.ymnsdk.action.b a;
        final RequestRetryUtils b;

        a(com.bianfeng.ymnsdk.action.b bVar, RequestRetryUtils requestRetryUtils) {
            this.a = bVar;
            this.b = requestRetryUtils;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult responseResult) {
            if (responseResult.isOk()) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.USERVERIFIER_GET_IDENTITY_SUCCESS, responseResult.data.optString(NotificationCompat.CATEGORY_STATUS), "get_identity;verifier_get_identity");
            } else if (this.b.retryRequest(this.a)) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.USERVERIFIER_GET_IDENTITY_FAIL, responseResult.messageFail(), "get_identity;verifier_get_identity");
            }
        }
    }

    class b extends ActionObserver {
        final com.bianfeng.ymnsdk.action.c a;
        final RequestRetryUtils b;

        b(com.bianfeng.ymnsdk.action.c cVar, RequestRetryUtils requestRetryUtils) {
            this.a = cVar;
            this.b = requestRetryUtils;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult responseResult) {
            if (responseResult.isOk()) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.USERVERIFIER_SET_IDENTITY_SUCCESS, "实名认证成功", "set_identity;verifier_set_identity");
            } else if (this.b.retryRequest(this.a)) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.USERVERIFIER_SET_IDENTITY_FAIL, responseResult.messageFail(), "set_identity;verifier_set_identity");
            }
        }
    }

    class c extends ActionObserver {
        final com.bianfeng.ymnsdk.action.g a;
        final RequestRetryUtils b;

        c(com.bianfeng.ymnsdk.action.g gVar, RequestRetryUtils requestRetryUtils) {
            this.a = gVar;
            this.b = requestRetryUtils;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult responseResult) {
            if (responseResult.isOk()) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_SUCCESS, responseResult.dataAsString(), "get_products;base_get_products");
            } else if (this.b.retryRequest(this.a)) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_FAIL, responseResult.messageFail(), "get_products;base_get_products");
            }
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
        public void onActionResult(ActionSupportV2.ResponseResult responseResult) {
            if (responseResult.isOk()) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_SUCCESS, responseResult.getSrcRes(), "get_products;base_get_products");
            } else if (this.b.retryRequest(this.a)) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_FAIL, responseResult.messageFail(), "get_products;base_get_products");
            }
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
        public void onActionResult(ActionSupportV2.ResponseResult responseResult) {
            if (responseResult.isOk()) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_SUCCESS, responseResult.dataAsString(), "check_order_statue");
            } else if (this.b.retryRequest(this.a)) {
                this.a.onEndAttachment();
                YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_FAIL, responseResult.messageFail(), "check_order_statue");
            }
        }
    }

    class f implements BfDataPermissionUtils.PermissCallback {
        f() {
        }

        @Override
        public void onAllow(int i, String str) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "允许的权限|" + str, "request_permission");
        }

        @Override
        public void onAllowAll(int i) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, "权限申请成功", "request_permission");
        }

        @Override
        public void onDeny(int i, String str) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "拒绝的权限|" + str, "request_permission");
        }

        @Override
        public void onDenyIn48Hours(int i, String str) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "这些权限在48小时内申请过|" + str, "request_permission");
        }
    }

    class g implements BfDataPermissionUtils.PermissCallback {
        g() {
        }

        @Override
        public void onAllow(int i, String str) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, i + "|允许的权限|" + str, "request_permission");
        }

        @Override
        public void onAllowAll(int i) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, i + "|权限申请成功", "request_permission");
        }

        @Override
        public void onDeny(int i, String str) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, i + "|拒绝的权限|" + str, "request_permission");
        }

        @Override
        public void onDenyIn48Hours(int i, String str) {
            YmnBaseInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, i + "|这些权限在48小时内申请过|" + str, "request_permission");
        }
    }

    @YFunction(name = "set_host")
    public void change_host(String str) {
        try {
            localState = com.bianfeng.ymnsdk.feature.e.e(getContext());
            localState.setCurrentHost(str);
            com.bianfeng.ymnsdk.feature.e.a(getContext(), localState);
            YmnDataFunUtils ymnDataFunUtils = YmnDataFunUtils.getInstance();
            ymnDataFunUtils.pluginFinish("set_host", getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, "");
        } catch (Exception unused) {
        }
    }

    @YFunction(name = "change_ymn_host")
    public void change_ymn_host(String str) {
        getContext().getSharedPreferences("SP_YMN_CHANGE_HOST", 0).edit().putString("SP_YMN_CHANGE_HOST", str).apply();
    }

    @YFunction(name = "check_order_statue")
    public void checkOrderStatue(String str) {
        try {
            RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
            com.bianfeng.ymnsdk.actionv2.c cVar = new com.bianfeng.ymnsdk.actionv2.c(getContext());
            cVar.putReqData(this, str);
            cVar.addObserver(new e(cVar, requestRetryUtils));
            Logger.i("checkOrderStatue check_order_statue");
            cVar.onStartAttachment();
            cVar.actionStart();
        } catch (Exception e2) {
            sendResult(CODE_GET_PRODUCTS_FAIL, e2.getMessage(), "check_order_statue");
        }
    }

    @YFunction(name = "get_channel_id")
    public String getChannelId() {
        return YmnAppContext.getChannelId();
    }

    @YFunction(alias = GET_IDENTITY_INFO, name = "get_identity")
    public void getIdentity(String str, String str2) {
        getIdentity("0", str, str2);
    }

    @YFunction(name = "getLoginData")
    public void getLoginData() {
        Logger.i("获取登录数据");
        com.bianfeng.ymnsdk.feature.plugin.b.d();
        YmnDataFunUtils.getInstance().pluginFinish("getLoginData", getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, "");
    }

    @YFunction(name = "get_metadata_value")
    public String getMetaDataValue(String str) {
        return YmnAppContext.getMetaDataValueString(str);
    }

    @YFunction(name = "ymn_get_orderid")
    public String getOrderId() {
        String orderId = YmnSdkPaymentWrapper.getOrderId();
        if (TextUtils.isEmpty(orderId)) {
            sendResult(CODE_ORDERID_FAIL, "");
        } else {
            sendResult(CODE_ORDERID_SUC, orderId);
        }
        return orderId;
    }

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

    @YFunction(alias = "base_get_products", name = "get_products")
    public void getProducts() {
        RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.action.g gVar = new com.bianfeng.ymnsdk.action.g(getContext());
        gVar.putReqData(this, new Object[0]);
        gVar.addObserver(new c(gVar, requestRetryUtils));
        gVar.onStartAttachment();
        gVar.actionStart();
    }

    @Override
    public String getSdkVersion() {
        return "2.1.7";
    }

    @YFunction(alias = "base_login_finish", name = "ymndatafun_login_finish")
    public void loginFinishEvent(String str, String str2) {
        try {
            YmnDataFunUtils.getInstance().loginFinishEvent(Integer.parseInt(str), str2);
        } catch (Exception e2) {
            YmnDataFunUtils.getInstance().loginFinishEvent(-1, str + "|" + str2 + "|" + e2.getMessage());
        }
    }

    @YFunction(name = "base_login_request_check")
    public void loginOldRequestCheckEvent(String str) {
        YmnDataFunUtils.getInstance().loginOldRequestCheckEvent(str);
    }

    @YFunction(name = "base_login_response_check")
    public void loginOldResponseCheckEvent(String str, String str2) {
        try {
            YmnDataFunUtils.getInstance().loginOldResponseCheckEvent(Integer.valueOf(Integer.parseInt(str)), str2);
        } catch (Exception e2) {
            YmnDataFunUtils.getInstance().loginOldResponseCheckEvent(-1, str + "|" + str2 + "|" + e2.getMessage());
        }
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        setInited(true);
    }

    @YFunction(name = "query_permission")
    public void query_permission(String str) {
        if (getActivity().getApplicationInfo().targetSdkVersion < 23 || Build.VERSION.SDK_INT < 23) {
            sendResult(CODE_PERMISSION_ERROR, "targetVersion或者系统版本小于23", "query_permission");
            return;
        }
        int iCheckSelfPermission = getActivity().checkSelfPermission(str);
        if (iCheckSelfPermission == 0) {
            sendResult(CODE_PERMISSION_GRANTED, "已授权_" + str, "query_permission");
            return;
        }
        if (iCheckSelfPermission == -1) {
            sendResult(CODE_PERMISSION_DENIED, "已拒接_" + str, "query_permission");
        }
    }

    @YFunction(name = "request_permission")
    public void request_permission(String str) {
        if (getActivity().getApplicationInfo().targetSdkVersion < 23 || Build.VERSION.SDK_INT < 23) {
            sendResult(CODE_PERMISSION_ERROR, "targetVersion或者系统版本小于23", "request_permission");
            return;
        }
        try {
            JSONArray jSONArray = new JSONArray(str);
            ArrayList arrayList = new ArrayList();
            for (int i = 0; i < jSONArray.length(); i++) {
                arrayList.add((String) jSONArray.get(i));
            }
            BfDataPermissionUtils.newInstance(getActivity()).setCallback(new f()).setPermissions(arrayList).requestPermissions(1);
        } catch (Exception e2) {
            Logger.e("参数不正确，应该传入字符串数组");
            e2.printStackTrace();
            sendResult(CODE_PERMISSION_DENIED, "拒绝的权限|参数不正确，应该传入字符串数组");
        }
    }

    @YFunction(alias = SET_IDENTITY_INFO, name = "set_identity")
    public void setIdentity(String str, String str2, String str3, String str4) {
        Logger.i("实名认证了");
        setIdentity("0", str, str2, str3, str4);
    }

    @YFunction(name = "statr_test")
    public void startTest() {
        Intent intent = new Intent();
        intent.setClassName(getActivity(), "com.bianfeng.ymnsdk.TestActivity");
        getActivity().startActivity(intent);
    }

    @YFunction(name = "ymn_datafun_get_deviceid")
    public void ymn_datafun_get_deviceid() {
        sendResult(CODE_DATAFUN_GET_DEVICEID, YmnDataFunUtils.getInstance().getDeviceId(), "ymn_datafun_get_deviceid");
    }

    @YFunction(name = "ymn_get_deviceid")
    public void ymn_get_deviceid() {
        String string;
        try {
            Settings.Secure.getString(getContext().getApplicationContext().getContentResolver(), "android_id");
            SharedPreferences sharedPreferences = getContext().getSharedPreferences("ymn_deviceid_jfq", 0);
            if (!sharedPreferences.getString("ymn_deviceid_jfq", "").isEmpty()) {
                sendResult(CODE_YMN_GET_DEVICEID, sharedPreferences.getString("ymn_deviceid_jfq", ""), "ymn_get_deviceid");
                return;
            }
            TelephonyManager telephonyManager = (TelephonyManager) getContext().getSystemService("phone");
            if (telephonyManager != null) {
                if (getActivity().checkSelfPermission("android.permission.READ_PHONE_STATE") != 0) {
                    string = Settings.Secure.getString(getContext().getApplicationContext().getContentResolver(), "android_id");
                    if (string == null || string.isEmpty()) {
                        string = UUID.randomUUID().toString();
                        if (string.isEmpty()) {
                            string = "T" + System.currentTimeMillis();
                        }
                    }
                } else if (telephonyManager.getDeviceId() != null) {
                    string = telephonyManager.getDeviceId();
                    sharedPreferences.edit().putString("ymn_deviceid_jfq", string).commit();
                } else {
                    String string2 = Settings.Secure.getString(getContext().getApplicationContext().getContentResolver(), "android_id");
                    if (string2 == null || string2.isEmpty()) {
                        string = UUID.randomUUID().toString();
                    } else {
                        string = "T" + System.currentTimeMillis();
                    }
                }
                sendResult(CODE_YMN_GET_DEVICEID, string, "ymn_get_deviceid");
            }
        } catch (Exception e2) {
            e2.printStackTrace();
            sendResult(CODE_YMN_GET_DEVICEID, "T" + System.currentTimeMillis(), "ymn_get_deviceid");
        }
    }

    @YFunction(alias = GET_IDENTITY_INFO, name = "get_identity")
    @Deprecated
    public void getIdentity(String str, String str2, String str3) {
        RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.action.b bVar = new com.bianfeng.ymnsdk.action.b(getContext());
        bVar.putReqData(this, str, str2, str3);
        bVar.addObserver(new a(bVar, requestRetryUtils));
        bVar.onStartAttachment();
        bVar.actionStart();
    }

    @YFunction(alias = SET_IDENTITY_INFO, name = "set_identity")
    @Deprecated
    public void setIdentity(String str, String str2, String str3, String str4, String str5) {
        RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.action.c cVar = new com.bianfeng.ymnsdk.action.c(getContext());
        cVar.putReqData(this, str, str2, str3, str4, str5);
        cVar.addObserver(new b(cVar, requestRetryUtils));
        cVar.onStartAttachment();
        cVar.actionStart();
    }

    @YFunction(name = "ymn_get_orderid")
    public String getOrderId(String str) {
        String orderId = YmnSdkPaymentWrapper.getOrderId(str);
        if (TextUtils.isEmpty(orderId)) {
            sendResult(CODE_ORDERID_FAIL, "");
        } else {
            sendResult(CODE_ORDERID_SUC, orderId);
        }
        return orderId;
    }

    @YFunction(alias = "base_get_products", name = "get_products")
    public void getProducts(LinkedHashMap<String, String> linkedHashMap) {
        try {
            RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
            com.bianfeng.ymnsdk.actionv2.d dVar = new com.bianfeng.ymnsdk.actionv2.d(getContext());
            dVar.putReqData(this, linkedHashMap);
            dVar.addObserver(new d(dVar, requestRetryUtils));
            Logger.i("getProducts");
            dVar.onStartAttachment();
            dVar.actionStart();
        } catch (Exception e2) {
            sendResult(CODE_GET_PRODUCTS_FAIL, e2.getMessage(), "get_products;base_get_products");
        }
    }

    @YFunction(name = "request_permission")
    public void request_permission(String str, String str2) {
        if (getActivity().getApplicationInfo().targetSdkVersion >= 23 && Build.VERSION.SDK_INT >= 23) {
            try {
                JSONArray jSONArray = new JSONArray(str);
                ArrayList arrayList = new ArrayList();
                for (int i = 0; i < jSONArray.length(); i++) {
                    arrayList.add((String) jSONArray.get(i));
                }
                BfDataPermissionUtils.newInstance(getActivity()).setCallback(new g()).setPermissions(arrayList).requestPermissions(Integer.parseInt(str2));
                return;
            } catch (Exception e2) {
                Logger.e("参数不正确，应该传入字符串数组" + e2.getMessage());
                sendResult(CODE_PERMISSION_DENIED, "拒绝的权限|参数不正确，应该传入字符串数组");
                e2.printStackTrace();
                return;
            }
        }
        sendResult(CODE_PERMISSION_ERROR, "targetVersion或者系统版本小于23", "request_permission");
    }

    @YFunction(name = "request_permission")
    public void request_permission() {
        Logger.e("该方法已经弃用");
    }
}
