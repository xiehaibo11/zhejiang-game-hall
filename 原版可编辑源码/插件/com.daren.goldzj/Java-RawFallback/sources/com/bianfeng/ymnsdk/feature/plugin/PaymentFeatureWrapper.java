package com.bianfeng.ymnsdk.feature.plugin;

public class PaymentFeatureWrapper implements com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature, com.bianfeng.platform.PaymentWrapper {
    com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature a;
    com.bianfeng.ymnsdk.feature.YmnPluginWrapper b;
    com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor c;

    class a implements java.lang.Runnable {
        final java.util.Map a;
        final com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper b;

        a(com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r1, java.util.Map r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r5 = this;
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r1 = r5.b
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r1.b
                r0.payInit(r1)
                java.lang.String r0 = "PaymentFeatureWrapper pay"
                com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L1e
                java.util.Map r0 = r5.a     // Catch: java.lang.Exception -> L1e
                com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r1 = r5.b     // Catch: java.lang.Exception -> L1e
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r1.b     // Catch: java.lang.Exception -> L1e
                com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r2 = r5.b     // Catch: java.lang.Exception -> L1e
                com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature r2 = r2.a     // Catch: java.lang.Exception -> L1e
                com.bianfeng.ymnsdk.feature.plugin.a.a(r0, r1, r2)     // Catch: java.lang.Exception -> L1e
                goto L49
            L1e:
                r0 = move-exception
                com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r1 = r5.b
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r1.b
                java.lang.String r2 = "解析出错了"
                r3 = 201(0xc9, float:2.82E-43)
                r1.sendResult(r3, r2)
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r2)
                java.lang.String r2 = r0.getMessage()
                r4.append(r2)
                java.lang.String r2 = r4.toString()
                java.lang.String r4 = "0"
                r1.payResponseOrder(r3, r2, r4)
                r0.printStackTrace()
            L49:
                return
        }
    }

    class b extends com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor {
        b(com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onCallBack(int r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "PaymentFeatureWrapper onCallBack : "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                com.bianfeng.ymnsdk.util.Logger.i(r0)
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                r0.paySdkReturn(r3, r4)
                super.onCallBack(r3, r4)
                return
        }
    }

    class c extends com.bianfeng.ymnsdk.actionv2.ActionObserverV2 {
        final com.bianfeng.ymnsdk.feature.YmnPluginWrapper a;
        final java.lang.String b;
        final com.bianfeng.ymnsdk.util.RequestRetryUtils c;
        final com.bianfeng.ymnsdk.actionv2.c d;

        c(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1, java.lang.String r2, com.bianfeng.ymnsdk.util.RequestRetryUtils r3, com.bianfeng.ymnsdk.actionv2.c r4) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r7) {
                r6 = this;
                java.lang.String r0 = "checkOrderFromNew onActionResult"
                com.bianfeng.ymnsdk.util.Logger.i(r0)
                boolean r0 = r7.isOk()
                r1 = 201(0xc9, float:2.82E-43)
                if (r0 == 0) goto L62
                java.lang.String r7 = r7.getSrcRes()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                java.lang.Class<com.bianfeng.ymnsdk.entity.CheckOrderEntity> r0 = com.bianfeng.ymnsdk.entity.CheckOrderEntity.class
                java.lang.Object r7 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.fromJson(r7, r0)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                com.bianfeng.ymnsdk.entity.CheckOrderEntity r7 = (com.bianfeng.ymnsdk.entity.CheckOrderEntity) r7     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                int r0 = r7.getPay_status()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r2 = 1
                java.lang.String r3 = "|"
                if (r0 != r2) goto L40
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2 = r6.a     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r4 = 200(0xc8, float:2.8E-43)
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r5.<init>()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r5.append(r0)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r5.append(r3)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                java.lang.String r7 = r7.toString()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r5.append(r7)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                java.lang.String r7 = r5.toString()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r2.sendResult(r4, r7)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                goto L86
            L40:
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r7 = r6.a     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r2.<init>()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r2.append(r0)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r2.append(r3)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                java.lang.String r0 = r6.b     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r2.append(r0)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                java.lang.String r0 = r2.toString()     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                r7.sendResult(r1, r0)     // Catch: com.bianfeng.ymnsdk.util.exception.YmnsdkException -> L5a
                goto L86
            L5a:
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r7 = r6.a
                java.lang.String r0 = "201| 查询数据解析出错"
                r7.sendResult(r1, r0)
                goto L86
            L62:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r6.c
                com.bianfeng.ymnsdk.actionv2.c r2 = r6.d
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L86
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r6.a
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "201|"
                r2.append(r3)
                java.lang.String r7 = r7.messageFail()
                r2.append(r7)
                java.lang.String r7 = r2.toString()
                r0.sendResult(r1, r7)
            L86:
                return
        }
    }

    class d extends com.bianfeng.ymnsdk.action.ActionObserver {
        final com.bianfeng.ymnsdk.action.f a;
        final com.bianfeng.ymnsdk.feature.YmnPluginWrapper b;
        final com.bianfeng.ymnsdk.util.RequestRetryUtils c;

        d(com.bianfeng.ymnsdk.action.f r1, com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2, com.bianfeng.ymnsdk.util.RequestRetryUtils r3) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r5) {
                r4 = this;
                boolean r0 = r5.isOk()
                if (r0 == 0) goto L58
                com.bianfeng.ymnsdk.action.f r0 = r4.a
                r0.onEndAttachment()
                org.json.JSONObject r0 = r5.data
                java.lang.String r1 = "status"
                int r0 = r0.optInt(r1)
                r1 = 2
                java.lang.String r2 = "|"
                if (r1 == r0) goto L3a
                r1 = 3
                if (r1 != r0) goto L1c
                goto L3a
            L1c:
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r4.b
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r0)
                r3.append(r2)
                java.lang.String r5 = r5.messageFail()
                r3.append(r5)
                java.lang.String r5 = r3.toString()
                r0 = 201(0xc9, float:2.82E-43)
                r1.sendResult(r0, r5)
                goto L6d
            L3a:
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r4.b
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r0)
                r3.append(r2)
                java.lang.String r5 = r5.dataAsString()
                r3.append(r5)
                java.lang.String r5 = r3.toString()
                r0 = 200(0xc8, float:2.8E-43)
                r1.sendResult(r0, r5)
                goto L6d
            L58:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r4.c
                com.bianfeng.ymnsdk.action.f r1 = r4.a
                boolean r0 = r0.retryRequest(r1)
                if (r0 == 0) goto L6d
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r4.b
                java.lang.String r5 = r5.messageFail()
                r1 = 203(0xcb, float:2.84E-43)
                r0.sendResult(r1, r5)
            L6d:
                return
        }
    }

    public PaymentFeatureWrapper(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature r2) {
            r1 = this;
            r1.<init>()
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper$b r0 = new com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper$b
            r0.<init>(r1)
            r1.c = r0
            r1.a = r2
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r2
            r1.b = r2
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2 = r1.b
            com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r0 = r1.c
            r2.addCallbackInterceptor(r0)
            return
    }

    public static void a(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1, java.lang.String r2, int r3) {
            boolean r0 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.isNewTrade()
            if (r0 == 0) goto La
            b(r1, r2, r3)
            goto Ld
        La:
            c(r1, r2, r3)
        Ld:
            return
    }

    private static void b(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3, java.lang.String r4, int r5) {
            java.lang.String r5 = "checkOrderFromNew"
            com.bianfeng.ymnsdk.util.Logger.i(r5)     // Catch: java.lang.Exception -> L2a
            com.bianfeng.ymnsdk.util.RequestRetryUtils r5 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()     // Catch: java.lang.Exception -> L2a
            com.bianfeng.ymnsdk.actionv2.c r0 = new com.bianfeng.ymnsdk.actionv2.c     // Catch: java.lang.Exception -> L2a
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Exception -> L2a
            r0.<init>(r1)     // Catch: java.lang.Exception -> L2a
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L2a
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L2a
            r0.putReqData(r3, r1)     // Catch: java.lang.Exception -> L2a
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper$c r1 = new com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper$c     // Catch: java.lang.Exception -> L2a
            r1.<init>(r3, r4, r5, r0)     // Catch: java.lang.Exception -> L2a
            r0.addObserver(r1)     // Catch: java.lang.Exception -> L2a
            r0.onStartAttachment()     // Catch: java.lang.Exception -> L2a
            r0.actionStart()     // Catch: java.lang.Exception -> L2a
            goto L45
        L2a:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "201|"
            r5.append(r0)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r5 = 201(0xc9, float:2.82E-43)
            r3.sendResult(r5, r4)
        L45:
            return
    }

    private static void c(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r4, java.lang.String r5, int r6) {
            com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()
            com.bianfeng.ymnsdk.action.f r1 = new com.bianfeng.ymnsdk.action.f
            android.content.Context r2 = r4.getContext()
            r1.<init>(r2)
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r5
            java.lang.Integer r5 = java.lang.Integer.valueOf(r6)
            r6 = 1
            r2[r6] = r5
            r1.putReqData(r4, r2)
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper$d r5 = new com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper$d
            r5.<init>(r1, r4, r0)
            r1.addObserver(r5)
            r1.onStartAttachment()
            r1.actionStart()
            return
    }

    public com.bianfeng.ymnsdk.feature.YmnPluginWrapper a() {
            r1 = this;
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r1.b
            return r0
    }

    public void a(java.lang.String r2, int r3) {
            r1 = this;
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r1.b
            a(r0, r2, r3)
            return
    }

    @Override
    public java.lang.String getOrderId() {
            r1 = this;
            com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getOrderId()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public void pay(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper$a r1 = new com.bianfeng.ymnsdk.feature.plugin.PaymentFeatureWrapper$a
            r1.<init>(r2, r3)
            r0.tryRunOnUiThreadOrJustRun(r1)
            return
    }

    @Override
    public void prePay(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            return
    }
}
