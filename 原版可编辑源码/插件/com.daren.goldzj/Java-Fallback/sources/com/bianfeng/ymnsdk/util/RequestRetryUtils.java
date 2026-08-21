package com.bianfeng.ymnsdk.util;

import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;

public class RequestRetryUtils {
    private int requestSum;

    public RequestRetryUtils() {
        this.requestSum = 1;
    }

    public static RequestRetryUtils getInstance() {
        return new RequestRetryUtils();
    }

    public boolean retryRequest(ActionSupport r4) {
        if (r4 != null) goto L5;
        return true;
    L5:
        int r1 = this.requestSum;
        if (r1 >= 3) goto L9;
        this.requestSum = r1 + 1;
        Logger.i("当前请求次数" + this.requestSum);
        r4.actionStart();
        return false;
    L9:
        return true;
    }

    public boolean retryRequest(ActionSupportV2 r4) {
        if (r4 != null) goto L5;
        return true;
    L5:
        int r1 = this.requestSum;
        if (r1 >= 12) goto L9;
        this.requestSum = r1 + 1;
        Logger.i("当前请求次数" + this.requestSum);
        r4.actionStart();
        return false;
    L9:
        return true;
    }

    public boolean retryRequest(ActionSupportV3 r4) {
        if (r4 != null) goto L5;
        return true;
    L5:
        int r1 = this.requestSum;
        if (r1 >= 12) goto L9;
        this.requestSum = r1 + 1;
        Logger.i("当前请求次数" + this.requestSum);
        r4.actionStart();
        return false;
    L9:
        return true;
    }
}
