package com.bianfeng.ymnsdk.allogin.checkAction;

import android.content.Context;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;
import com.bianfeng.ymnsdk.util.Logger;

/* JADX INFO: loaded from: classes.dex */
public class CheckApi {
    public static void checkLogin(Context context, Object obj, CheckCallBack checkCallBack) {
        requestCheckLogin(context, obj, checkCallBack);
    }

    protected static void requestCheckLogin(Context context, Object obj, final CheckCallBack checkCallBack) {
        CheckLoginAction checkLoginAction = new CheckLoginAction(context);
        try {
            checkLoginAction.putReqData(null, obj);
        } catch (Exception e) {
            e.printStackTrace();
        }
        checkLoginAction.addObserver(new ActionObserverV3() { // from class: com.bianfeng.ymnsdk.allogin.checkAction.CheckApi.1
            @Override // com.bianfeng.ymnsdk.allogin.checkAction.ActionObserverV3
            public void onActionResult(ActionSupportV3.ResponseResult responseResult) {
                checkCallBack.CheckSuccess(responseResult.srcRes);
                Logger.e("result is " + responseResult.srcRes);
            }
        });
        checkLoginAction.actionStart();
    }
}
