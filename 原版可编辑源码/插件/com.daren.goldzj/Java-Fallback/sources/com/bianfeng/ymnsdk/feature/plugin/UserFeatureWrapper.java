package com.bianfeng.ymnsdk.feature.plugin;

import com.bianfeng.platform.UserWrapper;
import com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import java.util.LinkedHashMap;

public class UserFeatureWrapper implements IUserFeature, UserWrapper {
    IUserFeature a;
    YmnPluginWrapper b;
    IUserFeature.UserInfo c;
    YmnCallbackInterceptor d;

    class a implements Runnable {
        final LinkedHashMap a;
        final UserFeatureWrapper b;

        a(UserFeatureWrapper r1, LinkedHashMap r2) {
            this.b = r1;
            this.a = r2;
        }

        @Override
        public void run() {
            this.b.a.submitUserInfo(this.a);
        }
    }

    class b implements Runnable {
        final UserFeatureWrapper a;

        b(UserFeatureWrapper r1) {
            this.a = r1;
        }

        @Override
        public void run() {
            YmnDataFunUtils.getInstance().loginStart(this.a.b);
            this.a.a.login();
        }
    }

    class c extends YmnCallbackInterceptor {
        final UserFeatureWrapper a;

        c(UserFeatureWrapper r1) {
            this.a = r1;
        }

        @Override
        public void onCallBack(int r3, String r4) {
            YmnDataFunUtils.getInstance().loginSdkReturn(r3, r4);
            if (r3 != 102) goto L5;
            UserFeatureWrapper r32 = this.a;
            com.bianfeng.ymnsdk.feature.plugin.b.a(r4, r32.b, r32.d);
            return;
        L5:
            if (r3 != 107) goto L7;
        L9:
            this.a.c = null;
            super.onCallBack(r3, r4);
            return;
        L7:
            if (r3 == 115) goto L9;
            super.onCallBack(r3, r4);
        }
    }

    class d implements Runnable {
        final UserFeatureWrapper a;

        d(UserFeatureWrapper r1) {
            this.a = r1;
        }

        @Override
        public void run() {
            this.a.a.logout();
        }
    }

    class e implements Runnable {
        final UserFeatureWrapper a;

        e(UserFeatureWrapper r1) {
            this.a = r1;
        }

        @Override
        public void run() {
            this.a.a.showToolBar();
        }
    }

    class f implements Runnable {
        final UserFeatureWrapper a;

        f(UserFeatureWrapper r1) {
            this.a = r1;
        }

        @Override
        public void run() {
            this.a.a.showVerifyRealName();
        }
    }

    class g implements Runnable {
        final UserFeatureWrapper a;

        g(UserFeatureWrapper r1) {
            this.a = r1;
        }

        @Override
        public void run() {
            this.a.a.getVerifyRealNameInfo();
        }
    }

    class h implements Runnable {
        final UserFeatureWrapper a;

        h(UserFeatureWrapper r1) {
            this.a = r1;
        }

        @Override
        public void run() {
            this.a.a.getAndShowVerifyRealName();
        }
    }

    class i implements Runnable {
        final UserFeatureWrapper a;

        i(UserFeatureWrapper r1) {
            this.a = r1;
        }

        @Override
        public void run() {
            this.a.a.switchAccount();
        }
    }

    class j implements Runnable {
        final UserFeatureWrapper a;

        j(UserFeatureWrapper r1) {
            this.a = r1;
        }

        @Override
        public void run() {
            this.a.a.exit();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public UserFeatureWrapper(IUserFeature r2) {
        this.d = new c(this);
        this.a = r2;
        this.b = (YmnPluginWrapper) r2;
        this.b.addCallbackInterceptor(this.d);
    }

    public YmnPluginWrapper a() {
        return this.b;
    }

    @Override
    public void enterPlatform() {
        IUserFeature r0 = this.a;
        if (r0 == null) goto L6;
        r0.enterPlatform();
        return;
    }

    @Override
    public void exit() {
        if (this.a == null) goto L6;
        this.b.tryRunOnUiThreadOrJustRun(new j(this));
        return;
    }

    @Override
    public void getAndShowVerifyRealName() {
        if (this.a == null) goto L6;
        this.b.tryRunOnUiThreadOrJustRun(new h(this));
        return;
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        return this.c;
    }

    @Override
    public void getVerifyRealNameInfo() {
        if (this.a == null) goto L6;
        this.b.tryRunOnUiThreadOrJustRun(new g(this));
        return;
    }

    @Override
    public void hideToolBar() {
        IUserFeature r0 = this.a;
        if (r0 == null) goto L6;
        r0.hideToolBar();
        return;
    }

    @Override
    public boolean isLogined() {
        IUserFeature.UserInfo r0 = this.c;
        if (r0 == null) goto L7;
        return r0.isYmnLogined();
    L7:
        if (com.bianfeng.ymnsdk.feature.plugin.b.c != null) goto L9;
        return false;
    L9:
        return r0.isYmnLogined();
    }

    @Override
    public void login() {
        this.b.tryRunOnUiThreadOrJustRun(new b(this));
    }

    @Override
    public void logout() {
        if (this.a == null) goto L6;
        this.b.tryRunOnUiThreadOrJustRun(new d(this));
        return;
    }

    @Override
    public void showToolBar() {
        if (this.a == null) goto L6;
        this.b.tryRunOnUiThreadOrJustRun(new e(this));
        return;
    }

    @Override
    public void showVerifyRealName() {
        if (this.a == null) goto L6;
        this.b.tryRunOnUiThreadOrJustRun(new f(this));
        return;
    }

    @Override
    public void submitUserInfo(LinkedHashMap<String, String> r3) {
        if (this.a == null) goto L6;
        this.b.tryRunOnUiThreadOrJustRun(new a(this, r3));
        return;
    }

    @Override
    public void switchAccount() {
        if (this.a == null) goto L6;
        this.b.tryRunOnUiThreadOrJustRun(new i(this));
        return;
    }
}
