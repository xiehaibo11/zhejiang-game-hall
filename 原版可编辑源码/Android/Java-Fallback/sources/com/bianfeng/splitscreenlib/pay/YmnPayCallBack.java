package com.bianfeng.splitscreenlib.pay;

public class YmnPayCallBack {
    private java.lang.String type_fail;
    private java.lang.String type_request_order;
    private java.lang.String type_success;

    public YmnPayCallBack() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "type_success"
            r1.type_success = r0
            java.lang.String r0 = "type_request_order"
            r1.type_request_order = r0
            java.lang.String r0 = "type_fail"
            r1.type_fail = r0
            return
    }

    public void onCall(java.util.HashMap<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.String r0 = "type"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = r2.type_success
            boolean r1 = r1.equalsIgnoreCase(r0)
            if (r1 == 0) goto L1c
            com.bianfeng.splitscreenlib.YmnH5GameSdk r3 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            com.bianfeng.splitscreenlib.YmnH5Callback r3 = r3.getCallback()
            r3.onPaySuccess()
            goto L3f
        L1c:
            java.lang.String r1 = r2.type_request_order
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L2c
            com.bianfeng.loginlib.YmnH5GameLoginSdk r3 = com.bianfeng.loginlib.YmnH5GameLoginSdk.getInstance()
            r3.endPay()
            goto L3f
        L2c:
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.getInstance()
            com.bianfeng.splitscreenlib.YmnH5Callback r0 = r0.getCallback()
            java.lang.String r1 = "msg"
            java.lang.Object r3 = r3.get(r1)
            java.lang.String r3 = (java.lang.String) r3
            r0.onPayFail(r3)
        L3f:
            return
    }
}
