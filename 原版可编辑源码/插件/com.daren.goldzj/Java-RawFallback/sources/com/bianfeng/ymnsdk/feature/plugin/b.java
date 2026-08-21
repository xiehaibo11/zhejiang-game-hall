package com.bianfeng.ymnsdk.feature.plugin;

public class b {
    private static com.bianfeng.ymnsdk.feature.YmnPluginWrapper a;
    private static com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor b;
    public static com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo c;
    private static java.lang.String d;

    class a extends com.bianfeng.ymnsdk.action.ActionObserver {
        final com.bianfeng.ymnsdk.action.d a;
        final com.bianfeng.ymnsdk.feature.YmnPluginWrapper b;
        final com.bianfeng.ymnsdk.util.RequestRetryUtils c;

        a(com.bianfeng.ymnsdk.action.d r1, com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2, com.bianfeng.ymnsdk.util.RequestRetryUtils r3) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r4) {
                r3 = this;
                boolean r0 = r4.isOk()
                if (r0 == 0) goto L3c
                com.bianfeng.ymnsdk.action.d r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                org.json.JSONObject r1 = r4.data
                java.lang.String r1 = r1.toString()
                r2 = 102(0x66, float:1.43E-43)
                r0.loginOldResponseEvent(r2, r1)
                T r0 = r4.processedResult
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = (com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo) r0
                com.bianfeng.ymnsdk.feature.plugin.b.c = r0
                java.util.Map r0 = r4.processedResultAsMap()
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r3.b
                java.lang.String r1 = r1.getPluginName()
                com.bianfeng.ymnsdk.feature.c.a(r0, r1)
                com.bianfeng.ymnsdk.feature.plugin.b.a()
                com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r0 = com.bianfeng.ymnsdk.feature.plugin.b.b()
                java.lang.String r4 = r4.dataAsString()
                r0.dispatchNext(r2, r4)
                goto L63
            L3c:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r3.c
                com.bianfeng.ymnsdk.action.d r1 = r3.a
                boolean r0 = r0.retryRequest(r1)
                if (r0 == 0) goto L63
                com.bianfeng.ymnsdk.action.d r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                java.lang.String r1 = r4.messageFail()
                r2 = 105(0x69, float:1.47E-43)
                r0.loginOldResponseEvent(r2, r1)
                com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r0 = com.bianfeng.ymnsdk.feature.plugin.b.b()
                java.lang.String r4 = r4.messageFail()
                r0.dispatchNext(r2, r4)
            L63:
                return
        }
    }

    class b extends com.bianfeng.ymnsdk.actionv2.ActionObserverV3 {
        final com.bianfeng.ymnsdk.util.RequestRetryUtils a;
        final com.bianfeng.ymnsdk.actionv2.a b;

        b(com.bianfeng.ymnsdk.util.RequestRetryUtils r1, com.bianfeng.ymnsdk.actionv2.a r2) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV3.ResponseResult r4) {
                r3 = this;
                boolean r0 = r4.isOk()
                if (r0 == 0) goto L34
                T r0 = r4.processedResult
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = (com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo) r0
                com.bianfeng.ymnsdk.feature.plugin.b.c = r0
                java.util.Map r0 = r4.processedResultAsMap()
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = com.bianfeng.ymnsdk.feature.plugin.b.c()
                java.lang.String r1 = r1.getPluginName()
                com.bianfeng.ymnsdk.feature.c.a(r0, r1)
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                java.lang.String r1 = r4.dataAsString()
                r2 = 118(0x76, float:1.65E-43)
                r0.loginNewResponseEvent(r2, r1)
                com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r0 = com.bianfeng.ymnsdk.feature.plugin.b.b()
                java.lang.String r4 = r4.dataAsString()
                r0.dispatchNext(r2, r4)
                goto L56
            L34:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r3.a
                com.bianfeng.ymnsdk.actionv2.a r1 = r3.b
                boolean r0 = r0.retryRequest(r1)
                if (r0 == 0) goto L56
                com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r0 = com.bianfeng.ymnsdk.feature.plugin.b.b()
                java.lang.String r1 = r4.messageFail()
                r2 = 119(0x77, float:1.67E-43)
                r0.dispatchNext(r2, r1)
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                java.lang.String r4 = r4.messageFail()
                r0.loginNewResponseEvent(r2, r4)
            L56:
                return
        }
    }

    class c extends com.bianfeng.ymnsdk.action.ActionObserver {
        c() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r3) {
                r2 = this;
                boolean r0 = r3.isOk()
                if (r0 == 0) goto L34
                T r0 = r3.processedResult
                com.bianfeng.ymnsdk.entity.UrlConfig r0 = (com.bianfeng.ymnsdk.entity.UrlConfig) r0
                boolean r1 = r0.isEnable()
                if (r1 == 0) goto L1c
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3 = com.bianfeng.ymnsdk.feature.plugin.b.c()
                android.content.Context r3 = r3.getContext()
                com.bianfeng.ymnsdk.feature.e.a(r3, r0)
                goto L34
            L1c:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "illegal remote url config "
                r0.append(r1)
                java.lang.String r3 = r3.dataAsString()
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                com.bianfeng.ymnsdk.util.Logger.e(r3)
            L34:
                return
        }
    }

    static void a() {
            e()
            return
    }

    private static void a(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r4, java.lang.Object r5, java.lang.Object r6) {
            com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()
            com.bianfeng.ymnsdk.action.d r1 = new com.bianfeng.ymnsdk.action.d
            android.content.Context r2 = r4.getContext()
            r1.<init>(r2)
            com.bianfeng.ymnsdk.action.ActionSupport r1 = com.bianfeng.ymnsdk.feature.d.a(r1)
            com.bianfeng.ymnsdk.action.d r1 = (com.bianfeng.ymnsdk.action.d) r1
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r5
            r5 = 1
            r2[r5] = r6
            r1.putReqData(r4, r2)
            com.bianfeng.ymnsdk.feature.plugin.b$a r5 = new com.bianfeng.ymnsdk.feature.plugin.b$a
            r5.<init>(r1, r4, r0)
            r1.addObserver(r5)
            r1.onStartAttachment()
            r1.actionStart()
            return
    }

    private static void a(java.lang.Object r4) {
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L4c
            int r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getAppId()     // Catch: java.lang.Exception -> L4c
            int r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getConfigId()     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2 = com.bianfeng.ymnsdk.feature.plugin.b.a     // Catch: java.lang.Exception -> L4c
            java.lang.String r2 = r2.getPluginId()     // Catch: java.lang.Exception -> L4c
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.entity.LoginEntity r3 = new com.bianfeng.ymnsdk.entity.LoginEntity     // Catch: java.lang.Exception -> L4c
            r3.<init>(r0, r1, r2, r4)     // Catch: java.lang.Exception -> L4c
            java.lang.String r4 = r3.toString()     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.feature.plugin.b.d = r4     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.entity.LoginDataEntity r4 = new com.bianfeng.ymnsdk.entity.LoginDataEntity     // Catch: java.lang.Exception -> L4c
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.plugin.b.d     // Catch: java.lang.Exception -> L4c
            r4.<init>(r0)     // Catch: java.lang.Exception -> L4c
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r0 = com.bianfeng.ymnsdk.feature.plugin.b.b     // Catch: java.lang.Exception -> L4c
            r1 = 102(0x66, float:1.43E-43)
            r0.dispatchNext(r1, r4)     // Catch: java.lang.Exception -> L4c
            boolean r4 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.getYmnsdkPayNeedLogininfo()     // Catch: java.lang.Exception -> L4c
            if (r4 == 0) goto L3d
            d()     // Catch: java.lang.Exception -> L4c
            goto L58
        L3d:
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Exception -> L4c
            r4.<init>()     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = com.bianfeng.ymnsdk.feature.plugin.b.a     // Catch: java.lang.Exception -> L4c
            java.lang.String r0 = r0.getPluginName()     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.feature.c.a(r4, r0)     // Catch: java.lang.Exception -> L4c
            goto L58
        L4c:
            r4 = move-exception
            com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r0 = com.bianfeng.ymnsdk.feature.plugin.b.b
            java.lang.String r4 = r4.getMessage()
            r1 = 105(0x69, float:1.47E-43)
            r0.dispatchNext(r1, r4)
        L58:
            return
    }

    public static void a(java.lang.String r2, com.bianfeng.ymnsdk.feature.YmnPluginWrapper r3, com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r4) {
            com.bianfeng.ymnsdk.feature.plugin.b.a = r3
            com.bianfeng.ymnsdk.feature.plugin.b.b = r4
            boolean r4 = com.bianfeng.ymnsdk.feature.YmnCallback.a.b(r2)
            if (r4 == 0) goto L1a
            com.bianfeng.ymnsdk.feature.YmnCallback$a r2 = com.bianfeng.ymnsdk.feature.YmnCallback.a.a(r2)
            java.lang.Object r4 = r2.a()
            java.lang.Object r2 = r2.b()
            r1 = r4
            r4 = r2
            r2 = r1
            goto L1b
        L1a:
            r4 = 0
        L1b:
            boolean r0 = com.bianfeng.ymnsdk.util.YmnsdkTypeUtils.isNewLogin()
            if (r0 == 0) goto L25
            a(r2)
            goto L28
        L25:
            a(r3, r2, r4)
        L28:
            return
    }

    static com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor b() {
            com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r0 = com.bianfeng.ymnsdk.feature.plugin.b.b
            return r0
    }

    static com.bianfeng.ymnsdk.feature.YmnPluginWrapper c() {
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = com.bianfeng.ymnsdk.feature.plugin.b.a
            return r0
    }

    protected static void d() {
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = com.bianfeng.ymnsdk.feature.plugin.b.a
            if (r0 != 0) goto L11
            java.lang.String r0 = "pluginWrapper is null"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r1 = com.bianfeng.ymnsdk.feature.plugin.b.b
            r2 = 119(0x77, float:1.67E-43)
            r1.dispatchNext(r2, r0)
            return
        L11:
            com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()
            com.bianfeng.ymnsdk.actionv2.a r1 = new com.bianfeng.ymnsdk.actionv2.a
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2 = com.bianfeng.ymnsdk.feature.plugin.b.a
            android.content.Context r2 = r2.getContext()
            r1.<init>(r2)
            com.bianfeng.ymnsdk.actionv2.ActionSupportV3 r1 = com.bianfeng.ymnsdk.feature.d.a(r1)
            com.bianfeng.ymnsdk.actionv2.a r1 = (com.bianfeng.ymnsdk.actionv2.a) r1
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2 = com.bianfeng.ymnsdk.feature.plugin.b.a
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r4 = com.bianfeng.ymnsdk.feature.plugin.b.d
            r5 = 0
            r3[r5] = r4
            r1.putReqData(r2, r3)
            com.bianfeng.ymnsdk.feature.plugin.b$b r2 = new com.bianfeng.ymnsdk.feature.plugin.b$b
            r2.<init>(r0, r1)
            r1.addObserver(r2)
            r1.actionStart()
            return
    }

    private static void e() {
            com.bianfeng.ymnsdk.action.h r0 = new com.bianfeng.ymnsdk.action.h
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = com.bianfeng.ymnsdk.feature.plugin.b.a
            android.content.Context r1 = r1.getContext()
            r0.<init>(r1)
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = com.bianfeng.ymnsdk.feature.plugin.b.a
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r3 = com.bianfeng.ymnsdk.feature.plugin.b.c
            java.lang.String r3 = r3.getYmnUserIdInt()
            r4 = 0
            r2[r4] = r3
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r3 = com.bianfeng.ymnsdk.feature.plugin.b.c
            java.lang.String r3 = r3.getPlatformUserId()
            r4 = 1
            r2[r4] = r3
            r0.putReqData(r1, r2)
            com.bianfeng.ymnsdk.feature.plugin.b$c r1 = new com.bianfeng.ymnsdk.feature.plugin.b$c
            r1.<init>()
            r0.addObserver(r1)
            r0.actionStart()
            return
    }
}
