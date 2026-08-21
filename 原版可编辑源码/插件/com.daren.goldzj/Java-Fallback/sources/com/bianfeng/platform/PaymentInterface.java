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
    private static YmnCallback ymnCallback;

    static {
        ymnCallback = new 1();
    }

    public PaymentInterface() {
    }

    @Deprecated
    public static void checkOrder(Context r0, String r1, int r2, PlatformSdkListener r3) {
        YmnSdkPaymentWrapper.checkOrder(r1, r2);
    }

    @Deprecated
    public static PaymentInterface getInstance() {
        if (instance != null) goto L6;
        instance = new PaymentInterface();
    L6:
        return instance;
    }

    @Deprecated
    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Deprecated
    public static void setListener(PlatformSdkListener r0) {
        listener = r0;
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
    public void init(Activity r1) {
        YmnSdkWrapper.registCallback(ymnCallback);
    }

    @Override
    public void pay(Map<String, String> r1) {
        YmnSdkPaymentWrapper.pay(r1);
    }

    @Deprecated
    public void payForProduct(String r3, String r4, String r5, String r6, String r7, String r8, String r9, String r10, String r11, String r12, String r13, String r14) {
        HashMap r0 = new HashMap();
        r0.put(IPaymentFeature.ARG_CP_ORDER_ID, r3);
        r0.put(IPaymentFeature.ARG_PRODUCT_ID, r4);
        r0.put(IPaymentFeature.ARG_PRODUCT_NAME, r5);
        r0.put(IPaymentFeature.ARG_PRODUCT_PRICE, r6);
        r0.put(IPaymentFeature.ARG_PRODUCT_COUNT, r7);
        r0.put(IPaymentFeature.ARG_ROLE_ID, r8);
        r0.put(IPaymentFeature.ARG_ROLE_NAME, r9);
        r0.put(IPaymentFeature.ARG_ROLE_GRADE, r10);
        r0.put(IPaymentFeature.ARG_ROLE_BALANCE, r11);
        r0.put(IPaymentFeature.ARG_SERVER_ID, r12);
        r0.put(IPaymentFeature.ARG_NOTIFY_URL, r13);
        r0.put("ext", r14);
        payForProduct(r0);
    }

    @Override
    public void prePay(LinkedHashMap<String, String> r1) {
    }

    @Deprecated
    public void release() {
    }

    @Deprecated
    public void resetPayState() {
    }

    @Deprecated
    public void thirdPay(Map<String, String> r1, PlatformSdkListener r2) {
    }

    @Deprecated
    public void payForProduct(Map<String, String> r1) {
        pay(r1);
    }
}
