package com.bianfeng.platform;

@java.lang.Deprecated
public class PaymentInterfaceFix extends com.bianfeng.platform.PaymentInterface {
    protected static com.bianfeng.platform.PlatformSdkListener listener;
    protected android.app.Activity activity;


    static {
            com.bianfeng.platform.PaymentInterfaceFix$1 r0 = new com.bianfeng.platform.PaymentInterfaceFix$1
            r0.<init>()
            com.bianfeng.platform.PaymentInterfaceFix.listener = r0
            return
    }

    public PaymentInterfaceFix() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.platform.PlatformSdkListener getListener() {
            com.bianfeng.platform.PlatformSdkListener r0 = com.bianfeng.platform.PaymentInterfaceFix.listener
            return r0
    }

    @Override
    public java.lang.Object getExt() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getOrderId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void init(android.app.Activity r1) {
            r0 = this;
            r0.activity = r1
            return
    }

    @Override
    public void pay(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            return
    }

    @Override
    public void payForProduct(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r0 = this;
            return
    }

    @Override
    public void payForProduct(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            return
    }

    @Override
    public void release() {
            r0 = this;
            return
    }

    @Override
    public void resetPayState() {
            r0 = this;
            return
    }

    @Override
    public void thirdPay(java.util.Map<java.lang.String, java.lang.String> r1, com.bianfeng.platform.PlatformSdkListener r2) {
            r0 = this;
            return
    }
}
