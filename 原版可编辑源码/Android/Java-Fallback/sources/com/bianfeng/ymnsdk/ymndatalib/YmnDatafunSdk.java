package com.bianfeng.ymnsdk.ymndatalib;

public class YmnDatafunSdk {
    public static volatile com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk datafunSdk;
    public boolean isInited;

    public YmnDatafunSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk getInstance() {
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.datafunSdk
            if (r0 != 0) goto L13
            java.lang.Class<com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk> r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r1 = new com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.datafunSdk = r1     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            goto L13
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
        L13:
            com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk r0 = com.bianfeng.ymnsdk.ymndatalib.YmnDatafunSdk.datafunSdk
            return r0
    }

    public java.lang.String getInitTrace() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()
            java.lang.String r0 = r0.getOriginTrace()
            return r0
    }

    public com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap getLoginEvent() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap.getInstance()
            return r0
    }

    public java.lang.String getLoginTrace() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()
            java.lang.String r0 = r0.getLoginTrace()
            return r0
    }

    public com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap getOtherEvent() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.getInstance()
            return r0
    }

    public com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap getPayEvent() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap.getInstance()
            return r0
    }

    public java.lang.String getPayTrace() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()
            java.lang.String r0 = r0.getPayTrace()
            return r0
    }

    public com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils getPlatformUtils() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            return r0
    }

    public com.bianfeng.ymnsdk.gongxiang.l getPluginEvent() {
            r1 = this;
            com.bianfeng.ymnsdk.gongxiang.l r0 = com.bianfeng.ymnsdk.gongxiang.l.a()
            return r0
    }

    public void initSdkReturn(int r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "YmnDatafunSdk onResume"
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.getInstance()
            r0.initSdkReturn(r2, r3)
            return
    }

    public void onCreate() {
            r1 = this;
            java.lang.String r0 = "YmnDatafunSdk onCreate"
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            return
    }

    public void onDestroy() {
            r1 = this;
            java.lang.String r0 = "YmnDatafunSdk onDestroy"
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.getInstance()
            r0.appOnDestroy()
            return
    }

    public void onInit(android.content.Context r2) {
            r1 = this;
            boolean r0 = r1.isInited
            if (r0 != 0) goto L26
            r0 = 1
            r1.isInited = r0
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.initContext(r2)
            com.bianfeng.datafunsdk.PostDatalib r0 = com.bianfeng.datafunsdk.PostDatalib.getInstance()
            r0.init(r2)
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.getInstance()
            r0.appInstall()
            com.bianfeng.ymnsdk.ymndatalib.h r0 = com.bianfeng.ymnsdk.ymndatalib.h.b()
            r0.a()
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.getInstance()
            r0.appStart(r2)
        L26:
            return
    }

    public void onPause() {
            r1 = this;
            java.lang.String r0 = "YmnDatafunSdk onPause"
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.getInstance()
            r0.appOnPaues()
            return
    }

    public void onRequestPermissionsResult(android.content.Context r1) {
            r0 = this;
            return
    }

    public void onResume() {
            r1 = this;
            java.lang.String r0 = "YmnDatafunSdk onResume"
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.getInstance()
            r0.appOnResume()
            return
    }

    public void setBaseVer(java.lang.String r2) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            r0.setYmnsdkVer(r2)
            return
    }

    public void setLoginPlatformInfo(int r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "YmnDatafunSdk setLoginPlatformInfo"
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            r0.setLoginPlatformInfo(r2, r3, r4)
            return
    }

    public void setPayPlatformInfo(int r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "YmnDatafunSdk setPayPlatformInfo"
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()
            r0.getStartPayTrace()
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.getInstance()
            r0.setPayPlatformInfo(r2, r3, r4)
            return
    }

    public void setPostUrl(java.lang.String r2) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.f r0 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            r0.b(r2)
            return
    }
}
