package com.bianfeng.ymnsdk.feature.plugin;

@java.lang.Deprecated
public class FixExcutorInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper implements com.bianfeng.ymnsdk.feature.protocol.IUserFeature, com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature {
    private static final java.lang.String TEXT = "waiting";
    private com.bianfeng.platform.PaymentInterface paymentInterface;
    private com.bianfeng.platform.PlatformSdk platformSdk;
    private com.bianfeng.platform.UserInterface userInterface;

    class a implements com.bianfeng.platform.PlatformSdkListener {
        final com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface a;

        a(com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onCallBack(int r2, java.lang.String r3) {
                r1 = this;
                com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface r0 = r1.a
                r0.sendResult(r2, r3)
                return
        }
    }

    class b implements com.bianfeng.platform.PlatformSdkListener {
        final com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface a;

        b(com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onCallBack(int r2, java.lang.String r3) {
                r1 = this;
                com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface r0 = r1.a
                r0.sendResult(r2, r3)
                return
        }
    }

    public FixExcutorInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    public boolean available() {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public void callFunction(java.lang.String r3, java.lang.String... r4) {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L13
            if (r4 == 0) goto Le
            int r1 = r4.length
            if (r1 != 0) goto La
            goto Le
        La:
            r0.callFunction(r3, r4)
            goto L13
        Le:
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            r0.callFunction(r3)
        L13:
            super.callFunction(r3, r4)
            return
    }

    @Override
    public void enterPlatform() {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L9
            java.lang.String r1 = "enterPlatform"
            r0.callFunction(r1)
        L9:
            return
    }

    @Override
    public void exit() {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L9
            java.lang.String r1 = "exit"
            r0.callFunction(r1)
        L9:
            return
    }

    @Override
    public void getAndShowVerifyRealName() {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L9
            java.lang.String r1 = "get_show_verify_realname"
            r0.callFunction(r1)
        L9:
            return
    }

    @Override
    public java.lang.String getOrderId() {
            r1 = this;
            com.bianfeng.platform.PaymentInterface r0 = r1.paymentInterface
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getOrderId()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getPlatformId()
            return r0
        L9:
            java.lang.String r0 = "waiting"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getPlatformName()
            return r0
        L9:
            java.lang.String r0 = "waiting"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getPlatformVersion()
            return r0
        L9:
            java.lang.String r0 = "waiting"
            return r0
    }

    @Override
    public com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo getUserInfo() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void getVerifyRealNameInfo() {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L9
            java.lang.String r1 = "get_verify_realname_info"
            r0.callFunction(r1)
        L9:
            return
    }

    @Override
    public void hideToolBar() {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L9
            java.lang.String r1 = "hideToolBar"
            r0.callFunction(r1)
        L9:
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
            com.bianfeng.platform.UserInterface r0 = r1.userInterface
            if (r0 == 0) goto L9
            boolean r0 = r0.isSupportFunction(r2)
            return r0
        L9:
            boolean r0 = super.isSupportFunction(r2)
            return r0
    }

    @Override
    public void login() {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto Lc
            com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface$a r1 = new com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface$a
            r1.<init>(r2)
            r0.thirdLogin(r1)
        Lc:
            return
    }

    @Override
    public void logout() {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L9
            java.lang.String r1 = "logout"
            r0.callFunction(r1)
        L9:
            return
    }

    @Override
    public void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L7
            r0.onActivityResult(r2, r3, r4)
        L7:
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L7
            r0.release()
        L7:
            com.bianfeng.platform.UserInterface r0 = r1.userInterface
            if (r0 == 0) goto Le
            r0.release()
        Le:
            com.bianfeng.platform.PaymentInterface r0 = r1.paymentInterface
            if (r0 == 0) goto L15
            r0.release()
        L15:
            return
    }

    @Override
    public void onInit(android.content.Context r3) {
            r2 = this;
            super.onInit(r3)
            com.bianfeng.platform.PlatformSdk r0 = r2.platformSdk
            if (r0 == 0) goto Ld
            r1 = r3
            android.app.Activity r1 = (android.app.Activity) r1
            r0.init(r1)
        Ld:
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L17
            r1 = r3
            android.app.Activity r1 = (android.app.Activity) r1
            r0.init(r1)
        L17:
            com.bianfeng.platform.PaymentInterface r0 = r2.paymentInterface
            if (r0 == 0) goto L21
            r1 = r3
            android.app.Activity r1 = (android.app.Activity) r1
            r0.init(r1)
        L21:
            return
    }

    @Override
    public void onNewIntent(android.content.Intent r2) {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L7
            r0.onNewIntent(r2)
        L7:
            return
    }

    @Override
    public void onPause() {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L7
            r0.onPause()
        L7:
            return
    }

    @Override
    public void onRestart() {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L7
            r0.onRestart()
        L7:
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L7
            r0.onResume()
        L7:
            return
    }

    @Override
    public void onStart() {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L7
            r0.onStart()
        L7:
            return
    }

    @Override
    public void onStop() {
            r1 = this;
            com.bianfeng.platform.PlatformSdk r0 = r1.platformSdk
            if (r0 == 0) goto L7
            r0.onStop()
        L7:
            return
    }

    @Override
    public void pay(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            com.bianfeng.platform.PaymentInterface r0 = r2.paymentInterface
            if (r0 == 0) goto Lc
            com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface$b r1 = new com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface$b
            r1.<init>(r2)
            r0.thirdPay(r3, r1)
        Lc:
            return
    }

    @Override
    public void prePay(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            return
    }

    public void setPaymentInterface(com.bianfeng.platform.PaymentInterface r1) {
            r0 = this;
            r0.paymentInterface = r1
            return
    }

    public void setPlatformSdk(com.bianfeng.platform.PlatformSdk r1) {
            r0 = this;
            r0.platformSdk = r1
            return
    }

    public void setUserInterface(com.bianfeng.platform.UserInterface r1) {
            r0 = this;
            r0.userInterface = r1
            return
    }

    @Override
    public void showToolBar() {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L9
            java.lang.String r1 = "showToolBar"
            r0.callFunction(r1)
        L9:
            return
    }

    @Override
    public void showVerifyRealName() {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L9
            java.lang.String r1 = "show_verify_realname"
            r0.callFunction(r1)
        L9:
            return
    }

    @Override
    public void submitUserInfo(java.util.LinkedHashMap<java.lang.String, java.lang.String> r6) {
            r5 = this;
            com.bianfeng.platform.UserInterface r0 = r5.userInterface
            if (r0 == 0) goto L38
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Set r1 = r6.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L11:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getValue()
            r0.add(r3)
            goto L11
        L25:
            int r1 = r0.size()
            java.lang.String[] r1 = new java.lang.String[r1]
            com.bianfeng.platform.UserInterface r2 = r5.userInterface
            java.lang.Object[] r3 = r0.toArray(r1)
            java.lang.String[] r3 = (java.lang.String[]) r3
            java.lang.String r4 = "submitUserInfo"
            r2.callFunction(r4, r3)
        L38:
            return
    }

    @Override
    public void switchAccount() {
            r2 = this;
            com.bianfeng.platform.UserInterface r0 = r2.userInterface
            if (r0 == 0) goto L9
            java.lang.String r1 = "accountSwitch"
            r0.callFunction(r1)
        L9:
            return
    }
}
