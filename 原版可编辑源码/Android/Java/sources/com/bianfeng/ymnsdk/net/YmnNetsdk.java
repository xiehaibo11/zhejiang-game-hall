package com.bianfeng.ymnsdk.net;

import com.bianfeng.netlibsdk.NetlibSdk;
import com.bianfeng.netlibsdk.Request;

public class YmnNetsdk {
    public void addRequest(Request<?> request) {
        NetlibSdk.getInstance().add(request);
    }

    public void add(Request<?> request, boolean shouldRetryConnectionErrors, boolean shouldRetryServerErrors) {
        NetlibSdk.getInstance().add(request, shouldRetryConnectionErrors, shouldRetryServerErrors);
    }

    public static void addYmnRequest(Request<?> request) {
        NetlibSdk.getInstance().add(request);
    }
}
