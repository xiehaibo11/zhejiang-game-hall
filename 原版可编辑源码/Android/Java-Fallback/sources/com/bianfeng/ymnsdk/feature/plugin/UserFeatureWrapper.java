package com.bianfeng.ymnsdk.feature.plugin;

public class UserFeatureWrapper implements com.bianfeng.ymnsdk.feature.protocol.IUserFeature, com.bianfeng.platform.UserWrapper {
    com.bianfeng.ymnsdk.feature.protocol.IUserFeature a;
    com.bianfeng.ymnsdk.feature.YmnPluginWrapper b;
    com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo c;
    com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor d;

    class a implements java.lang.Runnable {
        final java.util.LinkedHashMap a;
        final com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper b;

        a(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1, java.util.LinkedHashMap r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r2.b
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r0.a
                java.util.LinkedHashMap r1 = r2.a
                r0.submitUserInfo(r1)
                return
        }
    }

    class b implements java.lang.Runnable {
        final com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper a;

        b(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1 = r2.a
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r1.b
                r0.loginStart(r1)
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r2.a
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r0.a
                r0.login()
                return
        }
    }

    class c extends com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor {
        final com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper a;

        c(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onCallBack(int r3, java.lang.String r4) {
                r2 = this;
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                r0.loginSdkReturn(r3, r4)
                r0 = 107(0x6b, float:1.5E-43)
                if (r3 == r0) goto L2b
                r0 = 115(0x73, float:1.61E-43)
                if (r3 == r0) goto L2b
                switch(r3) {
                    case 100: goto L20;
                    case 101: goto L20;
                    case 102: goto L16;
                    default: goto L12;
                }
            L12:
                super.onCallBack(r3, r4)
                goto L34
            L16:
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r2.a
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper r1 = r0.b
                com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r0 = r0.d
                com.bianfeng.ymnsdk.feature.plugin.b.a(r4, r1, r0)
                goto L34
            L20:
                super.onCallBack(r3, r4)
                com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
                r0.initSdkResturn(r3, r4)
                goto L34
            L2b:
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r2.a
                r1 = 0
                r0.c = r1
                super.onCallBack(r3, r4)
            L34:
                return
        }
    }

    class d implements java.lang.Runnable {
        final com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper a;

        d(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r1.a
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r0.a
                r0.logout()
                return
        }
    }

    class e implements java.lang.Runnable {
        final com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper a;

        e(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r1.a
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r0.a
                r0.showToolBar()
                return
        }
    }

    class f implements java.lang.Runnable {
        final com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper a;

        f(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r1.a
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r0.a
                r0.showVerifyRealName()
                return
        }
    }

    class g implements java.lang.Runnable {
        final com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper a;

        g(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r1.a
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r0.a
                r0.getVerifyRealNameInfo()
                return
        }
    }

    class h implements java.lang.Runnable {
        final com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper a;

        h(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r1.a
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r0.a
                r0.getAndShowVerifyRealName()
                return
        }
    }

    class i implements java.lang.Runnable {
        final com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper a;

        i(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r1.a
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r0.a
                r0.switchAccount()
                return
        }
    }

    class j implements java.lang.Runnable {
        final com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper a;

        j(com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper r0 = r1.a
                com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r0.a
                r0.exit()
                return
        }
    }

    public UserFeatureWrapper(com.bianfeng.ymnsdk.feature.protocol.IUserFeature r3) {
            r2 = this;
            r2.<init>()
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$c r0 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$c
            r0.<init>(r2)
            r2.d = r0
            r2.a = r3
            r0 = r3
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = (com.bianfeng.ymnsdk.feature.YmnPluginWrapper) r0
            r2.b = r0
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r1 = r2.d
            r0.addCallbackInterceptor(r1)
            return
    }

    public com.bianfeng.ymnsdk.feature.YmnPluginWrapper a() {
            r1 = this;
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r1.b
            return r0
    }

    @Override
    public void enterPlatform() {
            r1 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r1.a
            if (r0 == 0) goto L7
            r0.enterPlatform()
        L7:
            return
    }

    @Override
    public void exit() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r2.a
            if (r0 == 0) goto Le
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$j r1 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$j
            r1.<init>(r2)
            r0.tryRunOnUiThreadOrJustRun(r1)
        Le:
            return
    }

    @Override
    public void getAndShowVerifyRealName() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r2.a
            if (r0 == 0) goto Le
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$h r1 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$h
            r1.<init>(r2)
            r0.tryRunOnUiThreadOrJustRun(r1)
        Le:
            return
    }

    @Override
    public com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo getUserInfo() {
            r1 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = r1.c
            return r0
    }

    @Override
    public void getVerifyRealNameInfo() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r2.a
            if (r0 == 0) goto Le
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$g r1 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$g
            r1.<init>(r2)
            r0.tryRunOnUiThreadOrJustRun(r1)
        Le:
            return
    }

    @Override
    public void hideToolBar() {
            r1 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r1.a
            if (r0 == 0) goto L7
            r0.hideToolBar()
        L7:
            return
    }

    @Override
    public boolean isLogined() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r0 = r2.c
            if (r0 == 0) goto L9
            boolean r0 = r0.isYmnLogined()
            return r0
        L9:
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature$UserInfo r1 = com.bianfeng.ymnsdk.feature.plugin.b.c
            if (r1 == 0) goto L12
            boolean r0 = r0.isYmnLogined()
            return r0
        L12:
            r0 = 0
            return r0
    }

    @Override
    public void login() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$b r1 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$b
            r1.<init>(r2)
            r0.tryRunOnUiThreadOrJustRun(r1)
            return
    }

    @Override
    public void logout() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r2.a
            if (r0 == 0) goto Le
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$d r1 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$d
            r1.<init>(r2)
            r0.tryRunOnUiThreadOrJustRun(r1)
        Le:
            return
    }

    @Override
    public void showToolBar() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r2.a
            if (r0 == 0) goto Le
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$e r1 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$e
            r1.<init>(r2)
            r0.tryRunOnUiThreadOrJustRun(r1)
        Le:
            return
    }

    @Override
    public void showVerifyRealName() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r2.a
            if (r0 == 0) goto Le
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$f r1 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$f
            r1.<init>(r2)
            r0.tryRunOnUiThreadOrJustRun(r1)
        Le:
            return
    }

    @Override
    public void submitUserInfo(java.util.LinkedHashMap<java.lang.String, java.lang.String> r3) {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r2.a
            if (r0 == 0) goto Le
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$a r1 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$a
            r1.<init>(r2, r3)
            r0.tryRunOnUiThreadOrJustRun(r1)
        Le:
            return
    }

    @Override
    public void switchAccount() {
            r2 = this;
            com.bianfeng.ymnsdk.feature.protocol.IUserFeature r0 = r2.a
            if (r0 == 0) goto Le
            com.bianfeng.ymnsdk.feature.YmnPluginWrapper r0 = r2.b
            com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$i r1 = new com.bianfeng.ymnsdk.feature.plugin.UserFeatureWrapper$i
            r1.<init>(r2)
            r0.tryRunOnUiThreadOrJustRun(r1)
        Le:
            return
    }
}
