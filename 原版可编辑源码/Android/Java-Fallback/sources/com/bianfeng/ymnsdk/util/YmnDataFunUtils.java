package com.bianfeng.ymnsdk.util;

public class YmnDataFunUtils {
    private static volatile com.bianfeng.ymnsdk.util.YmnDataFunUtils ymnDataFunUtils;

    private YmnDataFunUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.ymnsdk.util.YmnDataFunUtils getInstance() {
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.ymnDataFunUtils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.util.YmnDataFunUtils> r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.ymnDataFunUtils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r1 = new com.bianfeng.ymnsdk.util.YmnDataFunUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.util.YmnDataFunUtils.ymnDataFunUtils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.ymnDataFunUtils
            return r0
    }

    public com.bianfeng.ymnsdk.utilslib.appinfo.AppContext getAppContext() {
            r1 = this;
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            return r0
    }

    public java.lang.String getChannelId() {
            r2 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getChannelId()     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    public java.lang.String getDeviceId() {
            r1 = this;
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = r1.getDeviceInfo()
            java.lang.String r0 = r0.getDeviceId()
            return r0
    }

    public com.bianfeng.ymnsdk.utilslib.device.DeviceInfo getDeviceInfo() {
            r1 = this;
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            return r0
    }

    public java.lang.String getGroupId() {
            r2 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getGroupId()     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    public java.lang.String getInitTrace() {
            r2 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.getOriginTrace()     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    public java.lang.String getLoginTrace() {
            r2 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.getLoginTrace()     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    public java.lang.String getPayTrace() {
            r2 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.getPayTrace()     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.String r1 = ""
            return r1
    }

    public com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils getPlatformUtils() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            return r0
    }

    public void initActivity(android.app.Activity r1) {
            r0 = this;
            r0.onCreate(r1)
            return
    }

    public void initContext(android.content.Context r4) {
            r3 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r0 = r3.getPlatformUtils()
            java.lang.String r1 = com.bianfeng.ymnsdk.YmnSdk.getVersion()
            r0.setYmnsdkVer(r1)
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getDataFunUrl()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "上抛的url---"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L30
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r1 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()
            r1.setPostUrl(r0)
        L30:
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r1 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()
            r1.onInit(r4)
            return
    }

    public void initLogin(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r6) {
            r5 = this;
            r0 = 0
            java.lang.String r1 = r6.getPluginId()     // Catch: java.lang.Exception -> Lb
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> Lb
            r0 = r1
            goto Lf
        Lb:
            r1 = move-exception
            r1.printStackTrace()
        Lf:
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r1 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = r6.getSdkVersion()     // Catch: java.lang.Exception -> L30
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L30
            r3.<init>()     // Catch: java.lang.Exception -> L30
            int r4 = r6.getPluginVersion()     // Catch: java.lang.Exception -> L30
            r3.append(r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = ""
            r3.append(r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L30
            r1.setLoginPlatformInfo(r0, r2, r3)     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r1 = move-exception
            r1.printStackTrace()
        L34:
            return
    }

    public void initSdkResturn(int r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L8
            r0.initSdkReturn(r2, r3)     // Catch: java.lang.Exception -> L8
            goto Lc
        L8:
            r0 = move-exception
            r0.printStackTrace()
        Lc:
            return
    }

    public void loginCustomCallEvent(java.lang.Integer r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> Lc
            r0.loginCustomCallEvent(r2, r3, r4)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void loginCustomReturnEvent(java.lang.Integer r2, java.lang.Integer r3, java.lang.String r4) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> Lc
            r0.loginCustomReturnEvent(r2, r3, r4)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void loginFinishEvent(int r3, java.lang.String r4) {
            r2 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L10
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> L10
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L10
            r0.loginFinishEvent(r1, r4)     // Catch: java.lang.Exception -> L10
            goto L14
        L10:
            r0 = move-exception
            r0.printStackTrace()
        L14:
            return
    }

    public void loginNewRequest(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "YmnDataFunUtils loginNewRequest"
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L11
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L11
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> L11
            r0.loginNewRequestEvent(r2)     // Catch: java.lang.Exception -> L11
            goto L15
        L11:
            r0 = move-exception
            r0.printStackTrace()
        L15:
            return
    }

    public void loginNewResponseEvent(int r5, java.lang.String r6) {
            r4 = this;
            r0 = 118(0x76, float:1.65E-43)
            if (r5 == r0) goto L9
            r0 = 119(0x77, float:1.67E-43)
            if (r5 == r0) goto La
            goto L37
        L9:
            r5 = 0
        La:
            java.lang.String r0 = "YmnDataFunUtils loginNewResponseEvent"
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L33
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L33
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> L33
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L33
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L33
            r2.<init>()     // Catch: java.lang.Exception -> L33
            r2.append(r5)     // Catch: java.lang.Exception -> L33
            java.lang.String r3 = "|"
            r2.append(r3)     // Catch: java.lang.Exception -> L33
            r2.append(r6)     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L33
            r0.loginNewResponseEvent(r1, r2)     // Catch: java.lang.Exception -> L33
            goto L37
        L33:
            r0 = move-exception
            r0.printStackTrace()
        L37:
            return
    }

    public void loginOldRequestCheckEvent(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmnDataFunUtils loginOldRequestCheckEvent|"
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> L28
            r0.loginOldRequestCheckEvent(r3)     // Catch: java.lang.Exception -> L28
            goto L2c
        L28:
            r0 = move-exception
            r0.printStackTrace()
        L2c:
            return
    }

    public void loginOldRequestEvent(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "YmnDataFunUtils loginOldRequestEvent"
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L11
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L11
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> L11
            r0.loginOldRequestEvent(r2)     // Catch: java.lang.Exception -> L11
            goto L15
        L11:
            r0 = move-exception
            r0.printStackTrace()
        L15:
            return
    }

    public void loginOldResponseCheckEvent(java.lang.Integer r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmnDataFunUtils loginOldResponseCheckEvent|"
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> L28
            r0.loginOldResponseCheckEvent(r3, r4)     // Catch: java.lang.Exception -> L28
            goto L2c
        L28:
            r0 = move-exception
            r0.printStackTrace()
        L2c:
            return
    }

    public void loginOldResponseEvent(int r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = ""
            r1 = 102(0x66, float:1.43E-43)
            if (r5 == r1) goto Lb
            r1 = 105(0x69, float:1.47E-43)
            if (r5 == r1) goto Lc
            goto L35
        Lb:
            r5 = 0
        Lc:
            java.lang.String r1 = "YmnDataFunUtils loginOldResponseEvent"
            com.bianfeng.ymnsdk.util.Logger.i(r1)     // Catch: java.lang.Exception -> L31
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r1 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L31
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r1 = r1.getLoginEvent()     // Catch: java.lang.Exception -> L31
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L31
            r2.<init>()     // Catch: java.lang.Exception -> L31
            r2.append(r5)     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = "|"
            r2.append(r3)     // Catch: java.lang.Exception -> L31
            r2.append(r6)     // Catch: java.lang.Exception -> L31
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L31
            r1.loginOldResponseEvent(r5, r2, r0, r0)     // Catch: java.lang.Exception -> L31
            goto L35
        L31:
            r0 = move-exception
            r0.printStackTrace()
        L35:
            return
    }

    public void loginSdkReturn(int r3, java.lang.String r4) {
            r2 = this;
            r0 = 102(0x66, float:1.43E-43)
            if (r3 == r0) goto Ld
            r0 = 105(0x69, float:1.47E-43)
            if (r3 == r0) goto Le
            r0 = 106(0x6a, float:1.49E-43)
            if (r3 == r0) goto Le
            goto L3e
        Ld:
            r3 = 0
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3a
            r0.<init>()     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = "YmnDataFunUtils loginSdkReturn"
            r0.append(r1)     // Catch: java.lang.Exception -> L3a
            r0.append(r4)     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = "|"
            r0.append(r1)     // Catch: java.lang.Exception -> L3a
            r0.append(r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L3a
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L3a
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L3a
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> L3a
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L3a
            r0.loginSdkReturnEvent(r1, r4)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r0 = move-exception
            r0.printStackTrace()
        L3e:
            return
    }

    public void loginStart() {
            r1 = this;
            java.lang.String r0 = "YmnDataFunUtils loginStart"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L11
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> L11
            r0.loginStartEvent()     // Catch: java.lang.Exception -> L11
            goto L15
        L11:
            r0 = move-exception
            r0.printStackTrace()
        L15:
            return
    }

    public void loginStart(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r2) {
            r1 = this;
            java.lang.String r0 = "YmnDataFunUtils loginStart"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            r1.initLogin(r2)
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L14
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = r0.getLoginEvent()     // Catch: java.lang.Exception -> L14
            r0.loginStartEvent()     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            return
    }

    public void onCreate(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "YmnDataFunUtils onCreate"
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r0 = move-exception
            r0.printStackTrace()
        La:
            return
    }

    public void onDestroy() {
            r1 = this;
            boolean r0 = com.bianfeng.ymnsdk.util.YmnUtilsdk.isAgreeprivacy()
            if (r0 == 0) goto L12
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Le
            r0.onDestroy()     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r0 = move-exception
            r0.printStackTrace()
        L12:
            return
    }

    public void onPause() {
            r1 = this;
            boolean r0 = com.bianfeng.ymnsdk.util.YmnUtilsdk.isAgreeprivacy()
            if (r0 == 0) goto L12
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Le
            r0.onPause()     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r0 = move-exception
            r0.printStackTrace()
        L12:
            return
    }

    public void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            return
    }

    public void onResume() {
            r1 = this;
            boolean r0 = com.bianfeng.ymnsdk.util.YmnUtilsdk.isAgreeprivacy()
            if (r0 == 0) goto L17
            java.lang.String r0 = "YmnDataFunUtils onResume"
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L13
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L13
            r0.onResume()     // Catch: java.lang.Exception -> L13
            goto L17
        L13:
            r0 = move-exception
            r0.printStackTrace()
        L17:
            return
    }

    public void payCallSdk() {
            r1 = this;
            java.lang.String r0 = "YmnDataFunUtils payCallSdk"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L11
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> L11
            r0.payCallSdkEvent()     // Catch: java.lang.Exception -> L11
            goto L15
        L11:
            r0 = move-exception
            r0.printStackTrace()
        L15:
            return
    }

    public void payCustomCallEvent(java.lang.Integer r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> Lc
            r0.payCustomCallEvent(r2, r3, r4)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void payCustomCallEvent(java.lang.Integer r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> Lc
            r0.payCustomCallEvent(r2, r3, r4, r5)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void payCustomReturnEvent(java.lang.Integer r2, java.lang.Integer r3, java.lang.String r4) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> Lc
            r0.payCustomReturnEvent(r2, r3, r4)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void payCustomReturnEvent(java.lang.Integer r2, java.lang.String r3, java.lang.Integer r4, java.lang.String r5) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> Lc
            r0.payCustomReturnEvent(r2, r3, r4, r5)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void payInit(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r6) {
            r5 = this;
            r0 = 0
            java.lang.String r1 = r6.getPluginId()     // Catch: java.lang.Exception -> Lb
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> Lb
            r0 = r1
            goto Lf
        Lb:
            r1 = move-exception
            r1.printStackTrace()
        Lf:
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r1 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = r6.getSdkVersion()     // Catch: java.lang.Exception -> L30
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L30
            r3.<init>()     // Catch: java.lang.Exception -> L30
            int r4 = r6.getPluginVersion()     // Catch: java.lang.Exception -> L30
            r3.append(r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r4 = ""
            r3.append(r4)     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L30
            r1.setPayPlatformInfo(r0, r2, r3)     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r1 = move-exception
            r1.printStackTrace()
        L34:
            return
    }

    public void payRequestNotity(java.lang.String r2) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> Lc
            r0.payRequestNotityEvent(r2)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void payRequestNotity(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> Lc
            r0.payRequestNotityEvent(r2, r3)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void payRequestOrder(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmnDataFunUtils payRequestOrder"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L22
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = ""
            r0.payRequestOrderEvent(r3, r1)     // Catch: java.lang.Exception -> L22
            goto L26
        L22:
            r0 = move-exception
            r0.printStackTrace()
        L26:
            return
    }

    public void payRequestOrderListSdkEvent() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> Lc
            r0.payRequestOrderListSdkEvent()     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void payResponseNotity(int r5, java.lang.String r6) {
            r4 = this;
            r0 = 200(0xc8, float:2.8E-43)
            if (r5 == r0) goto Ld
            r0 = 201(0xc9, float:2.82E-43)
            if (r5 == r0) goto Le
            r0 = 203(0xcb, float:2.84E-43)
            if (r5 == r0) goto Le
            goto L36
        Ld:
            r5 = 0
        Le:
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L32
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> L32
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L32
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L32
            r2.<init>()     // Catch: java.lang.Exception -> L32
            r2.append(r5)     // Catch: java.lang.Exception -> L32
            java.lang.String r3 = "|"
            r2.append(r3)     // Catch: java.lang.Exception -> L32
            r2.append(r6)     // Catch: java.lang.Exception -> L32
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L32
            r0.payResponseNotityEvent(r1, r2)     // Catch: java.lang.Exception -> L32
            goto L36
        L32:
            r0 = move-exception
            r0.printStackTrace()
        L36:
            return
    }

    public void payResponseNotity(int r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            r0 = 200(0xc8, float:2.8E-43)
            if (r5 == r0) goto Ld
            r0 = 201(0xc9, float:2.82E-43)
            if (r5 == r0) goto Le
            r0 = 203(0xcb, float:2.84E-43)
            if (r5 == r0) goto Le
            goto L36
        Ld:
            r5 = 0
        Le:
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L32
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> L32
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L32
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L32
            r2.<init>()     // Catch: java.lang.Exception -> L32
            r2.append(r5)     // Catch: java.lang.Exception -> L32
            java.lang.String r3 = "|"
            r2.append(r3)     // Catch: java.lang.Exception -> L32
            r2.append(r7)     // Catch: java.lang.Exception -> L32
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L32
            r0.payResponseNotityEvent(r1, r6, r2)     // Catch: java.lang.Exception -> L32
            goto L36
        L32:
            r0 = move-exception
            r0.printStackTrace()
        L36:
            return
    }

    public void payResponseOrder(int r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            r0 = 212(0xd4, float:2.97E-43)
            if (r5 == r0) goto L9
            switch(r5) {
                case 200: goto L8;
                case 201: goto L9;
                case 202: goto L9;
                default: goto L7;
            }
        L7:
            goto L36
        L8:
            r5 = 0
        L9:
            java.lang.String r0 = "YmnDataFunUtils payResponseOrder"
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L32
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L32
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> L32
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L32
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L32
            r2.<init>()     // Catch: java.lang.Exception -> L32
            r2.append(r5)     // Catch: java.lang.Exception -> L32
            java.lang.String r3 = "|"
            r2.append(r3)     // Catch: java.lang.Exception -> L32
            r2.append(r6)     // Catch: java.lang.Exception -> L32
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L32
            r0.payResponseOrderEvent(r1, r2, r7)     // Catch: java.lang.Exception -> L32
            goto L36
        L32:
            r0 = move-exception
            r0.printStackTrace()
        L36:
            return
    }

    public void payResponseOrderListEvent(java.lang.Integer r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> Lc
            r0.payResponseOrderListEvent(r2, r3)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void paySdkOrderEvent(java.lang.String r2) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> Lc
            r0.paySdkOrderEvent(r2)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void paySdkOrderReturnEvent(java.lang.Integer r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> Lc
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> Lc
            r0.paySdkOrderReturnEvent(r2, r3)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public void paySdkReturn(int r3, java.lang.String r4) {
            r2 = this;
            switch(r3) {
                case 200: goto L4;
                case 201: goto L5;
                case 202: goto L5;
                case 203: goto L5;
                default: goto L3;
            }
        L3:
            goto L35
        L4:
            r3 = 0
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L31
            r0.<init>()     // Catch: java.lang.Exception -> L31
            java.lang.String r1 = "YmnDataFunUtils paySdkReturn"
            r0.append(r1)     // Catch: java.lang.Exception -> L31
            r0.append(r4)     // Catch: java.lang.Exception -> L31
            java.lang.String r1 = "|"
            r0.append(r1)     // Catch: java.lang.Exception -> L31
            r0.append(r3)     // Catch: java.lang.Exception -> L31
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L31
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L31
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L31
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = r0.getPayEvent()     // Catch: java.lang.Exception -> L31
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L31
            r0.paySdkReturnEvent(r1, r4)     // Catch: java.lang.Exception -> L31
            goto L35
        L31:
            r0 = move-exception
            r0.printStackTrace()
        L35:
            return
    }

    public void pluginFinish(java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, int r14, java.lang.String r15) {
            r9 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L14
            com.bianfeng.ymnsdk.gongxiang.l r1 = r0.getPluginEvent()     // Catch: java.lang.Exception -> L14
            java.lang.String r8 = ""
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L14
            goto L15
        L14:
            r0 = move-exception
        L15:
            return
    }

    public void pluginStart(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r7 = this;
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L12
            com.bianfeng.ymnsdk.gongxiang.l r1 = r0.getPluginEvent()     // Catch: java.lang.Exception -> L12
            java.lang.String r6 = ""
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L12
            goto L13
        L12:
            r0 = move-exception
        L13:
            return
    }

    public void pluginStart(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.Object[] r12) {
            r7 = this;
            if (r12 == 0) goto L19
            int r0 = r12.length     // Catch: java.lang.Exception -> L1d
            if (r0 == 0) goto L19
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.getInstance()     // Catch: java.lang.Exception -> L1d
            com.bianfeng.ymnsdk.gongxiang.l r1 = r0.getPluginEvent()     // Catch: java.lang.Exception -> L1d
            java.lang.String r6 = java.util.Arrays.toString(r12)     // Catch: java.lang.Exception -> L1d
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L1d
            goto L1c
        L19:
            r7.pluginStart(r8, r9, r10, r11)     // Catch: java.lang.Exception -> L1d
        L1c:
            goto L1e
        L1d:
            r0 = move-exception
        L1e:
            return
    }
}
