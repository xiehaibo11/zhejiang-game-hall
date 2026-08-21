package com.alipayopen.sdk;

public class PaySdk {
    private PaySdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void pay(android.app.Activity r1, java.lang.String r2, com.alipayopen.sdk.OnPayListener r3) {
            com.alipayopen.sdk.executor.AliPayHelper r0 = new com.alipayopen.sdk.executor.AliPayHelper
            r0.<init>(r1)
            r0.start(r2, r3)
            return
    }
}
