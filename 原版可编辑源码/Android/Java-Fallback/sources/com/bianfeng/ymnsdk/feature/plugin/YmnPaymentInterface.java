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
            com.google.gson.Gson r1 = new com.google.gson.Gson
            r1.<init>()
            java.lang.String r0 = r1.toJson(r3)
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
            java.lang.String r1 = "ext"
            java.lang.Object r1 = r3.get(r1)
            r0 = r1
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
            java.lang.String r1 = "notify_url"
            java.lang.Object r1 = r3.get(r1)
            r0 = r1
            java.lang.String r0 = (java.lang.String) r0
        L17:
            return r0
    }

    public float getOrderTotalPrice(java.util.Map<java.lang.String, java.lang.String> r6) {
            r5 = this;
            java.lang.String r0 = "platform_callback"
            java.lang.Object r0 = r6.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r1 = 1120403456(0x42c80000, float:100.0)
            java.lang.Class<com.bianfeng.ymnsdk.entity.PlatformCallbackEntity> r2 = com.bianfeng.ymnsdk.entity.PlatformCallbackEntity.class
            java.lang.Object r2 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.fromJson(r0, r2)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L1f
            com.bianfeng.ymnsdk.entity.PlatformCallbackEntity r2 = (com.bianfeng.ymnsdk.entity.PlatformCallbackEntity) r2     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L1f
            float r3 = r2.getTotal_fee()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L1f
            r4 = 0
            int r4 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r4 == 0) goto L1e
            float r1 = r3 / r1
            return r1
        L1e:
            goto L23
        L1f:
            r2 = move-exception
            r2.printStackTrace()
        L23:
            boolean r2 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.isNewTrade()     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = "product_price"
            if (r2 == 0) goto L46
            java.lang.Object r2 = r6.get(r3)     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L5f
            float r2 = java.lang.Float.parseFloat(r2)     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = "product_qty"
            java.lang.Object r3 = r6.get(r3)     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L5f
            float r3 = java.lang.Float.parseFloat(r3)     // Catch: java.lang.Exception -> L5f
            float r4 = r2 * r3
            float r1 = r4 / r1
            return r1
        L46:
            java.lang.Object r1 = r6.get(r3)     // Catch: java.lang.Exception -> L5f
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L5f
            float r1 = java.lang.Float.parseFloat(r1)     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = "product_count"
            java.lang.Object r2 = r6.get(r2)     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L5f
            float r2 = java.lang.Float.parseFloat(r2)     // Catch: java.lang.Exception -> L5f
            float r3 = r1 * r2
            return r3
        L5f:
            r1 = move-exception
            r1.printStackTrace()
            r2 = 1315859240(0x4e6e6b28, float:1.0E9)
            return r2
    }

    @Override
    public void onInit(android.content.Context r2) {
            r1 = this;
            super.onInit(r2)
            r0 = 1
            r1.setIniting(r0)
            return
    }

    public void pay(java.util.Map<java.lang.String, java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = "order_id"
            java.lang.Object r0 = r2.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r1.cpOrderId = r0
            java.lang.String r0 = "trade_code"
            java.lang.Object r0 = r2.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            r1.ymnOrderId = r0
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
