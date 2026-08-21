package com.bianfeng.trackingio;

import android.app.Application;
import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.paylib.utils.PayTypeUtils;
import com.bianfeng.platform.executor.AppConfig;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.AnalyticsData;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import com.reyun.tracking.sdk.InitParameters;
import com.reyun.tracking.sdk.Tracking;
import com.tkay.expressad.foundation.d.r;
import java.util.LinkedHashMap;
import java.util.Map;

@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class TrackingIOInterface extends YmnPluginWrapper {
    public static final String ASSET_FILE_NAME_CERT = ".cert.pem";
    private final String TAG = "TrackingIOInterface : ";
    private final String FUNCTION_SET_REGISTERWITHACCOUNTID = "trackingio_set_registerwithaccountid";
    private final String FUNCTION_SET_LOGINSUCCESSBUSINESS = "trackingio_set_loginsuccessbusiness";
    private final String FUNCTION_SET_PAYMENTSTART = "trackingio_set_paymentstart";
    private final String FUNCTION_SET_PAYMENT = "trackingio_set_payment";
    private final String FUNCTION_SET_EVENT = "trackingio_set_event";

    @Deprecated
    private final String FUNCTION_SET_PROFILE = "trackingio_set_profile";
    private final String FUNCTION_SET_ORDER = "trackingio_set_order";
    private final String FUNCTION_SET_SHOW = "trackingio_set_show";
    private final String FUNCTION_SET_CLICK = "trackingio_set_click";
    private final String FUNCTION_SET_APP_DURATION = "trackingio_set_app_duration";
    private final String FUNCTION_SET_PAGE_DURATION = "trackingio_set_page_duration";
    private final String TRACKINGIO_ACCOUNTID = "accountId";
    private final String TRACKINGIO_TRANSACTIONID = AnalyticsData.KEY_TRANSACTIONID;
    private final String TRACKINGIO_PAYMENTTYPE = "paymentType";
    private final String TRACKINGIO_CURRENCYTYPE = "currencyType";
    private final String TRACKINGIO_CURRENCYAMOUNT = "currencyAmount";
    private final String TRACKINGIO_EVENTNAME = "eventName";
    private final String TRACKINGIO_AD_PLATFORM = "adPlatform";
    private final String TRACKINGIO_adId = "adId";
    private final String TRACKINGIO_fill = "fill";
    private final String TRACKINGIO_APP_DURATION = r.ag;
    private final String TRACKINGIO_APP_PAGE_NAME = "app_page_name";
    private final String TRACKINGIO_APP_PAGE_DURATION = r.ag;
    private boolean isInit = false;

    @Override
    public String getPluginId() {
        return PayTypeUtils.ALI_WEB_PAY2;
    }

    @Override
    public String getPluginName() {
        return "trackingio";
    }

    @Override
    public int getPluginVersion() {
        return 12;
    }

    @Override
    public String getSdkVersion() {
        return "1.9.5";
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        if (this.isInit) {
            return;
        }
        Logger.d("TrackingIOInterface : ", " into onInit");
        Tracking.preInit((Application) getContext().getApplicationContext(), getPropertie("trackingio_appkey"));
        Tracking.initWithKeyAndChannelId((Application) getContext().getApplicationContext(), getInitParameters());
        this.isInit = true;
    }

    @YFunction(name = "trackingio_set_registerwithaccountid")
    public void setRegisterWithAccountid(LinkedHashMap<String, String> linkedHashMap) {
        Tracking.setRegisterWithAccountID(linkedHashMap.get("accountId"), getExtraMap(linkedHashMap));
        Logger.d("TrackingIOInterface : ", "call function trackingio_set_registerwithaccountid");
    }

    @YFunction(name = "trackingio_set_loginsuccessbusiness")
    public void setLoginSuccessBusiness(LinkedHashMap<String, String> linkedHashMap) {
        Tracking.setLoginSuccessBusiness(linkedHashMap.get("accountId"), getExtraMap(linkedHashMap));
        Logger.d("TrackingIOInterface : ", "call functiontrackingio_set_loginsuccessbusiness");
    }

    @YFunction(name = "trackingio_set_paymentstart")
    @Deprecated
    public void setPaymentStart(LinkedHashMap<String, String> linkedHashMap) {
        setPayment(linkedHashMap);
        Logger.d("TrackingIOInterface : ", "call function trackingio_set_paymentstart");
    }

    @YFunction(name = "trackingio_set_payment")
    public void setPayment(LinkedHashMap<String, String> linkedHashMap) {
        Tracking.setPayment(linkedHashMap.get(AnalyticsData.KEY_TRANSACTIONID), linkedHashMap.get("paymentType"), linkedHashMap.get("currencyType"), getCurrencyAmount(linkedHashMap), getExtraMap(linkedHashMap));
        Logger.d("TrackingIOInterface : ", "call function trackingio_set_payment");
    }

    @YFunction(name = "trackingio_set_event")
    public void setEvent(LinkedHashMap<String, String> linkedHashMap) {
        Tracking.setEvent(linkedHashMap.get("eventName"), getExtraMap(linkedHashMap));
        Logger.d("TrackingIOInterface : ", "call function trackingio_set_event");
    }

    @YFunction(name = "trackingio_set_profile")
    @Deprecated
    public void setProfile(LinkedHashMap<String, String> linkedHashMap) {
        Logger.d("TrackingIOInterface : ", "call functiontrackingio_set_profile");
    }

    @YFunction(name = "trackingio_set_order")
    public void setOrder(LinkedHashMap<String, String> linkedHashMap) {
        Tracking.setOrder(linkedHashMap.get(AnalyticsData.KEY_TRANSACTIONID), linkedHashMap.get("currencyType"), getCurrencyAmount(linkedHashMap), getExtraMap(linkedHashMap));
        Logger.d("TrackingIOInterface : ", "call functiontrackingio_set_order");
    }

    @YFunction(name = "trackingio_set_show")
    public void setAdShow(LinkedHashMap<String, String> linkedHashMap) {
        Tracking.setAdShow(linkedHashMap.get("adPlatform"), linkedHashMap.get("adId"), linkedHashMap.get("fill"), getExtraMap(linkedHashMap));
        Logger.d("TrackingIOInterface : ", "call functiontrackingio_set_show");
    }

    @YFunction(name = "trackingio_set_click")
    public void setAdClick(LinkedHashMap<String, String> linkedHashMap) {
        Tracking.setAdClick(linkedHashMap.get("adPlatform"), linkedHashMap.get("adId"), getExtraMap(linkedHashMap));
        Logger.d("TrackingIOInterface : ", "call functiontrackingio_set_click");
    }

    @YFunction(name = "trackingio_set_app_duration")
    public void setAppDuration(LinkedHashMap<String, String> linkedHashMap) {
        Tracking.setAppDuration(getLongTime(linkedHashMap, r.ag), getExtraMap(linkedHashMap));
        Logger.d("TrackingIOInterface : ", "call functiontrackingio_set_app_duration");
    }

    @YFunction(name = "trackingio_set_page_duration")
    public void setPageDuration(LinkedHashMap<String, String> linkedHashMap) {
        String str = linkedHashMap.get("app_page_name");
        if (TextUtils.isEmpty(str)) {
            Logger.e("TrackingIOInterface : ", "setPageDuration: activityName不合法：" + str);
            return;
        }
        Tracking.setPageDuration(str, getLongTime(linkedHashMap, r.ag), getExtraMap(linkedHashMap));
        Logger.d("TrackingIOInterface : ", "call functiontrackingio_set_page_duration");
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        Logger.d("TrackingIOInterface : ", "onDestroy");
        Tracking.exitSdk();
    }

    @Override
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
        Logger.d("TrackingIOInterface : ", "onRequestPermissionsResult: request code : " + i);
        Tracking.initWithKeyAndChannelId((Application) getContext().getApplicationContext(), getInitParameters());
    }

    private float getCurrencyAmount(LinkedHashMap<String, String> linkedHashMap) {
        String str = linkedHashMap.get("currencyAmount");
        if (TextUtils.isEmpty(str)) {
            return 0.0f;
        }
        return Float.parseFloat(str);
    }

    public long getLongTime(LinkedHashMap<String, String> linkedHashMap, String str) {
        String str2 = linkedHashMap.get(str);
        if (TextUtils.isEmpty(str2)) {
            return 0L;
        }
        return Long.parseLong(str2);
    }

    private Map<String, Object> getExtraMap(LinkedHashMap<String, String> linkedHashMap) {
        String str = linkedHashMap.get("extra");
        Logger.d("TrackingIOInterface : ", "getExtraMap: map : " + linkedHashMap);
        try {
            return YmnGsonUtil.getMapFrom(str);
        } catch (YmnsdkException e) {
            Logger.e("TrackingIOInterface : ", "getExtraMap ERROR: " + e.getMessage());
            e.printStackTrace();
            return null;
        }
    }

    private InitParameters getInitParameters() {
        InitParameters initParameters = new InitParameters();
        initParameters.appKey = getPropertie("trackingio_appkey");
        initParameters.channelId = AppConfig.getChannelId();
        return initParameters;
    }
}
