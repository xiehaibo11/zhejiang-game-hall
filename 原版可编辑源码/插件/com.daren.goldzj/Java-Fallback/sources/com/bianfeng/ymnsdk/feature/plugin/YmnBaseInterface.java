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
        final YmnBaseInterface c;

        a(YmnBaseInterface r1, com.bianfeng.ymnsdk.action.b r2, RequestRetryUtils r3) {
            this.c = r1;
            this.a = r2;
            this.b = r3;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult r4) {
            if (r4.isOk() == false) goto L6;
            this.a.onEndAttachment();
            this.c.sendResult(YmnBaseInterface.USERVERIFIER_GET_IDENTITY_SUCCESS, r4.data.optString(NotificationCompat.CATEGORY_STATUS), "get_identity;verifier_get_identity");
            return;
        L6:
            if (this.b.retryRequest(this.a) == false) goto L10;
            this.a.onEndAttachment();
            this.c.sendResult(YmnBaseInterface.USERVERIFIER_GET_IDENTITY_FAIL, r4.messageFail(), "get_identity;verifier_get_identity");
            return;
        }
    }

    class b extends ActionObserver {
        final com.bianfeng.ymnsdk.action.c a;
        final RequestRetryUtils b;
        final YmnBaseInterface c;

        b(YmnBaseInterface r1, com.bianfeng.ymnsdk.action.c r2, RequestRetryUtils r3) {
            this.c = r1;
            this.a = r2;
            this.b = r3;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult r4) {
            if (r4.isOk() == false) goto L6;
            this.a.onEndAttachment();
            this.c.sendResult(YmnBaseInterface.USERVERIFIER_SET_IDENTITY_SUCCESS, "实名认证成功", "set_identity;verifier_set_identity");
            return;
        L6:
            if (this.b.retryRequest(this.a) == false) goto L10;
            this.a.onEndAttachment();
            this.c.sendResult(YmnBaseInterface.USERVERIFIER_SET_IDENTITY_FAIL, r4.messageFail(), "set_identity;verifier_set_identity");
            return;
        }
    }

    class c extends ActionObserver {
        final com.bianfeng.ymnsdk.action.g a;
        final RequestRetryUtils b;
        final YmnBaseInterface c;

        c(YmnBaseInterface r1, com.bianfeng.ymnsdk.action.g r2, RequestRetryUtils r3) {
            this.c = r1;
            this.a = r2;
            this.b = r3;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult r4) {
            if (r4.isOk() == false) goto L6;
            this.a.onEndAttachment();
            this.c.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_SUCCESS, r4.dataAsString(), "get_products;base_get_products");
            return;
        L6:
            if (this.b.retryRequest(this.a) == false) goto L10;
            this.a.onEndAttachment();
            this.c.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_FAIL, r4.messageFail(), "get_products;base_get_products");
            return;
        }
    }

    class d extends ActionObserverV2 {
        final com.bianfeng.ymnsdk.actionv2.d a;
        final RequestRetryUtils b;
        final YmnBaseInterface c;

        d(YmnBaseInterface r1, com.bianfeng.ymnsdk.actionv2.d r2, RequestRetryUtils r3) {
            this.c = r1;
            this.a = r2;
            this.b = r3;
        }

        @Override
        public void onActionResult(ActionSupportV2.ResponseResult r4) {
            if (r4.isOk() == false) goto L6;
            this.a.onEndAttachment();
            this.c.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_SUCCESS, r4.getSrcRes(), "get_products;base_get_products");
            return;
        L6:
            if (this.b.retryRequest(this.a) == false) goto L10;
            this.a.onEndAttachment();
            this.c.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_FAIL, r4.messageFail(), "get_products;base_get_products");
            return;
        }
    }

    class e extends ActionObserverV2 {
        final com.bianfeng.ymnsdk.actionv2.c a;
        final RequestRetryUtils b;
        final YmnBaseInterface c;

        e(YmnBaseInterface r1, com.bianfeng.ymnsdk.actionv2.c r2, RequestRetryUtils r3) {
            this.c = r1;
            this.a = r2;
            this.b = r3;
        }

        @Override
        public void onActionResult(ActionSupportV2.ResponseResult r4) {
            if (r4.isOk() == false) goto L6;
            this.a.onEndAttachment();
            this.c.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_SUCCESS, r4.dataAsString(), "check_order_statue");
            return;
        L6:
            if (this.b.retryRequest(this.a) == false) goto L10;
            this.a.onEndAttachment();
            this.c.sendResult(YmnBaseInterface.CODE_GET_PRODUCTS_FAIL, r4.messageFail(), "check_order_statue");
            return;
        }
    }

    class f implements BfDataPermissionUtils.PermissCallback {
        final YmnBaseInterface a;

        f(YmnBaseInterface r1) {
            this.a = r1;
        }

        @Override
        public void onAllow(int r3, String r4) {
            this.a.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "允许的权限|" + r4, "request_permission");
        }

        @Override
        public void onAllowAll(int r4) {
            this.a.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, "权限申请成功", "request_permission");
        }

        @Override
        public void onDeny(int r3, String r4) {
            this.a.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "拒绝的权限|" + r4, "request_permission");
        }

        @Override
        public void onDenyIn48Hours(int r3, String r4) {
            this.a.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "这些权限在48小时内申请过|" + r4, "request_permission");
        }
    }

    class g implements BfDataPermissionUtils.PermissCallback {
        final YmnBaseInterface a;

        g(YmnBaseInterface r1) {
            this.a = r1;
        }

        @Override
        public void onAllow(int r3, String r4) {
            this.a.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, r3 + "|允许的权限|" + r4, "request_permission");
        }

        @Override
        public void onAllowAll(int r4) {
            this.a.sendResult(YmnBaseInterface.CODE_PERMISSION_GRANTED, r4 + "|权限申请成功", "request_permission");
        }

        @Override
        public void onDeny(int r3, String r4) {
            this.a.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, r3 + "|拒绝的权限|" + r4, "request_permission");
        }

        @Override
        public void onDenyIn48Hours(int r3, String r4) {
            this.a.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, r3 + "|这些权限在48小时内申请过|" + r4, "request_permission");
        }
    }

    public YmnBaseInterface() {
    }

    @YFunction(name = "set_host")
    public void change_host(String r9) {
        localState = com.bianfeng.ymnsdk.feature.e.e(getContext());     // Catch: Exception -> L6
        localState.setCurrentHost(r9);     // Catch: Exception -> L6
        com.bianfeng.ymnsdk.feature.e.a(getContext(), localState);     // Catch: Exception -> L6
        YmnDataFunUtils r1 = YmnDataFunUtils.getInstance();     // Catch: Exception -> L6
        r1.pluginFinish("set_host", getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, "");     // Catch: Exception -> L6
        return;
    }

    @YFunction(name = "change_ymn_host")
    public void change_ymn_host(String r4) {
        getContext().getSharedPreferences("SP_YMN_CHANGE_HOST", 0).edit().putString("SP_YMN_CHANGE_HOST", r4).apply();
    }

    @YFunction(name = "check_order_statue")
    public void checkOrderStatue(String r5) {
        RequestRetryUtils r0 = RequestRetryUtils.getInstance();     // Catch: Exception -> L4
        com.bianfeng.ymnsdk.actionv2.c r1 = new com.bianfeng.ymnsdk.actionv2.c(getContext());     // Catch: Exception -> L4
        r1.putReqData(this, new Object[]{r5});     // Catch: Exception -> L4
        r1.addObserver(new e(this, r1, r0));     // Catch: Exception -> L4
        Logger.i("checkOrderStatue check_order_statue");     // Catch: Exception -> L4
        r1.onStartAttachment();     // Catch: Exception -> L4
        r1.actionStart();     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        sendResult(CODE_GET_PRODUCTS_FAIL, e.getMessage(), "check_order_statue");
    }

    @YFunction(name = "get_channel_id")
    public String getChannelId() {
        return YmnAppContext.getChannelId();
    }

    @YFunction(alias = GET_IDENTITY_INFO, name = "get_identity")
    public void getIdentity(String r2, String r3) {
        getIdentity("0", r2, r3);
    }

    @YFunction(name = "getLoginData")
    public void getLoginData() {
        Logger.i("获取登录数据");
        com.bianfeng.ymnsdk.feature.plugin.b.d();
        YmnDataFunUtils.getInstance().pluginFinish("getLoginData", getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, "");
    }

    @YFunction(name = "get_metadata_value")
    public String getMetaDataValue(String r1) {
        return YmnAppContext.getMetaDataValueString(r1);
    }

    @YFunction(name = "ymn_get_orderid")
    public String getOrderId() {
        String r0 = YmnSdkPaymentWrapper.getOrderId();
        if (TextUtils.isEmpty(r0) == false) goto L5;
        sendResult(CODE_ORDERID_FAIL, "");
    L6:
        return r0;
    L5:
        sendResult(CODE_ORDERID_SUC, r0);
        goto L6
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
        RequestRetryUtils r0 = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.action.g r1 = new com.bianfeng.ymnsdk.action.g(getContext());
        r1.putReqData(this, new Object[0]);
        r1.addObserver(new c(this, r1, r0));
        r1.onStartAttachment();
        r1.actionStart();
    }

    @Override
    public String getSdkVersion() {
        return "2.1.7";
    }

    @YFunction(alias = "base_login_finish", name = "ymndatafun_login_finish")
    public void loginFinishEvent(String r4, String r5) {
        YmnDataFunUtils.getInstance().loginFinishEvent(Integer.parseInt(r4), r5);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        YmnDataFunUtils.getInstance().loginFinishEvent(-1, r4 + "|" + r5 + "|" + e.getMessage());
    }

    @YFunction(name = "base_login_request_check")
    public void loginOldRequestCheckEvent(String r2) {
        YmnDataFunUtils.getInstance().loginOldRequestCheckEvent(r2);
    }

    @YFunction(name = "base_login_response_check")
    public void loginOldResponseCheckEvent(String r5, String r6) {
        YmnDataFunUtils.getInstance().loginOldResponseCheckEvent(Integer.valueOf(Integer.parseInt(r5)), r6);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        YmnDataFunUtils.getInstance().loginOldResponseCheckEvent(-1, r5 + "|" + r6 + "|" + e.getMessage());
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
    }

    @Override
    public void onInit(Context r1) {
        super.onInit(r1);
        setInited(true);
    }

    @YFunction(name = "query_permission")
    public void query_permission(String r4) {
        if (getActivity().getApplicationInfo().targetSdkVersion >= 23) goto L5;
    L13:
        sendResult(CODE_PERMISSION_ERROR, "targetVersion或者系统版本小于23", "query_permission");
        return;
    L5:
        if (Build.VERSION.SDK_INT < 23) goto L13;
        int r0 = getActivity().checkSelfPermission(r4);
        if (r0 != 0) goto L11;
        sendResult(CODE_PERMISSION_GRANTED, "已授权_" + r4, "query_permission");
        return;
    L11:
        if (r0 != (-1)) goto L16;
        sendResult(CODE_PERMISSION_DENIED, "已拒接_" + r4, "query_permission");
        return;
    }

    @YFunction(name = "request_permission")
    public void request_permission(String r4) {
        if (getActivity().getApplicationInfo().targetSdkVersion >= 23) goto L5;
    L15:
        sendResult(CODE_PERMISSION_ERROR, "targetVersion或者系统版本小于23", "request_permission");
        return;
    L5:
        if (Build.VERSION.SDK_INT < 23) goto L15;
        JSONArray r0 = new JSONArray(r4);     // Catch: Exception -> L13
        ArrayList r42 = new ArrayList();     // Catch: Exception -> L13
        int r1 = 0;
    L9:
        if (r1 >= r0.length()) goto L11;
        r42.add((String) r0.get(r1));     // Catch: Exception -> L13
        r1 = r1 + 1;     // Catch: Exception -> L13
        goto L9
    L11:
        BfDataPermissionUtils.newInstance(getActivity()).setCallback(new f(this)).setPermissions(r42).requestPermissions(1);     // Catch: Exception -> L13
        return;
    L13:
        e = move-exception;
        Logger.e("参数不正确，应该传入字符串数组");
        e.printStackTrace();
        sendResult(CODE_PERMISSION_DENIED, "拒绝的权限|参数不正确，应该传入字符串数组");
    }

    @YFunction(alias = SET_IDENTITY_INFO, name = "set_identity")
    public void setIdentity(String r8, String r9, String r10, String r11) {
        Logger.i("实名认证了");
        setIdentity("0", r8, r9, r10, r11);
    }

    @YFunction(name = "statr_test")
    public void startTest() {
        Intent r0 = new Intent();
        r0.setClassName(getActivity(), "com.bianfeng.ymnsdk.TestActivity");
        getActivity().startActivity(r0);
    }

    @YFunction(name = "ymn_datafun_get_deviceid")
    public void ymn_datafun_get_deviceid() {
        sendResult(CODE_DATAFUN_GET_DEVICEID, YmnDataFunUtils.getInstance().getDeviceId(), "ymn_datafun_get_deviceid");
    }

    @YFunction(name = "ymn_get_deviceid")
    public void ymn_get_deviceid() {
        Settings.Secure.getString(getContext().getApplicationContext().getContentResolver(), "android_id");     // Catch: Exception -> L30
        SharedPreferences r6 = getContext().getSharedPreferences("ymn_deviceid_jfq", 0);     // Catch: Exception -> L30
        if (r6.getString("ymn_deviceid_jfq", "").isEmpty() == true) goto L7;
        sendResult(CODE_YMN_GET_DEVICEID, r6.getString("ymn_deviceid_jfq", ""), "ymn_get_deviceid");     // Catch: Exception -> L30
        return;
    L7:
        TelephonyManager r0 = (TelephonyManager) getContext().getSystemService("phone");     // Catch: Exception -> L30
        if (r0 != null) goto L10;
        return;
    L10:
        if (getActivity().checkSelfPermission("android.permission.READ_PHONE_STATE") == 0) goto L12;
        String r02 = Settings.Secure.getString(getContext().getApplicationContext().getContentResolver(), "android_id");     // Catch: Exception -> L30
        if (r02 != null) goto L24;
    L25:
        r02 = UUID.randomUUID().toString();     // Catch: Exception -> L30
        if (r02.isEmpty() == false) goto L28;
        r02 = "T" + System.currentTimeMillis();     // Catch: Exception -> L30
    L28:
        sendResult(CODE_YMN_GET_DEVICEID, r02, "ymn_get_deviceid");     // Catch: Exception -> L30
        return;
    L24:
        if (r02.isEmpty() == false) goto L28;
    L12:
        if (r0.getDeviceId() == null) goto L14;
        r02 = r0.getDeviceId();     // Catch: Exception -> L30
        r6.edit().putString("ymn_deviceid_jfq", r02).commit();     // Catch: Exception -> L30
        goto L28
    L14:
        String r03 = Settings.Secure.getString(getContext().getApplicationContext().getContentResolver(), "android_id");     // Catch: Exception -> L30
        if (r03 != null) goto L17;
    L20:
        r02 = UUID.randomUUID().toString();     // Catch: Exception -> L30
        goto L28
    L17:
        if (r03.isEmpty() == true) goto L20;
        r02 = "T" + System.currentTimeMillis();     // Catch: Exception -> L30
    L30:
        e = move-exception;
        e.printStackTrace();
        sendResult(CODE_YMN_GET_DEVICEID, "T" + System.currentTimeMillis(), "ymn_get_deviceid");
    }

    @YFunction(alias = GET_IDENTITY_INFO, name = "get_identity")
    @Deprecated
    public void getIdentity(String r5, String r6, String r7) {
        RequestRetryUtils r0 = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.action.b r1 = new com.bianfeng.ymnsdk.action.b(getContext());
        r1.putReqData(this, new Object[]{r5, r6, r7});
        r1.addObserver(new a(this, r1, r0));
        r1.onStartAttachment();
        r1.actionStart();
    }

    @YFunction(alias = SET_IDENTITY_INFO, name = "set_identity")
    @Deprecated
    public void setIdentity(String r5, String r6, String r7, String r8, String r9) {
        RequestRetryUtils r0 = RequestRetryUtils.getInstance();
        com.bianfeng.ymnsdk.action.c r1 = new com.bianfeng.ymnsdk.action.c(getContext());
        r1.putReqData(this, new Object[]{r5, r6, r7, r8, r9});
        r1.addObserver(new b(this, r1, r0));
        r1.onStartAttachment();
        r1.actionStart();
    }

    @YFunction(name = "ymn_get_orderid")
    public String getOrderId(String r3) {
        String r32 = YmnSdkPaymentWrapper.getOrderId(r3);
        if (TextUtils.isEmpty(r32) == false) goto L5;
        sendResult(CODE_ORDERID_FAIL, "");
    L6:
        return r32;
    L5:
        sendResult(CODE_ORDERID_SUC, r32);
        goto L6
    }

    @YFunction(alias = "base_get_products", name = "get_products")
    public void getProducts(LinkedHashMap<String, String> r5) {
        RequestRetryUtils r0 = RequestRetryUtils.getInstance();     // Catch: Exception -> L4
        com.bianfeng.ymnsdk.actionv2.d r1 = new com.bianfeng.ymnsdk.actionv2.d(getContext());     // Catch: Exception -> L4
        r1.putReqData(this, new Object[]{r5});     // Catch: Exception -> L4
        r1.addObserver(new d(this, r1, r0));     // Catch: Exception -> L4
        Logger.i("getProducts");     // Catch: Exception -> L4
        r1.onStartAttachment();     // Catch: Exception -> L4
        r1.actionStart();     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        sendResult(CODE_GET_PRODUCTS_FAIL, e.getMessage(), "get_products;base_get_products");
    }

    @YFunction(name = "request_permission")
    public void request_permission(String r4, String r5) {
        if (getActivity().getApplicationInfo().targetSdkVersion >= 23) goto L5;
    L15:
        sendResult(CODE_PERMISSION_ERROR, "targetVersion或者系统版本小于23", "request_permission");
        return;
    L5:
        if (Build.VERSION.SDK_INT < 23) goto L15;
        JSONArray r0 = new JSONArray(r4);     // Catch: Exception -> L13
        ArrayList r42 = new ArrayList();     // Catch: Exception -> L13
        int r1 = 0;
    L9:
        if (r1 >= r0.length()) goto L11;
        r42.add((String) r0.get(r1));     // Catch: Exception -> L13
        r1 = r1 + 1;     // Catch: Exception -> L13
        goto L9
    L11:
        BfDataPermissionUtils.newInstance(getActivity()).setCallback(new g(this)).setPermissions(r42).requestPermissions(Integer.parseInt(r5));     // Catch: Exception -> L13
        return;
    L13:
        e = move-exception;
        Logger.e("参数不正确，应该传入字符串数组" + e.getMessage());
        sendResult(CODE_PERMISSION_DENIED, "拒绝的权限|参数不正确，应该传入字符串数组");
        e.printStackTrace();
    }

    @YFunction(name = "request_permission")
    public void request_permission() {
        Logger.e("该方法已经弃用");
    }
}
