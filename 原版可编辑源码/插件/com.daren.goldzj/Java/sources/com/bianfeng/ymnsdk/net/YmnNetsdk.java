package com.bianfeng.ymnsdk.net;

import com.bianfeng.netlibsdk.NetlibSdk;
import com.bianfeng.netlibsdk.Request;

public class YmnNetsdk {
    public static void addYmnRequest(Request<?> request) {
        NetlibSdk.getInstance().add(request);
    }

    public void add(Request<?> request, boolean z, boolean z2) {
        NetlibSdk.getInstance().add(request, z, z2);
    }

    public void addRequest(Request<?> request) {
        NetlibSdk.getInstance().add(request);
    }
}
