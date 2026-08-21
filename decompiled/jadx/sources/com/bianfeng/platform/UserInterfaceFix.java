package com.bianfeng.platform;

import android.app.Activity;
import com.bianfeng.ymnsdk.YmnSdkWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import java.util.LinkedHashMap;

/* JADX INFO: loaded from: classes.dex */
@Deprecated
public class UserInterfaceFix extends UserInterface {
    protected static PlatformSdkListener listener = new PlatformSdkListener() { // from class: com.bianfeng.platform.UserInterfaceFix.1
        @Override // com.bianfeng.platform.PlatformSdkListener
        public void onCallBack(int code, String msg) {
            YmnSdkWrapper.dispatchMessage(code, msg);
        }
    };
    protected Activity activity;

    public static PlatformSdkListener getListener() {
        return listener;
    }

    @Override // com.bianfeng.platform.UserInterface
    public void init(Activity activity) {
        this.activity = activity;
    }

    @Override // com.bianfeng.platform.UserInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void login() {
    }

    @Override // com.bianfeng.platform.UserInterface
    public void thirdLogin(PlatformSdkListener listener2) {
    }

    @Override // com.bianfeng.platform.UserInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public boolean isLogined() {
        return false;
    }

    @Override // com.bianfeng.platform.UserInterface
    public boolean isSupportFunction(String functionName) {
        return false;
    }

    @Override // com.bianfeng.platform.UserInterface
    public void callFunction(String functionName) {
    }

    @Override // com.bianfeng.platform.UserInterface
    public void callFunction(String functionName, String[] args) {
    }

    @Override // com.bianfeng.platform.UserInterface
    public String callFunctionWithResult(String functionName, String... args) {
        return null;
    }

    @Override // com.bianfeng.platform.UserInterface
    public void release() {
    }

    @Override // com.bianfeng.platform.UserInterface
    public String getUserId() {
        return null;
    }

    @Override // com.bianfeng.platform.UserInterface
    public Object getExt() {
        return null;
    }

    @Override // com.bianfeng.platform.UserInterface
    public String getPid() {
        return null;
    }

    @Override // com.bianfeng.platform.UserInterface
    public String getGid() {
        return null;
    }

    @Override // com.bianfeng.platform.UserInterface
    public String getUid() {
        return null;
    }

    @Override // com.bianfeng.platform.UserInterface
    public String getSessionId() {
        return null;
    }

    @Override // com.bianfeng.platform.UserInterface
    public String getUserName() {
        return null;
    }

    @Override // com.bianfeng.platform.UserInterface
    public String getExtData() {
        return null;
    }

    @Override // com.bianfeng.platform.UserInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void logout() {
    }

    @Override // com.bianfeng.platform.UserInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void showToolBar() {
    }

    @Override // com.bianfeng.platform.UserInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void hideToolBar() {
    }

    @Override // com.bianfeng.platform.UserInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void switchAccount() {
    }

    @Override // com.bianfeng.platform.UserInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void exit() {
    }

    @Override // com.bianfeng.platform.UserInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void submitUserInfo(LinkedHashMap<String, String> data) {
    }

    @Override // com.bianfeng.platform.UserInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public IUserFeature.UserInfo getUserInfo() {
        return null;
    }

    @Override // com.bianfeng.platform.UserInterface, com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void enterPlatform() {
    }
}
