package com.bianfeng.paylib.alipaysdk;

public class PaySdk {
    private PaySdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void pay(android.app.Activity r1, java.lang.String r2, com.bianfeng.paylib.alipaysdk.OnPayListener r3) {
            com.bianfeng.paylib.alipaysdk.executor.AliPayHelper r0 = new com.bianfeng.paylib.alipaysdk.executor.AliPayHelper
            r0.<init>(r1)
            r0.start(r2, r3)
            return
    }
}
