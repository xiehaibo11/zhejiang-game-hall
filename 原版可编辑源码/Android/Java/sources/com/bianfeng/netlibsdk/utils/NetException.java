package com.bianfeng.netlibsdk.utils;

import com.bianfeng.netlibsdk.NetworkResponse;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;

public class NetException extends YmnException {
    public NetworkResponse response;

    public NetException() {
    }

    public NetException(String str) {
        super(str);
    }

    public NetException(String str, Throwable th) {
        super(str, th);
    }

    public NetException(Throwable th) {
        super(th);
    }

    public NetException(NetworkResponse networkResponse) {
        this.response = networkResponse;
    }
}
