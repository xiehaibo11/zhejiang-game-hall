package com.tencent.tauth;

public class UiError {
    public int errorCode;
    public java.lang.String errorDetail;
    public java.lang.String errorMessage;

    public UiError(int r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.errorMessage = r2
            r0.errorCode = r1
            r0.errorDetail = r3
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "errorCode: "
            r0.append(r1)
            int r1 = r2.errorCode
            r0.append(r1)
            java.lang.String r1 = ", errorMsg: "
            r0.append(r1)
            java.lang.String r1 = r2.errorMessage
            r0.append(r1)
            java.lang.String r1 = ", errorDetail: "
            r0.append(r1)
            java.lang.String r1 = r2.errorDetail
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
