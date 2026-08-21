package com.bianfeng.ymnsdk.util;

import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;

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

    public boolean retryRequest(ActionSupportV2 actionSupportV2) {
        int i;
        if (actionSupportV2 == null || (i = this.requestSum) >= 12) {
            return true;
        }
        this.requestSum = i + 1;
        Logger.i("当前请求次数" + this.requestSum);
        actionSupportV2.actionStart();
        return false;
    }

    public boolean retryRequest(ActionSupportV3 actionSupportV3) {
        int i;
        if (actionSupportV3 == null || (i = this.requestSum) >= 12) {
            return true;
        }
        this.requestSum = i + 1;
        Logger.i("当前请求次数" + this.requestSum);
        actionSupportV3.actionStart();
        return false;
    }
}
