package com.bianfeng.platform;

import android.app.Activity;
import com.bianfeng.ymnsdk.YmnSdkPaymentWrapper;
import com.bianfeng.ymnsdk.YmnSdkUserWrapper;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import com.bianfeng.ymnsdk.feature.YmnCallback;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import java.util.LinkedHashMap;

@Deprecated
public class UserInterface implements IUserFeature {

    @Deprecated
    public static final String FUNCTION_DESTROY = "destroy";

    @Deprecated
    public static final String FUNCTION_SUBMIT_DATA = "submitData";
    private static UserInterface instance;
    protected static PlatformSdkListener listener;
    private static YmnCallback ymnCallback;

    static {
        ymnCallback = new 1();
    }

    public UserInterface() {
    }

    @Deprecated
    public static UserInterface getInstance() {
        if (instance != null) goto L6;
        instance = new UserInterface();
    L6:
        return instance;
    }

    @Deprecated
    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Deprecated
    public static void setListener(PlatformSdkListener r0) {
        listener = r0;
    }

    @Deprecated
    public void callFunction(String r1) {
        YmnSdkUserWrapper.callFunction(r1);
    }

    @Deprecated
    public String callFunctionWithResult(String r1, String... r2) {
        return YmnSdkWrapper.callFunctionWithResult(r1, r2);
    }

    @Override
    public void enterPlatform() {
        YmnSdkUserWrapper.enterPlatform();
    }

    @Override
    public void exit() {
        YmnSdkUserWrapper.exit();
    }

    @Override
    public void getAndShowVerifyRealName() {
        YmnSdkUserWrapper.getAndShowVerifyRealName();
    }

    @Deprecated
    public Object getExt() {
        return null;
    }

    @Deprecated
    public String getExtData() {
        return null;
    }

    @Deprecated
    public String getGid() {
        IUserFeature.UserInfo r0 = YmnSdkUserWrapper.getUserInfo();
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.getPlatformUserId();
    }

    @Deprecated
    public String getPid() {
        IUserFeature.UserInfo r0 = YmnSdkUserWrapper.getUserInfo();
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.getYmnUserIdInt();
    }

    @Deprecated
    public String getSessionId() {
        IUserFeature.UserInfo r0 = YmnSdkUserWrapper.getUserInfo();
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.getYmnSession();
    }

    @Deprecated
    public String getUid() {
        return getPid();
    }

    @Deprecated
    public String getUserId() {
        return getGid();
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        return YmnSdkUserWrapper.getUserInfo();
    }

    @Deprecated
    public String getUserName() {
        IUserFeature.UserInfo r0 = YmnSdkUserWrapper.getUserInfo();
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.getUserName();
    }

    @Override
    public void getVerifyRealNameInfo() {
        YmnSdkUserWrapper.getVerifyRealNameInfo();
    }

    @Override
    public void hideToolBar() {
        YmnSdkUserWrapper.hideToolBar();
    }

    @Deprecated
    public void init(Activity r1) {
        YmnSdkWrapper.registCallback(ymnCallback);
    }

    @Override
    @Deprecated
    public boolean isLogined() {
        return YmnSdkUserWrapper.isLogined();
    }

    @Deprecated
    public boolean isSupportFunction(String r1) {
        return YmnSdkUserWrapper.isSupportFunction(r1);
    }

    @Override
    @Deprecated
    public void login() {
        YmnSdkUserWrapper.login();
    }

    @Override
    public void logout() {
        YmnSdkUserWrapper.logout();
    }

    @Deprecated
    public void release() {
    }

    @Override
    public void showToolBar() {
        YmnSdkUserWrapper.showToolBar();
    }

    @Override
    public void showVerifyRealName() {
        YmnSdkUserWrapper.showVerifyRealName();
    }

    @Override
    public void submitUserInfo(LinkedHashMap<String, String> r1) {
        YmnSdkUserWrapper.submitUserInfo(r1);
    }

    @Override
    public void switchAccount() {
        YmnSdkUserWrapper.switchAccount();
    }

    @Deprecated
    public void thirdLogin(PlatformSdkListener r1) {
    }

    @Deprecated
    public void callFunction(String r1, String[] r2) {
        YmnSdkPaymentWrapper.callFunction(r1, r2);
    }
}
