package com.bianfeng.datafunsdk.net;

import com.bianfeng.datafunsdk.w;

public class ResponseHeaders {
    public String codekey;
    public int successCode;

    public ResponseHeaders(String str, int i) {
        this.codekey = str;
        this.successCode = i;
    }

    public String getCodekey() {
        return this.codekey;
    }

    public int getSuccessCode() {
        return this.successCode;
    }

    public String toString() {
        return w.a(this);
    }
}
