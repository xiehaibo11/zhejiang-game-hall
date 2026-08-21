package com.huawei.agconnect.exception;

public abstract class AGCException extends java.lang.Exception {
    private int code;
    private java.lang.String errMsg;

    public AGCException(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.code = r2
            r0.errMsg = r1
            return
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.code
            return r0
    }

    public java.lang.String getErrMsg() {
            r1 = this;
            java.lang.String r0 = r1.errMsg
            return r0
    }

    @Override
    public java.lang.String getMessage() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " code: "
            r0.append(r1)
            int r1 = r2.code
            r0.append(r1)
            java.lang.String r1 = " message: "
            r0.append(r1)
            java.lang.String r1 = r2.errMsg
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
