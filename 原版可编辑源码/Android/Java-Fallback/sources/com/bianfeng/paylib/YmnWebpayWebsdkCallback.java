package com.bianfeng.paylib;

public class YmnWebpayWebsdkCallback {
    public YmnWebpayWebsdkCallback() {
            r0 = this;
            r0.<init>()
            return
    }

    public void onCall(java.util.HashMap<java.lang.String, java.lang.String> r3) {
            r2 = this;
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r1 = "onCall YmnWebpayWebsdkCallback 支付"
            r0.e(r1)
            com.bianfeng.paylib.YmnWebpaySdk r0 = com.bianfeng.paylib.YmnWebpaySdk.getInstance()
            r0.payWeb(r3)
            return
    }
}
