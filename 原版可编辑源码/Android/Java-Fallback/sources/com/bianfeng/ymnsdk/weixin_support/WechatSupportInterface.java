package com.bianfeng.ymnsdk.weixin_support;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class WechatSupportInterface extends com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface {
    public static final java.lang.String EXT_WECHAT_LOGIN = "wechat_support_login";
    public static final java.lang.String TAG = "WechatSupportInterface";
    private static com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface instance;


    public WechatSupportInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface getInstance() {
            com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface r0 = com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface.instance
            return r0
    }

    private void loginWithHistory() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "refresh_token"
            java.lang.String r2 = r4.readResponse()     // Catch: org.json.JSONException -> Lf
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf
            goto L2b
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "loginWithHistory"
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
        L2b:
            r1 = 102(0x66, float:1.43E-43)
            java.lang.String r0 = r0.toString()
            r4.sendResult(r1, r0)
            return
    }

    private void loginWithoutHistory(com.tencent.mm.opensdk.openapi.IWXAPI r2, java.lang.String r3) {
            r1 = this;
            r2.registerApp(r3)
            com.tencent.mm.opensdk.modelmsg.SendAuth$Req r3 = new com.tencent.mm.opensdk.modelmsg.SendAuth$Req
            r3.<init>()
            java.lang.String r0 = "snsapi_userinfo"
            r3.scope = r0
            java.lang.String r0 = "wechat_support_login"
            r3.state = r0
            r2.sendReq(r3)
            return
    }

    public static void sendLoginResult(int r1, java.lang.String r2) {
            com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface r0 = com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface.instance
            r0.sendResult(r1, r2)
            return
    }

    private boolean supportAutoLogin() {
            r1 = this;
            java.lang.String r0 = r1.readResponse()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            return r0
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "WXSupAutoLogin")
    private void wxAutoLogin(java.lang.String r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            r1 = 0
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r0, r4, r1)
            r3.saveResponseWxappid(r4)
            boolean r2 = r0.isWXAppInstalled()
            if (r2 == 0) goto L20
            boolean r1 = r3.supportAutoLogin()
            if (r1 == 0) goto L1c
            r3.loginWithHistory()
            goto L34
        L1c:
            r3.loginWithoutHistory(r0, r4)
            goto L34
        L20:
            android.app.Activity r4 = r3.getActivity()
            java.lang.String r0 = "登录失败，未安装微信"
            android.widget.Toast r4 = android.widget.Toast.makeText(r4, r0, r1)
            r4.show()
            r4 = 105(0x69, float:1.47E-43)
            java.lang.String r0 = "未安装微信"
            r3.sendResult(r4, r0)
        L34:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "WXSupLogin")
    private void wxLogin(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "WXSupupLogin----"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            android.app.Activity r0 = r3.getActivity()
            r1 = 0
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r0, r4, r1)
            r3.saveResponseWxappid(r4)
            boolean r2 = r0.isWXAppInstalled()
            if (r2 == 0) goto L2a
            r3.loginWithoutHistory(r0, r4)
            goto L3e
        L2a:
            android.app.Activity r4 = r3.getActivity()
            java.lang.String r0 = "登录失败，未安装微信"
            android.widget.Toast r4 = android.widget.Toast.makeText(r4, r0, r1)
            r4.show()
            r4 = 105(0x69, float:1.47E-43)
            java.lang.String r0 = "未安装微信"
            r3.sendResult(r4, r0)
        L3e:
            return
    }

    public void clearResponse() {
            r1 = this;
            java.lang.String r0 = ""
            r1.saveResponse(r0)
            return
    }

    public void clearResponseWxappid() {
            r1 = this;
            java.lang.String r0 = ""
            r1.saveResponseWxappid(r0)
            return
    }

    @Override
    public void exit() {
            r0 = this;
            super.exit()
            r0.logout()
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "30025"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "weixinsup"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 6
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
            r1 = this;
            java.lang.String r0 = "不支持该方法"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            return
    }

    @Override
    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "logout")
    public void logout() {
            r2 = this;
            r2.clearResponse()
            r2.clearResponseWxappid()
            r0 = 107(0x6b, float:1.5E-43)
            java.lang.String r1 = "注销成功"
            sendLoginResult(r0, r1)
            return
    }

    @Override
    public void onInit(android.content.Context r2) {
            r1 = this;
            super.onInit(r2)
            com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface.instance = r1
            r2 = 0
            r0 = 100
            r1.sendResult(r0, r2)
            r0 = 205(0xcd, float:2.87E-43)
            r1.sendResult(r0, r2)
            com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface$1 r2 = new com.bianfeng.ymnsdk.weixin_support.WechatSupportInterface$1
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
            java.lang.String r1 = "WechatSupportInterface"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r1 = "opensdk_wx_response_refresh_token"
            r2 = 0
            java.lang.String r0 = r0.getString(r1, r2)
            return r0
    }

    public java.lang.String readResponseWxappid() {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "WechatSupportInterface"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r1 = "opensdk_wx_response_wxappid"
            r2 = 0
            java.lang.String r0 = r0.getString(r1, r2)
            return r0
    }

    public void saveResponse(java.lang.String r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "WechatSupportInterface"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "opensdk_wx_response_refresh_token"
            android.content.SharedPreferences$Editor r4 = r0.putString(r1, r4)
            r4.apply()
            return
    }

    public void saveResponseWxappid(java.lang.String r4) {
            r3 = this;
            android.app.Activity r0 = r3.getActivity()
            java.lang.String r1 = "WechatSupportInterface"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "opensdk_wx_response_wxappid"
            android.content.SharedPreferences$Editor r4 = r0.putString(r1, r4)
            r4.apply()
            return
    }

    public void wxPay(java.util.Map<java.lang.String, java.lang.String> r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5c
            java.lang.String r1 = "client_callback"
            java.lang.Object r4 = r4.get(r1)     // Catch: org.json.JSONException -> L5c
            java.lang.String r4 = (java.lang.String) r4     // Catch: org.json.JSONException -> L5c
            r0.<init>(r4)     // Catch: org.json.JSONException -> L5c
            android.app.Activity r4 = r3.getActivity()     // Catch: org.json.JSONException -> L5c
            r1 = 0
            com.tencent.mm.opensdk.openapi.IWXAPI r4 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r4, r1)     // Catch: org.json.JSONException -> L5c
            java.lang.String r1 = "wxAppId"
            java.lang.String r1 = r3.getPropertie(r1)     // Catch: org.json.JSONException -> L5c
            r4.registerApp(r1)     // Catch: org.json.JSONException -> L5c
            com.tencent.mm.opensdk.modelpay.PayReq r1 = new com.tencent.mm.opensdk.modelpay.PayReq     // Catch: org.json.JSONException -> L5c
            r1.<init>()     // Catch: org.json.JSONException -> L5c
            java.lang.String r2 = "appId"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L5c
            r1.appId = r2     // Catch: org.json.JSONException -> L5c
            java.lang.String r2 = "partnerId"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L5c
            r1.partnerId = r2     // Catch: org.json.JSONException -> L5c
            java.lang.String r2 = "prepayId"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L5c
            r1.prepayId = r2     // Catch: org.json.JSONException -> L5c
            java.lang.String r2 = "Sign=WXPay"
            r1.packageValue = r2     // Catch: org.json.JSONException -> L5c
            java.lang.String r2 = "nonceStr"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L5c
            r1.nonceStr = r2     // Catch: org.json.JSONException -> L5c
            java.lang.String r2 = "timeStamp"
            java.lang.String r2 = r0.optString(r2)     // Catch: org.json.JSONException -> L5c
            r1.timeStamp = r2     // Catch: org.json.JSONException -> L5c
            java.lang.String r2 = "sign"
            java.lang.String r0 = r0.optString(r2)     // Catch: org.json.JSONException -> L5c
            r1.sign = r0     // Catch: org.json.JSONException -> L5c
            r4.sendReq(r1)     // Catch: org.json.JSONException -> L5c
            goto L75
        L5c:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "wx pay"
            r0.append(r1)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r4)
        L75:
            return
    }
}
