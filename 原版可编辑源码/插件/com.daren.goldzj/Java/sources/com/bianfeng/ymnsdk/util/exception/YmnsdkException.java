package com.bianfeng.ymnsdk.util.exception;

import com.bianfeng.ymnsdk.utilslib.exception.YmnException;

public class YmnsdkException extends YmnException {
    public YmnsdkException() {
    }

    public YmnsdkException(String str) {
        super(str);
    }

    public YmnsdkException(String str, Throwable th) {
        super(str, th);
    }

    public YmnsdkException(Throwable th) {
        super(th);
    }
}
