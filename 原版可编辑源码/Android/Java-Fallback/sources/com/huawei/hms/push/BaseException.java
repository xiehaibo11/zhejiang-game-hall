package com.huawei.hms.push;

public class BaseException extends java.lang.Exception {
    public final int a;
    public final com.huawei.hms.aaid.constant.ErrorEnum b;

    public BaseException(int r1) {
            r0 = this;
            r0.<init>()
            com.huawei.hms.aaid.constant.ErrorEnum r1 = com.huawei.hms.aaid.constant.ErrorEnum.fromCode(r1)
            r0.b = r1
            int r1 = r1.getExternalCode()
            r0.a = r1
            return
    }

    public int getErrorCode() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String getMessage() {
            r1 = this;
            com.huawei.hms.aaid.constant.ErrorEnum r0 = r1.b
            java.lang.String r0 = r0.getMessage()
            return r0
    }
}
