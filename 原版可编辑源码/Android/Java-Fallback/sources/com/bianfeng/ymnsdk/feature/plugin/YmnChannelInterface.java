package com.bianfeng.ymnsdk.feature.plugin;

public abstract class YmnChannelInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper implements com.bianfeng.ymnsdk.feature.protocol.IUserFeature, com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature, com.bianfeng.ymnsdk.YmnCode {
    private java.lang.String cpOrderId;
    private java.lang.String ymnOrderId;

    public YmnChannelInterface() {
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
            goto L23
        Lf:
            java.lang.String r0 = r2.cpOrderId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1e
            java.lang.String r0 = r2.cpOrderId
            r1 = 0
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper.a(r2, r0, r1)
            goto L23
        L1e:
            java.lang.String r0 = "checkOrder cpOrderId is null and ymnOrderId is null "
            com.bianfeng.ymnsdk.util.Logger.i(r0)
        L23:
            return
    }

    @Override
    public void enterPlatform() {
            r0 = this;
            return
    }

    @Override
    public void exit() {
            r0 = this;
            r0.getActivity()
            return
    }

    @Override
    public void getAndShowVerifyRealName() {
            r0 = this;
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
            r2 = this;
            java.lang.String r0 = r2.ymnOrderId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmnChannelInterface ymnOrderId : "
            r0.append(r1)
            java.lang.String r1 = r2.ymnOrderId
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.String r0 = r2.ymnOrderId
            return r0
        L21:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmnChannelInterface cpOrderId : "
            r0.append(r1)
            java.lang.String r1 = r2.cpOrderId
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.String r0 = r2.cpOrderId
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
            r0 = 1120403456(0x42c80000, float:100.0)
            java.lang.String r1 = "platform_callback"
            java.lang.Object r1 = r6.get(r1)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L25
            java.lang.String r1 = (java.lang.String) r1     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L25
            boolean r2 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.isJsonObject(r1)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L25
            if (r2 == 0) goto L24
            java.lang.Class<com.bianfeng.ymnsdk.entity.PlatformCallbackEntity> r2 = com.bianfeng.ymnsdk.entity.PlatformCallbackEntity.class
            java.lang.Object r2 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.fromJson(r1, r2)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L25
            com.bianfeng.ymnsdk.entity.PlatformCallbackEntity r2 = (com.bianfeng.ymnsdk.entity.PlatformCallbackEntity) r2     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L25
            float r3 = r2.getTotal_fee()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L25
            r4 = 0
            int r4 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r4 == 0) goto L24
            float r0 = r3 / r0
            return r0
        L24:
            goto L29
        L25:
            r1 = move-exception
            r1.printStackTrace()
        L29:
            boolean r1 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.isNewTrade()     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = "product_price"
            if (r1 == 0) goto L4c
            java.lang.Object r1 = r6.get(r2)     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L65
            float r1 = java.lang.Float.parseFloat(r1)     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = "product_qty"
            java.lang.Object r2 = r6.get(r2)     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L65
            float r2 = java.lang.Float.parseFloat(r2)     // Catch: java.lang.Exception -> L65
            float r3 = r1 * r2
            float r0 = r3 / r0
            return r0
        L4c:
            java.lang.Object r0 = r6.get(r2)     // Catch: java.lang.Exception -> L65
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L65
            float r0 = java.lang.Float.parseFloat(r0)     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = "product_count"
            java.lang.Object r1 = r6.get(r1)     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L65
            float r1 = java.lang.Float.parseFloat(r1)     // Catch: java.lang.Exception -> L65
            float r2 = r0 * r1
            return r2
        L65:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 1315859240(0x4e6e6b28, float:1.0E9)
            return r1
    }

    @Override
    public com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo getUserInfo() {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            java.util.Map r1 = r3.getLoginedData()
            java.lang.String r1 = r0.toJson(r1)
            java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo> r2 = com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo.class
            java.lang.Object r1 = r0.fromJson(r1, r2)
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r1 = (com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo) r1
            return r1
    }

    @Override
    public void getVerifyRealNameInfo() {
            r0 = this;
            return
    }

    @Override
    public void hideToolBar() {
            r0 = this;
            return
    }

    @Override
    public boolean isLogined() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void logout() {
            r0 = this;
            return
    }

    @Override
    public void onInit(android.content.Context r2) {
            r1 = this;
            super.onInit(r2)
            r0 = 1
            r1.setIniting(r0)
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

    protected void setInitFlagsByReturnCode(int r3) {
            r2 = this;
            r0 = 0
            r1 = 100
            if (r3 != r1) goto Lc
            r2.setIniting(r0)
            r1 = 1
            r2.setInited(r1)
        Lc:
            r1 = 101(0x65, float:1.42E-43)
            if (r3 != r1) goto L16
            r2.setIniting(r0)
            r2.setInited(r0)
        L16:
            return
    }

    @Override
    public void showToolBar() {
            r0 = this;
            return
    }

    @Override
    public void showVerifyRealName() {
            r0 = this;
            return
    }

    @Override
    public void submitUserInfo(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            return
    }

    @Override
    public void switchAccount() {
            r0 = this;
            return
    }
}
