package com.bianfeng.ymnsdk.feature.plugin;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class YmnBaseInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    public static final int CODE_DATAFUN_GET_DEVICEID = 1001002;
    public static final int CODE_GET_AESGCM256_DECRYPT_STRING = 1001006;
    public static final int CODE_GET_AESGCM256_ENCRYPT_STRING = 1001005;
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
    public static final java.lang.String SET_CLIP_ALLOW = "set_clip_allow";
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
        public void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r6) {
                r5 = this;
                boolean r0 = r6.isOk()
                java.lang.String r1 = "get_identity;verifier_get_identity"
                if (r0 == 0) goto L1d
                com.bianfeng.ymnsdk.action.b r0 = r5.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r5.c
                r2 = 2202(0x89a, float:3.086E-42)
                org.json.JSONObject r3 = r6.data
                java.lang.String r4 = "status"
                java.lang.String r3 = r3.optString(r4)
                r0.sendResult(r2, r3, r1)
                goto L37
            L1d:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r5.b
                com.bianfeng.ymnsdk.action.b r2 = r5.a
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L37
                com.bianfeng.ymnsdk.action.b r2 = r5.a
                r2.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r2 = r5.c
                r3 = 2203(0x89b, float:3.087E-42)
                java.lang.String r4 = r6.messageFail()
                r2.sendResult(r3, r4, r1)
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
        public void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r6) {
                r5 = this;
                boolean r0 = r6.isOk()
                java.lang.String r1 = "set_identity;verifier_set_identity"
                if (r0 == 0) goto L17
                com.bianfeng.ymnsdk.action.c r0 = r5.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r5.c
                r2 = 2204(0x89c, float:3.088E-42)
                java.lang.String r3 = "实名认证成功"
                r0.sendResult(r2, r3, r1)
                goto L31
            L17:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r5.b
                com.bianfeng.ymnsdk.action.c r2 = r5.a
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L31
                com.bianfeng.ymnsdk.action.c r2 = r5.a
                r2.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r2 = r5.c
                r3 = 2205(0x89d, float:3.09E-42)
                java.lang.String r4 = r6.messageFail()
                r2.sendResult(r3, r4, r1)
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
        public void onActionResult(com.bianfeng.ymnsdk.action.ActionSupport.ResponseResult r6) {
                r5 = this;
                boolean r0 = r6.isOk()
                java.lang.String r1 = "get_products;base_get_products"
                if (r0 == 0) goto L19
                com.bianfeng.ymnsdk.action.g r0 = r5.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r5.c
                r2 = 2206(0x89e, float:3.091E-42)
                java.lang.String r3 = r6.dataAsString()
                r0.sendResult(r2, r3, r1)
                goto L33
            L19:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r5.b
                com.bianfeng.ymnsdk.action.g r2 = r5.a
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L33
                com.bianfeng.ymnsdk.action.g r2 = r5.a
                r2.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r2 = r5.c
                r3 = 2207(0x89f, float:3.093E-42)
                java.lang.String r4 = r6.messageFail()
                r2.sendResult(r3, r4, r1)
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
        public void onActionResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r6) {
                r5 = this;
                boolean r0 = r6.isOk()
                java.lang.String r1 = "get_products;base_get_products"
                if (r0 == 0) goto L19
                com.bianfeng.ymnsdk.actionv2.d r0 = r5.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r5.c
                r2 = 2206(0x89e, float:3.091E-42)
                java.lang.String r3 = r6.getSrcRes()
                r0.sendResult(r2, r3, r1)
                goto L33
            L19:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r5.b
                com.bianfeng.ymnsdk.actionv2.d r2 = r5.a
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L33
                com.bianfeng.ymnsdk.actionv2.d r2 = r5.a
                r2.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r2 = r5.c
                r3 = 2207(0x89f, float:3.093E-42)
                java.lang.String r4 = r6.messageFail()
                r2.sendResult(r3, r4, r1)
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
        public void onActionResult(com.bianfeng.ymnsdk.actionv2.ActionSupportV2.ResponseResult r6) {
                r5 = this;
                boolean r0 = r6.isOk()
                java.lang.String r1 = "check_order_statue"
                if (r0 == 0) goto L19
                com.bianfeng.ymnsdk.actionv2.c r0 = r5.a
                r0.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r5.c
                r2 = 2206(0x89e, float:3.091E-42)
                java.lang.String r3 = r6.dataAsString()
                r0.sendResult(r2, r3, r1)
                goto L33
            L19:
                com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = r5.b
                com.bianfeng.ymnsdk.actionv2.c r2 = r5.a
                boolean r0 = r0.retryRequest(r2)
                if (r0 == 0) goto L33
                com.bianfeng.ymnsdk.actionv2.c r2 = r5.a
                r2.onEndAttachment()
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r2 = r5.c
                r3 = 2207(0x89f, float:3.093E-42)
                java.lang.String r4 = r6.messageFail()
                r2.sendResult(r3, r4, r1)
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
        public void onAllow(int r5, java.lang.String r6) {
                r4 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r4.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "允许的权限|"
                r1.append(r2)
                r1.append(r6)
                java.lang.String r1 = r1.toString()
                r2 = 2209(0x8a1, float:3.095E-42)
                java.lang.String r3 = "request_permission"
                r0.sendResult(r2, r1, r3)
                return
        }

        @Override
        public void onAllowAll(int r5) {
                r4 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r4.a
                r1 = 2208(0x8a0, float:3.094E-42)
                java.lang.String r2 = "权限申请成功"
                java.lang.String r3 = "request_permission"
                r0.sendResult(r1, r2, r3)
                return
        }

        @Override
        public void onDeny(int r5, java.lang.String r6) {
                r4 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r4.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "拒绝的权限|"
                r1.append(r2)
                r1.append(r6)
                java.lang.String r1 = r1.toString()
                r2 = 2209(0x8a1, float:3.095E-42)
                java.lang.String r3 = "request_permission"
                r0.sendResult(r2, r1, r3)
                return
        }

        @Override
        public void onDenyIn48Hours(int r5, java.lang.String r6) {
                r4 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r4.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "这些权限在48小时内申请过|"
                r1.append(r2)
                r1.append(r6)
                java.lang.String r1 = r1.toString()
                r2 = 2211(0x8a3, float:3.098E-42)
                java.lang.String r3 = "request_permission"
                r0.sendResult(r2, r1, r3)
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
        public void onAllow(int r5, java.lang.String r6) {
                r4 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r4.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r5)
                java.lang.String r2 = "|允许的权限|"
                r1.append(r2)
                r1.append(r6)
                java.lang.String r1 = r1.toString()
                r2 = 2209(0x8a1, float:3.095E-42)
                java.lang.String r3 = "request_permission"
                r0.sendResult(r2, r1, r3)
                return
        }

        @Override
        public void onAllowAll(int r5) {
                r4 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r4.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r5)
                java.lang.String r2 = "|权限申请成功"
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r2 = 2208(0x8a0, float:3.094E-42)
                java.lang.String r3 = "request_permission"
                r0.sendResult(r2, r1, r3)
                return
        }

        @Override
        public void onDeny(int r5, java.lang.String r6) {
                r4 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r4.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r5)
                java.lang.String r2 = "|拒绝的权限|"
                r1.append(r2)
                r1.append(r6)
                java.lang.String r1 = r1.toString()
                r2 = 2209(0x8a1, float:3.095E-42)
                java.lang.String r3 = "request_permission"
                r0.sendResult(r2, r1, r3)
                return
        }

        @Override
        public void onDenyIn48Hours(int r5, java.lang.String r6) {
                r4 = this;
                com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface r0 = r4.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r5)
                java.lang.String r2 = "|这些权限在48小时内申请过|"
                r1.append(r2)
                r1.append(r6)
                java.lang.String r1 = r1.toString()
                r2 = 2211(0x8a3, float:3.098E-42)
                java.lang.String r3 = "request_permission"
                r0.sendResult(r2, r1, r3)
                return
        }
    }

    public YmnBaseInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "set_host")
    public void change_host(java.lang.String r10) {
            r9 = this;
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Exception -> L42
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.e.e(r0)     // Catch: java.lang.Exception -> L42
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface.localState = r0     // Catch: java.lang.Exception -> L42
            com.bianfeng.ymnsdk.entity.UrlLocalState r0 = com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface.localState     // Catch: java.lang.Exception -> L42
            r0.setCurrentHost(r10)     // Catch: java.lang.Exception -> L42
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Exception -> L42
            com.bianfeng.ymnsdk.entity.UrlLocalState r1 = com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface.localState     // Catch: java.lang.Exception -> L42
            com.bianfeng.ymnsdk.feature.e.a(r0, r1)     // Catch: java.lang.Exception -> L42
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r2 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L42
            java.lang.String r3 = "set_host"
            java.lang.String r4 = r9.getPluginId()     // Catch: java.lang.Exception -> L42
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L42
            r0.<init>()     // Catch: java.lang.Exception -> L42
            int r1 = r9.getPluginVersion()     // Catch: java.lang.Exception -> L42
            r0.append(r1)     // Catch: java.lang.Exception -> L42
            java.lang.String r1 = ""
            r0.append(r1)     // Catch: java.lang.Exception -> L42
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L42
            java.lang.String r6 = r9.getSdkVersion()     // Catch: java.lang.Exception -> L42
            r7 = 0
            java.lang.String r8 = ""
            r2.pluginFinish(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L42
            goto L43
        L42:
            r0 = move-exception
        L43:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "change_ymn_host")
    public void change_ymn_host(java.lang.String r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "SP_YMN_CHANGE_HOST"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r2 = r0.edit()
            android.content.SharedPreferences$Editor r1 = r2.putString(r1, r4)
            r1.apply()
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
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$e r2 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$e     // Catch: java.lang.Exception -> L2a
            r2.<init>(r4, r1, r0)     // Catch: java.lang.Exception -> L2a
            r1.addObserver(r2)     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "checkOrderStatue check_order_statue"
            com.bianfeng.ymnsdk.util.Logger.i(r2)     // Catch: java.lang.Exception -> L2a
            r1.onStartAttachment()     // Catch: java.lang.Exception -> L2a
            r1.actionStart()     // Catch: java.lang.Exception -> L2a
            goto L36
        L2a:
            r0 = move-exception
            r1 = 2207(0x89f, float:3.093E-42)
            java.lang.String r2 = r0.getMessage()
            java.lang.String r3 = "check_order_statue"
            r4.sendResult(r1, r2, r3)
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
            r3 = 1
            r2[r3] = r6
            r3 = 2
            r2[r3] = r7
            r1.putReqData(r4, r2)
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$a r2 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$a
            r2.<init>(r4, r1, r0)
            r1.addObserver(r2)
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
    public java.lang.String getMetaDataValue(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r2)
            return r0
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
    public java.lang.String getOrderId(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.getOrderId(r4)
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
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$d r2 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$d     // Catch: java.lang.Exception -> L2a
            r2.<init>(r4, r1, r0)     // Catch: java.lang.Exception -> L2a
            r1.addObserver(r2)     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "getProducts"
            com.bianfeng.ymnsdk.util.Logger.i(r2)     // Catch: java.lang.Exception -> L2a
            r1.onStartAttachment()     // Catch: java.lang.Exception -> L2a
            r1.actionStart()     // Catch: java.lang.Exception -> L2a
            goto L36
        L2a:
            r0 = move-exception
            r1 = 2207(0x89f, float:3.093E-42)
            java.lang.String r2 = r0.getMessage()
            java.lang.String r3 = "get_products;base_get_products"
            r4.sendResult(r1, r2, r3)
        L36:
            return
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "2.1.7"
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "get_AESGCM256_decrypt_string")
    public java.lang.String get_AESGCM256_decrypt_string(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "bfdata_"
            boolean r1 = r4.contains(r0)
            if (r1 == 0) goto Le
            java.lang.String r1 = ""
            java.lang.String r4 = r4.replace(r0, r1)
        Le:
            java.lang.String r0 = ""
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.decrypt(r4, r5)     // Catch: java.lang.Exception -> L1d
            r0 = r1
            r1 = 1001006(0xf462e, float:1.402708E-39)
            r3.sendResult(r1, r0)
            return r0
        L1d:
            r1 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            r2.<init>(r1)
            throw r2
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "get_AESGCM256_encrypt_string")
    public java.lang.String get_AESGCM256_encrypt_string(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = ""
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L20
            r1.<init>()     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = "bfdata_"
            r1.append(r2)     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.encrypt(r4, r5)     // Catch: java.lang.Exception -> L20
            r1.append(r2)     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L20
            r0 = r1
            r1 = 1001005(0xf462d, float:1.402707E-39)
            r3.sendResult(r1, r0)
            return r0
        L20:
            r1 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            r2.<init>(r1)
            throw r2
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "host_app_analysis")
    public void hostAppAnalysis() {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.app.Activity r1 = r3.getActivity()
            java.lang.String r2 = "com.bianfeng.ymnsdk.runner.activity.HostAppAnalysisActivity"
            r0.setClassName(r1, r2)
            android.app.Activity r1 = r3.getActivity()
            r1.startActivity(r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(alias = "base_login_finish", name = "ymndatafun_login_finish")
    public void loginFinishEvent(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> Lc
            int r1 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Exception -> Lc
            r0.loginFinishEvent(r1, r7)     // Catch: java.lang.Exception -> Lc
            goto L33
        Lc:
            r0 = move-exception
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r2 = -1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            java.lang.String r4 = "|"
            r3.append(r4)
            r3.append(r7)
            r3.append(r4)
            java.lang.String r4 = r0.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.loginFinishEvent(r2, r3)
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
    public void loginOldResponseCheckEvent(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L10
            int r1 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Exception -> L10
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L10
            r0.loginOldResponseCheckEvent(r1, r7)     // Catch: java.lang.Exception -> L10
            goto L3b
        L10:
            r0 = move-exception
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r2 = -1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            java.lang.String r4 = "|"
            r3.append(r4)
            r3.append(r7)
            r3.append(r4)
            java.lang.String r4 = r0.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.loginOldResponseCheckEvent(r2, r3)
        L3b:
            return
    }

    @Override
    public void onContextChanged(android.content.Context r1) {
            r0 = this;
            super.onContextChanged(r1)
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    @Override
    public void onInit(android.content.Context r2) {
            r1 = this;
            super.onInit(r2)
            r0 = 1
            r1.setInited(r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "query_permission")
    public void query_permission(java.lang.String r7) {
            r6 = this;
            android.app.Activity r0 = r6.getActivity()
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            r1 = 23
            java.lang.String r2 = "query_permission"
            if (r0 < r1) goto L50
            int r3 = android.os.Build.VERSION.SDK_INT
            if (r3 >= r1) goto L15
            goto L50
        L15:
            android.app.Activity r1 = r6.getActivity()
            int r1 = r1.checkSelfPermission(r7)
            if (r1 != 0) goto L36
            r3 = 2208(0x8a0, float:3.094E-42)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "已授权_"
            r4.append(r5)
            r4.append(r7)
            java.lang.String r4 = r4.toString()
            r6.sendResult(r3, r4, r2)
            goto L57
        L36:
            r3 = -1
            if (r1 != r3) goto L57
            r3 = 2209(0x8a1, float:3.095E-42)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "已拒接_"
            r4.append(r5)
            r4.append(r7)
            java.lang.String r4 = r4.toString()
            r6.sendResult(r3, r4, r2)
            goto L57
        L50:
            r1 = 2210(0x8a2, float:3.097E-42)
            java.lang.String r3 = "targetVersion或者系统版本小于23"
            r6.sendResult(r1, r3, r2)
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
    public void request_permission(java.lang.String r6) {
            r5 = this;
            android.app.Activity r0 = r5.getActivity()
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            r1 = 23
            if (r0 < r1) goto L5d
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 >= r1) goto L13
            goto L5d
        L13:
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4c
            r1.<init>(r6)     // Catch: java.lang.Exception -> L4c
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L4c
            r2.<init>()     // Catch: java.lang.Exception -> L4c
            r3 = 0
        L1e:
            int r4 = r1.length()     // Catch: java.lang.Exception -> L4c
            if (r3 >= r4) goto L31
            java.lang.Object r4 = r1.get(r3)     // Catch: java.lang.Exception -> L4c
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L4c
            r2.add(r4)     // Catch: java.lang.Exception -> L4c
            int r3 = r3 + 1
            goto L1e
        L31:
            android.app.Activity r3 = r5.getActivity()     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r3)     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$f r4 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$f     // Catch: java.lang.Exception -> L4c
            r4.<init>(r5)     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r3.setCallback(r4)     // Catch: java.lang.Exception -> L4c
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r3.setPermissions(r2)     // Catch: java.lang.Exception -> L4c
            r4 = 1
            r3.requestPermissions(r4)     // Catch: java.lang.Exception -> L4c
            goto L66
        L4c:
            r1 = move-exception
            java.lang.String r2 = "参数不正确，应该传入字符串数组"
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            r1.printStackTrace()
            r2 = 2209(0x8a1, float:3.095E-42)
            java.lang.String r3 = "拒绝的权限|参数不正确，应该传入字符串数组"
            r5.sendResult(r2, r3)
            goto L66
        L5d:
            r1 = 2210(0x8a2, float:3.097E-42)
            java.lang.String r2 = "targetVersion或者系统版本小于23"
            java.lang.String r3 = "request_permission"
            r5.sendResult(r1, r2, r3)
        L66:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "request_permission")
    public void request_permission(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            android.app.Activity r0 = r5.getActivity()
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            r1 = 23
            if (r0 < r1) goto L73
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 >= r1) goto L13
            goto L73
        L13:
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4f
            r1.<init>(r6)     // Catch: java.lang.Exception -> L4f
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L4f
            r2.<init>()     // Catch: java.lang.Exception -> L4f
            r3 = 0
        L1e:
            int r4 = r1.length()     // Catch: java.lang.Exception -> L4f
            if (r3 >= r4) goto L31
            java.lang.Object r4 = r1.get(r3)     // Catch: java.lang.Exception -> L4f
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L4f
            r2.add(r4)     // Catch: java.lang.Exception -> L4f
            int r3 = r3 + 1
            goto L1e
        L31:
            android.app.Activity r3 = r5.getActivity()     // Catch: java.lang.Exception -> L4f
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r3)     // Catch: java.lang.Exception -> L4f
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$g r4 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$g     // Catch: java.lang.Exception -> L4f
            r4.<init>(r5)     // Catch: java.lang.Exception -> L4f
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r3.setCallback(r4)     // Catch: java.lang.Exception -> L4f
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r3.setPermissions(r2)     // Catch: java.lang.Exception -> L4f
            int r4 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Exception -> L4f
            r3.requestPermissions(r4)     // Catch: java.lang.Exception -> L4f
            goto L7c
        L4f:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "参数不正确，应该传入字符串数组"
            r2.append(r3)
            java.lang.String r3 = r1.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            r2 = 2209(0x8a1, float:3.095E-42)
            java.lang.String r3 = "拒绝的权限|参数不正确，应该传入字符串数组"
            r5.sendResult(r2, r3)
            r1.printStackTrace()
            goto L7c
        L73:
            r1 = 2210(0x8a2, float:3.097E-42)
            java.lang.String r2 = "targetVersion或者系统版本小于23"
            java.lang.String r3 = "request_permission"
            r5.sendResult(r1, r2, r3)
        L7c:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "set_clip_allow")
    public void setClipAllow(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "allow"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto Ld
            r0 = 1
            com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils.setYmnClipAllow(r0)
            goto L11
        Ld:
            r0 = 0
            com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils.setYmnClipAllow(r0)
        L11:
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
            r3 = 1
            r2[r3] = r6
            r3 = 2
            r2[r3] = r7
            r3 = 3
            r2[r3] = r8
            r3 = 4
            r2[r3] = r9
            r1.putReqData(r4, r2)
            com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$b r2 = new com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface$b
            r2.<init>(r4, r1, r0)
            r1.addObserver(r2)
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
            r4 = this;
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r0 = r0.getAndroidId()
            java.lang.String r1 = "bfdata_"
            boolean r2 = r0.contains(r1)
            java.lang.String r3 = ""
            if (r2 == 0) goto L16
            java.lang.String r0 = r0.replace(r1, r3)
        L16:
            java.lang.String r1 = ""
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.security.AESGCM256.decrypt(r0, r3)     // Catch: java.lang.Exception -> L1e
            r1 = r2
            goto L20
        L1e:
            r2 = move-exception
            r1 = r0
        L20:
            r2 = 1001002(0xf462a, float:1.402703E-39)
            java.lang.String r3 = "ymn_datafun_get_deviceid"
            r4.sendResult(r2, r1, r3)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "ymn_get_deviceid")
    public void ymn_get_deviceid() {
            r10 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "android_id"
            java.lang.String r2 = "ymn_get_deviceid"
            java.lang.String r3 = "T"
            java.lang.String r4 = "ymn_deviceid_jfq"
            r5 = 1001001(0xf4629, float:1.402701E-39)
            android.content.Context r6 = r10.getContext()     // Catch: java.lang.Exception -> Le0
            android.content.Context r6 = r6.getApplicationContext()     // Catch: java.lang.Exception -> Le0
            android.content.ContentResolver r6 = r6.getContentResolver()     // Catch: java.lang.Exception -> Le0
            java.lang.String r6 = android.provider.Settings.Secure.getString(r6, r1)     // Catch: java.lang.Exception -> Le0
            android.content.Context r7 = r10.getContext()     // Catch: java.lang.Exception -> Le0
            r8 = 0
            android.content.SharedPreferences r7 = r7.getSharedPreferences(r4, r8)     // Catch: java.lang.Exception -> Le0
            java.lang.String r8 = r7.getString(r4, r0)     // Catch: java.lang.Exception -> Le0
            boolean r8 = r8.isEmpty()     // Catch: java.lang.Exception -> Le0
            if (r8 != 0) goto L38
            java.lang.String r0 = r7.getString(r4, r0)     // Catch: java.lang.Exception -> Le0
            r10.sendResult(r5, r0, r2)     // Catch: java.lang.Exception -> Le0
            return
        L38:
            android.content.Context r0 = r10.getContext()     // Catch: java.lang.Exception -> Le0
            java.lang.String r8 = "phone"
            java.lang.Object r0 = r0.getSystemService(r8)     // Catch: java.lang.Exception -> Le0
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0     // Catch: java.lang.Exception -> Le0
            if (r0 == 0) goto Ldf
            android.app.Activity r8 = r10.getActivity()     // Catch: java.lang.Exception -> Le0
            java.lang.String r9 = "android.permission.READ_PHONE_STATE"
            int r8 = r8.checkSelfPermission(r9)     // Catch: java.lang.Exception -> Le0
            if (r8 != 0) goto La1
            java.lang.String r8 = r0.getDeviceId()     // Catch: java.lang.Exception -> Le0
            if (r8 == 0) goto L69
            java.lang.String r1 = r0.getDeviceId()     // Catch: java.lang.Exception -> Le0
            android.content.SharedPreferences$Editor r6 = r7.edit()     // Catch: java.lang.Exception -> Le0
            android.content.SharedPreferences$Editor r4 = r6.putString(r4, r1)     // Catch: java.lang.Exception -> Le0
            r4.commit()     // Catch: java.lang.Exception -> Le0
            goto Ldc
        L69:
            android.content.Context r4 = r10.getContext()     // Catch: java.lang.Exception -> Le0
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Exception -> Le0
            android.content.ContentResolver r4 = r4.getContentResolver()     // Catch: java.lang.Exception -> Le0
            java.lang.String r1 = android.provider.Settings.Secure.getString(r4, r1)     // Catch: java.lang.Exception -> Le0
            if (r1 == 0) goto L97
            boolean r4 = r1.isEmpty()     // Catch: java.lang.Exception -> Le0
            if (r4 == 0) goto L82
            goto L97
        L82:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le0
            r4.<init>()     // Catch: java.lang.Exception -> Le0
            r4.append(r3)     // Catch: java.lang.Exception -> Le0
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Le0
            r4.append(r8)     // Catch: java.lang.Exception -> Le0
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le0
            r1 = r4
            goto Ldc
        L97:
            java.util.UUID r4 = java.util.UUID.randomUUID()     // Catch: java.lang.Exception -> Le0
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le0
            r1 = r4
            goto Ldc
        La1:
            android.content.Context r4 = r10.getContext()     // Catch: java.lang.Exception -> Le0
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Exception -> Le0
            android.content.ContentResolver r4 = r4.getContentResolver()     // Catch: java.lang.Exception -> Le0
            java.lang.String r1 = android.provider.Settings.Secure.getString(r4, r1)     // Catch: java.lang.Exception -> Le0
            if (r1 == 0) goto Lb9
            boolean r4 = r1.isEmpty()     // Catch: java.lang.Exception -> Le0
            if (r4 == 0) goto Ldc
        Lb9:
            java.util.UUID r4 = java.util.UUID.randomUUID()     // Catch: java.lang.Exception -> Le0
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le0
            r1 = r4
            boolean r4 = r1.isEmpty()     // Catch: java.lang.Exception -> Le0
            if (r4 == 0) goto Ldc
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le0
            r4.<init>()     // Catch: java.lang.Exception -> Le0
            r4.append(r3)     // Catch: java.lang.Exception -> Le0
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Le0
            r4.append(r8)     // Catch: java.lang.Exception -> Le0
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le0
            r1 = r4
        Ldc:
            r10.sendResult(r5, r1, r2)     // Catch: java.lang.Exception -> Le0
        Ldf:
            goto Lfa
        Le0:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            long r3 = java.lang.System.currentTimeMillis()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r10.sendResult(r5, r1, r2)
        Lfa:
            return
    }
}
