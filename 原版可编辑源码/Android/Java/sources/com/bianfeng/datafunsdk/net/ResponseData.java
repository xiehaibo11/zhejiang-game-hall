package com.bianfeng.datafunsdk.net;

import com.bianfeng.datafunsdk.w;

public class ResponseData {
    public String codeKey;
    public String messagekey;
    public int successCode;

    public ResponseData(String str, String str2, int i) {
        this.codeKey = str;
        this.messagekey = str2;
        this.successCode = i;
    }

    public String getCodeKey() {
        return this.codeKey;
    }

    public String getMessagekey() {
        return this.messagekey;
    }

    public int getSuccessCode() {
        return this.successCode;
    }

    public String toString() {
        return w.a(this);
    }
}
