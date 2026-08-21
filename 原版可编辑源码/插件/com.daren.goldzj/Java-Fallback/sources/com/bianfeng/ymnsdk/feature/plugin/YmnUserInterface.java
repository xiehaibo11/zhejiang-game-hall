package com.bianfeng.ymnsdk.feature.plugin;

import android.content.Context;
import com.bianfeng.ymnsdk.YmnCode;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.LinkedHashMap;

public abstract class YmnUserInterface extends YmnPluginWrapper implements IUserFeature, YmnCode {
    public YmnUserInterface() {
    }

    @Override
    public void enterPlatform() {
    }

    @Override
    public void exit() {
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        return (IUserFeature.UserInfo) YmnGsonUtil.fromJson(YmnGsonUtil.toJson(getLoginedData()), IUserFeature.UserInfo.class);
    L4:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    @Override
    public void hideToolBar() {
    }

    @Override
    public boolean isLogined() {
        return false;
    }

    @Override
    public void logout() {
    }

    @Override
    public void onInit(Context r1) {
        super.onInit(r1);
        setIniting(true);
    }

    @Override
    public void sendResult(int r1, String r2) {
        setInitFlagsByReturnCode(r1);
        super.sendResult(r1, r2);
    }

    @Override
    public void sendResultWithoutInterceptors(int r1, String r2) {
        setInitFlagsByReturnCode(r1);
        super.sendResultWithoutInterceptors(r1, r2);
    }

    protected void setInitFlagsByReturnCode(int r3) {
        if (r3 != 100) goto L6;
        setIniting(false);
        setInited(true);
    L6:
        if (r3 != 101) goto L9;
        setIniting(false);
        setInited(false);
        return;
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
}
