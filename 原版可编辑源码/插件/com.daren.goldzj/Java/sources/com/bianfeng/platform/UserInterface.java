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
    private static YmnCallback ymnCallback = new YmnCallback() {
        @Override
        public void onCallBack(int i, String str) {
            PlatformSdkListener platformSdkListener = UserInterface.listener;
            if (platformSdkListener == null || platformSdkListener == PlatformSdk.getListener()) {
                return;
            }
            UserInterface.listener.onCallBack(i, str);
        }
    };

    @Deprecated
    public static UserInterface getInstance() {
        if (instance == null) {
            instance = new UserInterface();
        }
        return instance;
    }

    @Deprecated
    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Deprecated
    public static void setListener(PlatformSdkListener platformSdkListener) {
        listener = platformSdkListener;
    }

    @Deprecated
    public void callFunction(String str) {
        YmnSdkUserWrapper.callFunction(str);
    }

    @Deprecated
    public String callFunctionWithResult(String str, String... strArr) {
        return YmnSdkWrapper.callFunctionWithResult(str, strArr);
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
        IUserFeature.UserInfo userInfo = YmnSdkUserWrapper.getUserInfo();
        if (userInfo != null) {
            return userInfo.getPlatformUserId();
        }
        return null;
    }

    @Deprecated
    public String getPid() {
        IUserFeature.UserInfo userInfo = YmnSdkUserWrapper.getUserInfo();
        if (userInfo != null) {
            return userInfo.getYmnUserIdInt();
        }
        return null;
    }

    @Deprecated
    public String getSessionId() {
        IUserFeature.UserInfo userInfo = YmnSdkUserWrapper.getUserInfo();
        if (userInfo != null) {
            return userInfo.getYmnSession();
        }
        return null;
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
        IUserFeature.UserInfo userInfo = YmnSdkUserWrapper.getUserInfo();
        if (userInfo != null) {
            return userInfo.getUserName();
        }
        return null;
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
    public void init(Activity activity) {
        YmnSdkWrapper.registCallback(ymnCallback);
    }

    @Override
    @Deprecated
    public boolean isLogined() {
        return YmnSdkUserWrapper.isLogined();
    }

    @Deprecated
    public boolean isSupportFunction(String str) {
        return YmnSdkUserWrapper.isSupportFunction(str);
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
    public void submitUserInfo(LinkedHashMap<String, String> linkedHashMap) {
        YmnSdkUserWrapper.submitUserInfo(linkedHashMap);
    }

    @Override
    public void switchAccount() {
        YmnSdkUserWrapper.switchAccount();
    }

    @Deprecated
    public void thirdLogin(PlatformSdkListener platformSdkListener) {
    }

    @Deprecated
    public void callFunction(String str, String[] strArr) {
        YmnSdkPaymentWrapper.callFunction(str, strArr);
    }
}
