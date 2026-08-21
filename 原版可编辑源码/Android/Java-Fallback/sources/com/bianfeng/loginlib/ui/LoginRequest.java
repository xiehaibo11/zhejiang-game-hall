package com.bianfeng.loginlib.ui;

public class LoginRequest {
    private android.app.Activity activity;
    private java.util.TreeMap<java.lang.String, java.lang.String> map;


    private LoginRequest(android.app.Activity r2, java.util.TreeMap<java.lang.String, java.lang.String> r3) {
            r1 = this;
            r1.<init>()
            r1.activity = r2
            r1.map = r3
            com.bianfeng.utilslib.AppConfigUtils r2 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r2 = r2.getWebPayAppId()
            java.lang.String r0 = "gcp_id"
            r3.put(r0, r2)
            com.bianfeng.utilslib.SignMd5Utils r2 = com.bianfeng.utilslib.UtilsSdk.getSignMd5()
            java.lang.String r2 = r2.getMd5(r3)
            java.lang.String r0 = "sign"
            r3.put(r0, r2)
            com.bianfeng.utilslib.AppConfigUtils r2 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r2 = r2.getSdkVersion()
            java.lang.String r0 = "sdk_version"
            r3.put(r0, r2)
            r1.requestLogin()
            return
    }

    private void requestLogin() {
            r4 = this;
            com.bianfeng.loginlib.YmnH5GameLoginSdk r0 = com.bianfeng.loginlib.YmnH5GameLoginSdk.getInstance()
            com.bianfeng.loginlib.YmnH5LoginCallBack r0 = r0.getCallback()
            com.bianfeng.loginlib.action.H5GameLoginAction r1 = new com.bianfeng.loginlib.action.H5GameLoginAction     // Catch: java.lang.Exception -> L20
            android.app.Activity r2 = r4.activity     // Catch: java.lang.Exception -> L20
            r1.<init>(r2)     // Catch: java.lang.Exception -> L20
            java.util.TreeMap<java.lang.String, java.lang.String> r2 = r4.map     // Catch: java.lang.Exception -> L20
            r1.putReqData(r2)     // Catch: java.lang.Exception -> L20
            com.bianfeng.loginlib.ui.LoginRequest$1 r2 = new com.bianfeng.loginlib.ui.LoginRequest$1     // Catch: java.lang.Exception -> L20
            r2.<init>(r4, r0)     // Catch: java.lang.Exception -> L20
            r1.addObserver(r2)     // Catch: java.lang.Exception -> L20
            r1.actionStart()     // Catch: java.lang.Exception -> L20
            goto L3b
        L20:
            r1 = move-exception
            if (r0 == 0) goto L3b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "登录请求出现的异常："
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.onLoginFail(r1)
        L3b:
            return
    }

    public static void start(android.app.Activity r1, java.util.TreeMap<java.lang.String, java.lang.String> r2) {
            com.bianfeng.loginlib.ui.LoginRequest r0 = new com.bianfeng.loginlib.ui.LoginRequest
            r0.<init>(r1, r2)
            return
    }
}
