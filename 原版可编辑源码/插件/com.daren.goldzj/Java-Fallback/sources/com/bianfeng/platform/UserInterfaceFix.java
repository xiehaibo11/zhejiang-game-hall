package com.bianfeng.platform;

import android.app.Activity;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import java.util.LinkedHashMap;

@Deprecated
public class UserInterfaceFix extends UserInterface {
    protected static PlatformSdkListener listener;
    protected Activity activity;

    static {
        listener = new 1();
    }

    public UserInterfaceFix() {
    }

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override
    public void callFunction(String r1) {
    }

    @Override
    public void callFunction(String r1, String[] r2) {
    }

    @Override
    public String callFunctionWithResult(String r1, String... r2) {
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
    public void init(Activity r1) {
        this.activity = r1;
    }

    @Override
    public boolean isLogined() {
        return false;
    }

    @Override
    public boolean isSupportFunction(String r1) {
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
    public void submitUserInfo(LinkedHashMap<String, String> r1) {
    }

    @Override
    public void switchAccount() {
    }

    @Override
    public void thirdLogin(PlatformSdkListener r1) {
    }
}
