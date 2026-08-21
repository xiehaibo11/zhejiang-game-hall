package com.bianfeng.platform;

@java.lang.Deprecated
public class PlatformSdk {
    private static com.bianfeng.platform.PlatformSdk instance;
    private static com.bianfeng.platform.PlatformSdkListener listener;
    private static com.bianfeng.ymnsdk.feature.YmnCallback ymnCallback;



    static {
            com.bianfeng.platform.PlatformSdk$1 r0 = new com.bianfeng.platform.PlatformSdk$1
            r0.<init>()
            com.bianfeng.platform.PlatformSdk.ymnCallback = r0
            return
    }

    public PlatformSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.bianfeng.platform.PlatformSdkListener access$000() {
            com.bianfeng.platform.PlatformSdkListener r0 = com.bianfeng.platform.PlatformSdk.listener
            return r0
    }

    static com.bianfeng.ymnsdk.feature.YmnCallback access$100() {
            com.bianfeng.ymnsdk.feature.YmnCallback r0 = com.bianfeng.platform.PlatformSdk.ymnCallback
            return r0
    }

    @java.lang.Deprecated
    public static com.bianfeng.platform.PlatformSdk getInstance() {
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.instance
            if (r0 != 0) goto Lb
            com.bianfeng.platform.PlatformSdk r0 = new com.bianfeng.platform.PlatformSdk
            r0.<init>()
            com.bianfeng.platform.PlatformSdk.instance = r0
        Lb:
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.instance
            return r0
    }

    public static com.bianfeng.platform.PlatformSdkListener getListener() {
            com.bianfeng.platform.PlatformSdkListener r0 = com.bianfeng.platform.PlatformSdk.listener
            return r0
    }

    @java.lang.Deprecated
    public static java.lang.String getPropertie(java.lang.String r0) {
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.YmnProperties.getValue(r0)
            return r0
    }

    @java.lang.Deprecated
    public static void runOnUiThread(java.lang.Runnable r0) {
            com.bianfeng.ymnsdk.YmnSdkWrapper.runOnUiThread(r0)
            return
    }

    @java.lang.Deprecated
    public static void setListener(com.bianfeng.platform.PlatformSdkListener r0) {
            com.bianfeng.platform.PlatformSdk.listener = r0
            com.bianfeng.platform.UserInterface.setListener(r0)
            com.bianfeng.platform.PaymentInterface.setListener(r0)
            return
    }

    @java.lang.Deprecated
    public void dismissProgress() {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public java.lang.String getPlatformId() {
            r1 = this;
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.getUserDefault()
            if (r0 == 0) goto Lf
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r0.a()
            java.lang.String r0 = r0.getPluginId()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String getPlatformName() {
            r1 = this;
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.getUserDefault()
            if (r0 == 0) goto Lf
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r0.a()
            java.lang.String r0 = r0.getPluginName()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String getPlatformVersion() {
            r1 = this;
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.getUserDefault()
            if (r0 == 0) goto Lf
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r0.a()
            java.lang.String r0 = r0.getSdkVersion()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.YmnSdk.getVersion()
            return r0
    }

    @java.lang.Deprecated
    protected void hookSelf(android.app.Activity r1) {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void init(android.app.Activity r2) {
            r1 = this;
            com.bianfeng.platform.PlatformSdk$2 r0 = new com.bianfeng.platform.PlatformSdk$2
            r0.<init>(r1, r2)
            r2.runOnUiThread(r0)
            return
    }

    @java.lang.Deprecated
    public boolean isDebugMode() {
            r1 = this;
            r0 = 0
            return r0
    }

    @java.lang.Deprecated
    protected void loadProperties() {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkWrapper.onActivityResult(r1, r2, r3)
            return
    }

    @java.lang.Deprecated
    public void onNewIntent(android.content.Intent r1) {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkWrapper.onNewIntent(r1)
            return
    }

    @java.lang.Deprecated
    public void onPause() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkWrapper.onPause()
            return
    }

    @java.lang.Deprecated
    public void onRestart() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkWrapper.onRestart()
            return
    }

    @java.lang.Deprecated
    public void onResume() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkWrapper.onResume()
            return
    }

    @java.lang.Deprecated
    public void onStart() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkWrapper.onStart()
            return
    }

    @java.lang.Deprecated
    public void onStop() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkWrapper.onStop()
            return
    }

    @java.lang.Deprecated
    public void release() {
            r1 = this;
            com.bianfeng.ymnsdk.YmnSdkWrapper.onDestroy()
            com.bianfeng.platform.UserInterface r0 = com.bianfeng.platform.UserInterface.getInstance()
            r0.release()
            com.bianfeng.platform.PaymentInterface r0 = com.bianfeng.platform.PaymentInterface.getInstance()
            r0.release()
            return
    }

    @java.lang.Deprecated
    public void setDebugMode(boolean r1) {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkWrapper.setDebugMode(r1)
            return
    }

    @java.lang.Deprecated
    public void showProgress() {
            r0 = this;
            return
    }
}
