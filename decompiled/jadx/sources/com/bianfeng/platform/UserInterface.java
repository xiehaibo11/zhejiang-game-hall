package com.bianfeng.platform;

import android.app.Activity;
import com.bianfeng.ymnsdk.YmnSdkPaymentWrapper;
import com.bianfeng.ymnsdk.YmnSdkUserWrapper;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import com.bianfeng.ymnsdk.feature.YmnCallback;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import java.util.LinkedHashMap;

/* JADX INFO: loaded from: classes.dex */
@Deprecated
public class UserInterface implements IUserFeature {

    @Deprecated
    public static final String FUNCTION_DESTROY = "destroy";

    @Deprecated
    public static final String FUNCTION_SUBMIT_DATA = "submitData";
    private static UserInterface instance;
    protected static PlatformSdkListener listener;
    private static YmnCallback ymnCallback = new YmnCallback() { // from class: com.bianfeng.platform.UserInterface.1
        @Override // com.bianfeng.platform.PlatformSdkListener
        public void onCallBack(int code, String msg) {
            PlatformSdkListener platformSdkListener = UserInterface.listener;
            if (platformSdkListener != null && platformSdkListener != PlatformSdk.getListener()) {
                UserInterface.listener.onCallBack(code, msg);
            }
        }
    };

    @Deprecated
    public static void setListener(PlatformSdkListener listener2) {
        listener = listener2;
    }

    @Deprecated
    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Deprecated
    public static UserInterface getInstance() {
        if (instance == null) {
            instance = new UserInterface();
        }
        return instance;
    }

    @Deprecated
    public void init(Activity activity) {
        YmnSdkWrapper.registCallback(ymnCallback);
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    @Deprecated
    public void login() {
        YmnSdkUserWrapper.login();
    }

    @Deprecated
    public void thirdLogin(PlatformSdkListener listener2) {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    @Deprecated
    public boolean isLogined() {
        return YmnSdkUserWrapper.isLogined();
    }

    @Deprecated
    public boolean isSupportFunction(String functionName) {
        return YmnSdkUserWrapper.isSupportFunction(functionName);
    }

    @Deprecated
    public void callFunction(String functionName) {
        YmnSdkUserWrapper.callFunction(functionName);
    }

    @Deprecated
    public void callFunction(String functionName, String[] args) {
        YmnSdkPaymentWrapper.callFunction(functionName, args);
    }

    @Deprecated
    public String callFunctionWithResult(String functionName, String... args) {
        return YmnSdkWrapper.callFunctionWithResult(functionName, args);
    }

    @Deprecated
    public void release() {
    }

    @Deprecated
    public String getUserId() {
        return getGid();
    }

    @Deprecated
    public Object getExt() {
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
    public String getGid() {
        IUserFeature.UserInfo userInfo = YmnSdkUserWrapper.getUserInfo();
        if (userInfo != null) {
            return userInfo.getPlatformUserId();
        }
        return null;
    }

    @Deprecated
    public String getUid() {
        return getPid();
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
    public String getUserName() {
        IUserFeature.UserInfo userInfo = YmnSdkUserWrapper.getUserInfo();
        if (userInfo != null) {
            return userInfo.getUserName();
        }
        return null;
    }

    @Deprecated
    public String getExtData() {
        return null;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void logout() {
        YmnSdkUserWrapper.logout();
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void showToolBar() {
        YmnSdkUserWrapper.showToolBar();
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void showVerifyRealName() {
        YmnSdkUserWrapper.showVerifyRealName();
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void getVerifyRealNameInfo() {
        YmnSdkUserWrapper.getVerifyRealNameInfo();
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void getAndShowVerifyRealName() {
        YmnSdkUserWrapper.getAndShowVerifyRealName();
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void hideToolBar() {
        YmnSdkUserWrapper.hideToolBar();
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void switchAccount() {
        YmnSdkUserWrapper.switchAccount();
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void exit() {
        YmnSdkUserWrapper.exit();
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void submitUserInfo(LinkedHashMap<String, String> data) {
        YmnSdkUserWrapper.submitUserInfo(data);
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public IUserFeature.UserInfo getUserInfo() {
        return YmnSdkUserWrapper.getUserInfo();
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void enterPlatform() {
        YmnSdkUserWrapper.enterPlatform();
    }
}
