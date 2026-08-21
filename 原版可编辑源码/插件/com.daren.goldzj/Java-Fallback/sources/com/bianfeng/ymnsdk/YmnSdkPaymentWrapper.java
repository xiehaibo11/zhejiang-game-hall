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

    public YmnSdkPaymentWrapper() {
    }

    private static boolean availableDefault() {
        Set<PaymentFeatureWrapper> r0 = wrappers;
        if (r0 != null) goto L5;
    L9:
        Logger.e("not exist available PaymentFeature plugin");
        return false;
    L5:
        if (r0.isEmpty() == true) goto L9;
        return true;
    }

    public static void callFunction(String r1, String... r2) {
        Map<String, PaymentFeatureWrapper> r0 = autoFunctions;
        if (r0 != null) goto L5;
    L9:
        YmnSdkWrapper.callFunction(r1, r2);
        return;
    L5:
        if (r0.containsKey(r1) == false) goto L9;
        if (YmnStrategy.isJsonParamers(r2) == false) goto L9;
        autoFunctions.get(r1).pay(YmnStrategy.arrayParamersAsMap(r2));
    }

    public static void checkOrder(String r1, int r2) {
        if (availableDefault() == false) goto L6;
        getPaymentDefault().a(r1, r2);
        return;
    }

    public static String getOrderId() {
        if (availableDefault() == true) goto L5;
        return null;
    L5:
        return getPaymentDefault().getOrderId();
    }

    public static PaymentFeatureWrapper getPaymentDefault() {
        Set<PaymentFeatureWrapper> r0 = wrappers;
        if (r0 != null) goto L5;
        return null;
    L5:
        if (r0.isEmpty() == false) goto L8;
        return null;
    L8:
        return wrappers.iterator().next();
    }

    public static Set<PaymentFeatureWrapper> getPaymentWrappers() {
        return wrappers;
    }

    public static boolean isSupportFunction(String r1) {
        Map<String, PaymentFeatureWrapper> r0 = autoFunctions;
        if (r0 == null) goto L9;
        if (r0.containsKey(r1) == false) goto L9;
        return true;
    L9:
        return YmnSdkWrapper.isSupportFunction(r1);
    }

    public static void pay(Map<String, String> r5) {
        if (availableDefault() == true) goto L5;
        Logger.e("支付渠道没有初始化");
        return;
    L5:
        if (wrappers.size() > 1) goto L7;
    L9:
        getPaymentDefault().pay(r5);
        return;
    L7:
        if (isSupportFunction("compose_pay_mode") == false) goto L9;
        YmnSdkWrapper.callFunction("compose_pay_mode", new String[]{r5.get(IPaymentFeature.ARG_CP_ORDER_ID), r5.get(IPaymentFeature.ARG_PRODUCT_ID), r5.get(IPaymentFeature.ARG_PRODUCT_NAME), r5.get(IPaymentFeature.ARG_PRODUCT_PRICE), r5.get(IPaymentFeature.ARG_PRODUCT_COUNT), r5.get(IPaymentFeature.ARG_ROLE_ID), r5.get(IPaymentFeature.ARG_ROLE_NAME), r5.get(IPaymentFeature.ARG_ROLE_GRADE), r5.get(IPaymentFeature.ARG_ROLE_BALANCE), r5.get(IPaymentFeature.ARG_SERVER_ID), r5.get(IPaymentFeature.ARG_NOTIFY_URL), r5.get("ext")});
    }

    private static void registPaymentFeatureAutoFunctions(PaymentFeatureWrapper r3) {
        if (autoFunctions != null) goto L5;
        autoFunctions = new HashMap();
    L5:
        String r0 = r3.a().getPluginName();
        autoFunctions.put(r0 + "_pay", r3);
    }

    public static void registPaymentFeatureWrapper(PaymentFeatureWrapper r1) {
        if (wrappers != null) goto L5;
        wrappers = new HashSet();
    L5:
        wrappers.add(r1);
        registPaymentFeatureAutoFunctions(r1);
    }

    public static String getOrderId(String r1) {
        if (availableDefault() == true) goto L5;
        return null;
    L5:
        return autoFunctions.get(r1).getOrderId();
    }

    public static void callFunction(String r1, LinkedHashMap<String, String> r2) {
        Map<String, PaymentFeatureWrapper> r0 = autoFunctions;
        if (r0 != null) goto L5;
    L7:
        YmnSdkWrapper.callFunction(r1, r2);
        return;
    L5:
        if (r0.containsKey(r1) == false) goto L7;
        autoFunctions.get(r1).pay(r2);
    }
}
