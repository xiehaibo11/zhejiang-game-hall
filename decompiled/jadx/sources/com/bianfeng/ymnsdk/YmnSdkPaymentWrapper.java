package com.bianfeng.ymnsdk;

import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.util.Logger;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public class YmnSdkPaymentWrapper extends YmnSdkWrapper {
    private static Map<String, PaymentFeatureWrapper> autoFunctions;
    private static Set<PaymentFeatureWrapper> wrappers;

    public static Set<PaymentFeatureWrapper> getPaymentWrappers() {
        return wrappers;
    }

    public static PaymentFeatureWrapper getPaymentDefault() {
        Set<PaymentFeatureWrapper> set = wrappers;
        if (set == null || set.isEmpty()) {
            return null;
        }
        return wrappers.iterator().next();
    }

    public static void registPaymentFeatureWrapper(PaymentFeatureWrapper wrapper) {
        if (wrappers == null) {
            wrappers = new HashSet();
        }
        wrappers.add(wrapper);
        registPaymentFeatureAutoFunctions(wrapper);
    }

    private static void registPaymentFeatureAutoFunctions(PaymentFeatureWrapper wrapper) {
        if (autoFunctions == null) {
            autoFunctions = new HashMap();
        }
        YmnPluginWrapper plugin = wrapper.a();
        String name = plugin.getPluginName();
        autoFunctions.put(name + "_pay", wrapper);
        autoFunctions.put(name + "_plugin_init", wrapper);
    }

    public static boolean isSupportFunction(String functionName) {
        Map<String, PaymentFeatureWrapper> map = autoFunctions;
        if (map != null && map.containsKey(functionName)) {
            return true;
        }
        return YmnSdkWrapper.isSupportFunction(functionName);
    }

    public static void callFunction(String functionName) {
        Map<String, PaymentFeatureWrapper> map = autoFunctions;
        if (map != null && map.containsKey(functionName) && functionName.contains(PointCategory.INIT)) {
            autoFunctions.get(functionName).a().onContextChanged(YmnSdkWrapper.activity);
            autoFunctions.get(functionName).a().onInit(YmnSdkWrapper.activity);
        } else {
            YmnSdkWrapper.callFunction(functionName);
        }
    }

    public static void callFunction(String functionName, String... args) {
        Map<String, PaymentFeatureWrapper> map = autoFunctions;
        if (map != null && map.containsKey(functionName) && YmnStrategy.isJsonParamers(args)) {
            autoFunctions.get(functionName).pay(YmnStrategy.arrayParamersAsMap(args));
        } else {
            YmnSdkWrapper.callFunction(functionName, args);
        }
    }

    public static void callFunction(String functionName, LinkedHashMap<String, String> data) {
        Map<String, PaymentFeatureWrapper> map = autoFunctions;
        if (map != null && map.containsKey(functionName)) {
            autoFunctions.get(functionName).pay(data);
        } else {
            YmnSdkWrapper.callFunction(functionName, data);
        }
    }

    private static boolean availableDefault() {
        Set<PaymentFeatureWrapper> set = wrappers;
        if (set == null || set.isEmpty()) {
            Logger.e("not exist available PaymentFeature plugin");
            return false;
        }
        return true;
    }

    public static void pay(Map<String, String> order) {
        if (availableDefault()) {
            if (wrappers.size() > 1 && isSupportFunction("compose_pay_mode")) {
                YmnSdkWrapper.callFunction("compose_pay_mode", order.get(IPaymentFeature.ARG_CP_ORDER_ID), order.get("product_id"), order.get("product_name"), order.get("product_price"), order.get("product_count"), order.get("role_id"), order.get("role_name"), order.get(IPaymentFeature.ARG_ROLE_GRADE), order.get(IPaymentFeature.ARG_ROLE_BALANCE), order.get(IPaymentFeature.ARG_SERVER_ID), order.get("notify_url"), order.get("ext"));
                return;
            } else {
                getPaymentDefault().pay(order);
                return;
            }
        }
        Logger.e("支付渠道没有初始化");
    }

    public static String getOrderId() {
        if (availableDefault()) {
            return getPaymentDefault().getOrderId();
        }
        return null;
    }

    public static String getOrderId(String functionName) {
        if (availableDefault()) {
            return autoFunctions.get(functionName).getOrderId();
        }
        return null;
    }

    public static void checkOrder(String oderId, int orderType) {
        if (availableDefault()) {
            getPaymentDefault().a(oderId, orderType);
        }
    }
}
