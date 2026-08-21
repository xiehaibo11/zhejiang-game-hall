package com.bianfeng.ymnsdk.feature.plugin;

public class a {
    private static volatile boolean a;
    private static volatile com.bianfeng.ymnsdk.actionv2.b b;
    private static volatile com.bianfeng.ymnsdk.action.e c;

    static class a extends com.bianfeng.ymnsdk.actionv2.ActionObserverV2 {
        final com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature a;
        final com.bianfeng.ymnsdk.util.RequestRetryUtils b;
        final com.bianfeng.ymnsdk.feature.YmnPluginWrapper c;

        a(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature r1, com.bianfeng.ymnsdk.util.RequestRetryUtils r2, com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r6) {
                r5 = this;
                r0 = 0
                com.bianfeng.ymnsdk.feature.plugin.a.a(r0)
                boolean r0 = r6.isOk()
                if (r0 == 0) goto L20
                com.bianfeng.ymnsdk.feature.plugin.a.a()
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                r0.payCallSdk()
                com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature r0 = r5.a
                java.lang.Object r1 = r6.getProcessedResult()
                java.util.Map r1 = (java.util.Map) r1
                r0.pay(r1)
                goto L47
            L20:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r5.b
                com.bianfeng.ymnsdk.actionv2.b r1 = com.bianfeng.ymnsdk.feature.plugin.a.b()
                boolean r0 = r0.retryRequest(r1)
                if (r0 == 0) goto L47
                com.bianfeng.ymnsdk.feature.plugin.a.a()
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                java.lang.String r2 = r6.messageFail()
                r3 = 201(0xc9, float:2.82E-43)
                java.lang.String r4 = "0"
                r1.payResponseOrder(r3, r2, r4)
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r5.c
                java.lang.String r2 = r6.messageFail()
                r1.sendResult(r3, r2)
            L47:
                return
        }
    }

    static class b extends com.bianfeng.ymnsdk.action.ActionObserver {
        final com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature a;
        final com.bianfeng.ymnsdk.util.RequestRetryUtils b;
        final com.bianfeng.ymnsdk.feature.YmnPluginWrapper c;

        b(com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature r1, com.bianfeng.ymnsdk.util.RequestRetryUtils r2, com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r6) {
                r5 = this;
                r0 = 0
                com.bianfeng.ymnsdk.feature.plugin.a.a(r0)
                boolean r0 = r6.isOk()
                if (r0 == 0) goto L23
                java.lang.String r0 = "PaymentFeatureFactory payAction 成功"
                com.bianfeng.ymnsdk.util.Logger.i(r0)
                com.bianfeng.ymnsdk.feature.plugin.a.c()
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                r0.payCallSdk()
                com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature r0 = r5.a
                T r1 = r6.processedResult
                java.util.Map r1 = (java.util.Map) r1
                r0.pay(r1)
                goto L4a
            L23:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r5.b
                com.bianfeng.ymnsdk.action.e r1 = com.bianfeng.ymnsdk.feature.plugin.a.d()
                boolean r0 = r0.retryRequest(r1)
                if (r0 == 0) goto L4a
                com.bianfeng.ymnsdk.feature.plugin.a.c()
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                java.lang.String r2 = r6.messageFail()
                r3 = 201(0xc9, float:2.82E-43)
                java.lang.String r4 = "0"
                r1.payResponseOrder(r3, r2, r4)
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r5.c
                java.lang.String r2 = r6.messageFail()
                r1.sendResult(r3, r2)
            L4a:
                return
        }
    }

    static {
            r0 = 0
            com.bianfeng.ymnsdk.feature.plugin.a.a = r0
            r0 = 0
            com.bianfeng.ymnsdk.feature.plugin.a.b = r0
            com.bianfeng.ymnsdk.feature.plugin.a.c = r0
            return
    }

    static void a() {
            f()
            return
    }

    public static void a(java.util.Map<java.lang.String, java.lang.String> r7, com.bianfeng.ymnsdk.feature.YmnPluginWrapper r8, com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature r9) {
            boolean r0 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.getYmnsdkPayNeedLogininfo()
            r1 = 201(0xc9, float:2.82E-43)
            if (r0 == 0) goto L21
            java.util.Map r0 = r8.getLoginedData()
            if (r0 != 0) goto L21
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r2 = 212(0xd4, float:2.97E-43)
            java.lang.String r3 = "登录时的数据没有"
            java.lang.String r4 = "0"
            r0.payResponseOrder(r2, r3, r4)
            java.lang.String r0 = "212"
            r8.sendResult(r1, r0)
            return
        L21:
            boolean r0 = com.bianfeng.ymnsdk.feature.plugin.a.a
            if (r0 == 0) goto L26
            return
        L26:
            r0 = 1
            com.bianfeng.ymnsdk.feature.plugin.a.a = r0
            com.bianfeng.ymnsdk.feature.c.a(r7)
            boolean r2 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.isNewTrade()
            r3 = 2
            r4 = 0
            if (r2 == 0) goto L84
            java.lang.String r2 = "PaymentFeatureFactory payAction new"
            com.bianfeng.ymnsdk.util.Logger.i(r2)     // Catch: java.lang.Exception -> L76
            com.bianfeng.ymnsdk.util.RequestRetryUtils r2 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()     // Catch: java.lang.Exception -> L76
            com.bianfeng.ymnsdk.actionv2.b r5 = new com.bianfeng.ymnsdk.actionv2.b     // Catch: java.lang.Exception -> L76
            android.content.Context r6 = r8.getContext()     // Catch: java.lang.Exception -> L76
            r5.<init>(r6)     // Catch: java.lang.Exception -> L76
            com.bianfeng.ymnsdk.feature.d.a(r5)     // Catch: java.lang.Exception -> L76
            com.bianfeng.ymnsdk.actionv2.b r5 = (com.bianfeng.ymnsdk.actionv2.b) r5     // Catch: java.lang.Exception -> L76
            com.bianfeng.ymnsdk.feature.plugin.a.b = r5     // Catch: java.lang.Exception -> L76
            com.bianfeng.ymnsdk.actionv2.b r5 = com.bianfeng.ymnsdk.feature.plugin.a.b     // Catch: java.lang.Exception -> L76
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L76
            r3[r4] = r7     // Catch: java.lang.Exception -> L76
            java.util.Map r6 = r8.getLoginedData()     // Catch: java.lang.Exception -> L76
            r3[r0] = r6     // Catch: java.lang.Exception -> L76
            r5.putReqData(r8, r3)     // Catch: java.lang.Exception -> L76
            com.bianfeng.ymnsdk.actionv2.b r0 = com.bianfeng.ymnsdk.feature.plugin.a.b     // Catch: java.lang.Exception -> L76
            com.bianfeng.ymnsdk.feature.plugin.a$a r3 = new com.bianfeng.ymnsdk.feature.plugin.a$a     // Catch: java.lang.Exception -> L76
            r3.<init>(r9, r2, r8)     // Catch: java.lang.Exception -> L76
            r0.addObserver(r3)     // Catch: java.lang.Exception -> L76
            com.bianfeng.ymnsdk.actionv2.b r0 = com.bianfeng.ymnsdk.feature.plugin.a.b     // Catch: java.lang.Exception -> L76
            r0.onStartAttachment()     // Catch: java.lang.Exception -> L76
            java.lang.String r0 = "PaymentFeatureFactory pay"
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L76
            com.bianfeng.ymnsdk.actionv2.b r0 = com.bianfeng.ymnsdk.feature.plugin.a.b     // Catch: java.lang.Exception -> L76
            r0.actionStart()     // Catch: java.lang.Exception -> L76
            goto L83
        L76:
            r0 = move-exception
            com.bianfeng.ymnsdk.feature.plugin.a.a = r4
            f()
            java.lang.String r2 = r0.getMessage()
            r8.sendResult(r1, r2)
        L83:
            goto Lce
        L84:
            java.lang.String r2 = "PaymentFeatureFactory payAction old"
            com.bianfeng.ymnsdk.util.Logger.i(r2)     // Catch: java.lang.Exception -> Lc1
            com.bianfeng.ymnsdk.util.RequestRetryUtils r2 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()     // Catch: java.lang.Exception -> Lc1
            com.bianfeng.ymnsdk.action.e r5 = new com.bianfeng.ymnsdk.action.e     // Catch: java.lang.Exception -> Lc1
            android.content.Context r6 = r8.getContext()     // Catch: java.lang.Exception -> Lc1
            r5.<init>(r6)     // Catch: java.lang.Exception -> Lc1
            com.bianfeng.ymnsdk.feature.d.a(r5)     // Catch: java.lang.Exception -> Lc1
            com.bianfeng.ymnsdk.action.e r5 = (com.bianfeng.ymnsdk.action.e) r5     // Catch: java.lang.Exception -> Lc1
            com.bianfeng.ymnsdk.feature.plugin.a.c = r5     // Catch: java.lang.Exception -> Lc1
            com.bianfeng.ymnsdk.action.e r5 = com.bianfeng.ymnsdk.feature.plugin.a.c     // Catch: java.lang.Exception -> Lc1
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> Lc1
            r3[r4] = r7     // Catch: java.lang.Exception -> Lc1
            java.util.Map r6 = r8.getLoginedData()     // Catch: java.lang.Exception -> Lc1
            r3[r0] = r6     // Catch: java.lang.Exception -> Lc1
            r5.putReqData(r8, r3)     // Catch: java.lang.Exception -> Lc1
            com.bianfeng.ymnsdk.action.e r0 = com.bianfeng.ymnsdk.feature.plugin.a.c     // Catch: java.lang.Exception -> Lc1
            com.bianfeng.ymnsdk.feature.plugin.a$b r3 = new com.bianfeng.ymnsdk.feature.plugin.a$b     // Catch: java.lang.Exception -> Lc1
            r3.<init>(r9, r2, r8)     // Catch: java.lang.Exception -> Lc1
            r0.addObserver(r3)     // Catch: java.lang.Exception -> Lc1
            com.bianfeng.ymnsdk.action.e r0 = com.bianfeng.ymnsdk.feature.plugin.a.c     // Catch: java.lang.Exception -> Lc1
            r0.onStartAttachment()     // Catch: java.lang.Exception -> Lc1
            com.bianfeng.ymnsdk.action.e r0 = com.bianfeng.ymnsdk.feature.plugin.a.c     // Catch: java.lang.Exception -> Lc1
            r0.actionStart()     // Catch: java.lang.Exception -> Lc1
            goto Lce
        Lc1:
            r0 = move-exception
            com.bianfeng.ymnsdk.feature.plugin.a.a = r4
            e()
            java.lang.String r2 = r0.getMessage()
            r8.sendResult(r1, r2)
        Lce:
            return
    }

    static boolean a(boolean r0) {
            com.bianfeng.ymnsdk.feature.plugin.a.a = r0
            return r0
    }

    static com.bianfeng.ymnsdk.actionv2.b b() {
            com.bianfeng.ymnsdk.actionv2.b r0 = com.bianfeng.ymnsdk.feature.plugin.a.b
            return r0
    }

    static void c() {
            e()
            return
    }

    static com.bianfeng.ymnsdk.action.e d() {
            com.bianfeng.ymnsdk.action.e r0 = com.bianfeng.ymnsdk.feature.plugin.a.c
            return r0
    }

    private static void e() {
            com.bianfeng.ymnsdk.action.e r0 = com.bianfeng.ymnsdk.feature.plugin.a.c
            if (r0 == 0) goto Lc
            com.bianfeng.ymnsdk.action.e r0 = com.bianfeng.ymnsdk.feature.plugin.a.c
            r0.onEndAttachment()
            r0 = 0
            com.bianfeng.ymnsdk.feature.plugin.a.c = r0
        Lc:
            return
    }

    private static void f() {
            com.bianfeng.ymnsdk.actionv2.b r0 = com.bianfeng.ymnsdk.feature.plugin.a.b
            if (r0 == 0) goto Lc
            com.bianfeng.ymnsdk.actionv2.b r0 = com.bianfeng.ymnsdk.feature.plugin.a.b
            r0.onEndAttachment()
            r0 = 0
            com.bianfeng.ymnsdk.feature.plugin.a.b = r0
        Lc:
            return
    }
}
