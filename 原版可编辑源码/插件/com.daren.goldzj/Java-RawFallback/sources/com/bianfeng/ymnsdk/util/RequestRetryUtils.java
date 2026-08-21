package com.bianfeng.ymnsdk.util;

public class RequestRetryUtils {
    private int requestSum;

    public RequestRetryUtils() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.requestSum = r0
            return
    }

    public static com.bianfeng.ymnsdk.util.RequestRetryUtils getInstance() {
            com.bianfeng.ymnsdk.util.RequestRetryUtils r0 = new com.bianfeng.ymnsdk.util.RequestRetryUtils
            r0.<init>()
            return r0
    }

    public boolean retryRequest(com.bianfeng.ymnsdk.action.ActionSupport r4) {
            r3 = this;
            r0 = 1
            if (r4 != 0) goto L4
            return r0
        L4:
            int r1 = r3.requestSum
            r2 = 3
            if (r1 >= r2) goto L27
            int r1 = r1 + r0
            r3.requestSum = r1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "当前请求次数"
            r0.append(r1)
            int r1 = r3.requestSum
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            r4.actionStart()
            r4 = 0
            return r4
        L27:
            return r0
    }

    public boolean retryRequest(com.bianfeng.ymnsdk.actionv2.ActionSupportV2 r4) {
            r3 = this;
            r0 = 1
            if (r4 != 0) goto L4
            return r0
        L4:
            int r1 = r3.requestSum
            r2 = 12
            if (r1 >= r2) goto L28
            int r1 = r1 + r0
            r3.requestSum = r1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "当前请求次数"
            r0.append(r1)
            int r1 = r3.requestSum
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            r4.actionStart()
            r4 = 0
            return r4
        L28:
            return r0
    }

    public boolean retryRequest(com.bianfeng.ymnsdk.actionv2.ActionSupportV3 r4) {
            r3 = this;
            r0 = 1
            if (r4 != 0) goto L4
            return r0
        L4:
            int r1 = r3.requestSum
            r2 = 12
            if (r1 >= r2) goto L28
            int r1 = r1 + r0
            r3.requestSum = r1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "当前请求次数"
            r0.append(r1)
            int r1 = r3.requestSum
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            r4.actionStart()
            r4 = 0
            return r4
        L28:
            return r0
    }
}
