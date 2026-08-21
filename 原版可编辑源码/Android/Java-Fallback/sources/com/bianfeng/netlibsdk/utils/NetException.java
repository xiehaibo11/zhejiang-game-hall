package com.bianfeng.netlibsdk.utils;

public class NetException extends com.bianfeng.ymnsdk.utilslib.exception.YmnException {
    public com.bianfeng.netlibsdk.NetworkResponse response;

    public NetException() {
            r0 = this;
            r0.<init>()
            return
    }

    public NetException(com.bianfeng.netlibsdk.NetworkResponse r1) {
            r0 = this;
            r0.<init>()
            r0.response = r1
            return
    }

    public NetException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public NetException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public NetException(java.lang.Throwable r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }
}
