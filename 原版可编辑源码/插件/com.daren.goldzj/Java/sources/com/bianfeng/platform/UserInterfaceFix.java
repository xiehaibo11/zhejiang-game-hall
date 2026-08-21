package com.bianfeng.platform;

import android.app.Activity;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import java.util.LinkedHashMap;

@Deprecated
public class UserInterfaceFix extends UserInterface {
    protected static PlatformSdkListener listener = new PlatformSdkListener() {
        @Override
        public void onCallBack(int i, String str) {
            YmnSdkWrapper.dispatchMessage(i, str);
        }
    };
    protected Activity activity;

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override
    public void callFunction(String str) {
    }

    @Override
    public void callFunction(String str, String[] strArr) {
    }

    @Override
    public String callFunctionWithResult(String str, String... strArr) {
        return null;
    }

    @Override
    public void enterPlatform() {
    }

    @Override
    public void exit() {
    }

    @Override
    public Object getExt() {
        return null;
    }

    @Override
    public String getExtData() {
        return null;
    }

    @Override
    public String getGid() {
        return null;
    }

    @Override
    public String getPid() {
        return null;
    }

    @Override
    public String getSessionId() {
        return null;
    }

    @Override
    public String getUid() {
        return null;
    }

    @Override
    public String getUserId() {
        return null;
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        return null;
    }

    @Override
    public String getUserName() {
        return null;
    }

    @Override
    public void hideToolBar() {
    }

    @Override
    public void init(Activity activity) {
        this.activity = activity;
    }

    @Override
    public boolean isLogined() {
        return false;
    }

    @Override
    public boolean isSupportFunction(String str) {
        return false;
    }

    @Override
    public void login() {
    }

    @Override
    public void logout() {
    }

    @Override
    public void release() {
    }

    @Override
    public void showToolBar() {
    }

    @Override
    public void submitUserInfo(LinkedHashMap<String, String> linkedHashMap) {
    }

    @Override
    public void switchAccount() {
    }

    @Override
    public void thirdLogin(PlatformSdkListener platformSdkListener) {
    }
}
