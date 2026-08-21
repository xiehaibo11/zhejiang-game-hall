package com.bianfeng.platform;

@java.lang.Deprecated
public class UserInterfaceFix extends com.bianfeng.platform.UserInterface {
    protected static com.bianfeng.platform.PlatformSdkListener listener;
    protected android.app.Activity activity;


    static {
            com.bianfeng.platform.UserInterfaceFix$1 r0 = new com.bianfeng.platform.UserInterfaceFix$1
            r0.<init>()
            com.bianfeng.platform.UserInterfaceFix.listener = r0
            return
    }

    public UserInterfaceFix() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.platform.PlatformSdkListener getListener() {
            com.bianfeng.platform.PlatformSdkListener r0 = com.bianfeng.platform.UserInterfaceFix.listener
            return r0
    }

    @Override
    public void callFunction(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public void callFunction(java.lang.String r1, java.lang.String[] r2) {
            r0 = this;
            return
    }

    @Override
    public java.lang.String callFunctionWithResult(java.lang.String r2, java.lang.String... r3) {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void enterPlatform() {
            r0 = this;
            return
    }

    @Override
    public void exit() {
            r0 = this;
            return
    }

    @Override
    public java.lang.Object getExt() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getExtData() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getGid() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getPid() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getSessionId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getUid() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getUserId() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo getUserInfo() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getUserName() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void hideToolBar() {
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
    public boolean isLogined() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isSupportFunction(java.lang.String r2) {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void login() {
            r0 = this;
            return
    }

    @Override
    public void logout() {
            r0 = this;
            return
    }

    @Override
    public void release() {
            r0 = this;
            return
    }

    @Override
    public void showToolBar() {
            r0 = this;
            return
    }

    @Override
    public void submitUserInfo(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            return
    }

    @Override
    public void switchAccount() {
            r0 = this;
            return
    }

    @Override
    public void thirdLogin(com.bianfeng.platform.PlatformSdkListener r1) {
            r0 = this;
            return
    }
}
