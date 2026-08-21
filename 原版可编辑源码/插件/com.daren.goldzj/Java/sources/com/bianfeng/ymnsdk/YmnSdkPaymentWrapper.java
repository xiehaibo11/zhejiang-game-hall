package com.bianfeng.ymnsdk;

import com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.util.Logger;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;

public class YmnSdkPaymentWrapper extends YmnSdkWrapper {
    private static Map<String, PaymentFeatureWrapper> autoFunctions;
    private static Set<PaymentFeatureWrapper> wrappers;

    private static boolean availableDefault() {
        Set<PaymentFeatureWrapper> set = wrappers;
        if (set != null && !set.isEmpty()) {
            return true;
        }
        Logger.e("not exist available PaymentFeature plugin");
        return false;
    }

    public static void callFunction(String str, String... strArr) {
        Map<String, PaymentFeatureWrapper> map = autoFunctions;
        if (map != null && map.containsKey(str) && YmnStrategy.isJsonParamers(strArr)) {
            autoFunctions.get(str).pay(YmnStrategy.arrayParamersAsMap(strArr));
        } else {
            YmnSdkWrapper.callFunction(str, strArr);
        }
    }

    public static void checkOrder(String str, int i) {
        if (availableDefault()) {
            getPaymentDefault().a(str, i);
        }
    }

    public static String getOrderId() {
        if (availableDefault()) {
            return getPaymentDefault().getOrderId();
        }
        return null;
    }

    public static PaymentFeatureWrapper getPaymentDefault() {
        Set<PaymentFeatureWrapper> set = wrappers;
        if (set == null || set.isEmpty()) {
            return null;
        }
        return wrappers.iterator().next();
    }

    public static Set<PaymentFeatureWrapper> getPaymentWrappers() {
        return wrappers;
    }

    public static boolean isSupportFunction(String str) {
        Map<String, PaymentFeatureWrapper> map = autoFunctions;
        if (map == null || !map.containsKey(str)) {
            return YmnSdkWrapper.isSupportFunction(str);
        }
        return true;
    }

    public static void pay(Map<String, String> map) {
        if (!availableDefault()) {
            Logger.e("支付渠道没有初始化");
        } else if (wrappers.size() <= 1 || !isSupportFunction("compose_pay_mode")) {
            getPaymentDefault().pay(map);
        } else {
            YmnSdkWrapper.callFunction("compose_pay_mode", map.get(IPaymentFeature.ARG_CP_ORDER_ID), map.get(IPaymentFeature.ARG_PRODUCT_ID), map.get(IPaymentFeature.ARG_PRODUCT_NAME), map.get(IPaymentFeature.ARG_PRODUCT_PRICE), map.get(IPaymentFeature.ARG_PRODUCT_COUNT), map.get(IPaymentFeature.ARG_ROLE_ID), map.get(IPaymentFeature.ARG_ROLE_NAME), map.get(IPaymentFeature.ARG_ROLE_GRADE), map.get(IPaymentFeature.ARG_ROLE_BALANCE), map.get(IPaymentFeature.ARG_SERVER_ID), map.get(IPaymentFeature.ARG_NOTIFY_URL), map.get("ext"));
        }
    }

    private static void registPaymentFeatureAutoFunctions(PaymentFeatureWrapper paymentFeatureWrapper) {
        if (autoFunctions == null) {
            autoFunctions = new HashMap();
        }
        String pluginName = paymentFeatureWrapper.a().getPluginName();
        autoFunctions.put(pluginName + "_pay", paymentFeatureWrapper);
    }

    public static void registPaymentFeatureWrapper(PaymentFeatureWrapper paymentFeatureWrapper) {
        if (wrappers == null) {
            wrappers = new HashSet();
        }
        wrappers.add(paymentFeatureWrapper);
        registPaymentFeatureAutoFunctions(paymentFeatureWrapper);
    }

    public static String getOrderId(String str) {
        if (availableDefault()) {
            return autoFunctions.get(str).getOrderId();
        }
        return null;
    }

    public static void callFunction(String str, LinkedHashMap<String, String> linkedHashMap) {
        Map<String, PaymentFeatureWrapper> map = autoFunctions;
        if (map != null && map.containsKey(str)) {
            autoFunctions.get(str).pay(linkedHashMap);
        } else {
            YmnSdkWrapper.callFunction(str, linkedHashMap);
        }
    }
}
