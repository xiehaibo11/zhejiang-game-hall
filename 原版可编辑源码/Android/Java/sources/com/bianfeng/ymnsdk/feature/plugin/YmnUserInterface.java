package com.bianfeng.ymnsdk.feature.plugin;

import android.content.Context;
import com.bianfeng.ymnsdk.YmnCode;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.LinkedHashMap;

public abstract class YmnUserInterface extends YmnPluginWrapper implements IUserFeature, YmnCode {
    @Override
    public void onInit(Context context) {
        super.onInit(context);
        setIniting(true);
    }

    @Override
    public void sendResult(int code, String msg) {
        setInitFlagsByReturnCode(code);
        super.sendResult(code, msg);
    }

    @Override
    public void sendResultWithoutInterceptors(int code, String msg) {
        setInitFlagsByReturnCode(code);
        super.sendResultWithoutInterceptors(code, msg);
    }

    protected void setInitFlagsByReturnCode(int code) {
        if (code == 100) {
            setIniting(false);
            setInited(true);
        }
        if (code == 101) {
            setIniting(false);
            setInited(false);
        }
    }

    @Override
    public boolean isLogined() {
        return false;
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
        try {
            return (IUserFeature.UserInfo) YmnGsonUtil.fromJson(YmnGsonUtil.toJson(getLoginedData()), IUserFeature.UserInfo.class);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override
    public void enterPlatform() {
    }
}
