package com.bianfeng.paylib;

public class YmnWebpaysdkCallback {
    public YmnWebpaysdkCallback() {
            r0 = this;
            r0.<init>()
            return
    }

    public void onCall(java.util.HashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            com.bianfeng.paylib.YmnWebpaySdk r0 = com.bianfeng.paylib.YmnWebpaySdk.getInstance()
            r0.pay(r2)
            return
    }
}
