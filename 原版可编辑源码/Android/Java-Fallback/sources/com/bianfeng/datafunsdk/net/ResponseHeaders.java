package com.bianfeng.datafunsdk.net;

public class ResponseHeaders {
    public java.lang.String codekey;
    public int successCode;

    public ResponseHeaders(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.codekey = r1
            r0.successCode = r2
            return
    }

    public java.lang.String getCodekey() {
            r1 = this;
            java.lang.String r0 = r1.codekey
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
