package com.ss.android.socialbase.downloader.exception;

public class RetryThrowable extends java.lang.Throwable {
    private java.lang.String errorMsg;

    public RetryThrowable(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            r0.errorMsg = r1
            return
    }

    public java.lang.String getErrorMsg() {
            r1 = this;
            java.lang.String r0 = r1.errorMsg
            return r0
    }

    public void setErrorMsg(java.lang.String r1) {
            r0 = this;
            r0.errorMsg = r1
            return
    }
}
