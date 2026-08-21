package com.bianfeng.platform;

import android.app.Activity;
import android.content.Context;
import com.bianfeng.ymnsdk.YmnSdkPaymentWrapper;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import com.bianfeng.ymnsdk.feature.YmnCallback;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;

@Deprecated
public class PaymentInterface implements IPaymentFeature, PaymentWrapper {
    private static PaymentInterface instance;
    protected static PlatformSdkListener listener;
    private static YmnCallback ymnCallback = new YmnCallback() {
        @Override
        public void onCallBack(int i, String str) {
            PlatformSdkListener platformSdkListener = PaymentInterface.listener;
            if (platformSdkListener == null || platformSdkListener == PlatformSdk.getListener()) {
                return;
            }
            PaymentInterface.listener.onCallBack(i, str);
        }
    };

    @Deprecated
    public static void checkOrder(Context context, String str, int i, PlatformSdkListener platformSdkListener) {
        YmnSdkPaymentWrapper.checkOrder(str, i);
    }

    @Deprecated
    public static PaymentInterface getInstance() {
        if (instance == null) {
            instance = new PaymentInterface();
        }
        return instance;
    }

    @Deprecated
    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Deprecated
    public static void setListener(PlatformSdkListener platformSdkListener) {
        listener = platformSdkListener;
    }

    @Deprecated
    public Object getExt() {
        return null;
    }

    @Override
    @Deprecated
    public String getOrderId() {
        return YmnSdkPaymentWrapper.getOrderId();
    }

    @Deprecated
    public void init(Activity activity) {
        YmnSdkWrapper.registCallback(ymnCallback);
    }

    @Override
    public void pay(Map<String, String> map) {
        YmnSdkPaymentWrapper.pay(map);
    }

    @Deprecated
    public void payForProduct(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11, String str12) {
        HashMap map = new HashMap();
        map.put(IPaymentFeature.ARG_CP_ORDER_ID, str);
        map.put(IPaymentFeature.ARG_PRODUCT_ID, str2);
        map.put(IPaymentFeature.ARG_PRODUCT_NAME, str3);
        map.put(IPaymentFeature.ARG_PRODUCT_PRICE, str4);
        map.put(IPaymentFeature.ARG_PRODUCT_COUNT, str5);
        map.put(IPaymentFeature.ARG_ROLE_ID, str6);
        map.put(IPaymentFeature.ARG_ROLE_NAME, str7);
        map.put(IPaymentFeature.ARG_ROLE_GRADE, str8);
        map.put(IPaymentFeature.ARG_ROLE_BALANCE, str9);
        map.put(IPaymentFeature.ARG_SERVER_ID, str10);
        map.put(IPaymentFeature.ARG_NOTIFY_URL, str11);
        map.put("ext", str12);
        payForProduct(map);
    }

    @Override
    public void prePay(LinkedHashMap<String, String> linkedHashMap) {
    }

    @Deprecated
    public void release() {
    }

    @Deprecated
    public void resetPayState() {
    }

    @Deprecated
    public void thirdPay(Map<String, String> map, PlatformSdkListener platformSdkListener) {
    }

    @Deprecated
    public void payForProduct(Map<String, String> map) {
        pay(map);
    }
}
