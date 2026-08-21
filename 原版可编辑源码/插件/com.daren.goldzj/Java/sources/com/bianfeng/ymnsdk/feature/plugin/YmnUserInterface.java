package com.bianfeng.ymnsdk.feature.plugin;

import android.content.Context;
import com.bianfeng.ymnsdk.YmnCode;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.LinkedHashMap;

public abstract class YmnUserInterface extends YmnPluginWrapper implements IUserFeature, YmnCode {
    @Override
    public void enterPlatform() {
    }

    @Override
    public void exit() {
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
    public void onInit(Context context) {
        super.onInit(context);
        setIniting(true);
    }

    @Override
    public void sendResult(int i, String str) {
        setInitFlagsByReturnCode(i);
        super.sendResult(i, str);
    }

    @Override
    public void sendResultWithoutInterceptors(int i, String str) {
        setInitFlagsByReturnCode(i);
        super.sendResultWithoutInterceptors(i, str);
    }

    protected void setInitFlagsByReturnCode(int i) {
        if (i == 100) {
            setIniting(false);
            setInited(true);
        }
        if (i == 101) {
            setIniting(false);
            setInited(false);
        }
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
}
