package com.bianfeng.ymnsdk.feature.plugin;

public abstract class YmnPaymentInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper implements com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature, com.bianfeng.ymnsdk.YmnCode {
    private java.lang.String cpOrderId;
    private java.lang.String ymnOrderId;

    public YmnPaymentInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    public void checkOrder() {
            r2 = this;
            java.lang.String r0 = r2.ymnOrderId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf
            java.lang.String r0 = r2.ymnOrderId
            r1 = 1
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper.a(r2, r0, r1)
            goto L15
        Lf:
            java.lang.String r0 = r2.cpOrderId
            r1 = 0
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper.a(r2, r0, r1)
        L15:
            return
    }

    public java.lang.String getOrdeCallbackMessage(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.String r0 = "platform_callback"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L17
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            java.lang.String r0 = r0.toJson(r3)
        L17:
            return r0
    }

    public java.lang.String getOrderExtArg(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.String r0 = "platform_callback"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L17
            java.lang.String r0 = "ext"
            java.lang.Object r3 = r3.get(r0)
            r0 = r3
            java.lang.String r0 = (java.lang.String) r0
        L17:
            return r0
    }

    @Override
    public java.lang.String getOrderId() {
            r1 = this;
            java.lang.String r0 = r1.ymnOrderId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.ymnOrderId
            return r0
        Lb:
            java.lang.String r0 = r1.cpOrderId
            return r0
    }

    public java.lang.String getOrderNotifyUrl(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.String r0 = "platform_notify_url"
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L17
            java.lang.String r0 = "notify_url"
            java.lang.Object r3 = r3.get(r0)
            r0 = r3
            java.lang.String r0 = (java.lang.String) r0
        L17:
            return r0
    }

    public float getOrderTotalPrice(java.util.Map<java.lang.String, java.lang.String> r4) {
            r3 = this;
            java.lang.String r0 = "platform_callback"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r1 = 1120403456(0x42c80000, float:100.0)
            java.lang.Class<com.bianfeng.ymnsdk.entity.PlatformCallbackEntity> r2 = com.bianfeng.ymnsdk.entity.PlatformCallbackEntity.class
            java.lang.Object r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.fromJson(r0, r2)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L1d
            com.bianfeng.ymnsdk.entity.PlatformCallbackEntity r0 = (com.bianfeng.ymnsdk.entity.PlatformCallbackEntity) r0     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L1d
            float r0 = r0.getTotal_fee()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L1d
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L21
            float r0 = r0 / r1
            return r0
        L1d:
            r0 = move-exception
            r0.printStackTrace()
        L21:
            boolean r0 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.isNewTrade()     // Catch: java.lang.Exception -> L5c
            java.lang.String r2 = "product_price"
            if (r0 == 0) goto L43
            java.lang.Object r0 = r4.get(r2)     // Catch: java.lang.Exception -> L5c
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L5c
            float r0 = java.lang.Float.parseFloat(r0)     // Catch: java.lang.Exception -> L5c
            java.lang.String r2 = "product_qty"
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Exception -> L5c
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L5c
            float r4 = java.lang.Float.parseFloat(r4)     // Catch: java.lang.Exception -> L5c
            float r0 = r0 * r4
            float r0 = r0 / r1
            return r0
        L43:
            java.lang.Object r0 = r4.get(r2)     // Catch: java.lang.Exception -> L5c
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L5c
            float r0 = java.lang.Float.parseFloat(r0)     // Catch: java.lang.Exception -> L5c
            java.lang.String r1 = "product_count"
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> L5c
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L5c
            float r4 = java.lang.Float.parseFloat(r4)     // Catch: java.lang.Exception -> L5c
            float r0 = r0 * r4
            return r0
        L5c:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 1315859240(0x4e6e6b28, float:1.0E9)
            return r4
    }

    @Override
    public void onInit(android.content.Context r1) {
            r0 = this;
            super.onInit(r1)
            r1 = 1
            r0.setIniting(r1)
            return
    }

    @Override
    public void pay(java.util.Map<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = "order_id"
            java.lang.Object r0 = r2.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r1.cpOrderId = r0
            java.lang.String r0 = "trade_code"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            r1.ymnOrderId = r2
            return
    }

    @Override
    public void prePay(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            return
    }

    public void requestFeedcodes(com.bianfeng.ymnsdk.action.ActionObserver r3) {
            r2 = this;
            com.bianfeng.ymnsdk.action.a r0 = new com.bianfeng.ymnsdk.action.a
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r0.putReqData(r2, r1)
            r0.addObserver(r3)
            r0.actionStart()
            return
    }

    public void requestProducts(com.bianfeng.ymnsdk.action.ActionObserver r3) {
            r2 = this;
            com.bianfeng.ymnsdk.action.g r0 = new com.bianfeng.ymnsdk.action.g
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r0.putReqData(r2, r1)
            r0.addObserver(r3)
            r0.actionStart()
            return
    }

    @Override
    public void sendResult(int r1, java.lang.String r2) {
            r0 = this;
            r0.setInitFlagsByReturnCode(r1)
            super.sendResult(r1, r2)
            return
    }

    @Override
    public void sendResultWithoutInterceptors(int r1, java.lang.String r2) {
            r0 = this;
            r0.setInitFlagsByReturnCode(r1)
            super.sendResultWithoutInterceptors(r1, r2)
            return
    }

    protected void setInitFlagsByReturnCode(int r4) {
            r3 = this;
            r0 = 205(0xcd, float:2.87E-43)
            r1 = 0
            if (r4 != r0) goto Lc
            r3.setIniting(r1)
            r2 = 1
            r3.setInited(r2)
        Lc:
            if (r4 != r0) goto L14
            r3.setIniting(r1)
            r3.setInited(r1)
        L14:
            return
    }
}
