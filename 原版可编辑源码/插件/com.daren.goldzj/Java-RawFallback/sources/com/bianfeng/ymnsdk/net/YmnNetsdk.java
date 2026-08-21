package com.bianfeng.ymnsdk.net;

public class YmnNetsdk {
    public YmnNetsdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void addYmnRequest(com.bianfeng.netlibsdk.Request<?> r1) {
            com.bianfeng.netlibsdk.NetlibSdk r0 = com.bianfeng.netlibsdk.NetlibSdk.getInstance()
            r0.add(r1)
            return
    }

    public void add(com.bianfeng.netlibsdk.Request<?> r2, boolean r3, boolean r4) {
            r1 = this;
            com.bianfeng.netlibsdk.NetlibSdk r0 = com.bianfeng.netlibsdk.NetlibSdk.getInstance()
            r0.add(r2, r3, r4)
            return
    }

    public void addRequest(com.bianfeng.netlibsdk.Request<?> r2) {
            r1 = this;
            com.bianfeng.netlibsdk.NetlibSdk r0 = com.bianfeng.netlibsdk.NetlibSdk.getInstance()
            r0.add(r2)
            return
    }
}
