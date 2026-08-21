package com.bianfeng.ymnsdk.feature.plugin;

import com.bianfeng.platform.UserWrapper;
import com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import java.util.LinkedHashMap;

/* JADX INFO: loaded from: classes.dex */
public class UserFeatureWrapper implements IUserFeature, UserWrapper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    IUserFeature f1444a;
    YmnPluginWrapper b;
    IUserFeature.UserInfo c;
    YmnCallbackInterceptor d = new c();

    public YmnPluginWrapper a() {
        return this.b;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public UserFeatureWrapper(IUserFeature iUserFeature) {
        this.f1444a = iUserFeature;
        this.b = (YmnPluginWrapper) iUserFeature;
        this.b.addCallbackInterceptor(this.d);
    }

    class b implements Runnable {
        b() {
        }

        @Override // java.lang.Runnable
        public void run() {
            YmnDataFunUtils.getInstance().loginStart(UserFeatureWrapper.this.b);
            UserFeatureWrapper.this.f1444a.login();
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void login() {
        this.b.tryRunOnUiThreadOrJustRun(new b());
    }

    class c extends YmnCallbackInterceptor {
        c() {
        }

        @Override // com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor, com.bianfeng.platform.PlatformSdkListener
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

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
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

        @Override // java.lang.Runnable
        public void run() {
            UserFeatureWrapper.this.f1444a.logout();
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void logout() {
        if (this.f1444a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new d());
        }
    }

    class e implements Runnable {
        e() {
        }

        @Override // java.lang.Runnable
        public void run() {
            UserFeatureWrapper.this.f1444a.showToolBar();
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void showToolBar() {
        if (this.f1444a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new e());
        }
    }

    class f implements Runnable {
        f() {
        }

        @Override // java.lang.Runnable
        public void run() {
            UserFeatureWrapper.this.f1444a.showVerifyRealName();
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void showVerifyRealName() {
        if (this.f1444a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new f());
        }
    }

    class g implements Runnable {
        g() {
        }

        @Override // java.lang.Runnable
        public void run() {
            UserFeatureWrapper.this.f1444a.getVerifyRealNameInfo();
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void getVerifyRealNameInfo() {
        if (this.f1444a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new g());
        }
    }

    class h implements Runnable {
        h() {
        }

        @Override // java.lang.Runnable
        public void run() {
            UserFeatureWrapper.this.f1444a.getAndShowVerifyRealName();
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void getAndShowVerifyRealName() {
        if (this.f1444a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new h());
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void hideToolBar() {
        IUserFeature iUserFeature = this.f1444a;
        if (iUserFeature != null) {
            iUserFeature.hideToolBar();
        }
    }

    class i implements Runnable {
        i() {
        }

        @Override // java.lang.Runnable
        public void run() {
            UserFeatureWrapper.this.f1444a.switchAccount();
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void switchAccount() {
        if (this.f1444a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new i());
        }
    }

    class j implements Runnable {
        j() {
        }

        @Override // java.lang.Runnable
        public void run() {
            UserFeatureWrapper.this.f1444a.exit();
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void exit() {
        if (this.f1444a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new j());
        }
    }

    class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ LinkedHashMap f1445a;

        a(LinkedHashMap linkedHashMap) {
            this.f1445a = linkedHashMap;
        }

        @Override // java.lang.Runnable
        public void run() {
            UserFeatureWrapper.this.f1444a.submitUserInfo(this.f1445a);
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void submitUserInfo(LinkedHashMap<String, String> data) {
        if (this.f1444a != null) {
            this.b.tryRunOnUiThreadOrJustRun(new a(data));
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public IUserFeature.UserInfo getUserInfo() {
        return this.c;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void enterPlatform() {
        IUserFeature iUserFeature = this.f1444a;
        if (iUserFeature != null) {
            iUserFeature.enterPlatform();
        }
    }
}
