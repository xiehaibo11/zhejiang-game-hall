package com.bianfeng.ymnsdk.alipay;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class AlipayInterface extends com.bianfeng.ymnsdk.feature.plugin.YmnPaymentInterface {


    public AlipayInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "alp_iap")
    public void alp_iap(java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = "alipay_pay"
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r0, r2)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "30002"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "alipay"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 19
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "15.6.2"
            return r0
    }

    @Override
    public void onInit(android.content.Context r2) {
            r1 = this;
            super.onInit(r2)
            r2 = 0
            r0 = 100
            r1.sendResult(r0, r2)
            r0 = 205(0xcd, float:2.87E-43)
            r1.sendResult(r0, r2)
            return
    }

    @Override
    public void pay(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            super.pay(r3)
            java.lang.String r0 = "client_callback"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1a
            java.lang.String r0 = "ext"
            java.lang.Object r3 = r3.get(r0)
            r0 = r3
            java.lang.String r0 = (java.lang.String) r0
        L1a:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L48
            r3.<init>(r0)     // Catch: java.lang.Exception -> L48
            boolean r0 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.isNewTrade()     // Catch: java.lang.Exception -> L48
            if (r0 == 0) goto L2c
            java.lang.String r0 = "token"
            java.lang.String r3 = r3.optString(r0)     // Catch: java.lang.Exception -> L48
            goto L32
        L2c:
            java.lang.String r0 = "alipay_url"
            java.lang.String r3 = r3.optString(r0)     // Catch: java.lang.Exception -> L48
        L32:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L48
            byte[] r3 = com.alipay.sdk.util.Base64.decode(r3)     // Catch: java.lang.Exception -> L48
            r0.<init>(r3)     // Catch: java.lang.Exception -> L48
            android.app.Activity r3 = r2.getActivity()
            com.bianfeng.ymnsdk.alipay.AlipayInterface$1 r1 = new com.bianfeng.ymnsdk.alipay.AlipayInterface$1
            r1.<init>(r2)
            com.alipay.sdk.PaySdk.pay(r3, r0, r1)
            return
        L48:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 201(0xc9, float:2.82E-43)
            java.lang.String r0 = "30002001|后台返回数据出错"
            r2.sendResult(r3, r0)
            return
    }
}
