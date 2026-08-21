package com.bianfeng.ymnsdk.ymndatalib;

public class g extends com.bianfeng.netlibsdk.BaseRequest {
    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> addHeaders() {
            r1 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            return r0
    }

    @Override
    public int getMethod() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getRequestBody() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.lang.String getUrl() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils.getInstance()
            java.lang.String r0 = r0.get_ymndata_white_list()
            return r0
    }
}
