package com.bianfeng.ymnsdk.feature.plugin;

import android.content.Context;
import com.bianfeng.ymnsdk.YmnCode;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.LinkedHashMap;

/* JADX INFO: loaded from: classes.dex */
public abstract class YmnUserInterface extends YmnPluginWrapper implements IUserFeature, YmnCode {
    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onInit(Context context) {
        super.onInit(context);
        setIniting(true);
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper
    public void sendResult(int code, String msg) {
        setInitFlagsByReturnCode(code);
        super.sendResult(code, msg);
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper
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

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public boolean isLogined() {
        return false;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void logout() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void showToolBar() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void hideToolBar() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void switchAccount() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void exit() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void submitUserInfo(LinkedHashMap<String, String> data) {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public IUserFeature.UserInfo getUserInfo() {
        try {
            return (IUserFeature.UserInfo) YmnGsonUtil.fromJson(YmnGsonUtil.toJson(getLoginedData()), IUserFeature.UserInfo.class);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void enterPlatform() {
    }
}
