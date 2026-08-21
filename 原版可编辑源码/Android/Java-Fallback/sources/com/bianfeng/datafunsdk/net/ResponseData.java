package com.bianfeng.datafunsdk.net;

public class ResponseData {
    public java.lang.String codeKey;
    public java.lang.String messagekey;
    public int successCode;

    public ResponseData(java.lang.String r1, java.lang.String r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.codeKey = r1
            r0.messagekey = r2
            r0.successCode = r3
            return
    }

    public java.lang.String getCodeKey() {
            r1 = this;
            java.lang.String r0 = r1.codeKey
            return r0
    }

    public java.lang.String getMessagekey() {
            r1 = this;
            java.lang.String r0 = r1.messagekey
            return r0
    }

    public int getSuccessCode() {
            r1 = this;
            int r0 = r1.successCode
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.datafunsdk.w.a(r1)
            return r0
    }
}
