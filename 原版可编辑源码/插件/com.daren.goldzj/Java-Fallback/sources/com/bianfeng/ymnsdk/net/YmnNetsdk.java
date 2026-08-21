package com.bianfeng.ymnsdk.net;

import com.bianfeng.netlibsdk.NetlibSdk;
import com.bianfeng.netlibsdk.Request;

public class YmnNetsdk {
    public YmnNetsdk() {
    }

    public static void addYmnRequest(Request<?> r1) {
        NetlibSdk.getInstance().add(r1);
    }

    public void add(Request<?> r2, boolean r3, boolean r4) {
        NetlibSdk.getInstance().add(r2, r3, r4);
    }

    public void addRequest(Request<?> r2) {
        NetlibSdk.getInstance().add(r2);
    }
}
