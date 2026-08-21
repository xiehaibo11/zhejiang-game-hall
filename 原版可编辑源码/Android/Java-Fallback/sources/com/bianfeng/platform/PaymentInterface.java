package com.bianfeng.platform;

@java.lang.Deprecated
public class PaymentInterface implements com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature, com.bianfeng.platform.PaymentWrapper {
    private static com.bianfeng.platform.PaymentInterface instance;
    protected static com.bianfeng.platform.PlatformSdkListener listener;
    private static com.bianfeng.ymnsdk.feature.YmnCallback ymnCallback;


    static {
            com.bianfeng.platform.PaymentInterface$1 r0 = new com.bianfeng.platform.PaymentInterface$1
            r0.<init>()
            com.bianfeng.platform.PaymentInterface.ymnCallback = r0
            return
    }

    public PaymentInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static void checkOrder(android.content.Context r0, java.lang.String r1, int r2, com.bianfeng.platform.PlatformSdkListener r3) {
            com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.checkOrder(r1, r2)
            return
    }

    @java.lang.Deprecated
    public static com.bianfeng.platform.PaymentInterface getInstance() {
            com.bianfeng.platform.PaymentInterface r0 = com.bianfeng.platform.PaymentInterface.instance
            if (r0 != 0) goto Lb
            com.bianfeng.platform.PaymentInterface r0 = new com.bianfeng.platform.PaymentInterface
            r0.<init>()
            com.bianfeng.platform.PaymentInterface.instance = r0
        Lb:
            com.bianfeng.platform.PaymentInterface r0 = com.bianfeng.platform.PaymentInterface.instance
            return r0
    }

    @java.lang.Deprecated
    public static com.bianfeng.platform.PlatformSdkListener getListener() {
            com.bianfeng.platform.PlatformSdkListener r0 = com.bianfeng.platform.PaymentInterface.listener
            return r0
    }

    @java.lang.Deprecated
    public static void setListener(com.bianfeng.platform.PlatformSdkListener r0) {
            com.bianfeng.platform.PaymentInterface.listener = r0
            return
    }

    @java.lang.Deprecated
    public java.lang.Object getExt() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    @java.lang.Deprecated
    public java.lang.String getOrderId() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.getOrderId()
            return r0
    }

    @java.lang.Deprecated
    public void init(android.app.Activity r2) {
            r1 = this;
            com.bianfeng.ymnsdk.feature.YmnCallback r0 = com.bianfeng.platform.PaymentInterface.ymnCallback
            com.bianfeng.ymnsdk.YmnSdkWrapper.registCallback(r0)
            return
    }

    @Override
    public void pay(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.pay(r1)
            return
    }

    @java.lang.Deprecated
    public void payForProduct(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            r2 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "order_id"
            r0.put(r1, r3)
            java.lang.String r1 = "product_id"
            r0.put(r1, r4)
            java.lang.String r1 = "product_name"
            r0.put(r1, r5)
            java.lang.String r1 = "product_price"
            r0.put(r1, r6)
            java.lang.String r1 = "product_count"
            r0.put(r1, r7)
            java.lang.String r1 = "role_id"
            r0.put(r1, r8)
            java.lang.String r1 = "role_name"
            r0.put(r1, r9)
            java.lang.String r1 = "role_grade"
            r0.put(r1, r10)
            java.lang.String r1 = "role_balance"
            r0.put(r1, r11)
            java.lang.String r1 = "server_id"
            r0.put(r1, r12)
            java.lang.String r1 = "notify_url"
            r0.put(r1, r13)
            java.lang.String r1 = "ext"
            r0.put(r1, r14)
            r2.payForProduct(r0)
            return
    }

    @java.lang.Deprecated
    public void payForProduct(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.pay(r1)
            return
    }

    @Override
    public void prePay(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void release() {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void resetPayState() {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void thirdPay(java.util.Map<java.lang.String, java.lang.String> r1, com.bianfeng.platform.PlatformSdkListener r2) {
            r0 = this;
            return
    }
}
