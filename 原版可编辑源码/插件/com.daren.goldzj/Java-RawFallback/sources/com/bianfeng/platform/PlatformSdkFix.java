package com.bianfeng.platform;

@java.lang.Deprecated
public class PlatformSdkFix extends com.bianfeng.platform.PlatformSdk {
    protected static com.bianfeng.platform.PlatformSdkListener listener;
    protected android.app.Activity activity;


    static {
            com.bianfeng.platform.PlatformSdkFix$1 r0 = new com.bianfeng.platform.PlatformSdkFix$1
            r0.<init>()
            com.bianfeng.platform.PlatformSdkFix.listener = r0
            return
    }

    public PlatformSdkFix() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.platform.PlatformSdkListener getListener() {
            com.bianfeng.platform.PlatformSdkListener r0 = com.bianfeng.platform.PlatformSdkFix.listener
            return r0
    }

    @Override
    public void dismissProgress() {
            r0 = this;
            return
    }

    @Override
    public java.lang.String getPlatformId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getPlatformName() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getPlatformVersion() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected void hookSelf(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void init(android.app.Activity r1) {
            r0 = this;
            r0.activity = r1
            return
    }

    @Override
    public boolean isDebugMode() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected void loadProperties() {
            r0 = this;
            return
    }

    @Override
    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            return
    }

    @Override
    public void onNewIntent(android.content.Intent r1) {
            r0 = this;
            return
    }

    @Override
    public void onPause() {
            r0 = this;
            return
    }

    @Override
    public void onRestart() {
            r0 = this;
            return
    }

    @Override
    public void onResume() {
            r0 = this;
            return
    }

    @Override
    public void onStart() {
            r0 = this;
            return
    }

    @Override
    public void onStop() {
            r0 = this;
            return
    }

    @Override
    public void release() {
            r0 = this;
            return
    }

    @Override
    public void setDebugMode(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public void showProgress() {
            r0 = this;
            return
    }
}
