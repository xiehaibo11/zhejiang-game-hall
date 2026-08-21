package com.bianfeng.loginlib.ui;

import android.app.Activity;
import com.bianfeng.loginlib.YmnH5GameLoginSdk;
import com.bianfeng.loginlib.YmnH5LoginCallBack;
import com.bianfeng.loginlib.action.H5GameLoginAction;
import com.bianfeng.netlib.ActionObserver;
import com.bianfeng.netlib.ActionSupport;
import com.bianfeng.splitscreenwindow.SplitScreenSdk;
import com.bianfeng.utilslib.UtilsSdk;
import java.util.TreeMap;

/* JADX INFO: loaded from: classes.dex */
public class LoginRequest {
    private Activity activity;
    private TreeMap<String, String> map;

    public static void start(Activity activity, TreeMap<String, String> treeMap) {
        new LoginRequest(activity, treeMap);
    }

    private LoginRequest(Activity activity, TreeMap<String, String> treeMap) {
        this.activity = activity;
        this.map = treeMap;
        treeMap.put("gcp_id", UtilsSdk.getAppConfig().getWebPayAppId());
        treeMap.put("sign", UtilsSdk.getSignMd5().getMd5(treeMap));
        treeMap.put("sdk_version", UtilsSdk.getAppConfig().getSdkVersion());
        requestLogin();
    }

    private void requestLogin() {
        final YmnH5LoginCallBack callback = YmnH5GameLoginSdk.getInstance().getCallback();
        try {
            H5GameLoginAction h5GameLoginAction = new H5GameLoginAction(this.activity);
            h5GameLoginAction.putReqData(this.map);
            h5GameLoginAction.addObserver(new ActionObserver() { // from class: com.bianfeng.loginlib.ui.LoginRequest.1
                @Override // com.bianfeng.netlib.ActionObserver
                public void onActionResult(ActionSupport.ResponseResult responseResult) {
                    if (responseResult.isOk()) {
                        SplitScreenSdk.getInstance().show(responseResult.processedResultAsMap().get("address"));
                        return;
                    }
                    YmnH5LoginCallBack ymnH5LoginCallBack = callback;
                    if (ymnH5LoginCallBack != null) {
                        ymnH5LoginCallBack.onLoginFail("登录请求结果出错：" + responseResult.messageFail());
                    }
                }
            });
            h5GameLoginAction.actionStart();
        } catch (Exception e) {
            if (callback != null) {
                callback.onLoginFail("登录请求出现的异常：" + e.getMessage());
            }
        }
    }
}
