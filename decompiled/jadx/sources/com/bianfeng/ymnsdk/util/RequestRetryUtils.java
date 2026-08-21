package com.bianfeng.ymnsdk.util;

import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;

/* JADX INFO: loaded from: classes.dex */
public class RequestRetryUtils {
    private int requestSum = 1;

    public static RequestRetryUtils getInstance() {
        return new RequestRetryUtils();
    }

    public boolean retryRequest(ActionSupport actionSupport) {
        int i;
        if (actionSupport == null || (i = this.requestSum) >= 3) {
            return true;
        }
        this.requestSum = i + 1;
        Logger.i("当前请求次数" + this.requestSum);
        actionSupport.actionStart();
        return false;
    }

    public boolean retryRequest(ActionSupportV2 actionSupport) {
        int i;
        if (actionSupport == null || (i = this.requestSum) >= 12) {
            return true;
        }
        this.requestSum = i + 1;
        Logger.i("当前请求次数" + this.requestSum);
        actionSupport.actionStart();
        return false;
    }

    public boolean retryRequest(ActionSupportV3 actionSupport) {
        int i;
        if (actionSupport == null || (i = this.requestSum) >= 12) {
            return true;
        }
        this.requestSum = i + 1;
        Logger.i("当前请求次数" + this.requestSum);
        actionSupport.actionStart();
        return false;
    }
}
