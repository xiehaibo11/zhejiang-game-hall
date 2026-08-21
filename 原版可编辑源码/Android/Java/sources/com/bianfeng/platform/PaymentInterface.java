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
        public void onCallBack(int code, String msg) {
            PlatformSdkListener platformSdkListener = PaymentInterface.listener;
            if (platformSdkListener != null && platformSdkListener != PlatformSdk.getListener()) {
                PaymentInterface.listener.onCallBack(code, msg);
            }
        }
    };

    @Deprecated
    public static void setListener(PlatformSdkListener listener2) {
        listener = listener2;
    }

    @Deprecated
    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Deprecated
    public static PaymentInterface getInstance() {
        if (instance == null) {
            instance = new PaymentInterface();
        }
        return instance;
    }

    @Deprecated
    public void init(Activity activity) {
        YmnSdkWrapper.registCallback(ymnCallback);
    }

    @Deprecated
    public void payForProduct(String orderId, String productId, String productName, String productPrice, String productCount, String roleId, String roleName, String roleGrade, String roleBalance, String serverId, String notifyUrl, String ext) {
        Map<String, String> map = new HashMap<>();
        map.put(IPaymentFeature.ARG_CP_ORDER_ID, orderId);
        map.put("product_id", productId);
        map.put("product_name", productName);
        map.put("product_price", productPrice);
        map.put("product_count", productCount);
        map.put("role_id", roleId);
        map.put("role_name", roleName);
        map.put(IPaymentFeature.ARG_ROLE_GRADE, roleGrade);
        map.put(IPaymentFeature.ARG_ROLE_BALANCE, roleBalance);
        map.put(IPaymentFeature.ARG_SERVER_ID, serverId);
        map.put("notify_url", notifyUrl);
        map.put("ext", ext);
        payForProduct(map);
    }

    @Deprecated
    public void payForProduct(Map<String, String> orders) {
        pay(orders);
    }

    @Override
    public void prePay(LinkedHashMap<String, String> order) {
    }

    @Override
    public void pay(Map<String, String> orders) {
        YmnSdkPaymentWrapper.pay(orders);
    }

    @Deprecated
    public void thirdPay(Map<String, String> orders, PlatformSdkListener listener2) {
    }

    @Deprecated
    public static void checkOrder(Context context, String orderId, int orderType, PlatformSdkListener listener2) {
        YmnSdkPaymentWrapper.checkOrder(orderId, orderType);
    }

    @Deprecated
    public Object getExt() {
        return null;
    }

    @Deprecated
    public void resetPayState() {
    }

    @Deprecated
    public void release() {
    }

    @Override
    @Deprecated
    public String getOrderId() {
        return YmnSdkPaymentWrapper.getOrderId();
    }
}
