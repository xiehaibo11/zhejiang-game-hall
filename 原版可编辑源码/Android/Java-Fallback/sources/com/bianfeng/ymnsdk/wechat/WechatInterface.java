package com.bianfeng.ymnsdk.wechat;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class WechatInterface extends com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface {
    public static final java.lang.String EXT_WECHAT_LOGIN = "wechat_login";
    public static final java.lang.String EXT_WECHAT_LOGIN_WITHOUT_HISTORY = "wechat_login_without_history";
    private static final int RESET_PAY_PARAMS_FAIL = 30007004;
    private static final int RESET_PAY_PARAMS_SUCCESS = 30007003;
    private static final int SET_PAY_PARAMS_FAIL = 30007002;
    private static final int SET_PAY_PARAMS_SUCCESS = 30007001;
    public static final java.lang.String TAG = "WechatInterface";
    public static final java.lang.String WECHAT_RESET_PAY_PARAMS = "wechat_reset_pay_params";
    public static final java.lang.String WECHAT_SET_PAY_PARAMS = "wechat_set_pay_params";
    public static final java.lang.String WECHAT_SET_PAY_PARAMS_FLAG = "wechat_set_pay_params_flag";
    private static com.bianfeng.ymnsdk.wechat.WechatInterface instance;
    private volatile boolean setParamsFlag;
    private volatile java.lang.String wxAppId;


    public WechatInterface() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.setParamsFlag = r0
            java.lang.String r0 = ""
            r1.wxAppId = r0
            com.bianfeng.ymnsdk.wechat.WechatInterface.instance = r1
            return
    }

    private void loginWithHistory() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "refresh_token"
            java.lang.String r2 = r3.readResponse()     // Catch: org.json.JSONException -> Lf
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf
            goto L13
        Lf:
            r1 = move-exception
            r1.printStackTrace()
        L13:
            r1 = 102(0x66, float:1.43E-43)
            java.lang.String r0 = r0.toString()
            r3.sendResult(r1, r0)
            return
    }

    private void loginWithoutHistory(com.tencent.mm.opensdk.openapi.IWXAPI r3) {
            r2 = this;
            java.lang.String r0 = "wxAppId"
            java.lang.String r0 = r2.getPropertie(r0)
            r3.registerApp(r0)
            com.tencent.mm.opensdk.modelmsg.SendAuth$Req r0 = new com.tencent.mm.opensdk.modelmsg.SendAuth$Req
            r0.<init>()
            java.lang.String r1 = "snsapi_userinfo"
            r0.scope = r1
            java.lang.String r1 = "wechat_login"
            r0.state = r1
            r3.sendReq(r0)
            return
    }

    public static void sendLoginResult(int r1, java.lang.String r2) {
            com.bianfeng.ymnsdk.wechat.WechatInterface r0 = com.bianfeng.ymnsdk.wechat.WechatInterface.instance
            if (r0 == 0) goto L7
            r0.sendResult(r1, r2)
        L7:
            return
    }

    private boolean supportAutoLogin() {
            r1 = this;
            java.lang.String r0 = r1.readResponse()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "WXAutoLogin")
    private void wxAutoLogin() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "wxAppId"
            java.lang.String r1 = r3.getPropertie(r1)
            r2 = 0
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r0, r1, r2)
            boolean r1 = r0.isWXAppInstalled()
            if (r1 == 0) goto L23
            boolean r1 = r3.supportAutoLogin()
            if (r1 == 0) goto L1f
            r3.loginWithHistory()
            goto L37
        L1f:
            r3.loginWithoutHistory(r0)
            goto L37
        L23:
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "登录失败，未安装微信"
            android.widget.Toast r0 = android.widget.Toast.makeText(r0, r1, r2)
            r0.show()
            r0 = 105(0x69, float:1.47E-43)
            java.lang.String r1 = "未安装微信"
            r3.sendResult(r0, r1)
        L37:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "WXLogin")
    private void wxLogin() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "wxAppId"
            java.lang.String r1 = r3.getPropertie(r1)
            r2 = 0
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r0, r1, r2)
            boolean r1 = r0.isWXAppInstalled()
            if (r1 == 0) goto L19
            r3.loginWithoutHistory(r0)
            goto L2d
        L19:
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "登录失败，未安装微信"
            android.widget.Toast r0 = android.widget.Toast.makeText(r0, r1, r2)
            r0.show()
            r0 = 105(0x69, float:1.47E-43)
            java.lang.String r1 = "未安装微信"
            r3.sendResult(r0, r1)
        L2d:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "wechat_login_without_history")
    public void WechatLoginWithoutHistory() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "wxAppId"
            java.lang.String r1 = r3.getPropertie(r1)
            r2 = 0
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r0, r1, r2)
            boolean r1 = r0.isWXAppInstalled()
            if (r1 == 0) goto L19
            r3.loginWithoutHistory(r0)
            goto L2d
        L19:
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "登录失败，未安装微信"
            android.widget.Toast r0 = android.widget.Toast.makeText(r0, r1, r2)
            r0.show()
            r0 = 105(0x69, float:1.47E-43)
            java.lang.String r1 = "未安装微信"
            r3.sendResult(r0, r1)
        L2d:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "wechat_reset_pay_params")
    public void WechatResetPayParams() {
            r6 = this;
            java.lang.String r0 = "重置失败，本地没有clientKey"
            java.lang.String r1 = "重置失败，本地没有packageId"
            java.lang.String r2 = "重置失败，本地没有appId"
            java.lang.String r3 = "wxAppId"
            java.lang.String r3 = r6.getPropertie(r3)
            r6.wxAppId = r3
            r3 = 30007004(0x1c9dedc, float:7.4155526E-38)
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r4 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L9e
            java.lang.String r5 = "TD_SDK_APP_ID"
            java.lang.String r4 = r4.getMetaDataValueString(r5)     // Catch: java.lang.Exception -> L9e
            if (r4 == 0) goto L9a
            boolean r5 = r4.isEmpty()     // Catch: java.lang.Exception -> L9e
            if (r5 != 0) goto L9a
            com.bianfeng.ymnsdk.util.YmnAppContext.setAppId(r4)     // Catch: java.lang.Exception -> L9e
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r5 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L9e
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L9e
            int r4 = r4.intValue()     // Catch: java.lang.Exception -> L9e
            r5.setAppId(r4)     // Catch: java.lang.Exception -> L9e
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L92
            java.lang.String r4 = "TD_CONFIG_ID"
            java.lang.String r2 = r2.getMetaDataValueString(r4)     // Catch: java.lang.Exception -> L92
            if (r2 == 0) goto L8e
            boolean r4 = r2.isEmpty()     // Catch: java.lang.Exception -> L92
            if (r4 != 0) goto L8e
            com.bianfeng.ymnsdk.util.YmnAppContext.setGroupId(r2)     // Catch: java.lang.Exception -> L92
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r4 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L92
            java.lang.Integer r5 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L92
            int r5 = r5.intValue()     // Catch: java.lang.Exception -> L92
            r4.setIdentify_id(r5)     // Catch: java.lang.Exception -> L92
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L92
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L92
            com.bianfeng.ymnsdk.util.YmnAppContext.setConfigId(r2)     // Catch: java.lang.Exception -> L92
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L86
            java.lang.String r2 = "TD_SDK_APP_KEY"
            java.lang.String r1 = r1.getMetaDataValueString(r2)     // Catch: java.lang.Exception -> L86
            if (r1 == 0) goto L82
            boolean r2 = r1.isEmpty()     // Catch: java.lang.Exception -> L86
            if (r2 != 0) goto L82
            com.bianfeng.ymnsdk.util.YmnAppContext.setSdkAppKey(r1)     // Catch: java.lang.Exception -> L86
            r0 = 30007003(0x1c9dedb, float:7.415552E-38)
            java.lang.String r1 = "重置成功"
            r6.sendResult(r0, r1)
            return
        L82:
            r6.sendResult(r3, r0)     // Catch: java.lang.Exception -> L86
            return
        L86:
            r1 = move-exception
            r1.printStackTrace()
            r6.sendResult(r3, r0)
            return
        L8e:
            r6.sendResult(r3, r1)     // Catch: java.lang.Exception -> L92
            return
        L92:
            r0 = move-exception
            r0.printStackTrace()
            r6.sendResult(r3, r1)
            return
        L9a:
            r6.sendResult(r3, r2)     // Catch: java.lang.Exception -> L9e
            return
        L9e:
            r0 = move-exception
            r0.printStackTrace()
            r6.sendResult(r3, r2)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "wechat_set_pay_params")
    public void WechatSetPayParams(java.util.LinkedHashMap<java.lang.String, java.lang.Object> r5) {
            r4 = this;
            r0 = 1
            r4.setParamsFlag = r0
            java.lang.String r0 = "wxAppId"
            boolean r1 = r5.containsKey(r0)
            r2 = 30007002(0x1c9deda, float:7.4155515E-38)
            if (r1 == 0) goto Laf
            java.lang.Object r0 = r5.get(r0)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r4.wxAppId = r0
            java.lang.String r0 = "appId"
            boolean r1 = r5.containsKey(r0)
            if (r1 == 0) goto La9
            java.lang.Object r0 = r5.get(r0)     // Catch: java.lang.Exception -> L43
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L43
            com.bianfeng.ymnsdk.util.YmnAppContext.setAppId(r0)     // Catch: java.lang.Exception -> L43
            boolean r1 = r0.isEmpty()     // Catch: java.lang.Exception -> L43
            if (r1 != 0) goto L47
            if (r0 == 0) goto L47
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L43
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L43
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> L43
            r1.setAppId(r0)     // Catch: java.lang.Exception -> L43
            goto L47
        L43:
            r0 = move-exception
            r0.printStackTrace()
        L47:
            java.lang.String r0 = "packageId"
            boolean r1 = r5.containsKey(r0)
            if (r1 == 0) goto La3
            java.lang.Object r0 = r5.get(r0)     // Catch: java.lang.Exception -> L7d
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L7d
            com.bianfeng.ymnsdk.util.YmnAppContext.setGroupId(r0)     // Catch: java.lang.Exception -> L7d
            boolean r1 = r0.isEmpty()     // Catch: java.lang.Exception -> L7d
            if (r1 != 0) goto L81
            if (r0 == 0) goto L81
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L7d
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L7d
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L7d
            r1.setIdentify_id(r3)     // Catch: java.lang.Exception -> L7d
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L7d
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> L7d
            com.bianfeng.ymnsdk.util.YmnAppContext.setConfigId(r0)     // Catch: java.lang.Exception -> L7d
            goto L81
        L7d:
            r0 = move-exception
            r0.printStackTrace()
        L81:
            java.lang.String r0 = "clientKey"
            boolean r1 = r5.containsKey(r0)
            if (r1 == 0) goto L9d
            java.lang.Object r5 = r5.get(r0)
            java.lang.String r5 = java.lang.String.valueOf(r5)
            com.bianfeng.ymnsdk.util.YmnAppContext.setSdkAppKey(r5)
            r5 = 30007001(0x1c9ded9, float:7.415551E-38)
            java.lang.String r0 = "设置成功"
            r4.sendResult(r5, r0)
            return
        L9d:
            java.lang.String r5 = "设置失败，传参没有clientKey"
            r4.sendResult(r2, r5)
            return
        La3:
            java.lang.String r5 = "设置失败，传参没有packageId"
            r4.sendResult(r2, r5)
            return
        La9:
            java.lang.String r5 = "设置失败，传参没有appId"
            r4.sendResult(r2, r5)
            return
        Laf:
            java.lang.String r5 = "设置失败，传参没有wxAppId"
            r4.sendResult(r2, r5)
            return
    }

    public void clearResponse() {
            r1 = this;
            java.lang.String r0 = ""
            r1.saveResponse(r0)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "30007"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "weixin"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 17
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "6.8.0"
            return r0
    }

    @Override
    public void login() {
            r0 = this;
            r0.wxAutoLogin()
            return
    }

    @Override
    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "logout")
    public void logout() {
            r2 = this;
            r2.clearResponse()
            r0 = 107(0x6b, float:1.5E-43)
            java.lang.String r1 = "注销成功"
            sendLoginResult(r0, r1)
            return
    }

    @Override
    public void onInit(android.content.Context r2) {
            r1 = this;
            super.onInit(r2)
            r2 = 0
            r1.setParamsFlag = r2
            r2 = 0
            r0 = 100
            r1.sendResult(r0, r2)
            r0 = 205(0xcd, float:2.87E-43)
            r1.sendResult(r0, r2)
            com.bianfeng.ymnsdk.wechat.WechatInterface$1 r2 = new com.bianfeng.ymnsdk.wechat.WechatInterface$1
            r2.<init>(r1)
            r1.addCallbackInterceptor(r2)
            return
    }

    @Override
    public void pay(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            super.pay(r1)
            r0.wxPay(r1)
            return
    }

    public java.lang.String readResponse() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "WechatInterface"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r1 = "opensdk_wx_response_refresh_token"
            r2 = 0
            java.lang.String r0 = r0.getString(r1, r2)
            return r0
    }

    public void saveResponse(java.lang.String r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "WechatInterface"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "opensdk_wx_response_refresh_token"
            android.content.SharedPreferences$Editor r4 = r0.putString(r1, r4)
            r4.apply()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "wechat_set_pay_params_flag")
    public void setParamsFlag(java.util.LinkedHashMap<java.lang.String, java.lang.Object> r3) {
            r2 = this;
            java.lang.String r0 = "setParamsFlag"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L26
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L22
            if (r3 == 0) goto L26
            java.lang.String r0 = "true"
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Exception -> L22
            if (r3 == 0) goto L1e
            r3 = 1
            r2.setParamsFlag = r3     // Catch: java.lang.Exception -> L22
            goto L26
        L1e:
            r3 = 0
            r2.setParamsFlag = r3     // Catch: java.lang.Exception -> L22
            goto L26
        L22:
            r3 = move-exception
            r3.printStackTrace()
        L26:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "WXpay")
    public void wxPay(java.util.Map<java.lang.String, java.lang.String> r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L84
            java.lang.String r1 = "client_callback"
            java.lang.Object r4 = r4.get(r1)     // Catch: org.json.JSONException -> L84
            java.lang.String r4 = (java.lang.String) r4     // Catch: org.json.JSONException -> L84
            r0.<init>(r4)     // Catch: org.json.JSONException -> L84
            android.app.Activity r4 = r3.getActivity()     // Catch: org.json.JSONException -> L84
            r1 = 0
            com.tencent.mm.opensdk.openapi.IWXAPI r4 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r4, r1)     // Catch: org.json.JSONException -> L84
            boolean r1 = r3.setParamsFlag     // Catch: org.json.JSONException -> L84
            if (r1 == 0) goto L3e
            java.lang.String r1 = r3.wxAppId     // Catch: org.json.JSONException -> L84
            boolean r1 = r1.isEmpty()     // Catch: org.json.JSONException -> L84
            if (r1 != 0) goto L3e
            java.lang.String r1 = r3.wxAppId     // Catch: org.json.JSONException -> L84
            r4.registerApp(r1)     // Catch: org.json.JSONException -> L84
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L84
            r1.<init>()     // Catch: org.json.JSONException -> L84
            java.lang.String r2 = "设置了wxAppId,为"
            r1.append(r2)     // Catch: org.json.JSONException -> L84
            java.lang.String r2 = r3.wxAppId     // Catch: org.json.JSONException -> L84
            r1.append(r2)     // Catch: org.json.JSONException -> L84
            java.lang.String r1 = r1.toString()     // Catch: org.json.JSONException -> L84
            com.bianfeng.ymnsdk.util.Logger.i(r1)     // Catch: org.json.JSONException -> L84
            goto L47
        L3e:
            java.lang.String r1 = "wxAppId"
            java.lang.String r1 = r3.getPropertie(r1)     // Catch: org.json.JSONException -> L84
            r4.registerApp(r1)     // Catch: org.json.JSONException -> L84
        L47:
            com.tencent.mm.opensdk.modelpay.PayReq r1 = new com.tencent.mm.opensdk.modelpay.PayReq     // Catch: org.json.JSONException -> L84
            r1.<init>()     // Catch: org.json.JSONException -> L84
            java.lang.String r2 = "appId"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L84
            r1.appId = r2     // Catch: org.json.JSONException -> L84
            java.lang.String r2 = "partnerId"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L84
            r1.partnerId = r2     // Catch: org.json.JSONException -> L84
            java.lang.String r2 = "prepayId"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L84
            r1.prepayId = r2     // Catch: org.json.JSONException -> L84
            java.lang.String r2 = "Sign=WXPay"
            r1.packageValue = r2     // Catch: org.json.JSONException -> L84
            java.lang.String r2 = "nonceStr"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L84
            r1.nonceStr = r2     // Catch: org.json.JSONException -> L84
            java.lang.String r2 = "timeStamp"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L84
            r1.timeStamp = r2     // Catch: org.json.JSONException -> L84
            java.lang.String r2 = "sign"
            java.lang.String r0 = r0.optString(r2)     // Catch: org.json.JSONException -> L84
            r1.sign = r0     // Catch: org.json.JSONException -> L84
            r4.sendReq(r1)     // Catch: org.json.JSONException -> L84
            goto L88
        L84:
            r4 = move-exception
            r4.printStackTrace()
        L88:
            return
    }
}
