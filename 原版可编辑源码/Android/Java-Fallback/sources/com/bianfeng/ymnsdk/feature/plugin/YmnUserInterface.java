package com.bianfeng.ymnsdk.feature.plugin;

public abstract class YmnUserInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper implements com.bianfeng.ymnsdk.feature.protocol.IUserFeature, com.bianfeng.ymnsdk.YmnCode {
    public YmnUserInterface() {
            r0 = this;
            r0.<init>()
            return
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
    public com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo getUserInfo() {
            r2 = this;
            java.util.Map r0 = r2.getLoginedData()     // Catch: java.lang.Exception -> L11
            java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r0)     // Catch: java.lang.Exception -> L11
            java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo> r1 = com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo.class
            java.lang.Object r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.fromJson(r0, r1)     // Catch: java.lang.Exception -> L11
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = (com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo) r0     // Catch: java.lang.Exception -> L11
            return r0
        L11:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }

    @Override
    public void hideToolBar() {
            r0 = this;
            return
    }

    @Override
    public boolean isLogined() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void logout() {
            r0 = this;
            return
    }

    @Override
    public void onInit(android.content.Context r2) {
            r1 = this;
            super.onInit(r2)
            r0 = 1
            r1.setIniting(r0)
            return
    }

    @Override
    public void sendResult(int r1, java.lang.String r2) {
            r0 = this;
            r0.setInitFlagsByReturnCode(r1)
            super.sendResult(r1, r2)
            return
    }

    @Override
    public void sendResultWithoutInterceptors(int r1, java.lang.String r2) {
            r0 = this;
            r0.setInitFlagsByReturnCode(r1)
            super.sendResultWithoutInterceptors(r1, r2)
            return
    }

    protected void setInitFlagsByReturnCode(int r3) {
            r2 = this;
            r0 = 0
            r1 = 100
            if (r3 != r1) goto Lc
            r2.setIniting(r0)
            r1 = 1
            r2.setInited(r1)
        Lc:
            r1 = 101(0x65, float:1.42E-43)
            if (r3 != r1) goto L16
            r2.setIniting(r0)
            r2.setInited(r0)
        L16:
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
}
