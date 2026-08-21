package com.bianfeng.platform;

@java.lang.Deprecated
public class UserInterface implements com.bianfeng.ymnsdk.feature.protocol.IUserFeature {

    @java.lang.Deprecated
    public static final java.lang.String FUNCTION_DESTROY = "destroy";

    @java.lang.Deprecated
    public static final java.lang.String FUNCTION_SUBMIT_DATA = "submitData";
    private static com.bianfeng.platform.UserInterface instance;
    protected static com.bianfeng.platform.PlatformSdkListener listener;
    private static com.bianfeng.ymnsdk.feature.YmnCallback ymnCallback;


    static {
            com.bianfeng.platform.UserInterface$1 r0 = new com.bianfeng.platform.UserInterface$1
            r0.<init>()
            com.bianfeng.platform.UserInterface.ymnCallback = r0
            return
    }

    public UserInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static com.bianfeng.platform.UserInterface getInstance() {
            com.bianfeng.platform.UserInterface r0 = com.bianfeng.platform.UserInterface.instance
            if (r0 != 0) goto Lb
            com.bianfeng.platform.UserInterface r0 = new com.bianfeng.platform.UserInterface
            r0.<init>()
            com.bianfeng.platform.UserInterface.instance = r0
        Lb:
            com.bianfeng.platform.UserInterface r0 = com.bianfeng.platform.UserInterface.instance
            return r0
    }

    @java.lang.Deprecated
    public static com.bianfeng.platform.PlatformSdkListener getListener() {
            com.bianfeng.platform.PlatformSdkListener r0 = com.bianfeng.platform.UserInterface.listener
            return r0
    }

    @java.lang.Deprecated
    public static void setListener(com.bianfeng.platform.PlatformSdkListener r0) {
            com.bianfeng.platform.UserInterface.listener = r0
            return
    }

    @java.lang.Deprecated
    public void callFunction(java.lang.String r1) {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.callFunction(r1)
            return
    }

    @java.lang.Deprecated
    public void callFunction(java.lang.String r1, java.lang.String[] r2) {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkPaymentWrapper.callFunction(r1, r2)
            return
    }

    @java.lang.Deprecated
    public java.lang.String callFunctionWithResult(java.lang.String r2, java.lang.String... r3) {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.callFunctionWithResult(r2, r3)
            return r0
    }

    @Override
    public void enterPlatform() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.enterPlatform()
            return
    }

    @Override
    public void exit() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.exit()
            return
    }

    @Override
    public void getAndShowVerifyRealName() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.getAndShowVerifyRealName()
            return
    }

    @java.lang.Deprecated
    public java.lang.Object getExt() {
            r1 = this;
            r0 = 0
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String getExtData() {
            r1 = this;
            r0 = 0
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String getGid() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.getUserInfo()
            if (r0 == 0) goto Lb
            java.lang.String r1 = r0.getPlatformUserId()
            return r1
        Lb:
            r1 = 0
            return r1
    }

    @java.lang.Deprecated
    public java.lang.String getPid() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.getUserInfo()
            if (r0 == 0) goto Lb
            java.lang.String r1 = r0.getYmnUserIdInt()
            return r1
        Lb:
            r1 = 0
            return r1
    }

    @java.lang.Deprecated
    public java.lang.String getSessionId() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.getUserInfo()
            if (r0 == 0) goto Lb
            java.lang.String r1 = r0.getYmnSession()
            return r1
        Lb:
            r1 = 0
            return r1
    }

    @java.lang.Deprecated
    public java.lang.String getUid() {
            r1 = this;
            java.lang.String r0 = r1.getPid()
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String getUserId() {
            r1 = this;
            java.lang.String r0 = r1.getGid()
            return r0
    }

    @Override
    public com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo getUserInfo() {
            r1 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.getUserInfo()
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String getUserName() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.getUserInfo()
            if (r0 == 0) goto Lb
            java.lang.String r1 = r0.getUserName()
            return r1
        Lb:
            r1 = 0
            return r1
    }

    @Override
    public void getVerifyRealNameInfo() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.getVerifyRealNameInfo()
            return
    }

    @Override
    public void hideToolBar() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.hideToolBar()
            return
    }

    @java.lang.Deprecated
    public void init(android.app.Activity r2) {
            r1 = this;
            com.bianfeng.ymnsdk.feature.YmnCallback r0 = com.bianfeng.platform.UserInterface.ymnCallback
            com.bianfeng.ymnsdk.YmnSdkWrapper.registCallback(r0)
            return
    }

    @Override
    @java.lang.Deprecated
    public boolean isLogined() {
            r1 = this;
            boolean r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.isLogined()
            return r0
    }

    @java.lang.Deprecated
    public boolean isSupportFunction(java.lang.String r2) {
            r1 = this;
            boolean r0 = com.bianfeng.ymnsdk.YmnSdkUserWrapper.isSupportFunction(r2)
            return r0
    }

    @Override
    @java.lang.Deprecated
    public void login() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.login()
            return
    }

    @Override
    public void logout() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.logout()
            return
    }

    @java.lang.Deprecated
    public void release() {
            r0 = this;
            return
    }

    @Override
    public void showToolBar() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.showToolBar()
            return
    }

    @Override
    public void showVerifyRealName() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.showVerifyRealName()
            return
    }

    @Override
    public void submitUserInfo(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.submitUserInfo(r1)
            return
    }

    @Override
    public void switchAccount() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdkUserWrapper.switchAccount()
            return
    }

    @java.lang.Deprecated
    public void thirdLogin(com.bianfeng.platform.PlatformSdkListener r1) {
            r0 = this;
            return
    }
}
