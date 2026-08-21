package com.bianfeng.ymnsdk.allogin;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class AlloginInterface extends com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface {
    public static final java.lang.String ALLOGIN_GET_AUTOINFO = "al_authinfo";
    private static final int ALLOGIN_GET_INFO_FAIL = 30034002;
    private static final int ALLOGIN_GET_INFO_SUCCESS = 30034001;
    public static final java.lang.String ALLOGIN_LOGIN = "al_login";
    static java.lang.String Url = "http://121.199.42.69:8866";
    private volatile int failCode;


    class 2 implements com.bianfeng.ymnsdk.allogin.net.AlloginCallBack {
        final com.bianfeng.ymnsdk.allogin.AlloginInterface this$0;


        2(com.bianfeng.ymnsdk.allogin.AlloginInterface r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onPreLoginError(int r3, java.lang.String r4) {
                r2 = this;
                com.bianfeng.ymnsdk.allogin.AlloginInterface r0 = r2.this$0
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r3)
                java.lang.String r3 = "|"
                r1.append(r3)
                r1.append(r4)
                java.lang.String r3 = r1.toString()
                r4 = 105(0x69, float:1.47E-43)
                r0.sendResult(r4, r3)
                return
        }

        @Override
        public void onPreLoginSuccess(java.lang.String r2) {
                r1 = this;
                com.bianfeng.ymnsdk.allogin.AlloginInterface$2$1 r0 = new com.bianfeng.ymnsdk.allogin.AlloginInterface$2$1
                r0.<init>(r1, r2)
                java.lang.Thread r2 = new java.lang.Thread
                r2.<init>(r0)
                r2.start()
                return
        }
    }

    class 3 implements com.bianfeng.ymnsdk.allogin.net.AlloginCallBack {
        final com.bianfeng.ymnsdk.allogin.AlloginInterface this$0;

        class 1 implements java.lang.Runnable {
            final com.bianfeng.ymnsdk.allogin.AlloginInterface.3 this$1;
            final java.lang.String val$autoInfo;



            1(com.bianfeng.ymnsdk.allogin.AlloginInterface.3 r1, java.lang.String r2) {
                    r0 = this;
                    r0.this$1 = r1
                    r0.val$autoInfo = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r5 = this;
                    com.alipay.sdk.app.AuthTask r0 = new com.alipay.sdk.app.AuthTask     // Catch: java.lang.Exception -> L55
                    com.bianfeng.ymnsdk.allogin.AlloginInterface$3 r1 = r5.this$1     // Catch: java.lang.Exception -> L55
                    com.bianfeng.ymnsdk.allogin.AlloginInterface r1 = r1.this$0     // Catch: java.lang.Exception -> L55
                    android.app.Activity r1 = r1.getActivity()     // Catch: java.lang.Exception -> L55
                    r0.<init>(r1)     // Catch: java.lang.Exception -> L55
                    java.lang.String r1 = r5.val$autoInfo     // Catch: java.lang.Exception -> L55
                    r2 = 1
                    java.util.Map r0 = r0.authV2(r1, r2)     // Catch: java.lang.Exception -> L55
                    java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
                    r1.<init>()     // Catch: java.lang.Exception -> L55
                    java.lang.String r2 = "data is "
                    r1.append(r2)     // Catch: java.lang.Exception -> L55
                    java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L55
                    r1.append(r2)     // Catch: java.lang.Exception -> L55
                    java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L55
                    com.bianfeng.ymnsdk.util.Logger.e(r1)     // Catch: java.lang.Exception -> L55
                    java.lang.String r1 = "resultStatus"
                    java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Exception -> L55
                    java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L55
                    java.lang.String r2 = "result"
                    java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Exception -> L55
                    java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L55
                    java.util.Map r0 = com.bianfeng.ymnsdk.allogin.AlloginInterface.StirngToMap(r0)     // Catch: java.lang.Exception -> L55
                    java.lang.String r2 = "result_code"
                    java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Exception -> L55
                    java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L55
                    com.bianfeng.ymnsdk.allogin.AlloginInterface$3 r3 = r5.this$1     // Catch: java.lang.Exception -> L55
                    com.bianfeng.ymnsdk.allogin.AlloginInterface r3 = r3.this$0     // Catch: java.lang.Exception -> L55
                    com.bianfeng.ymnsdk.allogin.AlloginInterface$3$1$1 r4 = new com.bianfeng.ymnsdk.allogin.AlloginInterface$3$1$1     // Catch: java.lang.Exception -> L55
                    r4.<init>(r5, r1, r2, r0)     // Catch: java.lang.Exception -> L55
                    r3.tryRunOnUiThreadOrJustRun(r4)     // Catch: java.lang.Exception -> L55
                    goto L65
                L55:
                    r0 = move-exception
                    r0.printStackTrace()
                    com.bianfeng.ymnsdk.allogin.AlloginInterface$3 r1 = r5.this$1
                    com.bianfeng.ymnsdk.allogin.AlloginInterface r1 = r1.this$0
                    com.bianfeng.ymnsdk.allogin.AlloginInterface$3$1$2 r2 = new com.bianfeng.ymnsdk.allogin.AlloginInterface$3$1$2
                    r2.<init>(r5, r0)
                    r1.tryRunOnUiThreadOrJustRun(r2)
                L65:
                    return
            }
        }

        3(com.bianfeng.ymnsdk.allogin.AlloginInterface r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onPreLoginError(int r3, java.lang.String r4) {
                r2 = this;
                com.bianfeng.ymnsdk.allogin.AlloginInterface r0 = r2.this$0
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r3)
                java.lang.String r3 = "|"
                r1.append(r3)
                r1.append(r4)
                java.lang.String r3 = r1.toString()
                r4 = 30034002(0x1ca4852, float:7.4306855E-38)
                r0.sendResult(r4, r3)
                return
        }

        @Override
        public void onPreLoginSuccess(java.lang.String r2) {
                r1 = this;
                com.bianfeng.ymnsdk.allogin.AlloginInterface$3$1 r0 = new com.bianfeng.ymnsdk.allogin.AlloginInterface$3$1
                r0.<init>(r1, r2)
                java.lang.Thread r2 = new java.lang.Thread
                r2.<init>(r0)
                r2.start()
                return
        }
    }


    static {
            return
    }

    public AlloginInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.Map<java.lang.String, java.lang.String> StirngToMap(java.lang.String r6) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "&"
            java.lang.String[] r6 = r6.split(r1)
            r1 = 0
            r2 = 0
        Ld:
            int r3 = r6.length
            if (r2 >= r3) goto L23
            r3 = r6[r2]
            java.lang.String r4 = "="
            java.lang.String[] r3 = r3.split(r4)
            r4 = r3[r1]
            r5 = 1
            r3 = r3[r5]
            r0.put(r4, r3)
            int r2 = r2 + 1
            goto Ld
        L23:
            return r0
    }

    public static <T> java.lang.String mapToJson(java.util.Map<java.lang.String, T> r1) {
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            java.lang.String r1 = r0.toJson(r1)
            return r1
    }

    private void onPreLoginRequest(android.app.Activity r2, java.lang.String r3, java.lang.String r4, com.bianfeng.ymnsdk.allogin.net.getPreLoginCallback r5) {
            r1 = this;
            com.bianfeng.ymnsdk.allogin.net.HttpHelper r0 = new com.bianfeng.ymnsdk.allogin.net.HttpHelper
            r0.<init>(r2)
            r2 = 2
            r0.setMethod(r2)
            com.bianfeng.ymnsdk.allogin.AlloginInterface$4 r2 = new com.bianfeng.ymnsdk.allogin.AlloginInterface$4     // Catch: java.lang.Exception -> L12
            r2.<init>(r1, r5)     // Catch: java.lang.Exception -> L12
            r0.createHttpRequest(r3, r4, r2)     // Catch: java.lang.Exception -> L12
            goto L1b
        L12:
            r2 = move-exception
            r3 = -1
            java.lang.String r2 = r2.toString()
            r5.onPreLoginError(r3, r2)
        L1b:
            return
    }

    private void preLogin(com.bianfeng.ymnsdk.allogin.net.AlloginCallBack r5) {
            r4 = this;
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            java.lang.String r1 = "TD_SDK_APP_ID"
            java.lang.String r1 = r4.getMetaData(r1)
            int r1 = java.lang.Integer.parseInt(r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "app_id"
            r0.put(r2, r1)
            java.lang.String r1 = r4.getPluginId()
            int r1 = java.lang.Integer.parseInt(r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "platform_id"
            r0.put(r2, r1)
            java.lang.String r1 = "TD_CONFIG_ID"
            java.lang.String r1 = r4.getMetaData(r1)
            int r1 = java.lang.Integer.parseInt(r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "package_id"
            r0.put(r2, r1)
            android.app.Activity r1 = r4.getActivity()     // Catch: java.lang.Exception -> L64
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L64
            r2.<init>()     // Catch: java.lang.Exception -> L64
            java.lang.String r3 = "login"
            java.lang.String r3 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.getHost(r3)     // Catch: java.lang.Exception -> L64
            r2.append(r3)     // Catch: java.lang.Exception -> L64
            java.lang.String r3 = "/pre_login"
            r2.append(r3)     // Catch: java.lang.Exception -> L64
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L64
            java.lang.String r0 = mapToJson(r0)     // Catch: java.lang.Exception -> L64
            com.bianfeng.ymnsdk.allogin.AlloginInterface$1 r3 = new com.bianfeng.ymnsdk.allogin.AlloginInterface$1     // Catch: java.lang.Exception -> L64
            r3.<init>(r4, r5)     // Catch: java.lang.Exception -> L64
            r4.onPreLoginRequest(r1, r2, r0, r3)     // Catch: java.lang.Exception -> L64
            goto L71
        L64:
            r0 = move-exception
            r0.printStackTrace()
            int r1 = r4.failCode
            java.lang.String r0 = r0.toString()
            r5.onPreLoginError(r1, r0)
        L71:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "al_authinfo")
    public void getInfo() {
            r1 = this;
            r0 = 30034002(0x1ca4852, float:7.4306855E-38)
            r1.failCode = r0
            com.bianfeng.ymnsdk.allogin.AlloginInterface$3 r0 = new com.bianfeng.ymnsdk.allogin.AlloginInterface$3
            r0.<init>(r1)
            r1.preLogin(r0)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "30034"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "allogin"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "15.6.2"
            return r0
    }

    @Override
    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "al_login")
    public void login() {
            r1 = this;
            r0 = 105(0x69, float:1.47E-43)
            r1.failCode = r0
            com.bianfeng.ymnsdk.allogin.AlloginInterface$2 r0 = new com.bianfeng.ymnsdk.allogin.AlloginInterface$2
            r0.<init>(r1)
            r1.preLogin(r0)
            return
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
}
