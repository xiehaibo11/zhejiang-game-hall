package com.huawei.hms.common.api;

import com.huawei.hms.support.api.client.Result;

public class Response<T extends com.huawei.hms.support.api.client.Result> {
    protected T result;

    public Response() {
            r0 = this;
            r0.<init>()
            return
    }

    protected Response(T r1) {
            r0 = this;
            r0.<init>()
            r0.result = r1
            return
    }

    protected T getResult() {
            r1 = this;
            T extends com.huawei.hms.support.api.client.Result r0 = r1.result
            return r0
    }

    public void setResult(T r1) {
            r0 = this;
            r0.result = r1
            return
    }
}
