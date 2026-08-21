package com.bianfeng.ymnsdk.feature.plugin;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class YmnBaseInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    public static final int CODE_DATAFUN_GET_DEVICEID = 1001002;
    public static final int CODE_GET_PRODUCTS_FAIL = 2207;
    public static final int CODE_GET_PRODUCTS_SUCCESS = 2206;
    public static final int CODE_ORDERID_FAIL = 1001004;
    public static final int CODE_ORDERID_SUC = 1001003;
    public static final int CODE_PERMISSION_DENIED = 2209;
    public static final int CODE_PERMISSION_ERROR = 2210;
    public static final int CODE_PERMISSION_GRANTED = 2208;
    public static final int CODE_PERMISSION_IN48 = 2211;
    public static final int CODE_YMN_GET_DEVICEID = 1001001;
    public static final java.lang.String GET_IDENTITY_INFO = "verifier_get_identity";
    public static final java.lang.String SET_IDENTITY_INFO = "verifier_set_identity";
    public static final int USERVERIFIER_GET_IDENTITY_FAIL = 2203;
    public static final int USERVERIFIER_GET_IDENTITY_SUCCESS = 2202;
    public static final int USERVERIFIER_SET_IDENTITY_FAIL = 2205;
    public static final int USERVERIFIER_SET_IDENTITY_SUCCESS = 2204;
    public static com.bianfeng.ymnsdk.entity.UrlLocalState localState;

    class a extends com.bianfeng.ymnsdk.action.ActionObserver {
        final com.bianfeng.ymnsdk.action.b a;
        final com.bianfeng.ymnsdk.util.RequestRetryUtils b;
        final com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface c;

        a(com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r1, com.bianfeng.ymnsdk.action.b r2, com.bianfeng.ymnsdk.util.RequestRetryUtils r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r4) {
                r3 = this;
                boolean r0 = r4.isOk()
                java.lang.String r1 = "get_identity;verifier_get_identity"
                if (r0 == 0) goto L1d
                com.bianfeng.ymnsdk.action.b r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r3.c
                org.json.JSONObject r4 = r4.data
                java.lang.String r2 = "status"
                java.lang.String r4 = r4.optString(r2)
                r2 = 2202(0x89a, float:3.086E-42)
                r0.sendResult(r2, r4, r1)
                goto L37
            L1d:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r3.b
                com.bianfeng.ymnsdk.action.b r2 = r3.a
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L37
                com.bianfeng.ymnsdk.action.b r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r3.c
                java.lang.String r4 = r4.messageFail()
                r2 = 2203(0x89b, float:3.087E-42)
                r0.sendResult(r2, r4, r1)
            L37:
                return
        }
    }

    class b extends com.bianfeng.ymnsdk.action.ActionObserver {
        final com.bianfeng.ymnsdk.action.c a;
        final com.bianfeng.ymnsdk.util.RequestRetryUtils b;
        final com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface c;

        b(com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r1, com.bianfeng.ymnsdk.action.c r2, com.bianfeng.ymnsdk.util.RequestRetryUtils r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r4) {
                r3 = this;
                boolean r0 = r4.isOk()
                java.lang.String r1 = "set_identity;verifier_set_identity"
                if (r0 == 0) goto L17
                com.bianfeng.ymnsdk.action.c r4 = r3.a
                r4.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r4 = r3.c
                r0 = 2204(0x89c, float:3.088E-42)
                java.lang.String r2 = "实名认证成功"
                r4.sendResult(r0, r2, r1)
                goto L31
            L17:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r3.b
                com.bianfeng.ymnsdk.action.c r2 = r3.a
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L31
                com.bianfeng.ymnsdk.action.c r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r3.c
                java.lang.String r4 = r4.messageFail()
                r2 = 2205(0x89d, float:3.09E-42)
                r0.sendResult(r2, r4, r1)
            L31:
                return
        }
    }

    class c extends com.bianfeng.ymnsdk.action.ActionObserver {
        final com.bianfeng.ymnsdk.action.g a;
        final com.bianfeng.ymnsdk.util.RequestRetryUtils b;
        final com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface c;

        c(com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r1, com.bianfeng.ymnsdk.action.g r2, com.bianfeng.ymnsdk.util.RequestRetryUtils r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r4) {
                r3 = this;
                boolean r0 = r4.isOk()
                java.lang.String r1 = "get_products;base_get_products"
                if (r0 == 0) goto L19
                com.bianfeng.ymnsdk.action.g r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r3.c
                java.lang.String r4 = r4.dataAsString()
                r2 = 2206(0x89e, float:3.091E-42)
                r0.sendResult(r2, r4, r1)
                goto L33
            L19:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r3.b
                com.bianfeng.ymnsdk.action.g r2 = r3.a
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L33
                com.bianfeng.ymnsdk.action.g r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r3.c
                java.lang.String r4 = r4.messageFail()
                r2 = 2207(0x89f, float:3.093E-42)
                r0.sendResult(r2, r4, r1)
            L33:
                return
        }
    }

    class d extends com.bianfeng.ymnsdk.actionv2.ActionObserverV2 {
        final com.bianfeng.ymnsdk.actionv2.d a;
        final com.bianfeng.ymnsdk.util.RequestRetryUtils b;
        final com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface c;

        d(com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r1, com.bianfeng.ymnsdk.actionv2.d r2, com.bianfeng.ymnsdk.util.RequestRetryUtils r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r4) {
                r3 = this;
                boolean r0 = r4.isOk()
                java.lang.String r1 = "get_products;base_get_products"
                if (r0 == 0) goto L19
                com.bianfeng.ymnsdk.actionv2.d r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r3.c
                java.lang.String r4 = r4.getSrcRes()
                r2 = 2206(0x89e, float:3.091E-42)
                r0.sendResult(r2, r4, r1)
                goto L33
            L19:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r3.b
                com.bianfeng.ymnsdk.actionv2.d r2 = r3.a
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L33
                com.bianfeng.ymnsdk.actionv2.d r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r3.c
                java.lang.String r4 = r4.messageFail()
                r2 = 2207(0x89f, float:3.093E-42)
                r0.sendResult(r2, r4, r1)
            L33:
                return
        }
    }

    class e extends com.bianfeng.ymnsdk.actionv2.ActionObserverV2 {
        final com.bianfeng.ymnsdk.actionv2.c a;
        final com.bianfeng.ymnsdk.util.RequestRetryUtils b;
        final com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface c;

        e(com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r1, com.bianfeng.ymnsdk.actionv2.c r2, com.bianfeng.ymnsdk.util.RequestRetryUtils r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void onActionResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r4) {
                r3 = this;
                boolean r0 = r4.isOk()
                java.lang.String r1 = "check_order_statue"
                if (r0 == 0) goto L19
                com.bianfeng.ymnsdk.actionv2.c r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r3.c
                java.lang.String r4 = r4.dataAsString()
                r2 = 2206(0x89e, float:3.091E-42)
                r0.sendResult(r2, r4, r1)
                goto L33
            L19:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r3.b
                com.bianfeng.ymnsdk.actionv2.c r2 = r3.a
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L33
                com.bianfeng.ymnsdk.actionv2.c r0 = r3.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r3.c
                java.lang.String r4 = r4.messageFail()
                r2 = 2207(0x89f, float:3.093E-42)
                r0.sendResult(r2, r4, r1)
            L33:
                return
        }
    }

    class f implements com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback {
        final com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface a;

        f(com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onAllow(int r3, java.lang.String r4) {
                r2 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r3 = r2.a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "允许的权限|"
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r0 = 2209(0x8a1, float:3.095E-42)
                java.lang.String r1 = "request_permission"
                r3.sendResult(r0, r4, r1)
                return
        }

        @Override
        public void onAllowAll(int r4) {
                r3 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r4 = r3.a
                r0 = 2208(0x8a0, float:3.094E-42)
                java.lang.String r1 = "权限申请成功"
                java.lang.String r2 = "request_permission"
                r4.sendResult(r0, r1, r2)
                return
        }

        @Override
        public void onDeny(int r3, java.lang.String r4) {
                r2 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r3 = r2.a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "拒绝的权限|"
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r0 = 2209(0x8a1, float:3.095E-42)
                java.lang.String r1 = "request_permission"
                r3.sendResult(r0, r4, r1)
                return
        }

        @Override
        public void onDenyIn48Hours(int r3, java.lang.String r4) {
                r2 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r3 = r2.a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "这些权限在48小时内申请过|"
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r0 = 2211(0x8a3, float:3.098E-42)
                java.lang.String r1 = "request_permission"
                r3.sendResult(r0, r4, r1)
                return
        }
    }

    class g implements com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.PermissCallback {
        final com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface a;

        g(com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onAllow(int r3, java.lang.String r4) {
                r2 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r2.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r3)
                java.lang.String r3 = "|允许的权限|"
                r1.append(r3)
                r1.append(r4)
                java.lang.String r3 = r1.toString()
                r4 = 2209(0x8a1, float:3.095E-42)
                java.lang.String r1 = "request_permission"
                r0.sendResult(r4, r3, r1)
                return
        }

        @Override
        public void onAllowAll(int r4) {
                r3 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r3.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r4)
                java.lang.String r4 = "|权限申请成功"
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r1 = 2208(0x8a0, float:3.094E-42)
                java.lang.String r2 = "request_permission"
                r0.sendResult(r1, r4, r2)
                return
        }

        @Override
        public void onDeny(int r3, java.lang.String r4) {
                r2 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r2.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r3)
                java.lang.String r3 = "|拒绝的权限|"
                r1.append(r3)
                r1.append(r4)
                java.lang.String r3 = r1.toString()
                r4 = 2209(0x8a1, float:3.095E-42)
                java.lang.String r1 = "request_permission"
                r0.sendResult(r4, r3, r1)
                return
        }

        @Override
        public void onDenyIn48Hours(int r3, java.lang.String r4) {
                r2 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r2.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r3)
                java.lang.String r3 = "|这些权限在48小时内申请过|"
                r1.append(r3)
                r1.append(r4)
                java.lang.String r3 = r1.toString()
                r4 = 2211(0x8a3, float:3.098E-42)
                java.lang.String r1 = "request_permission"
                r0.sendResult(r4, r3, r1)
                return
        }
    }

    public YmnBaseInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "set_host")
    public void change_host(java.lang.String r9) {
            r8 = this;
            android.content.Context r0 = r8.getContext()     // Catch: java.lang.Exception -> L41
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.e(r0)     // Catch: java.lang.Exception -> L41
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface.localState = r0     // Catch: java.lang.Exception -> L41
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface.localState     // Catch: java.lang.Exception -> L41
            r0.setCurrentHost(r9)     // Catch: java.lang.Exception -> L41
            android.content.Context r9 = r8.getContext()     // Catch: java.lang.Exception -> L41
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface.localState     // Catch: java.lang.Exception -> L41
            com.bianfeng.ymnsdk.feature.e.a(r9, r0)     // Catch: java.lang.Exception -> L41
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = "set_host"
            java.lang.String r3 = r8.getPluginId()     // Catch: java.lang.Exception -> L41
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r9.<init>()     // Catch: java.lang.Exception -> L41
            int r0 = r8.getPluginVersion()     // Catch: java.lang.Exception -> L41
            r9.append(r0)     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = ""
            r9.append(r0)     // Catch: java.lang.Exception -> L41
            java.lang.String r4 = r9.toString()     // Catch: java.lang.Exception -> L41
            java.lang.String r5 = r8.getSdkVersion()     // Catch: java.lang.Exception -> L41
            r6 = 0
            java.lang.String r7 = ""
            r1.pluginFinish(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L41
        L41:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "change_ymn_host")
    public void change_ymn_host(java.lang.String r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "SP_YMN_CHANGE_HOST"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r4 = r0.putString(r1, r4)
            r4.apply()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "check_order_statue")
    public void checkOrderStatue(java.lang.String r5) {
            r4 = this;
            com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()     // Catch: java.lang.Exception -> L2a
            com.bianfeng.ymnsdk.actionv2.c r1 = new com.bianfeng.ymnsdk.actionv2.c     // Catch: java.lang.Exception -> L2a
            android.content.Context r2 = r4.getContext()     // Catch: java.lang.Exception -> L2a
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2a
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L2a
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.Exception -> L2a
            r1.putReqData(r4, r2)     // Catch: java.lang.Exception -> L2a
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$e r5 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$e     // Catch: java.lang.Exception -> L2a
            r5.<init>(r4, r1, r0)     // Catch: java.lang.Exception -> L2a
            r1.addObserver(r5)     // Catch: java.lang.Exception -> L2a
            java.lang.String r5 = "checkOrderStatue check_order_statue"
            com.bianfeng.ymnsdk.util.Logger.i(r5)     // Catch: java.lang.Exception -> L2a
            r1.onStartAttachment()     // Catch: java.lang.Exception -> L2a
            r1.actionStart()     // Catch: java.lang.Exception -> L2a
            goto L36
        L2a:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            r0 = 2207(0x89f, float:3.093E-42)
            java.lang.String r1 = "check_order_statue"
            r4.sendResult(r0, r5, r1)
        L36:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "get_channel_id")
    public java.lang.String getChannelId() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getChannelId()
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(alias = "verifier_get_identity", name = "get_identity")
    public void getIdentity(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "0"
            r1.getIdentity(r0, r2, r3)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(alias = "verifier_get_identity", name = "get_identity")
    @java.lang.Deprecated
    public void getIdentity(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()
            com.bianfeng.ymnsdk.action.b r1 = new com.bianfeng.ymnsdk.action.b
            android.content.Context r2 = r4.getContext()
            r1.<init>(r2)
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r5
            r5 = 1
            r2[r5] = r6
            r5 = 2
            r2[r5] = r7
            r1.putReqData(r4, r2)
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$a r5 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$a
            r5.<init>(r4, r1, r0)
            r1.addObserver(r5)
            r1.onStartAttachment()
            r1.actionStart()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "getLoginData")
    public void getLoginData() {
            r8 = this;
            java.lang.String r0 = "获取登录数据"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.ymnsdk.feature.plugin.b.d()
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r3 = r8.getPluginId()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r8.getPluginVersion()
            r0.append(r2)
            java.lang.String r2 = ""
            r0.append(r2)
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = r8.getSdkVersion()
            java.lang.String r2 = "getLoginData"
            r6 = 0
            java.lang.String r7 = ""
            r1.pluginFinish(r2, r3, r4, r5, r6, r7)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "get_metadata_value")
    public java.lang.String getMetaDataValue(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r1)
            return r1
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "ymn_get_orderid")
    public java.lang.String getOrderId() {
            r3 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.getOrderId()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L13
            r1 = 1001004(0xf462c, float:1.402705E-39)
            java.lang.String r2 = ""
            r3.sendResult(r1, r2)
            goto L19
        L13:
            r1 = 1001003(0xf462b, float:1.402704E-39)
            r3.sendResult(r1, r0)
        L19:
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "ymn_get_orderid")
    public java.lang.String getOrderId(java.lang.String r3) {
            r2 = this;
            java.lang.String r3 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.getOrderId(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L13
            r0 = 1001004(0xf462c, float:1.402705E-39)
            java.lang.String r1 = ""
            r2.sendResult(r0, r1)
            goto L19
        L13:
            r0 = 1001003(0xf462b, float:1.402704E-39)
            r2.sendResult(r0, r3)
        L19:
            return r3
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "ymnbase"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 8
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(alias = "base_get_products", name = "get_products")
    public void getProducts() {
            r3 = this;
            com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()
            com.bianfeng.ymnsdk.action.g r1 = new com.bianfeng.ymnsdk.action.g
            android.content.Context r2 = r3.getContext()
            r1.<init>(r2)
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r1.putReqData(r3, r2)
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$c r2 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$c
            r2.<init>(r3, r1, r0)
            r1.addObserver(r2)
            r1.onStartAttachment()
            r1.actionStart()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(alias = "base_get_products", name = "get_products")
    public void getProducts(java.util.LinkedHashMap<java.lang.String, java.lang.String> r5) {
            r4 = this;
            com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()     // Catch: java.lang.Exception -> L2a
            com.bianfeng.ymnsdk.actionv2.d r1 = new com.bianfeng.ymnsdk.actionv2.d     // Catch: java.lang.Exception -> L2a
            android.content.Context r2 = r4.getContext()     // Catch: java.lang.Exception -> L2a
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2a
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L2a
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.Exception -> L2a
            r1.putReqData(r4, r2)     // Catch: java.lang.Exception -> L2a
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$d r5 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$d     // Catch: java.lang.Exception -> L2a
            r5.<init>(r4, r1, r0)     // Catch: java.lang.Exception -> L2a
            r1.addObserver(r5)     // Catch: java.lang.Exception -> L2a
            java.lang.String r5 = "getProducts"
            com.bianfeng.ymnsdk.util.Logger.i(r5)     // Catch: java.lang.Exception -> L2a
            r1.onStartAttachment()     // Catch: java.lang.Exception -> L2a
            r1.actionStart()     // Catch: java.lang.Exception -> L2a
            goto L36
        L2a:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            r0 = 2207(0x89f, float:3.093E-42)
            java.lang.String r1 = "get_products;base_get_products"
            r4.sendResult(r0, r5, r1)
        L36:
            return
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "2.1.7"
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(alias = "base_login_finish", name = "ymndatafun_login_finish")
    public void loginFinishEvent(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> Lc
            int r1 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Exception -> Lc
            r0.loginFinishEvent(r1, r5)     // Catch: java.lang.Exception -> Lc
            goto L33
        Lc:
            r0 = move-exception
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r4 = "|"
            r2.append(r4)
            r2.append(r5)
            r2.append(r4)
            java.lang.String r4 = r0.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r5 = -1
            r1.loginFinishEvent(r5, r4)
        L33:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "base_login_request_check")
    public void loginOldRequestCheckEvent(java.lang.String r2) {
            r1 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r0.loginOldRequestCheckEvent(r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "base_login_response_check")
    public void loginOldResponseCheckEvent(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L10
            int r1 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> L10
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L10
            r0.loginOldResponseCheckEvent(r1, r6)     // Catch: java.lang.Exception -> L10
            goto L3b
        L10:
            r0 = move-exception
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r2 = -1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r5)
            java.lang.String r5 = "|"
            r3.append(r5)
            r3.append(r6)
            r3.append(r5)
            java.lang.String r5 = r0.getMessage()
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            r1.loginOldResponseCheckEvent(r2, r5)
        L3b:
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    @Override
    public void onInit(android.content.Context r1) {
            r0 = this;
            super.onInit(r1)
            r1 = 1
            r0.setInited(r1)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "query_permission")
    public void query_permission(java.lang.String r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            r1 = 23
            java.lang.String r2 = "query_permission"
            if (r0 < r1) goto L50
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r1) goto L15
            goto L50
        L15:
            android.app.Activity r0 = r3.getActivity()
            int r0 = r0.checkSelfPermission(r4)
            if (r0 != 0) goto L36
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "已授权_"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r0 = 2208(0x8a0, float:3.094E-42)
            r3.sendResult(r0, r4, r2)
            goto L57
        L36:
            r1 = -1
            if (r0 != r1) goto L57
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "已拒接_"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r0 = 2209(0x8a1, float:3.095E-42)
            r3.sendResult(r0, r4, r2)
            goto L57
        L50:
            r4 = 2210(0x8a2, float:3.097E-42)
            java.lang.String r0 = "targetVersion或者系统版本小于23"
            r3.sendResult(r4, r0, r2)
        L57:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "request_permission")
    public void request_permission() {
            r1 = this;
            java.lang.String r0 = "该方法已经弃用"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "request_permission")
    public void request_permission(java.lang.String r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            r1 = 23
            if (r0 < r1) goto L5b
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r1) goto L13
            goto L5b
        L13:
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4a
            r0.<init>(r4)     // Catch: java.lang.Exception -> L4a
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> L4a
            r4.<init>()     // Catch: java.lang.Exception -> L4a
            r1 = 0
        L1e:
            int r2 = r0.length()     // Catch: java.lang.Exception -> L4a
            if (r1 >= r2) goto L30
            java.lang.Object r2 = r0.get(r1)     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L4a
            r4.add(r2)     // Catch: java.lang.Exception -> L4a
            int r1 = r1 + 1
            goto L1e
        L30:
            android.app.Activity r0 = r3.getActivity()     // Catch: java.lang.Exception -> L4a
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r0)     // Catch: java.lang.Exception -> L4a
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$f r1 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$f     // Catch: java.lang.Exception -> L4a
            r1.<init>(r3)     // Catch: java.lang.Exception -> L4a
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = r0.setCallback(r1)     // Catch: java.lang.Exception -> L4a
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r4 = r0.setPermissions(r4)     // Catch: java.lang.Exception -> L4a
            r0 = 1
            r4.requestPermissions(r0)     // Catch: java.lang.Exception -> L4a
            goto L64
        L4a:
            r4 = move-exception
            java.lang.String r0 = "参数不正确，应该传入字符串数组"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            r4.printStackTrace()
            r4 = 2209(0x8a1, float:3.095E-42)
            java.lang.String r0 = "拒绝的权限|参数不正确，应该传入字符串数组"
            r3.sendResult(r4, r0)
            goto L64
        L5b:
            r4 = 2210(0x8a2, float:3.097E-42)
            java.lang.String r0 = "targetVersion或者系统版本小于23"
            java.lang.String r1 = "request_permission"
            r3.sendResult(r4, r0, r1)
        L64:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "request_permission")
    public void request_permission(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            r1 = 23
            if (r0 < r1) goto L71
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r1) goto L13
            goto L71
        L13:
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4d
            r0.<init>(r4)     // Catch: java.lang.Exception -> L4d
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> L4d
            r4.<init>()     // Catch: java.lang.Exception -> L4d
            r1 = 0
        L1e:
            int r2 = r0.length()     // Catch: java.lang.Exception -> L4d
            if (r1 >= r2) goto L30
            java.lang.Object r2 = r0.get(r1)     // Catch: java.lang.Exception -> L4d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L4d
            r4.add(r2)     // Catch: java.lang.Exception -> L4d
            int r1 = r1 + 1
            goto L1e
        L30:
            android.app.Activity r0 = r3.getActivity()     // Catch: java.lang.Exception -> L4d
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r0)     // Catch: java.lang.Exception -> L4d
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$g r1 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$g     // Catch: java.lang.Exception -> L4d
            r1.<init>(r3)     // Catch: java.lang.Exception -> L4d
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = r0.setCallback(r1)     // Catch: java.lang.Exception -> L4d
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r4 = r0.setPermissions(r4)     // Catch: java.lang.Exception -> L4d
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> L4d
            r4.requestPermissions(r5)     // Catch: java.lang.Exception -> L4d
            goto L7a
        L4d:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "参数不正确，应该传入字符串数组"
            r5.append(r0)
            java.lang.String r0 = r4.getMessage()
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r5)
            r5 = 2209(0x8a1, float:3.095E-42)
            java.lang.String r0 = "拒绝的权限|参数不正确，应该传入字符串数组"
            r3.sendResult(r5, r0)
            r4.printStackTrace()
            goto L7a
        L71:
            r4 = 2210(0x8a2, float:3.097E-42)
            java.lang.String r5 = "targetVersion或者系统版本小于23"
            java.lang.String r0 = "request_permission"
            r3.sendResult(r4, r5, r0)
        L7a:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(alias = "verifier_set_identity", name = "set_identity")
    public void setIdentity(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r7 = this;
            java.lang.String r0 = "实名认证了"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.String r2 = "0"
            r1 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r1.setIdentity(r2, r3, r4, r5, r6)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(alias = "verifier_set_identity", name = "set_identity")
    @java.lang.Deprecated
    public void setIdentity(java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9) {
            r4 = this;
            com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = com.bianfeng.ymnsdk.util.RequestRetryUtils.getInstance()
            com.bianfeng.ymnsdk.action.c r1 = new com.bianfeng.ymnsdk.action.c
            android.content.Context r2 = r4.getContext()
            r1.<init>(r2)
            r2 = 5
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r5
            r5 = 1
            r2[r5] = r6
            r5 = 2
            r2[r5] = r7
            r5 = 3
            r2[r5] = r8
            r5 = 4
            r2[r5] = r9
            r1.putReqData(r4, r2)
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$b r5 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$b
            r5.<init>(r4, r1, r0)
            r1.addObserver(r5)
            r1.onStartAttachment()
            r1.actionStart()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "statr_test")
    public void startTest() {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.app.Activity r1 = r3.getActivity()
            java.lang.String r2 = "com.bianfeng.ymnsdk.TestActivity"
            r0.setClassName(r1, r2)
            android.app.Activity r1 = r3.getActivity()
            r1.startActivity(r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "ymn_datafun_get_deviceid")
    public void ymn_datafun_get_deviceid() {
            r3 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r0 = r0.getDeviceId()
            r1 = 1001002(0xf462a, float:1.402703E-39)
            java.lang.String r2 = "ymn_datafun_get_deviceid"
            r3.sendResult(r1, r0, r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "ymn_get_deviceid")
    public void ymn_get_deviceid() {
            r9 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "android_id"
            java.lang.String r2 = "ymn_get_deviceid"
            java.lang.String r3 = "T"
            java.lang.String r4 = "ymn_deviceid_jfq"
            r5 = 1001001(0xf4629, float:1.402701E-39)
            android.content.Context r6 = r9.getContext()     // Catch: java.lang.Exception -> Lda
            android.content.Context r6 = r6.getApplicationContext()     // Catch: java.lang.Exception -> Lda
            android.content.ContentResolver r6 = r6.getContentResolver()     // Catch: java.lang.Exception -> Lda
            android.provider.Settings.Secure.getString(r6, r1)     // Catch: java.lang.Exception -> Lda
            android.content.Context r6 = r9.getContext()     // Catch: java.lang.Exception -> Lda
            r7 = 0
            android.content.SharedPreferences r6 = r6.getSharedPreferences(r4, r7)     // Catch: java.lang.Exception -> Lda
            java.lang.String r7 = r6.getString(r4, r0)     // Catch: java.lang.Exception -> Lda
            boolean r7 = r7.isEmpty()     // Catch: java.lang.Exception -> Lda
            if (r7 != 0) goto L37
            java.lang.String r0 = r6.getString(r4, r0)     // Catch: java.lang.Exception -> Lda
            r9.sendResult(r5, r0, r2)     // Catch: java.lang.Exception -> Lda
            return
        L37:
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Exception -> Lda
            java.lang.String r7 = "phone"
            java.lang.Object r0 = r0.getSystemService(r7)     // Catch: java.lang.Exception -> Lda
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0     // Catch: java.lang.Exception -> Lda
            if (r0 == 0) goto Lf4
            android.app.Activity r7 = r9.getActivity()     // Catch: java.lang.Exception -> Lda
            java.lang.String r8 = "android.permission.READ_PHONE_STATE"
            int r7 = r7.checkSelfPermission(r8)     // Catch: java.lang.Exception -> Lda
            if (r7 != 0) goto L9d
            java.lang.String r7 = r0.getDeviceId()     // Catch: java.lang.Exception -> Lda
            if (r7 == 0) goto L67
            java.lang.String r0 = r0.getDeviceId()     // Catch: java.lang.Exception -> Lda
            android.content.SharedPreferences$Editor r1 = r6.edit()     // Catch: java.lang.Exception -> Lda
            android.content.SharedPreferences$Editor r1 = r1.putString(r4, r0)     // Catch: java.lang.Exception -> Lda
            r1.commit()     // Catch: java.lang.Exception -> Lda
            goto Ld6
        L67:
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Exception -> Lda
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Exception -> Lda
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Exception -> Lda
            java.lang.String r0 = android.provider.Settings.Secure.getString(r0, r1)     // Catch: java.lang.Exception -> Lda
            if (r0 == 0) goto L94
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Exception -> Lda
            if (r0 == 0) goto L80
            goto L94
        L80:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lda
            r0.<init>()     // Catch: java.lang.Exception -> Lda
            r0.append(r3)     // Catch: java.lang.Exception -> Lda
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Lda
            r0.append(r6)     // Catch: java.lang.Exception -> Lda
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lda
            goto Ld6
        L94:
            java.util.UUID r0 = java.util.UUID.randomUUID()     // Catch: java.lang.Exception -> Lda
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lda
            goto Ld6
        L9d:
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Exception -> Lda
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Exception -> Lda
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Exception -> Lda
            java.lang.String r0 = android.provider.Settings.Secure.getString(r0, r1)     // Catch: java.lang.Exception -> Lda
            if (r0 == 0) goto Lb5
            boolean r1 = r0.isEmpty()     // Catch: java.lang.Exception -> Lda
            if (r1 == 0) goto Ld6
        Lb5:
            java.util.UUID r0 = java.util.UUID.randomUUID()     // Catch: java.lang.Exception -> Lda
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lda
            boolean r1 = r0.isEmpty()     // Catch: java.lang.Exception -> Lda
            if (r1 == 0) goto Ld6
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lda
            r0.<init>()     // Catch: java.lang.Exception -> Lda
            r0.append(r3)     // Catch: java.lang.Exception -> Lda
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Lda
            r0.append(r6)     // Catch: java.lang.Exception -> Lda
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lda
        Ld6:
            r9.sendResult(r5, r0, r2)     // Catch: java.lang.Exception -> Lda
            goto Lf4
        Lda:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            long r3 = java.lang.System.currentTimeMillis()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r9.sendResult(r5, r0, r2)
        Lf4:
            return
    }
}
