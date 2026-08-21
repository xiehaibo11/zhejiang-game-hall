package com.bianfeng.ymnsdk.util.exception;

import com.bianfeng.ymnsdk.utilslib.exception.YmnException;

public class YmnsdkException extends YmnException {
    public YmnsdkException() {
    }

    public YmnsdkException(String r1) {
        super(r1);
    }

    public YmnsdkException(String r1, Throwable r2) {
        super(r1, r2);
    }

    public YmnsdkException(Throwable r1) {
        super(r1);
    }
}
