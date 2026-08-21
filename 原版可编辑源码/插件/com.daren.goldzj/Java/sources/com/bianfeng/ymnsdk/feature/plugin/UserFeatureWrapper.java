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

    class b implements Runnable {
        b() {
        }

        @Override
        public void run() {
            YmnDataFunUtils.getInstance().loginStart(UserFeatureWrapper.this.b);
            UserFeatureWrapper.this.a.login();
        }
    }

    class c extends YmnCallbackInterceptor {
        c() {
        }

        @Override
        public void onCallBack(int i, String str) {
            YmnDataFunUtils.getInstance().loginSdkReturn(i, str);
            if (i == 102) {
                UserFeatureWrapper userFeatureWrapper = UserFeatureWrapper.this;
                com.bianfeng.ymnsdk.feature.plugin.b.a(str, userFeatureWrapper.b, userFeatureWrapper.d);
            } else if (i != 107 && i != 115) {
                super.onCallBack(i, str);
            } else {
                UserFeatureWrapper.this.c = null;
                super.onCallBack(i, str);
            }
        }
    }

    class d implements Runnable {
        d() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.logout();
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

    class f implements Runnable {
        f() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.showVerifyRealName();
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

    class h implements Runnable {
        h() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.getAndShowVerifyRealName();
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

    class j implements Runnable {
        j() {
        }

        @Override
        public void run() {
            UserFeatureWrapper.this.a.exit();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public UserFeatureWrapper(IUserFeature iUserFeature) {
        this.a = iUserFeature;
        this.b = (YmnPluginWrapper) iUserFeature;
        this.b.addCallbackInterceptor(this.d);
    }

    public YmnPluginWrapper a() {
        return this.b;
    }

    @Override
    public void enterPlatform() {
        IUserFeature iUserFeature = this.a;
        if (iUserFeature != null) {
            iUserFeature.enterPlatform();
        }
    }

    @Override
    public void exit() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new j());
        }
    }

    @Override
    public void getAndShowVerifyRealName() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new h());
        }
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        return this.c;
    }

    @Override
    public void getVerifyRealNameInfo() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new g());
        }
    }

    @Override
    public void hideToolBar() {
        IUserFeature iUserFeature = this.a;
        if (iUserFeature != null) {
            iUserFeature.hideToolBar();
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

    @Override
    public void login() {
        this.b.tryRunOnUiThreadOrJustRun(new b());
    }

    @Override
    public void logout() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new d());
        }
    }

    @Override
    public void showToolBar() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new e());
        }
    }

    @Override
    public void showVerifyRealName() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new f());
        }
    }

    @Override
    public void submitUserInfo(LinkedHashMap<String, String> linkedHashMap) {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new a(linkedHashMap));
        }
    }

    @Override
    public void switchAccount() {
        if (this.a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new i());
        }
    }
}
