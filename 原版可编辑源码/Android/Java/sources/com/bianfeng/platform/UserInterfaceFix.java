package com.bianfeng.platform;

import android.app.Activity;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import java.util.LinkedHashMap;

@Deprecated
public class UserInterfaceFix extends UserInterface {
    protected static PlatformSdkListener listener = new PlatformSdkListener() {
        @Override
        public void onCallBack(int code, String msg) {
            YmnSdkWrapper.dispatchMessage(code, msg);
        }
    };
    protected Activity activity;

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override
    public void init(Activity activity) {
        this.activity = activity;
    }

    @Override
    public void login() {
    }

    @Override
    public void thirdLogin(PlatformSdkListener listener2) {
    }

    @Override
    public boolean isLogined() {
        return false;
    }

    @Override
    public boolean isSupportFunction(String functionName) {
        return false;
    }

    @Override
    public void callFunction(String functionName) {
    }

    @Override
    public void callFunction(String functionName, String[] args) {
    }

    @Override
    public String callFunctionWithResult(String functionName, String... args) {
        return null;
    }

    @Override
    public void release() {
    }

    @Override
    public String getUserId() {
        return null;
    }

    @Override
    public Object getExt() {
        return null;
    }

    @Override
    public String getPid() {
        return null;
    }

    @Override
    public String getGid() {
        return null;
    }

    @Override
    public String getUid() {
        return null;
    }

    @Override
    public String getSessionId() {
        return null;
    }

    @Override
    public String getUserName() {
        return null;
    }

    @Override
    public String getExtData() {
        return null;
    }

    @Override
    public void logout() {
    }

    @Override
    public void showToolBar() {
    }

    @Override
    public void hideToolBar() {
    }

    @Override
    public void switchAccount() {
    }

    @Override
    public void exit() {
    }

    @Override
    public void submitUserInfo(LinkedHashMap<String, String> data) {
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        return null;
    }

    @Override
    public void enterPlatform() {
    }
}
