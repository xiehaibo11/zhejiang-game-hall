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
    YmnCallbackInterceptor d = new c();

    public YmnPluginWrapper a() {
        return this.b;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public UserFeatureWrapper(IUserFeature iUserFeature) {
        this.a = iUserFeature;
        this.b = (YmnPluginWrapper) iUserFeature;
        this.b.addCallbackInterceptor(this.d);
    }

    class b implements Runnable {
        b() {
        }

        @Override
        public void run() {
            YmnDataFunUtils.getInstance().loginStart(UserFeatureWrapper.this.b);
            UserFeatureWrapper.this.a.login();
        }
    }

    @Override
    public void login() {
        this.b.tryRunOnUiThreadOrJustRun(new b());
    }

    class c extends YmnCallbackInterceptor {
        c() {
        }

        @Override
        public void onCallBack(int code, String msg) {
            YmnDataFunUtils.getInstance().loginSdkReturn(code, msg);
            if (code == 107 || code == 115) {
                UserFeatureWrapper.this.c = null;
                super.onCallBack(code, msg);
            }
            switch (code) {
                case 100:
                case 101:
                    super.onCallBack(code, msg);
                    YmnDataFunUtils.getInstance().initSdkResturn(code, msg);
                    break;
                case 102:
                    UserFeatureWrapper userFeatureWrapper = UserFeatureWrapper.this;
                    com.bianfeng.ymnsdk.feature.plugin.b.a(msg, userFeatureWrapper.b, userFeatureWrapper.d);
                    break;
                default:
                    super.onCallBack(code, msg);
                    break;
            }
        }
    }

    @Override
    public boolean isLogined() {
        IUserFeature.UserInfo userInfo = this.c;
        if (userInfo == null && com.bianfeng.ymnsdk.feature.plugin.b.c == null) {
            return false;
        }
        return userInfo.isYmnLogined();
    }

    class d implements Runnable {
        d() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.logout();
        }
    }

    @Override
    public void logout() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new d());
        }
    }

    class e implements Runnable {
        e() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.showToolBar();
        }
    }

    @Override
    public void showToolBar() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new e());
        }
    }

    class f implements Runnable {
        f() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.showVerifyRealName();
        }
    }

    @Override
    public void showVerifyRealName() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new f());
        }
    }

    class g implements Runnable {
        g() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.getVerifyRealNameInfo();
        }
    }

    @Override
    public void getVerifyRealNameInfo() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new g());
        }
    }

    class h implements Runnable {
        h() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.getAndShowVerifyRealName();
        }
    }

    @Override
    public void getAndShowVerifyRealName() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new h());
        }
    }

    @Override
    public void hideToolBar() {
        IUserFeature iUserFeature = this.a;
        if (iUserFeature != null) {
            iUserFeature.hideToolBar();
        }
    }

    class i implements Runnable {
        i() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.switchAccount();
        }
    }

    @Override
    public void switchAccount() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new i());
        }
    }

    class j implements Runnable {
        j() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.exit();
        }
    }

    @Override
    public void exit() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new j());
        }
    }

    class a implements Runnable {
        final LinkedHashMap a;

        a(LinkedHashMap linkedHashMap) {
            this.a = linkedHashMap;
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.submitUserInfo(this.a);
        }
    }

    @Override
    public void submitUserInfo(LinkedHashMap<String, String> data) {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new a(data));
        }
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        return this.c;
    }

    @Override
    public void enterPlatform() {
        IUserFeature iUserFeature = this.a;
        if (iUserFeature != null) {
            iUserFeature.enterPlatform();
        }
    }
}
