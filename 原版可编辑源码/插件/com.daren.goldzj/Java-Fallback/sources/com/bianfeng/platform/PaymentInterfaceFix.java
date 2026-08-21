package com.bianfeng.platform;

import android.app.Activity;
import java.util.Map;

@Deprecated
public class PaymentInterfaceFix extends PaymentInterface {
    protected static PlatformSdkListener listener;
    protected Activity activity;

    static {
        listener = new 1();
    }

    public PaymentInterfaceFix() {
    }

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override
    public Object getExt() {
        return null;
    }

    @Override
    public String getOrderId() {
        return null;
    }

    @Override
    public void init(Activity r1) {
        this.activity = r1;
    }

    @Override
    public void pay(Map<String, String> r1) {
    }

    @Override
    public void payForProduct(String r1, String r2, String r3, String r4, String r5, String r6, String r7, String r8, String r9, String r10, String r11, String r12) {
    }

    @Override
    public void payForProduct(Map<String, String> r1) {
    }

    @Override
    public void release() {
    }

    @Override
    public void resetPayState() {
    }

    @Override
    public void thirdPay(Map<String, String> r1, PlatformSdkListener r2) {
    }
}
